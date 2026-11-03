#!/bin/bash
# usage: bash lat5_one.sh <bits> <int>
NEW=~/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-Handmade-new-dense
D=~/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/lat_debug
W=$1; I=$2; TAG=${W}_${I}
mkdir -p $D/w_$TAG && cd $D/w_$TAG
xvlog -sv -i $NEW/verilog-modules $NEW/weights_n_tables/$TAG/*.sv $NEW/verilog-modules/*.sv $D/lat5_tb.sv > xvlog.log 2>&1 || { echo "$W,$I,COMPILE_FAIL," > $D/lat5_$TAG.csv; exit 1; }
xelab lat5_tb -s snap -generic_top bitWidth=$W -generic_top NFRAC=$((W-I-1)) -generic_top NFRAC_first=$((W-1)) > xelab.log 2>&1 || { echo "$W,$I,ELAB_FAIL," > $D/lat5_$TAG.csv; exit 1; }
xsim snap -runall > xsim.log 2>&1
LAT=$(grep "^Latency" xsim.log | cut -d' ' -f3)
INT=$(grep "^Interval" xsim.log | cut -d' ' -f3)
echo "$W,$I,$LAT,$INT" > $D/lat5_$TAG.csv
