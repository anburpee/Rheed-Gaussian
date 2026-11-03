#!/bin/bash
# usage: bash hls_lat5_one.sh <bits> <int> <period_ns>
HLS=~/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS
D=~/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/lat_debug
W=$1; I=$2; P=$3; TAG=${W}_${I}
RTL=$HLS/hls_projects/${TAG}_${P}ns/myproject_prj/solution1/syn/verilog
mkdir -p $D/h_$TAG && cd $D/h_$TAG
ls $RTL/*.dat > /dev/null 2>&1 && cp $RTL/*.dat .
OUTB=$(( 2*W > 16 ? 2*W : 16 ))
fail() { echo "$W,$I,$P,$1," > $D/hls5_$TAG.csv; exit 1; }
xvlog $RTL/*.v > xvlog.log 2>&1 || fail RTL_FAIL
xvlog -sv $D/hls_lat5_tb.sv > xvlog_tb.log 2>&1 || fail TB_FAIL
xelab hls_lat5_tb -s snap -generic_top INPUT_BITS=$W -generic_top OUTPUT_BITS=$OUTB > xelab.log 2>&1 || fail ELAB_FAIL
xsim snap -runall > xsim.log 2>&1
LAT=$(grep "^Latency" xsim.log | cut -d' ' -f3)
INT=$(grep "^Interval" xsim.log | cut -d' ' -f3)
echo "$W,$I,$P,$LAT,$INT" > $D/hls5_$TAG.csv
