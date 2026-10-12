#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
plot_results.py -- the three comparison graphs, in the style of the Toptagging sweep graphs.

It reads results/sweep_results.csv (one row per setup, written by sweep.py) and writes

    results/graphs/utilization.png    LUT, FF, BRAM and DSP use (% of the device) against the bit width
    results/graphs/timing.png         clock period (left axis) and total latency (right axis), or two panels
    results/graphs/error.png          mean error of the final outputs against Keras

Handmade is drawn as a solid line, HLS4ML as a dashed line. A resource that is zero for both
designs at every width (the DSPs, so far) is left out.

Usage:
    python plot_results.py
"""
import csv

import matplotlib
matplotlib.use("Agg")            # write picture files, do not open a window
import matplotlib.pyplot as plt

from common import BASE
from synth_reports import DEVICE_BRAM_TILES, DEVICE_DSPS, DEVICE_FFS, DEVICE_LUTS


RESULTS_CSV = BASE / "results" / "sweep_results.csv"
GRAPH_DIR = BASE / "results" / "graphs"

ERROR_LOG_SCALE = False          # True draws the error graph with a logarithmic y axis
TIMING_TWO_PANELS = False        # True draws the clock period and the latency as two panels, not one graph with two axes

# The colours of the resources (the same as in the Toptagging graphs, plus one for the BRAM).
ORANGE = (255 / 255, 165 / 255, 0)
RESOURCE_COLORS = {"LUTs": "r", "DFFs": "b", "BRAM": ORANGE, "DSPs": "c"}


# ---------------------------------------------------------------- reading the results
def read_rows():
    """The rows of sweep_results.csv as numbers, in order of the bit width."""
    if not RESULTS_CSV.exists():
        raise SystemExit(f"ERROR: {RESULTS_CSV} not found. Run sweep.py first.")

    with open(RESULTS_CSV) as file:
        rows = [{key: float(value) for key, value in row.items()} for row in csv.DictReader(file)]

    if not rows:
        raise SystemExit(f"ERROR: {RESULTS_CSV} has no rows.")
    return sorted(rows, key=lambda row: row["bits"])


def utilization(rows, prefix):
    """For one design: each resource's use in percent of the device, one value per row."""
    return {
        "LUTs": [100 * row[f"{prefix}_luts"] / DEVICE_LUTS for row in rows],
        "DFFs": [100 * row[f"{prefix}_ffs"] / DEVICE_FFS for row in rows],
        "BRAM": [100 * row[f"{prefix}_bram_tiles"] / DEVICE_BRAM_TILES for row in rows],
        "DSPs": [100 * row[f"{prefix}_dsps"] / DEVICE_DSPS for row in rows],
    }


def set_bit_axis(axis, bits):
    """Ticks at the bit widths that were run, and a little room on both sides."""
    axis.set_xticks(bits)
    axis.set_xlim(min(bits) - 1, max(bits) + 1)
    axis.set_xlabel("Bitwidth")


# ---------------------------------------------------------------- graph 1: utilization
def plot_utilization(rows):
    bits = [row["bits"] for row in rows]
    handmade = utilization(rows, "handmade")
    hls = utilization(rows, "hls")

    figure, axis = plt.subplots()
    resource_lines = []
    highest = 0

    for name, color in RESOURCE_COLORS.items():
        values = handmade[name] + hls[name]
        if max(values) == 0:
            print(f"  {name} is 0 for both designs, left out of the utilization graph")
            continue
        highest = max(highest, max(values))

        axis.plot(bits, handmade[name], linestyle="-", color=color, marker="o")
        axis.plot(bits, hls[name], linestyle="--", color=color, marker="D")

        # an empty line, only there to give the colour legend its entry
        line, = axis.plot([], [], label=name, linestyle="-", color=color, marker="o")
        resource_lines.append(line)

    colour_legend = axis.legend(handles=resource_lines, loc="upper right")
    axis.add_artist(colour_legend)

    handmade_line, = axis.plot([], [], label="Handmade", linestyle="-", color="k", marker="o")
    hls_line, = axis.plot([], [], label="HLS4ML", linestyle="--", color="k", marker="D")
    axis.legend(handles=[handmade_line, hls_line], loc="upper left")

    axis.set_title("Utilization of HLS4ML vs Manual on the Gaussian Model")
    set_bit_axis(axis, bits)
    axis.set_ylim(0, max(highest * 1.4, 1))        # room for the legends above the lines
    axis.set_ylabel("Utilization (%)")
    figure.savefig(GRAPH_DIR / "utilization.png", dpi=150, bbox_inches="tight")


# ---------------------------------------------------------------- graph 2: clock period and latency
def plot_timing(rows):
    if TIMING_TWO_PANELS:
        plot_timing_two_panels(rows)
    else:
        plot_timing_two_axes(rows)


def timing_values(rows, prefix):
    """For one design: the clock periods (ns) and the total latencies (µs), one value per row."""
    periods = [row[f"{prefix}_period_ns"] for row in rows]
    latencies = [row[f"{prefix}_latency_ns"] / 1000 for row in rows]
    return periods, latencies


def plot_timing_two_axes(rows):
    """One graph: the clock period on the left axis (red), the latency on the right axis (blue)."""
    bits = [row["bits"] for row in rows]

    figure, period_axis = plt.subplots()
    latency_axis = period_axis.twinx()

    highest_period = 0
    highest_latency = 0

    for prefix, name, linestyle, marker in [("handmade", "Handmade", "-", "o"), ("hls", "HLS4ML", "--", "^")]:
        periods, latencies = timing_values(rows, prefix)
        period_axis.plot(bits, periods, linestyle=linestyle, color="r", marker=marker)
        latency_axis.plot(bits, latencies, label=name, linestyle=linestyle, color="b", marker=marker)
        highest_period = max(highest_period, max(periods))
        highest_latency = max(highest_latency, max(latencies))

    latency_axis.legend(loc="upper left")
    period_axis.set_title("Timing")
    set_bit_axis(period_axis, bits)

    period_axis.set_ylabel("Clock Period (ns)", color="r")
    period_axis.tick_params(axis="y", labelcolor="r")
    latency_axis.set_ylabel("Latency (µs)", color="b")
    latency_axis.tick_params(axis="y", labelcolor="b")

    # The two axes get DIFFERENT headroom on purpose. A design that always takes the same number of
    # cycles (the handmade one) has a latency that is just its period times a constant. If both axes
    # were scaled to their own maximum, its red and blue lines would be drawn on top of each other.
    period_axis.set_ylim(0, highest_period * 1.4)
    latency_axis.set_ylim(0, highest_latency * 2.2)

    figure.savefig(GRAPH_DIR / "timing.png", dpi=150, bbox_inches="tight")


def plot_timing_two_panels(rows):
    """Two panels with the same x axis: the clock period on top, the latency below."""
    bits = [row["bits"] for row in rows]

    figure, (period_axis, latency_axis) = plt.subplots(2, 1, sharex=True, figsize=(6.4, 6.4))

    for prefix, name, linestyle, marker in [("handmade", "Handmade", "-", "o"), ("hls", "HLS4ML", "--", "^")]:
        periods, latencies = timing_values(rows, prefix)
        period_axis.plot(bits, periods, label=name, linestyle=linestyle, color="r", marker=marker)
        latency_axis.plot(bits, latencies, label=name, linestyle=linestyle, color="b", marker=marker)

    period_axis.legend(loc="lower right")           # the lower right is empty: the lines rise to the right
    period_axis.set_title("Timing")
    period_axis.set_ylabel("Clock Period (ns)", color="r")
    period_axis.set_ylim(0)

    latency_axis.legend(loc="lower right")
    latency_axis.set_ylabel("Latency (µs)", color="b")
    latency_axis.set_ylim(0)
    set_bit_axis(latency_axis, bits)

    figure.tight_layout()
    figure.savefig(GRAPH_DIR / "timing.png", dpi=150, bbox_inches="tight")


# ---------------------------------------------------------------- graph 3: error
def plot_error(rows):
    bits = [row["bits"] for row in rows]

    figure, axis = plt.subplots()
    axis.plot(bits, [row["rtl_vs_keras_error"] for row in rows], label="Handmade", linestyle="-", color="r", marker="o")
    axis.plot(bits, [row["hls_vs_keras_error"] for row in rows], label="HLS4ML", linestyle="--", color="b", marker="D")

    axis.legend(loc="upper right")
    axis.set_title("Error vs Keras")
    set_bit_axis(axis, bits)
    axis.set_ylabel("Mean Absolute Error")
    if ERROR_LOG_SCALE:
        axis.set_yscale("log")
    figure.savefig(GRAPH_DIR / "error.png", dpi=150, bbox_inches="tight")


def main():
    rows = read_rows()
    GRAPH_DIR.mkdir(parents=True, exist_ok=True)

    plot_utilization(rows)
    plot_timing(rows)
    plot_error(rows)
    print(f"wrote 3 graphs for {len(rows)} setups to {GRAPH_DIR}")


if __name__ == "__main__":
    main()