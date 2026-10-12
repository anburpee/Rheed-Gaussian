#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
plot_setup.py -- bar graphs that compare the two designs for ONE setup.

It reads the row of that setup in results/sweep_results.csv (written by sweep.py) and writes

    results/<tag>/graphs/utilization.png    LUT, FF, BRAM and DSP use, in % of the device
    results/<tag>/graphs/timing.png         clock period, and total latency with the cycle count
    results/<tag>/graphs/error.png          mean error of the final outputs: HLS4ML, RTL and RTL-vs-HLS4ML

Usage:
    python plot_setup.py            # the 8-bit setup, 8_2
    python plot_setup.py 10_3       # another setup
"""
import csv
import sys

import matplotlib
matplotlib.use("Agg")            # write picture files, do not open a window
import matplotlib.pyplot as plt

from common import BASE
from synth_reports import DEVICE_BRAM_TILES, DEVICE_DSPS, DEVICE_FFS, DEVICE_LUTS


RESULTS_CSV = BASE / "results" / "sweep_results.csv"

HANDMADE_COLOR = "steelblue"
HLS_COLOR = "darkorange"

plt.rcParams.update({"font.size": 14})        # large enough to read on a shared screen


def read_row(tag):
    """The row of one setup, with every value as a number."""
    if not RESULTS_CSV.exists():
        raise SystemExit(f"ERROR: {RESULTS_CSV} not found. Run sweep.py first.")

    bits, int_bits = (int(number) for number in tag.split("_"))

    with open(RESULTS_CSV) as file:
        rows = list(csv.DictReader(file))

    for row in rows:
        if int(row["bits"]) == bits and int(row["int_bits"]) == int_bits:
            return {key: float(value) for key, value in row.items()}

    known = [f"{row['bits']}_{row['int_bits']}" for row in rows]
    raise SystemExit(f"ERROR: setup {tag} is not in {RESULTS_CSV.name}. It has: {known}")


# ---------------------------------------------------------------- graph 1: utilization
def plot_utilization(row, tag, graph_dir):
    names = ["LUTs", "FFs", "BRAM", "DSPs"]
    handmade = [100 * row["handmade_luts"] / DEVICE_LUTS, 100 * row["handmade_ffs"] / DEVICE_FFS,
                100 * row["handmade_bram_tiles"] / DEVICE_BRAM_TILES, 100 * row["handmade_dsps"] / DEVICE_DSPS]
    hls = [100 * row["hls_luts"] / DEVICE_LUTS, 100 * row["hls_ffs"] / DEVICE_FFS,
           100 * row["hls_bram_tiles"] / DEVICE_BRAM_TILES, 100 * row["hls_dsps"] / DEVICE_DSPS]

    figure, axis = plt.subplots(figsize=(10, 6))
    positions = range(len(names))
    width = 0.38

    handmade_bars = axis.bar([p - width / 2 for p in positions], handmade, width, label="Handmade", color=HANDMADE_COLOR)
    hls_bars = axis.bar([p + width / 2 for p in positions], hls, width, label="HLS4ML", color=HLS_COLOR)
    axis.bar_label(handmade_bars, fmt="%.1f%%", padding=3)
    axis.bar_label(hls_bars, fmt="%.1f%%", padding=3)

    axis.set_xticks(list(positions))
    axis.set_xticklabels(names)
    axis.set_ylabel("Utilization (% of device)")
    axis.set_ylim(0, max(handmade + hls + [1]) * 1.2)
    axis.set_title(f"Resource utilization, setup {tag}")
    axis.legend()
    figure.savefig(graph_dir / "utilization.png", dpi=150, bbox_inches="tight")


# ---------------------------------------------------------------- graph 2: clock period and latency
def plot_timing(row, tag, graph_dir):
    figure, (period_axis, latency_axis) = plt.subplots(1, 2, figsize=(12, 6))

    # left: the clock period each design reached (the smallest period that met timing)
    periods = [row["handmade_period_ns"], row["hls_period_ns"]]
    bars = period_axis.bar(["Handmade", "HLS4ML"], periods, color=[HANDMADE_COLOR, HLS_COLOR])
    period_axis.bar_label(bars, fmt="%.1f ns", padding=3)
    period_axis.set_ylabel("Clock period (ns)")
    period_axis.set_ylim(0, max(periods) * 1.2)
    period_axis.set_title("Clock period")

    # right: total latency = cycles x clock period, with the cycle count under each value
    latencies = [row["handmade_latency_ns"] / 1000, row["hls_latency_ns"] / 1000]        # ns -> us
    labels = [f"{latencies[0]:.1f} µs\n{row['handmade_cycles']:.0f} cycles",
              f"{latencies[1]:.1f} µs\n{row['hls_cycles']:.0f} cycles"]
    bars = latency_axis.bar(["Handmade", "HLS4ML"], latencies, color=[HANDMADE_COLOR, HLS_COLOR])
    latency_axis.bar_label(bars, labels=labels, padding=3)
    latency_axis.set_ylabel("Total latency (µs)")
    latency_axis.set_ylim(0, max(latencies) * 1.25)
    latency_axis.set_title("Latency")

    figure.suptitle(f"Timing, setup {tag}")
    figure.tight_layout()
    figure.savefig(graph_dir / "timing.png", dpi=150, bbox_inches="tight")


# ---------------------------------------------------------------- graph 3: error
def plot_error(row, tag, graph_dir):
    names = ["HLS4ML vs Keras", "RTL vs Keras", "RTL vs HLS4ML"]
    errors = [row["hls_vs_keras_error"], row["rtl_vs_keras_error"], row["rtl_vs_hls_error"]]
    colors = ["tab:blue", "tab:orange", "tab:green"]

    figure, axis = plt.subplots(figsize=(9, 6))
    bars = axis.bar(names, errors, color=colors)
    axis.bar_label(bars, fmt="%.4f", padding=3)

    axis.set_ylabel("Mean absolute error")
    axis.set_ylim(0, max(errors) * 1.2)
    axis.set_title(f"Mean absolute error: {tag}")
    figure.savefig(graph_dir / "error.png", dpi=150, bbox_inches="tight")


def main():
    tag = sys.argv[1] if len(sys.argv) > 1 else "8_2"
    row = read_row(tag)

    graph_dir = BASE / "results" / tag / "graphs"
    graph_dir.mkdir(parents=True, exist_ok=True)

    plot_utilization(row, tag, graph_dir)
    plot_timing(row, tag, graph_dir)
    plot_error(row, tag, graph_dir)
    print(f"wrote 3 graphs for {tag} to {graph_dir}")


if __name__ == "__main__":
    main()