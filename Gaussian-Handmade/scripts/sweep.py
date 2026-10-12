#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
sweep.py -- runs the whole flow for one or more bit-width setups and emails the results.

For every (bits, int) setup in CONFIGS it:
  1. generates the weights, the test data and the Keras / hls4ml reference outputs
  2. simulates the handmade design: accuracy (compared with Keras and hls4ml) and cycle latency
  3. finds the smallest clock period at which the handmade design meets timing (Vivado)
  4. does the same for the hls4ml design: for each period tried it builds the design and runs
     Vivado, and once the period is found it measures the cycle latency of that build
  5. appends one row to results/sweep_results.csv and sends two emails, one per design, in the
     style of the Toptagging sweep emails

A step whose result file already exists is skipped, so a stopped sweep can be started again and
carries on where it stopped. Delete a result to redo that step, or use --redo to redo everything.

Several sweeps can run at the same time (one tmux session each), for example with different setups:
    /home/aya/miniconda3/envs/tf211-env/bin/python sweep.py --setup 10,3
    /home/aya/miniconda3/envs/tf211-env/bin/python sweep.py --setup 13,4
The results file is locked while a row is written, so the sweeps do not overwrite each other.

Usage:
    /home/aya/miniconda3/envs/tf211-env/bin/python sweep.py                    # the setups in CONFIGS
    /home/aya/miniconda3/envs/tf211-env/bin/python sweep.py --setup 10,3       # only this setup (bits,int)
    /home/aya/miniconda3/envs/tf211-env/bin/python sweep.py --redo
"""
import argparse
import csv
import fcntl
import os
import subprocess

import synth_reports
from common import BASE, HLS_BASE


# ---------------------------------------------------------------- settings
# (total bits, integer bits WITHOUT the sign bit). A format written as ap_fixed<16,6> is (16, 5).
CONFIGS = [(8, 2)]
N_IMAGES = 50

# The clock-period search (see find_period). It starts at a tight period on purpose: Vivado stops
# working once a target is met, so a design that meets a loose period shows nothing about its limit.
START_PERIOD = 6.0        # ns, the first period tried
MARGIN = 0.1              # ns added whenever the period is raised after a failure
TOLERANCE = 0.3           # ns, a design that meets timing by less than this is at its limit
MAX_RUNS = 4              # Vivado runs per design and setup

EMAIL = "aburpee@uw.edu"

# The interpreter that has TensorFlow, QKeras and hls4ml.
PYTHON = os.environ.get("RHEED_PYTHON", "/home/aya/miniconda3/envs/tf211-env/bin/python")


# ---------------------------------------------------------------- folders and files
HANDMADE_SCRIPTS = BASE / "scripts"
HLS_SCRIPTS = HLS_BASE / "scripts"
RESULTS_CSV = BASE / "results" / "sweep_results.csv"

COLUMNS = [
    "bits", "int_bits", "images",
    # accuracy: mean absolute error of the final outputs, in real units (and in ULP of this setup)
    "rtl_vs_keras_error", "hls_vs_keras_error", "rtl_vs_hls_error",
    "rtl_vs_keras_error_ulp", "hls_vs_keras_error_ulp",
    # the handmade design
    "handmade_period_ns", "handmade_slack_ns", "handmade_luts", "handmade_ffs",
    "handmade_bram_tiles", "handmade_dsps", "handmade_cycles", "handmade_latency_ns",
    # the hls4ml design (built for the period given here)
    "hls_period_ns", "hls_slack_ns", "hls_luts", "hls_ffs",
    "hls_bram_tiles", "hls_dsps", "hls_cycles", "hls_latency_ns",
]

REDO = False              # set by --redo


# ---------------------------------------------------------------- the numbers one setup needs
def settings_for(bits, int_bits):
    """The environment variables the run_*.sh scripts read for one setup."""
    return {
        "TAG": f"{bits}_{int_bits}",
        "BIT_WIDTH": str(bits),
        "NFRAC": str(bits - int_bits - 1),         # fractional bits of every layer after conv0
        "NFRAC_FIRST": str(bits - 1),              # conv0 and the input pixels (7 for the 8-bit design)
        "INPUT_BITS": str(bits),                   # width of the hls4ml input port
        "OUTPUT_BITS": str(max(16, 2 * bits)),     # width of the hls4ml output ports
    }


# ---------------------------------------------------------------- running scripts
def run_step(name, command, log_file, extra_env=None):
    """Runs one script and saves everything it prints into log_file.
    If the script fails, raises an error that shows the end of the log."""
    print(f"  {name} ...", flush=True)
    log_file.parent.mkdir(parents=True, exist_ok=True)

    environment = dict(os.environ)
    environment.update(extra_env or {})

    with open(log_file, "w") as log:
        result = subprocess.run([str(part) for part in command], env=environment,
                                stdout=log, stderr=subprocess.STDOUT)

    if result.returncode != 0:
        with open(log_file) as log:
            tail = "".join(log.readlines()[-15:])
        raise RuntimeError(f"{name} failed (log: {log_file}):\n{tail}")


def run_if_needed(name, command, log_file, result_file, extra_env=None):
    """Like run_step, but skips the step if its result file already exists."""
    if result_file.exists() and not REDO:
        print(f"  {name}: already done, skipping")
        return
    run_step(name, command, log_file, extra_env)


def read_cycles(path):
    return int(path.read_text().strip())


# ---------------------------------------------------------------- the clock-period search
def find_period(try_period):
    """Looks for the smallest clock period that meets timing.
    try_period(period) must run Vivado and return the slack in ns.
    Returns (period, slack) of the smallest period that met timing.

    The next period is chosen like this:
      timing failed  ->  raise the period by the shortfall plus MARGIN
      timing met     ->  if the slack is under TOLERANCE we are at the limit: stop.
                         Otherwise try a tighter period: lower it by the slack, or, if a smaller
                         period already failed, go half way between the two.
    """
    period = START_PERIOD
    best = None              # (period, slack) of the smallest period that met timing so far
    highest_failed = None    # the largest period that failed so far
    tried = set()

    for run in range(MAX_RUNS):
        slack = try_period(period)
        tried.add(period)
        last_period, last_slack = period, slack
        print(f"    {period:g} ns: slack {slack:+.3f} ns")

        if slack >= 0:
            if best is None or period < best[0]:
                best = (period, slack)

            if slack < TOLERANCE:
                break                                         # at the limit
            elif highest_failed is None:
                next_period = round(period - slack, 1)        # nothing failed yet: go tighter
            elif period - highest_failed > TOLERANCE:
                next_period = round((period + highest_failed) / 2, 1)
            else:
                break                                         # a failure is just below: nothing left between
        else:
            if highest_failed is None or period > highest_failed:
                highest_failed = period
            next_period = round(period - slack + MARGIN, 1)   # slack is negative, so this raises the period
            if best is not None and next_period >= best[0]:
                break                                         # the best period that worked is the answer

        if next_period in tried:
            break
        period = next_period

    if best is None:
        raise RuntimeError(f"timing was not met in {MAX_RUNS} Vivado runs "
                           f"(the last one: slack {last_slack:+.3f} ns at {last_period:g} ns)")
    return best


def handmade_synthesis(settings, log_dir):
    """Finds the handmade design's period. Returns (period, slack, utilization)."""
    tag = settings["TAG"]

    def try_period(period):
        timing_report = BASE / "reports" / f"{tag}_{period:g}ns_timing.rpt"
        run_if_needed(f"handmade Vivado at {period:g} ns",
                      ["bash", HANDMADE_SCRIPTS / "run_synth.sh"],
                      log_dir / f"handmade_synth_{period:g}ns.log", timing_report,
                      dict(settings, CLOCK_PERIOD=f"{period:g}"))
        wns, tns = synth_reports.read_timing(timing_report)
        return wns

    period, slack = find_period(try_period)
    util = synth_reports.read_util(BASE / "reports" / f"{tag}_{period:g}ns_util.rpt", "rheedGaussianWrapper")
    return period, slack, util


def hls_synthesis(settings, log_dir):
    """Finds the hls4ml design's period. Every period needs its own build, because HLS arranges its
    pipeline for the period it is built for. Returns (period, slack, utilization, cycles)."""
    tag = settings["TAG"]
    bits, int_bits = settings["BIT_WIDTH"], settings["TAG"].split("_")[1]

    def try_period(period):
        project = HLS_BASE / "hls_projects" / f"{tag}_{period:g}ns"
        run_if_needed(f"hls4ml build for {period:g} ns",
                      [PYTHON, HLS_SCRIPTS / "build_hls.py", "--bits", bits, "--int", int_bits,
                       "--clock-period", f"{period:g}"],
                      log_dir / f"hls_build_{period:g}ns.log",
                      project / "myproject_prj" / "solution1" / "syn" / "verilog" / "myproject.v")

        timing_report = HLS_BASE / "reports" / f"{tag}_{period:g}ns_timing.rpt"
        run_if_needed(f"hls4ml Vivado at {period:g} ns",
                      ["bash", HLS_SCRIPTS / "run_synth.sh"],
                      log_dir / f"hls_synth_{period:g}ns.log", timing_report,
                      dict(settings, CLOCK_PERIOD=f"{period:g}"))
        wns, tns = synth_reports.read_timing(timing_report)
        return wns

    period, slack = find_period(try_period)
    util = synth_reports.read_util(HLS_BASE / "reports" / f"{tag}_{period:g}ns_util.rpt", "myproject")

    # The latency only has to be measured for the build that was kept.
    latency_file = HLS_BASE / "results" / f"{tag}_{period:g}ns" / "latency.txt"
    run_if_needed(f"hls4ml latency of the {period:g} ns build",
                  ["bash", HLS_SCRIPTS / "run_hls_lat.sh"],
                  log_dir / f"hls_latency_{period:g}ns.log", latency_file,
                  dict(settings, CLOCK_PERIOD=f"{period:g}"))
    return period, slack, util, read_cycles(latency_file)


# ---------------------------------------------------------------- one setup
def run_setup(bits, int_bits):
    """Runs every step for one setup and returns its row of results."""
    settings = settings_for(bits, int_bits)
    tag = settings["TAG"]
    result_dir = BASE / "results" / tag
    log_dir = result_dir / "sweep_logs"

    # 1. weights, test data and reference outputs
    run_step("weights", [PYTHON, HANDMADE_SCRIPTS / "gen_weights.py", "--bits", bits, "--int", int_bits],
             log_dir / "gen_weights.log")
    run_if_needed("test data and references",
                  [PYTHON, HANDMADE_SCRIPTS / "gen_test_data.py", "--bits", bits, "--int", int_bits,
                   "--n-images", N_IMAGES],
                  log_dir / "gen_test_data.log", BASE / "testing_data" / tag / "hls_out.npy")

    # 2. the handmade design in simulation: accuracy and latency
    run_if_needed("accuracy simulation", ["bash", HANDMADE_SCRIPTS / "run_acc.sh"],
                  log_dir / "run_acc.log", result_dir / "rtl_final.csv", settings)
    run_if_needed("accuracy comparison", [PYTHON, HANDMADE_SCRIPTS / "compare.py"],
                  log_dir / "compare.log", result_dir / "accuracy_summary.csv", settings)
    run_if_needed("handmade latency", ["bash", HANDMADE_SCRIPTS / "run_lat.sh"],
                  log_dir / "run_lat.log", result_dir / "latency.txt", settings)

    # 3. the two designs in Vivado
    handmade_period, handmade_slack, handmade_util = handmade_synthesis(settings, log_dir)
    hls_period, hls_slack, hls_util, hls_cycles = hls_synthesis(settings, log_dir)

    # 4. put everything into one row
    with open(result_dir / "accuracy_summary.csv") as file:
        accuracy = next(csv.DictReader(file))
    handmade_cycles = read_cycles(result_dir / "latency.txt")

    return {
        "bits": bits, "int_bits": int_bits, "images": accuracy["images"],
        "rtl_vs_keras_error": accuracy["rtl_vs_keras_mean"],
        "hls_vs_keras_error": accuracy["hls_vs_keras_mean"],
        "rtl_vs_hls_error": accuracy["rtl_vs_hls_mean"],
        "rtl_vs_keras_error_ulp": accuracy["rtl_vs_keras_mean_ulp"],
        "hls_vs_keras_error_ulp": accuracy["hls_vs_keras_mean_ulp"],

        "handmade_period_ns": handmade_period, "handmade_slack_ns": handmade_slack,
        "handmade_luts": handmade_util["total_luts"], "handmade_ffs": handmade_util["ffs"],
        "handmade_bram_tiles": synth_reports.bram_tiles(handmade_util), "handmade_dsps": handmade_util["dsp48"],
        "handmade_cycles": handmade_cycles, "handmade_latency_ns": round(handmade_cycles * handmade_period, 1),

        "hls_period_ns": hls_period, "hls_slack_ns": hls_slack,
        "hls_luts": hls_util["total_luts"], "hls_ffs": hls_util["ffs"],
        "hls_bram_tiles": synth_reports.bram_tiles(hls_util), "hls_dsps": hls_util["dsp48"],
        "hls_cycles": hls_cycles, "hls_latency_ns": round(hls_cycles * hls_period, 1),
    }


# ---------------------------------------------------------------- results and email
def finished_setups():
    """The (bits, int) setups that already have a row in the results file."""
    if not RESULTS_CSV.exists():
        return set()
    with open(RESULTS_CSV) as file:
        return {(int(row["bits"]), int(row["int_bits"])) for row in csv.DictReader(file)}


def save_row(row):
    """Adds the row to the results file. If the setup already has a row (after --redo), it is replaced.
    Other sweeps may be writing to the same file, so it is locked while it is read and rewritten."""
    RESULTS_CSV.parent.mkdir(parents=True, exist_ok=True)

    with open(RESULTS_CSV.with_suffix(".lock"), "w") as lock:
        fcntl.flock(lock, fcntl.LOCK_EX)         # waits here while another sweep is writing

        rows = []
        if RESULTS_CSV.exists():
            with open(RESULTS_CSV) as file:
                for old_row in csv.DictReader(file):
                    same_setup = int(old_row["bits"]) == row["bits"] and int(old_row["int_bits"]) == row["int_bits"]
                    if not same_setup:
                        rows.append(old_row)
        rows.append(row)

        with open(RESULTS_CSV, "w", newline="") as file:
            writer = csv.DictWriter(file, fieldnames=COLUMNS)
            writer.writeheader()
            writer.writerows(rows)
    # the lock is released when the lock file is closed


def design_email(design, prefix, row):
    """The email text for one design, in the style of the Toptagging sweep emails:
    "Name: value" lines, with the utilization in percent of the device and the timing as the clock period."""
    luts = float(row[f"{prefix}_luts"])
    ffs = float(row[f"{prefix}_ffs"])
    bram = float(row[f"{prefix}_bram_tiles"])
    dsps = float(row[f"{prefix}_dsps"])

    lines = [
        f"Gen {design}_{row['bits']}_{row['int_bits']} finished. Results:",
        f"LUTs: {100 * luts / synth_reports.DEVICE_LUTS:.2f}",
        f"Registers: {100 * ffs / synth_reports.DEVICE_FFS:.2f}",
        f"Block RAM Tile: {100 * bram / synth_reports.DEVICE_BRAM_TILES:.2f}",
        f"DSPs: {100 * dsps / synth_reports.DEVICE_DSPS:.2f}",
        f"Timing: {row[prefix + '_period_ns']}",
        f"Cycle Latency: {row[prefix + '_cycles']}",
        f"Total Latency: {row[prefix + '_latency_ns']}",
    ]

    # The accuracy is a mean error of the final outputs against Keras, not a classification accuracy.
    rtl_or_hls = "rtl" if prefix == "handmade" else "hls"
    lines.append(f"Accuracy: {float(row[rtl_or_hls + '_vs_keras_error']):.4f} mean error vs Keras "
                 f"({float(row[rtl_or_hls + '_vs_keras_error_ulp']):.2f} ULP)")
    if prefix == "handmade":
        lines.append(f"RTL vs hls4ml: {float(row['rtl_vs_hls_error']):.4f} mean error")

    lines.append(f"Counts: {luts:.0f} LUTs, {ffs:.0f} FFs, {bram:g} BRAM tiles, {dsps:.0f} DSPs")
    return "\n".join(lines)


def send_email(subject, body):
    """Sends an email with the mail command. If that does not work, the sweep carries on."""
    try:
        subprocess.run(["mail", "-s", subject, EMAIL], input=body, text=True, check=True)
    except (OSError, subprocess.CalledProcessError) as error:
        print(f"(the email could not be sent: {error})")


# ---------------------------------------------------------------- main
def main():
    global REDO

    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--redo", action="store_true", help="redo every step, even if its result exists")
    parser.add_argument("--setup", action="append", metavar="BITS,INT",
                        help="a setup to run, for example --setup 10,3 (repeat it for several); default: CONFIGS")
    args = parser.parse_args()
    REDO = args.redo

    setups = CONFIGS
    if args.setup:
        try:
            setups = [tuple(int(number) for number in text.split(",")) for text in args.setup]
            assert all(len(setup) == 2 for setup in setups)
        except (ValueError, AssertionError):
            parser.error("--setup needs two whole numbers, like --setup 10,3")

    done = []
    failed = []

    print(f"setups: {setups}")
    for bits, int_bits in setups:
        tag = f"{bits}_{int_bits}"

        if (bits, int_bits) in finished_setups() and not REDO:
            print(f"{tag}: already in {RESULTS_CSV.name}, skipping")
            continue

        print(f"== {tag}")
        try:
            row = run_setup(bits, int_bits)
            save_row(row)
            send_email(f"Handmade {tag} finished", design_email("handmade", "handmade", row))
            send_email(f"HLS4ML {tag} finished", design_email("hls4ml", "hls", row))
            done.append(tag)
        except Exception as error:
            print(f"{tag} FAILED: {error}")
            send_email("Sweep Failure", f"[SKIP] {(bits, int_bits)} failed: {error}")
            failed.append(tag)

    print(f"finished: {done}   failed: {failed}")
    send_email("Sweep Done", f"Finished setups: {done}\nFailed setups: {failed}\nResults: {RESULTS_CSV}")


if __name__ == "__main__":
    main()