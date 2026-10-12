#!/bin/bash
# run_xsim.sh
# Usage: ./run_xsim.sh test_data/onehot_2_y24_x24.txt 2

if [ -z "$1" ] || [ -z "$2" ] || [ -z "$3" ]; then
    echo "Usage: ./run_xsim.sh <pixel_file_path> <test_label> <out_dir>"
    exit 1
fi

set -e  # stop immediately if any step fails, instead of plowing ahead with stale results

RTL_DIR="/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/handmade/sv_modules/all_used_modules"
TB_FILE="/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/handmade/sv_modules/rheedGaussianWrapper_testing/rheedGaussianWrapper_tb.sv"


mkdir -p "$3" # doesn't break if already exists

PKG_FILES=$(find "$RTL_DIR" -name '*_pkg_*.sv')
OTHER_FILES=$(find "$RTL_DIR" -name '*.sv' ! -name '*_pkg_*.sv')

# single xvlog call, packages listed first so imports resolve in-order
xvlog -sv $PKG_FILES $OTHER_FILES "$TB_FILE"

xelab rheedGaussianWrapper_tb -s sim_snapshot -v 2
xsim sim_snapshot -runall -testplusarg "PIXEL_FILE=$1" -testplusarg "TEST_LABEL=$2" -testplusarg "OUT_DIR=$3"