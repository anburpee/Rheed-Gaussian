"""
common.py -- small helpers shared by gen_weights.py and gen_test_data.py.
"""
import math
import os
from pathlib import Path


# The Gaussian-Handmade project folder. Set the environment variable RHEED_BASE to use another location.
BASE = Path(os.environ.get(
    "RHEED_BASE", "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade"))

# The Gaussian-HLS project folder (hls4ml projects, their simulation and results).
HLS_BASE = Path(os.environ.get(
    "RHEED_HLS_BASE", "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS"))

# The trained model.
MODEL_FILE = "/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Models/gaussian_nov24.keras"


def to_binary(number, bits):
    """Turns a number that is already scaled to LSB units into a two's-complement bit string.

    It rounds to the nearest integer, with exact halves going toward +infinity (what hls4ml's
    AP_RND does), and clips to the largest and smallest values that fit (AP_SAT).
    """
    rounded = math.floor(float(number) + 0.5)

    largest = 2 ** (bits - 1) - 1
    smallest = -(2 ** (bits - 1))
    clipped = max(smallest, min(largest, rounded))

    # Adding 2**bits to a negative number gives its two's-complement pattern.
    if clipped < 0:
        clipped = clipped + 2 ** bits

    return format(clipped, f"0{bits}b")


def load_model(path=MODEL_FILE):
    """Loads the trained QKeras model. Needs TensorFlow and QKeras (the tf211-env interpreter)."""
    import tensorflow as tf
    from qkeras.utils import _add_supported_quantized_objects

    custom_objects = {}
    _add_supported_quantized_objects(custom_objects)

    # compile=False: the training loss (dice_loss) is not needed for inference.
    return tf.keras.models.load_model(path, custom_objects=custom_objects, compile=False)