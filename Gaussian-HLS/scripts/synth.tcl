# Vivado synthesis and implementation of the hls4ml design for ONE clock period.
# Called by run_synth.sh:
# vivado -mode batch -source synth.tcl -tclargs <rtl_dir> <period_ns> <util_report> <timing_report>

lassign $argv rtl_dir period util_report timing_report

read_verilog [glob -directory $rtl_dir *.v]

set_part xcku035-fbva676-2-e

synth_design -top myproject -mode out_of_context

# The clock constraint has to come AFTER synth_design: get_ports needs a design in memory.
create_clock -name ap_clk -period $period [get_ports ap_clk]

opt_design
place_design
route_design

report_utilization -hierarchical -hierarchical_depth 1 -file $util_report
report_timing_summary -file $timing_report