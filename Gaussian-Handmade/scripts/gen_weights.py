#!/home/aya/miniconda3/envs/tf211-env/bin/python
"""
gen_weights.py -- SystemVerilog weight packages for one bit-width setup.

For every layer of the trained model that has weights, it writes one package file holding the
weights and biases as fixed-point words:

    weights_n_tables/<bits>_<int>/<layer>_pkg.sv        e.g.  weights_n_tables/8_2/q_dense_pkg.sv

Usage (it needs TensorFlow and QKeras, so use the tf211-env interpreter):
    /home/aya/miniconda3/envs/tf211-env/bin/python gen_weights.py --bits 8 --int 2
    /home/aya/miniconda3/envs/tf211-env/bin/python gen_weights.py --bits 16 --int 6

Number format:
    --bits is the total width. --int is the number of integer bits NOT counting the sign bit
    (the QKeras convention), so a layer has  bits - int - 1  fractional bits.
    conv0 uses --first-int, which defaults to --int minus 1. In the 8-bit design conv0 is (8, 1)
    and every other layer is (8, 2).

Rounding: to the nearest value, exact halves up (like hls4ml's AP_RND). A value that does not fit
the format is clipped, and the script reports how many were clipped in each layer.
"""
import argparse

import numpy as np

from common import BASE, MODEL_FILE, load_model, to_binary


WEIGHTS_DIR = BASE / "weights_n_tables"


def read_layer(layer):
    """Returns (weights, biases, is_conv) for a layer, or None if the layer has no weights
    (pooling, flatten, activation). Both arrays are flat, in the order the SystemVerilog expects."""

    if "conv2d_batchnorm" in layer.name.lower():
        kernel, biases = layer.get_folded_weights()          # batch norm is folded into the convolution
        # Keras stores the kernel as (height, width, in, out). The RTL indexes it as (out, in, height, width).
        kernel = np.transpose(np.asarray(kernel), (3, 2, 0, 1))
        return kernel.reshape(-1), np.asarray(biases), True

    arrays = layer.get_weights()
    if not arrays:
        return None

    # Dense layer: Keras stores (in, out). Flattened row by row, so the index is  in * OUT + out.
    return np.asarray(arrays[0]).reshape(-1), np.asarray(arrays[1]), False


def to_words(values, bits, nfrac):
    """Each value becomes a Verilog constant such as  8'b00000011."""
    words = []
    for value in values:
        words.append(f"{bits}'b" + to_binary(value * 2 ** nfrac, bits))
    return words


def count_clipped(values, bits, nfrac):
    """How many values do not fit in the format and would be clipped."""
    rounded = np.floor(np.asarray(values, dtype=np.float64) * 2 ** nfrac + 0.5)
    largest = 2 ** (bits - 1) - 1
    smallest = -(2 ** (bits - 1))
    return int(((rounded > largest) | (rounded < smallest)).sum())


def package_text(layer_name, bits, int_bits, weight_name, bias_name, weight_words, bias_words):
    """The text of one package file."""
    lines = []
    lines.append("`timescale 1ns / 1ps")
    lines.append(f"//Width: {bits}")
    lines.append(f"//Int: {int_bits}")
    lines.append(f"package {layer_name}_0;")
    lines.append("")
    lines.append(f"localparam logic signed [{bits - 1}:0] {weight_name} [0:{len(weight_words) - 1}] = '{{")
    lines.append(",\n".join(weight_words))
    lines.append("};")
    lines.append(f"localparam logic signed [{bits - 1}:0] {bias_name} [{len(bias_words)}] = '{{")
    lines.append(",\n".join(bias_words))
    lines.append("};")
    lines.append("endpackage")
    return "\n".join(lines) + "\n"


def parse_arguments():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--bits", type=int, required=True, help="total bit width")
    parser.add_argument("--int", type=int, required=True, dest="int_bits",
                        help="integer bits (sign not counted) of every layer after conv0")
    parser.add_argument("--first-int", type=int, default=None,
                        help="integer bits of conv0 (default: --int minus 1)")
    parser.add_argument("--model", default=MODEL_FILE, help="the trained .keras model")
    return parser.parse_args()


def main():
    args = parse_arguments()

    first_int = args.first_int if args.first_int is not None else args.int_bits - 1
    out_dir = WEIGHTS_DIR / f"{args.bits}_{args.int_bits}"

    # Start from an empty folder, so no package from another setup is left behind.
    out_dir.mkdir(parents=True, exist_ok=True)
    for old_file in out_dir.glob("*.sv"):
        old_file.unlink()

    model = load_model(args.model)

    print(f"{'layer':<24s} {'format':<8s} {'words':>6s} {'largest |value|':>16s} {'limit':>8s} {'clipped':>8s}")

    total_clipped = 0
    first_conv_done = False

    for layer in model.layers:
        layer_data = read_layer(layer)
        if layer_data is None:
            continue
        weights, biases, is_conv = layer_data

        # The first convolution layer has its own integer bits.
        int_bits = args.int_bits
        if is_conv and not first_conv_done:
            int_bits = first_int
            first_conv_done = True

        bits = args.bits
        nfrac = bits - int_bits - 1             # the sign bit is not part of int_bits

        weight_name, bias_name = ("convWeights", "convBiases") if is_conv else ("dlWeights", "bias")

        # Report how well the values fit.
        everything = np.concatenate([weights.astype(np.float64), biases.astype(np.float64)])
        largest_value = float(np.abs(everything).max())
        limit = (2 ** (bits - 1) - 1) / 2 ** nfrac
        clipped = count_clipped(weights, bits, nfrac) + count_clipped(biases, bits, nfrac)
        total_clipped += clipped
        print(f"{layer.name:<24s} ({bits},{int_bits}){'':<3s} {everything.size:6d} {largest_value:16.3f} {limit:8.3f} {clipped:8d}")

        text = package_text(layer.name, bits, int_bits, weight_name, bias_name,
                            to_words(weights, bits, nfrac), to_words(biases, bits, nfrac))
        (out_dir / f"{layer.name}_pkg.sv").write_text(text)

    print(f"\nwrote {len(list(out_dir.glob('*.sv')))} packages to {out_dir}")
    if total_clipped > 0:
        print(f"WARNING: {total_clipped} values did not fit and were clipped. Use a larger --int (or --first-int).")
    else:
        print("no values were clipped")


if __name__ == "__main__":
    main()