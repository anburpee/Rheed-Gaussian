#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
Builds the hls4ml RTL for one setup (rebuilds the Keras model at this width, converts, runs C-synthesis).
RTL: Gaussian-HLS/hls_projects/<bits>_<int>_<period>ns/myproject_prj/solution1/syn/verilog/

    /home/aya/miniconda3/envs/tf211-env/bin/python build_hls.py --bits 8 --int 2 [--clock-period 8]

--clock-period is the target HLS schedules for: it changes cycle count and resources, not the outputs.
"""
import argparse
import re
import sys

sys.path.insert(0, "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade/scripts")

import ref_models
from common import HLS_BASE, MODEL_FILE, load_model


def read_estimate(project_dir):
    """HLS estimate (latency_min, latency_max, interval_min, interval_max) from the C-synthesis report, or None."""
    report = project_dir / "myproject_prj" / "solution1" / "syn" / "report" / "myproject_csynth.rpt"
    if not report.exists():
        return None

    match = re.search(r"\|\s*(\d+)\|\s*(\d+)\|\s*(\d+)\|\s*(\d+)\|\s*\w+\s*\|", report.read_text())
    if match is None:
        return None
    return tuple(int(number) for number in match.groups())


def parse_arguments():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--bits", type=int, required=True, help="total bit width")
    parser.add_argument("--int", type=int, required=True, dest="int_bits",
                        help="integer bits (sign not counted) of every layer after conv0")
    parser.add_argument("--q-first-int", type=int, default=None,
                        help="integer bits of conv0's quantizers (default: --int minus 2, i.e. 0 for (8,2))")
    parser.add_argument("--clock-period", type=float, default=10, help="target clock period in ns (default 10)")
    parser.add_argument("--model", default=MODEL_FILE, help="the trained .keras model")
    return parser.parse_args()


def main():
    args = parse_arguments()

    q_first_int = args.q_first_int if args.q_first_int is not None else args.int_bits - 2      # 0 for (8,2)
    project_name = f"{args.bits}_{args.int_bits}_{args.clock_period:g}ns"
    project_dir = HLS_BASE / "hls_projects" / project_name

    trained = load_model(args.model)
    model = ref_models.rebuild_model(trained, args.bits, args.int_bits, q_first_int)

    print(f"converting {project_name} (clock period {args.clock_period:g} ns)")
    hls_model = ref_models.convert_to_hls(model, args.bits, args.int_bits, q_first_int,
                                          project_dir, args.clock_period)

    print("running HLS C-synthesis (this takes a few minutes)")
    hls_model.build(csim=False, synth=True, vsynth=False, export=False)

    rtl_dir = project_dir / "myproject_prj" / "solution1" / "syn" / "verilog"
    if not (rtl_dir / "myproject.v").exists():
        raise SystemExit(f"ERROR: the build finished but {rtl_dir / 'myproject.v'} does not exist")
    print(f"RTL written to {rtl_dir}")

    estimate = read_estimate(project_dir)
    if estimate is not None:
        latency_min, latency_max, interval_min, interval_max = estimate
        print(f"HLS estimate: latency {latency_min} to {latency_max} cycles, interval {interval_min} to {interval_max} cycles")
        print("(estimate only; run_hls_lat.sh measures the real values)")


if __name__ == "__main__":
    main()
