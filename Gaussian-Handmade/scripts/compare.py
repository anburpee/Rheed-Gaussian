#!/usr/bin/env python3
"""
compare.py -- check the accuracy results for one bit-width setup.

It compares three sets of final outputs for the same images:
    RTL     results/<TAG>/rtl_final.csv       raw integers from the simulation
    hls4ml  testing_data/<TAG>/hls_out.npy    hls4ml predict()
    Keras   testing_data/<TAG>/keras_out.npy   Keras predict(), quantizers at this width

Errors are given in ULP. One ULP is the smallest step of the final layer's
fixed-point format, 2**-NFRAC (1/32 for the 8-bit design).

Usage:
    python compare.py
    TAG=16_6 NFRAC=9 python compare.py
"""
import os
from pathlib import Path

import numpy as np


# ---------------------------------------------------------------- settings
# os.environ.get("NAME", "default") uses NAME from the command line if it was given.

TAG = os.environ.get("TAG", "8_2")
NFRAC = int(os.environ.get("NFRAC", "5"))      # fractional bits of the final layer's output

PROJECT_DIR = Path(os.environ.get(
    "PROJECT_DIR", "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade"))

RTL_FILE = PROJECT_DIR / "results" / TAG / "rtl_final.csv"

# An earlier RTL result for the same images, used as a regression check (optional).
# To use it, save a copy of a good run:   cp results/<TAG>/rtl_final.csv results/<TAG>/rtl_final_baseline.csv
PREVIOUS_RTL = Path(os.environ.get(
    "PREVIOUS_RTL", str(PROJECT_DIR / "results" / TAG / "rtl_final_baseline.csv")))

SUMMARY_FILE = PROJECT_DIR / "results" / TAG / "accuracy_summary.csv"      # the numbers for the graphs
HLS_FILE = PROJECT_DIR / "testing_data" / TAG / "hls_out.npy"
KERAS_FILE = PROJECT_DIR / "testing_data" / TAG / "keras_out.npy"

ULP = 2.0 ** -NFRAC


# ---------------------------------------------------------------- helpers
def check_file_exists(path, hint):
    if not path.exists():
        raise SystemExit(f"ERROR: {path} not found. {hint}")


def load_rtl_integers(path):
    """Reads rows of 'image index, out0, ..., out4' and returns the raw integer outputs, ordered by image."""
    rows = np.loadtxt(path, delimiter=",", ndmin=2)
    rows = rows[np.argsort(rows[:, 0])]
    return rows[:, 1:].astype(int)


def print_error_line(name, difference_in_ulp):
    """One line of the summary table: mean and max absolute error."""
    absolute = np.abs(difference_in_ulp)
    print(f"  {name:<16s} {absolute.mean():8.3f} {absolute.max():10.3f}")


def correlation_per_output(values, reference):
    """For each output: how well `values` moves up and down with `reference` from image to image.
    1 = follows it exactly, 0 = unrelated. A constant output has no correlation (nan)."""
    result = []
    for output in range(values.shape[1]):
        if values[:, output].std() == 0 or reference[:, output].std() == 0:
            result.append(np.nan)
        else:
            result.append(np.corrcoef(values[:, output], reference[:, output])[0, 1])
    return np.array(result)


# ---------------------------------------------------------------- load the three results
check_file_exists(RTL_FILE, "Run run_acc.sh first.")
check_file_exists(HLS_FILE, "Run gen_test_data.py (without --skip-hls) first.")
check_file_exists(KERAS_FILE, "Run gen_test_data.py first.")

rtl_integers = load_rtl_integers(RTL_FILE)
rtl = rtl_integers * ULP                    # raw integers -> real values
hls = np.load(HLS_FILE)
keras = np.load(KERAS_FILE)

if not (rtl.shape == hls.shape == keras.shape):
    raise SystemExit(f"ERROR: the shapes differ: RTL {rtl.shape}, hls4ml {hls.shape}, Keras {keras.shape}")

num_images, num_outputs = rtl.shape
print(f"Setup {TAG}: {num_images} images, {num_outputs} outputs each, 1 ULP = {ULP}")


# ---------------------------------------------------------------- the first few images
print("\nFirst 3 images (real values):")
for image in range(3):
    print(f"  image {image}")
    print(f"    RTL    {np.round(rtl[image], 4)}")
    print(f"    hls4ml {np.round(hls[image], 4)}")
    print(f"    Keras  {np.round(keras[image], 4)}")


# ---------------------------------------------------------------- error summary
print("\nError over all outputs, in ULP:")
print(f"  {'':<16s} {'mean':>8s} {'max':>10s}")
print_error_line("RTL vs hls4ml", (rtl - hls) / ULP)
print_error_line("RTL vs Keras", (rtl - keras) / ULP)
print_error_line("hls4ml vs Keras", (hls - keras) / ULP)


# ---------------------------------------------------------------- RTL vs hls4ml in detail
# The hls4ml outputs sit exactly on the fixed-point grid, so the RTL difference is a whole number of ULP.
hls_on_grid = np.allclose(hls / ULP, np.round(hls / ULP))
print(f"\nhls4ml outputs are exact multiples of 1 ULP: {hls_on_grid}")

difference = np.round((rtl - hls) / ULP).astype(int)

print("\nRTL minus hls4ml, how many outputs differ by each amount:")
for amount in range(difference.min(), difference.max() + 1):
    count = int((difference == amount).sum())
    print(f"  {amount:+3d} ULP: {count:4d} of {difference.size}")

print("\nAverage of (RTL minus hls4ml) for each output, in ULP:")
print("  ", np.round(difference.mean(axis=0), 2))
print("   (a value far from 0 means that output is shifted, not just noisy)")


# ---------------------------------------------------------------- how much each output changes from image to image
print("\nSpread of each output across the images (standard deviation, in ULP):")
print("  Keras ", np.round(keras.std(axis=0) / ULP, 2))
print("  hls4ml", np.round(hls.std(axis=0) / ULP, 2))
print("  RTL   ", np.round(rtl.std(axis=0) / ULP, 2))
print("   (if Keras hardly changes between images, errors against it mostly measure offset and noise)")


# ---------------------------------------------------------------- constant offset from Keras
print("\nAverage offset from Keras for each output (signed, in ULP):")
print("  RTL   ", np.round((rtl - keras).mean(axis=0) / ULP, 2))
print("  hls4ml", np.round((hls - keras).mean(axis=0) / ULP, 2))


# ---------------------------------------------------------------- does it follow Keras from image to image
print("\nCorrelation with Keras across the images, per output:")
print("  RTL   ", np.round(correlation_per_output(rtl, keras), 2))
print("  hls4ml", np.round(correlation_per_output(hls, keras), 2))
print("   (1 = follows Keras, 0 = unrelated, nan = the output is constant)")


# ---------------------------------------------------------------- which one is closer to Keras
rtl_error = np.abs(rtl - keras).mean(axis=1)      # one number per image
hls_error = np.abs(hls - keras).mean(axis=1)
rtl_wins = int((rtl_error < hls_error).sum())
print(f"\nRTL is closer to Keras than hls4ml is on {rtl_wins} of {num_images} images")
print(f"  mean error vs Keras:  RTL {rtl_error.mean() / ULP:.3f} ULP,  hls4ml {hls_error.mean() / ULP:.3f} ULP")


# ---------------------------------------------------------------- regression check against an earlier RTL run
print("\nCompared with the earlier RTL run:")
if not PREVIOUS_RTL.exists():
    print(f"  (skipped, no baseline at {PREVIOUS_RTL})")
else:
    previous = load_rtl_integers(PREVIOUS_RTL)
    if previous.shape != rtl_integers.shape:
        print(f"  (skipped, shapes differ: {previous.shape} vs {rtl_integers.shape})")
    else:
        changed = previous != rtl_integers
        images_changed = np.where(changed.any(axis=1))[0]
        print(f"  {len(images_changed)} of {num_images} images have a different output "
              f"({int(changed.sum())} of {changed.size} values)")
        for image in images_changed[:5]:
            print(f"    image {image}: earlier {previous[image]}  now {rtl_integers[image]}")


# ---------------------------------------------------------------- save the numbers for the graphs
# The errors are saved in real output units, because 1 ULP gets smaller as the bit width grows.
# The ULP versions are saved too, for reading one setup at a time.
def mean_and_max(difference):
    absolute = np.abs(difference)
    return absolute.mean(), absolute.max()


rtl_keras_mean, rtl_keras_max = mean_and_max(rtl - keras)
hls_keras_mean, hls_keras_max = mean_and_max(hls - keras)
rtl_hls_mean, rtl_hls_max = mean_and_max(rtl - hls)

summary = {
    "tag": TAG,
    "images": num_images,
    "ulp": ULP,
    "rtl_vs_keras_mean": rtl_keras_mean,   "rtl_vs_keras_max": rtl_keras_max,
    "hls_vs_keras_mean": hls_keras_mean,   "hls_vs_keras_max": hls_keras_max,
    "rtl_vs_hls_mean": rtl_hls_mean,       "rtl_vs_hls_max": rtl_hls_max,
    "rtl_vs_keras_mean_ulp": rtl_keras_mean / ULP,
    "hls_vs_keras_mean_ulp": hls_keras_mean / ULP,
    "rtl_vs_hls_mean_ulp": rtl_hls_mean / ULP,
    "rtl_closer_to_keras": rtl_wins,
}

with open(SUMMARY_FILE, "w") as file:
    file.write(",".join(summary.keys()) + "\n")
    file.write(",".join(str(value) for value in summary.values()) + "\n")

print(f"\nSaved the numbers for the graphs to {SUMMARY_FILE}")