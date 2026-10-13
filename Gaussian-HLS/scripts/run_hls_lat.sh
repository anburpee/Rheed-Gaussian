#!/bin/bash
# Latency and initiation interval (cycles) of the hls4ml design built by build_hls.py.
#   ./run_hls_lat.sh
#   TAG=8_2 CLOCK_PERIOD=8 ./run_hls_lat.sh
#   TAG=16_6 INPUT_BITS=16 OUTPUT_BITS=32 ./run_hls_lat.sh
set -e

TAG=${TAG:-8_2}
CLOCK_PERIOD=${CLOCK_PERIOD:-10}
INPUT_BITS=${INPUT_BITS:-8}
OUTPUT_BITS=${OUTPUT_BITS:-16}
PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS}

HLS_PROJECT=${TAG}_${CLOCK_PERIOD}ns
RTL_DIR=$PROJECT_DIR/hls_projects/$HLS_PROJECT/myproject_prj/solution1/syn/verilog
TESTBENCH=$PROJECT_DIR/scripts/hls_lat_tb.sv
RESULT_DIR=$PROJECT_DIR/results/$HLS_PROJECT
WORK_DIR=$PROJECT_DIR/xsim_work/${HLS_PROJECT}_lat

echo "Step 1: checking inputs for $HLS_PROJECT"
if [ ! -f "$RTL_DIR/myproject.v" ]; then
    echo "ERROR: no RTL at $RTL_DIR (run build_hls.py first)"
    exit 1
fi
mkdir -p "$RESULT_DIR" "$WORK_DIR"
rm -f "$RESULT_DIR/latency.txt" "$RESULT_DIR/interval.txt"

# memories loaded from .dat files are looked up in the run folder
if ls "$RTL_DIR"/*.dat > /dev/null 2>&1; then
    cp "$RTL_DIR"/*.dat "$WORK_DIR"/
fi
cd "$WORK_DIR"

echo "Step 2: compiling"
if ! xvlog "$RTL_DIR"/*.v > xvlog.log 2>&1; then
    echo "ERROR: xvlog failed on the RTL:"
    tail -20 xvlog.log
    exit 1
fi
if ! xvlog -sv "$TESTBENCH" > xvlog_tb.log 2>&1; then
    echo "ERROR: xvlog failed on the testbench:"
    tail -20 xvlog_tb.log
    exit 1
fi
if grep -q "^ERROR" xvlog.log xvlog_tb.log; then
    grep -h "^ERROR" xvlog.log xvlog_tb.log | head -10
    exit 1
fi

echo "Step 3: elaborating"
if ! xelab hls_lat_tb -s hls_lat_snap \
        -generic_top "INPUT_BITS=$INPUT_BITS" \
        -generic_top "OUTPUT_BITS=$OUTPUT_BITS" > xelab.log 2>&1; then
    echo "ERROR: xelab failed:"
    tail -20 xelab.log
    exit 1
fi

echo "Step 4: simulating"
if ! xsim hls_lat_snap -runall > xsim.log 2>&1; then
    echo "ERROR: xsim failed:"
    tail -20 xsim.log
    exit 1
fi

echo "Step 5: reading the result"
if ! grep -q "^Latency" xsim.log || ! grep -q "^Interval" xsim.log; then
    echo "ERROR: no latency/interval reported (see $WORK_DIR/xsim.log)"
    grep "^ERROR" xsim.log || true
    exit 1
fi

LATENCY=$(grep "^Latency" xsim.log | cut -d' ' -f3)
INTERVAL=$(grep "^Interval" xsim.log | cut -d' ' -f3)
echo "$LATENCY" > "$RESULT_DIR/latency.txt"
echo "$INTERVAL" > "$RESULT_DIR/interval.txt"
echo "OK: latency = $LATENCY cycles, interval = $INTERVAL cycles"
