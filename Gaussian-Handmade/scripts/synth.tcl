# Vivado synthesis and implementation of the handmade design for ONE clock period.
# Called by run_synth.sh:
#   vivado -mode batch -source synth.tcl -tclargs <weights_dir> <rtl_dir> <width> <nfrac> <nfrac_first> \
#                                                  <period_ns> <util_report> <timing_report>

lassign $argv weights_dir rtl_dir width nfrac nfrac_first period util_report timing_report

# The weight packages are read first, because the modules import them.
read_verilog -sv [glob -directory $weights_dir *.sv]
read_verilog -sv [glob -directory $rtl_dir *.sv]

set_part xcku035-fbva676-2-e

# The bit widths are given here, so the RTL files do not have to be edited for each width.
synth_design -top rheedGaussianWrapper -mode out_of_context \
    -generic bitWidth=$width -generic NFRAC=$nfrac -generic NFRAC_first=$nfrac_first

# The clock constraint has to come AFTER synth_design: get_ports needs a design in memory.
create_clock -name clk -period $period [get_ports clk]

opt_design
place_design
route_design

report_utilization -hierarchical -hierarchical_depth 1 -file $util_report
report_timing_summary -file $timing_report