#!/bin/bash
# run_streaming_xsim.sh
# Usage: ./run_streaming_xsim.sh gaussian_test_data/image_list.txt streaming_traces

if [ -z "$1" ] || [ -z "$2" ]; then
    echo "Usage: ./run_streaming_xsim.sh <image_list_path> <out_dir>"
    exit 1
fi

set -e

RTL_DIR="/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/handmade/sv_modules/all_used_modules"
TB_FILE="/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/handmade/sv_modules/rheedGaussianWrapper_testing/rheedGaussianWrapper_streaming_tb.sv"

mkdir -p "$2"

PKG_FILES=$(find "$RTL_DIR" -name '*_pkg_*.sv')
OTHER_FILES=$(find "$RTL_DIR" -name '*.sv' ! -name '*_pkg_*.sv')

xvlog -sv $PKG_FILES $OTHER_FILES "$TB_FILE"
xelab rheedGaussianWrapper_streaming_tb -s streaming_snapshot -v 2
xsim streaming_snapshot -runall -testplusarg "IMAGE_LIST=$1" -testplusarg "OUT_DIR=$2"