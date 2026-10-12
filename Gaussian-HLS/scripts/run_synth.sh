#!/bin/bash
# run_synth.sh -- Vivado synthesis and implementation of the hls4ml design for one clock period.
#
# What it does:
#   1. runs synthesis, placement and routing of the RTL that build_hls.py generated,
#      with the clock constrained to CLOCK_PERIOD
#   2. writes reports/<TAG>_<CLOCK_PERIOD>ns_util.rpt and reports/<TAG>_<CLOCK_PERIOD>ns_timing.rpt
#   3. prints the worst negative slack (WNS): zero or more means the clock period is met
#
# Use the same CLOCK_PERIOD that the design was built for with build_hls.py.
# This takes a while (tens of minutes), so run it in tmux.
#
# Usage:
#   ./run_synth.sh                                    # the 8-bit design, built for and run at 10 ns
#   TAG=8_2 CLOCK_PERIOD=8 ./run_synth.sh             # the one built for 8 ns
#
# Afterwards:   python synth_reports.py hls 8_2 10      (prints utilization and slack)

# Stop the script as soon as any command fails.
set -e


# ---------------------------------------------------------------- settings
# "${NAME:-default}" means: use NAME if it was given on the command line, otherwise use the default.

TAG=${TAG:-8_2}                    # <bits>_<int>, as given to build_hls.py
CLOCK_PERIOD=${CLOCK_PERIOD:-10}   # target clock period in ns, as given to build_hls.py

PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS}


# ---------------------------------------------------------------- folders and files
REPORT_NAME=${TAG}_${CLOCK_PERIOD}ns
RTL_DIR=$PROJECT_DIR/hls_projects/$REPORT_NAME/myproject_prj/solution1/syn/verilog
TCL_SCRIPT=$PROJECT_DIR/scripts/synth.tcl

UTIL_REPORT=$PROJECT_DIR/reports/${REPORT_NAME}_util.rpt
TIMING_REPORT=$PROJECT_DIR/reports/${REPORT_NAME}_timing.rpt

WORK_DIR=$PROJECT_DIR/vivado_work/$REPORT_NAME     # Vivado's log and temporary files go here


# ---------------------------------------------------------------- step 1: check the inputs
echo "Step 1: checking the inputs for $REPORT_NAME"

if ! command -v vivado > /dev/null; then
    echo "ERROR: vivado is not on the PATH"
    exit 1
fi

if [ ! -f "$RTL_DIR/myproject.v" ]; then
    echo "ERROR: no RTL at $RTL_DIR (run build_hls.py first)"
    exit 1
fi

mkdir -p "$PROJECT_DIR/reports" "$WORK_DIR"

# Delete old reports, so a run that fails cannot be mistaken for a good one.
rm -f "$UTIL_REPORT" "$TIMING_REPORT"

# Some memories in the generated RTL are loaded from .dat files, which Vivado looks for in the
# folder it runs in. Copy them over, if there are any.
if ls "$RTL_DIR"/*.dat > /dev/null 2>&1; then
    cp "$RTL_DIR"/*.dat "$WORK_DIR"/
fi

# Vivado writes its log and temporary files into the current folder.
cd "$WORK_DIR"


# ---------------------------------------------------------------- step 2: run Vivado
echo "Step 2: running Vivado at a $CLOCK_PERIOD ns clock"

if ! vivado -mode batch -nojournal -log vivado.log -source "$TCL_SCRIPT" \
        -tclargs "$RTL_DIR" "$CLOCK_PERIOD" "$UTIL_REPORT" "$TIMING_REPORT" > /dev/null 2>&1; then
    echo "ERROR: Vivado failed. The first error lines in $WORK_DIR/vivado.log:"
    grep "^ERROR" vivado.log | head -10 || true      # "|| true" so that finding no ERROR line does not stop the script
    exit 1
fi

# If a memory file could not be read, the memory would be empty and the result would be wrong.
if grep -i -E "readmem|\.dat" vivado.log | grep -i -E "cannot|can't|could not|unable|not found" > /dev/null; then
    echo "WARNING: Vivado may not have found a .dat file. Check $WORK_DIR/vivado.log"
fi


# ---------------------------------------------------------------- step 3: read the slack
echo "Step 3: reading the slack"

if [ ! -f "$UTIL_REPORT" ] || [ ! -f "$TIMING_REPORT" ]; then
    echo "ERROR: Vivado finished but the reports were not written (see $WORK_DIR/vivado.log)"
    exit 1
fi

# The first table in the timing report holds the worst negative slack: a header line, a line of
# dashes, then the numbers. The first number on the last of those lines is the WNS.
WNS=$(grep -m1 -A2 "WNS(ns)" "$TIMING_REPORT" | tail -1 | awk '{print $1}')

if [ -z "$WNS" ]; then
    echo "ERROR: could not find the WNS in $TIMING_REPORT"
    exit 1
fi

if awk -v wns="$WNS" 'BEGIN { exit (wns >= 0) ? 0 : 1 }'; then
    echo "OK: timing met. WNS = $WNS ns at a $CLOCK_PERIOD ns clock"
else
    echo "timing NOT met. WNS = $WNS ns at a $CLOCK_PERIOD ns clock"
fi
echo "reports: $UTIL_REPORT"
echo "         $TIMING_REPORT"