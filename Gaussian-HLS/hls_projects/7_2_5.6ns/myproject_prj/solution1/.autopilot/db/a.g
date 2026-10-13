#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/aya/HLS4ML_VS_MANUAL/src/hdl/RHEED_Gaussian/Gaussian-HLS/hls_projects/7_2_5.6ns/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
