#!/bin/bash
# run_hls_lat.sh -- latency simulation of the hls4ml RTL for one setup.
#
# What it does:
#   1. compiles the RTL that build_hls.py generated, plus the latency testbench (hls_lat_tb.sv)
#   2. starts the design, feeds it zeros, and counts clock cycles from the first accepted
#      input to the first output
#   3. writes the number of cycles to results/<TAG>_<CLOCK_PERIOD>ns/latency.txt
#
# Usage:
#   ./run_hls_lat.sh                                    # the 8-bit design built for 10 ns
#   TAG=8_2 CLOCK_PERIOD=8 ./run_hls_lat.sh             # the same design built for 8 ns
#   TAG=16_6 INPUT_BITS=16 OUTPUT_BITS=32 ./run_hls_lat.sh

# Stop the script as soon as any command fails.
set -e


# ---------------------------------------------------------------- settings
# "${NAME:-default}" means: use NAME if it was given on the command line, otherwise use the default.

TAG=${TAG:-8_2}                    # <bits>_<int>, as given to build_hls.py
CLOCK_PERIOD=${CLOCK_PERIOD:-10}   # the clock period (ns) the design was built for, as given to build_hls.py
INPUT_BITS=${INPUT_BITS:-8}        # width of the input data port (= the bit width)
OUTPUT_BITS=${OUTPUT_BITS:-16}     # width of each output data port (= the larger of 16 and twice the bit width)

PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS}


# ---------------------------------------------------------------- folders and files
HLS_PROJECT=${TAG}_${CLOCK_PERIOD}ns
RTL_DIR=$PROJECT_DIR/hls_projects/$HLS_PROJECT/myproject_prj/solution1/syn/verilog
TESTBENCH=$PROJECT_DIR/scripts/hls_lat_tb.sv

RESULT_DIR=$PROJECT_DIR/results/$HLS_PROJECT
RESULT_FILE=$RESULT_DIR/latency.txt

WORK_DIR=$PROJECT_DIR/xsim_work/${HLS_PROJECT}_lat   # compiled files and logs go here


# ---------------------------------------------------------------- step 1: check the inputs
echo "Step 1: checking the inputs for $HLS_PROJECT"

if [ ! -f "$RTL_DIR/myproject.v" ]; then
    echo "ERROR: no RTL at $RTL_DIR (run build_hls.py first)"
    exit 1
fi

mkdir -p "$RESULT_DIR" "$WORK_DIR"

# Delete any old result, so a run that fails cannot be mistaken for a good one.
rm -f "$RESULT_FILE"

# Some memories in the generated RTL are loaded from .dat files, which the simulator looks for
# in the folder it runs in. Copy them over, if there are any.
if ls "$RTL_DIR"/*.dat > /dev/null 2>&1; then
    cp "$RTL_DIR"/*.dat "$WORK_DIR"/
fi

# xvlog, xelab and xsim write their files into the current folder.
cd "$WORK_DIR"


# ---------------------------------------------------------------- step 2: compile
echo "Step 2: compiling"

# The generated RTL is plain Verilog (.v) and the testbench is SystemVerilog, so two commands.
# "> xvlog.log 2>&1" saves everything the tool prints into xvlog.log.
if ! xvlog "$RTL_DIR"/*.v > xvlog.log 2>&1; then
    echo "ERROR: xvlog failed on the RTL. Last lines of $WORK_DIR/xvlog.log:"
    tail -20 xvlog.log
    exit 1
fi

if ! xvlog -sv "$TESTBENCH" > xvlog_tb.log 2>&1; then
    echo "ERROR: xvlog failed on the testbench. Last lines of $WORK_DIR/xvlog_tb.log:"
    tail -20 xvlog_tb.log
    exit 1
fi

# Also look for error messages in the logs, in case the tool still returned "success".
if grep -q "^ERROR" xvlog.log xvlog_tb.log; then
    echo "ERROR: the compile reported errors:"
    grep -h "^ERROR" xvlog.log xvlog_tb.log | head -10
    exit 1
fi


# ---------------------------------------------------------------- step 3: elaborate
echo "Step 3: elaborating (INPUT_BITS=$INPUT_BITS, OUTPUT_BITS=$OUTPUT_BITS)"

if ! xelab hls_lat_tb -s hls_lat_snap \
        -generic_top "INPUT_BITS=$INPUT_BITS" \
        -generic_top "OUTPUT_BITS=$OUTPUT_BITS" > xelab.log 2>&1; then
    echo "ERROR: xelab failed. Last lines of $WORK_DIR/xelab.log:"
    tail -20 xelab.log
    exit 1
fi


# ---------------------------------------------------------------- step 4: simulate
echo "Step 4: simulating"

if ! xsim hls_lat_snap -runall > xsim.log 2>&1; then
    echo "ERROR: xsim failed. Last lines of $WORK_DIR/xsim.log:"
    tail -20 xsim.log
    exit 1
fi


# ---------------------------------------------------------------- step 5: read the result
echo "Step 5: reading the result"

# The testbench prints "Latency = <N> cycles". If that line is missing, the design never
# produced an output.
if ! grep -q "^Latency" xsim.log; then
    echo "ERROR: the testbench did not report a latency (see $WORK_DIR/xsim.log)"
    grep "^ERROR" xsim.log || true      # "|| true" so that finding no ERROR line does not stop the script
    exit 1
fi

# "Latency = 34571 cycles"  ->  the third word is the number.
LATENCY_CYCLES=$(grep "^Latency" xsim.log | cut -d' ' -f3)

echo "$LATENCY_CYCLES" > "$RESULT_FILE"
echo "OK: latency = $LATENCY_CYCLES cycles -> $RESULT_FILE"