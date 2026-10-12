#!/bin/bash
# run_synth.sh -- Vivado synthesis and implementation of the handmade design for one clock period.
#
# What it does:
#   1. runs synthesis, placement and routing with the clock constrained to CLOCK_PERIOD
#   2. writes reports/<TAG>_<CLOCK_PERIOD>ns_util.rpt and reports/<TAG>_<CLOCK_PERIOD>ns_timing.rpt
#   3. prints the worst negative slack (WNS): zero or more means the clock period is met
#
# This takes a while (tens of minutes), so run it in tmux.
#
# Usage:
#   ./run_synth.sh                                                           # the 8-bit design at 10 ns
#   CLOCK_PERIOD=8.5 ./run_synth.sh                                          # the same design at 8.5 ns
#   TAG=16_6 BIT_WIDTH=16 NFRAC=9 NFRAC_FIRST=10 ./run_synth.sh              # another setup
#
# Afterwards:   python synth_reports.py handmade 8_2 10      (prints utilization and slack)

# Stop the script as soon as any command fails.
set -e


# ---------------------------------------------------------------- settings
# "${NAME:-default}" means: use NAME if it was given on the command line, otherwise use the default.

TAG=${TAG:-8_2}                  # picks the weights_n_tables/<TAG> folder
CLOCK_PERIOD=${CLOCK_PERIOD:-10} # target clock period in ns
BIT_WIDTH=${BIT_WIDTH:-8}        # RTL parameter bitWidth
NFRAC=${NFRAC:-5}                # RTL parameter NFRAC        (all layers after conv0)
NFRAC_FIRST=${NFRAC_FIRST:-7}    # RTL parameter NFRAC_first  (conv0 and the input pixels)

PROJECT_DIR=${PROJECT_DIR:-/home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade}


# ---------------------------------------------------------------- folders and files
WEIGHTS_DIR=$PROJECT_DIR/weights_n_tables/$TAG
RTL_DIR=$PROJECT_DIR/verilog-modules
TCL_SCRIPT=$PROJECT_DIR/scripts/synth.tcl

REPORT_NAME=${TAG}_${CLOCK_PERIOD}ns
UTIL_REPORT=$PROJECT_DIR/reports/${REPORT_NAME}_util.rpt
TIMING_REPORT=$PROJECT_DIR/reports/${REPORT_NAME}_timing.rpt

WORK_DIR=$PROJECT_DIR/vivado_work/$REPORT_NAME     # Vivado's log and temporary files go here


# ---------------------------------------------------------------- step 1: check the inputs
echo "Step 1: checking the inputs for $REPORT_NAME"

if ! command -v vivado > /dev/null; then
    echo "ERROR: vivado is not on the PATH"
    exit 1
fi

if [ ! -d "$WEIGHTS_DIR" ]; then
    echo "ERROR: no weight packages in $WEIGHTS_DIR (run gen_weights.py first)"
    exit 1
fi

mkdir -p "$PROJECT_DIR/reports" "$WORK_DIR"

# Delete old reports, so a run that fails cannot be mistaken for a good one.
rm -f "$UTIL_REPORT" "$TIMING_REPORT"

# Vivado writes its log and temporary files into the current folder.
cd "$WORK_DIR"


# ---------------------------------------------------------------- step 2: run Vivado
echo "Step 2: running Vivado at a $CLOCK_PERIOD ns clock (bitWidth=$BIT_WIDTH, NFRAC=$NFRAC, NFRAC_first=$NFRAC_FIRST)"

if ! vivado -mode batch -nojournal -log vivado.log -source "$TCL_SCRIPT" \
        -tclargs "$WEIGHTS_DIR" "$RTL_DIR" "$BIT_WIDTH" "$NFRAC" "$NFRAC_FIRST" \
                 "$CLOCK_PERIOD" "$UTIL_REPORT" "$TIMING_REPORT" > /dev/null 2>&1; then
    echo "ERROR: Vivado failed. The first error lines in $WORK_DIR/vivado.log:"
    grep "^ERROR" vivado.log | head -10 || true      # "|| true" so that finding no ERROR line does not stop the script
    exit 1
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