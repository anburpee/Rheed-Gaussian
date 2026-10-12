#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS/hls_projects/8_2_10ns/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
