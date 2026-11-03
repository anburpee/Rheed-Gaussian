import csv
from pathlib import Path

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import numpy as np

BASE = Path.home() / "HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian"
SWEEP = BASE / "Gaussian-Handmade-new-dense" / "results" / "sweep_results.csv"
STEADY = BASE / "lat_debug" / "latency_steady_all.csv"
OUT = BASE / "lat_debug" / "timing_steady.png"


def number(text):
    return float(text) if text != "" else np.nan


sweep = {int(float(row["bits"])): row for row in csv.DictReader(open(SWEEP))}
steady = {int(row["bits"]): row for row in csv.DictReader(open(STEADY))}
hls = {int(r["bits"]): r for r in csv.DictReader(open(BASE / "lat_debug" / "hls_steady_all.csv"))}
bits = sorted(set(sweep) & set(steady) & set(hls))

hand_interval = [number(steady[b]["interval_cycles"]) * number(sweep[b]["handmade_period_ns"]) for b in bits]
hand_latency = [number(steady[b]["latency_cycles"]) * number(sweep[b]["handmade_period_ns"]) for b in bits]
hls_interval = [number(hls[b]["interval_cycles"]) * number(hls[b]["period_ns"]) for b in bits]
hls_latency = [number(hls[b]["latency_cycles"]) * number(hls[b]["period_ns"]) for b in bits]

print("bits  hand_interval_ns  hand_latency_ns  hls_interval_ns  hls_latency_ns")
for row in zip(bits, hand_interval, hand_latency, hls_interval, hls_latency):
    print("%4d  %16.0f  %15.0f  %15.0f  %14.0f" % row)

figure, interval_axis = plt.subplots()
latency_axis = interval_axis.twinx()
for name, style, marker, interval, latency in [("Handmade", "-", "o", hand_interval, hand_latency),
                                               ("HLS4ML", "--", "s", hls_interval, hls_latency)]:
    interval_axis.plot(bits, interval, linestyle=style, color="r", marker=marker)
    latency_axis.plot(bits, latency, label=name, linestyle=style, color="b", marker=marker)

latency_axis.legend(loc="upper left")
interval_axis.set_title("Timing Handmade vs HLS")
interval_axis.set_xticks(bits)
interval_axis.set_xlim(min(bits) - 1, max(bits) + 1)
interval_axis.set_xlabel("Bitwidth")
interval_axis.set_ylabel("Initiation Interval (ns)", color="r")
interval_axis.tick_params(axis="y", labelcolor="r")
latency_axis.set_ylabel("Latency (ns)", color="b")
latency_axis.tick_params(axis="y", labelcolor="b")
top = np.nanmax(hand_interval + hand_latency + hls_interval + hls_latency) * 1.4
interval_axis.set_ylim(0, top)
latency_axis.set_ylim(0, top)
figure.text(0.5, -0.03, "Both designs: image 5 of a back-to-back stream; interval = spacing between outputs.",
            ha="center", fontsize=7)
figure.savefig(OUT, dpi=150, bbox_inches="tight")
print("wrote", OUT)
