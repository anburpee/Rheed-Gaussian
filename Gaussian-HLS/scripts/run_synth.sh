#!/bin/bash
# Vivado synthesis + implementation of the hls4ml design at one clock period (slow: use tmux).
# Use the CLOCK_PERIOD the design was built for in build_hls.py.
# Writes reports/<TAG>_<CLOCK_PERIOD>ns_{util,timing}.rpt and prints the WNS (>= 0 means met).
#   ./run_synth.sh
#   TAG=8_2 CLOCK_PERIOD=8 ./run_synth.sh
set -e

TAG=${TAG:-8_2}
CLOCK_PERIOD=${CLOCK_PERIOD:-10}
PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS}

REPORT_NAME=${TAG}_${CLOCK_PERIOD}ns
RTL_DIR=$PROJECT_DIR/hls_projects/$REPORT_NAME/myproject_prj/solution1/syn/verilog
TCL_SCRIPT=$PROJECT_DIR/scripts/synth.tcl
UTIL_REPORT=$PROJECT_DIR/reports/${REPORT_NAME}_util.rpt
TIMING_REPORT=$PROJECT_DIR/reports/${REPORT_NAME}_timing.rpt
WORK_DIR=$PROJECT_DIR/vivado_work/$REPORT_NAME

echo "Step 1: checking inputs for $REPORT_NAME"
if ! command -v vivado > /dev/null; then
    echo "ERROR: vivado is not on the PATH"
    exit 1
fi
if [ ! -f "$RTL_DIR/myproject.v" ]; then
    echo "ERROR: no RTL at $RTL_DIR (run build_hls.py first)"
    exit 1
fi
mkdir -p "$PROJECT_DIR/reports" "$WORK_DIR"
rm -f "$UTIL_REPORT" "$TIMING_REPORT"

# memories loaded from .dat files are looked up in the run folder
if ls "$RTL_DIR"/*.dat > /dev/null 2>&1; then
    cp "$RTL_DIR"/*.dat "$WORK_DIR"/
fi
cd "$WORK_DIR"

echo "Step 2: running Vivado at $CLOCK_PERIOD ns"
if ! vivado -mode batch -nojournal -log vivado.log -source "$TCL_SCRIPT" \
        -tclargs "$RTL_DIR" "$CLOCK_PERIOD" "$UTIL_REPORT" "$TIMING_REPORT" > /dev/null 2>&1; then
    echo "ERROR: Vivado failed. First errors in $WORK_DIR/vivado.log:"
    grep "^ERROR" vivado.log | head -10 || true
    exit 1
fi

# an unreadable .dat file means empty memories and a wrong result
if grep -i -E "readmem|\.dat" vivado.log | grep -i -E "cannot|can't|could not|unable|not found" > /dev/null; then
    echo "WARNING: Vivado may not have found a .dat file. Check $WORK_DIR/vivado.log"
fi

echo "Step 3: reading the slack"
if [ ! -f "$UTIL_REPORT" ] || [ ! -f "$TIMING_REPORT" ]; then
    echo "ERROR: reports not written (see $WORK_DIR/vivado.log)"
    exit 1
fi

# line 2 after the "WNS(ns)" header (header, dashes, numbers); first number is the WNS
WNS=$(grep -m1 -A2 "WNS(ns)" "$TIMING_REPORT" | tail -1 | awk '{print $1}')
if [ -z "$WNS" ]; then
    echo "ERROR: no WNS in $TIMING_REPORT"
    exit 1
fi

if awk -v wns="$WNS" 'BEGIN { exit (wns >= 0) ? 0 : 1 }'; then
    echo "OK: timing met. WNS = $WNS ns at $CLOCK_PERIOD ns"
else
    echo "timing NOT met. WNS = $WNS ns at $CLOCK_PERIOD ns"
fi
