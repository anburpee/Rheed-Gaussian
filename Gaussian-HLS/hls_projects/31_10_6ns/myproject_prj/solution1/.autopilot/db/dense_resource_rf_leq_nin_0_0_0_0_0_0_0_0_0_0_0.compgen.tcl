# This script segment is generated automatically by AutoPilot

set id 405
set name myproject_mux_83_31_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 31
set din0_signed 0
set din1_width 31
set din1_signed 0
set din2_width 31
set din2_signed 0
set din3_width 31
set din3_signed 0
set din4_width 31
set din4_signed 0
set din5_width 31
set din5_signed 0
set din6_width 31
set din6_signed 0
set din7_width 31
set din7_signed 0
set din8_width 3
set din8_signed 0
set dout_width 31
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 406
set name myproject_mux_1287_31_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 31
set din0_signed 0
set din1_width 31
set din1_signed 0
set din2_width 31
set din2_signed 0
set din3_width 31
set din3_signed 0
set din4_width 31
set din4_signed 0
set din5_width 31
set din5_signed 0
set din6_width 31
set din6_signed 0
set din7_width 31
set din7_signed 0
set din8_width 31
set din8_signed 0
set din9_width 31
set din9_signed 0
set din10_width 31
set din10_signed 0
set din11_width 31
set din11_signed 0
set din12_width 31
set din12_signed 0
set din13_width 31
set din13_signed 0
set din14_width 31
set din14_signed 0
set din15_width 31
set din15_signed 0
set din16_width 31
set din16_signed 0
set din17_width 31
set din17_signed 0
set din18_width 31
set din18_signed 0
set din19_width 31
set din19_signed 0
set din20_width 31
set din20_signed 0
set din21_width 31
set din21_signed 0
set din22_width 31
set din22_signed 0
set din23_width 31
set din23_signed 0
set din24_width 31
set din24_signed 0
set din25_width 31
set din25_signed 0
set din26_width 31
set din26_signed 0
set din27_width 31
set din27_signed 0
set din28_width 31
set din28_signed 0
set din29_width 31
set din29_signed 0
set din30_width 31
set din30_signed 0
set din31_width 31
set din31_signed 0
set din32_width 31
set din32_signed 0
set din33_width 31
set din33_signed 0
set din34_width 31
set din34_signed 0
set din35_width 31
set din35_signed 0
set din36_width 31
set din36_signed 0
set din37_width 31
set din37_signed 0
set din38_width 31
set din38_signed 0
set din39_width 31
set din39_signed 0
set din40_width 31
set din40_signed 0
set din41_width 31
set din41_signed 0
set din42_width 31
set din42_signed 0
set din43_width 31
set din43_signed 0
set din44_width 31
set din44_signed 0
set din45_width 31
set din45_signed 0
set din46_width 31
set din46_signed 0
set din47_width 31
set din47_signed 0
set din48_width 31
set din48_signed 0
set din49_width 31
set din49_signed 0
set din50_width 31
set din50_signed 0
set din51_width 31
set din51_signed 0
set din52_width 31
set din52_signed 0
set din53_width 31
set din53_signed 0
set din54_width 31
set din54_signed 0
set din55_width 31
set din55_signed 0
set din56_width 31
set din56_signed 0
set din57_width 31
set din57_signed 0
set din58_width 31
set din58_signed 0
set din59_width 31
set din59_signed 0
set din60_width 31
set din60_signed 0
set din61_width 31
set din61_signed 0
set din62_width 31
set din62_signed 0
set din63_width 31
set din63_signed 0
set din64_width 31
set din64_signed 0
set din65_width 31
set din65_signed 0
set din66_width 31
set din66_signed 0
set din67_width 31
set din67_signed 0
set din68_width 31
set din68_signed 0
set din69_width 31
set din69_signed 0
set din70_width 31
set din70_signed 0
set din71_width 31
set din71_signed 0
set din72_width 31
set din72_signed 0
set din73_width 31
set din73_signed 0
set din74_width 31
set din74_signed 0
set din75_width 31
set din75_signed 0
set din76_width 31
set din76_signed 0
set din77_width 31
set din77_signed 0
set din78_width 31
set din78_signed 0
set din79_width 31
set din79_signed 0
set din80_width 31
set din80_signed 0
set din81_width 31
set din81_signed 0
set din82_width 31
set din82_signed 0
set din83_width 31
set din83_signed 0
set din84_width 31
set din84_signed 0
set din85_width 31
set din85_signed 0
set din86_width 31
set din86_signed 0
set din87_width 31
set din87_signed 0
set din88_width 31
set din88_signed 0
set din89_width 31
set din89_signed 0
set din90_width 31
set din90_signed 0
set din91_width 31
set din91_signed 0
set din92_width 31
set din92_signed 0
set din93_width 31
set din93_signed 0
set din94_width 31
set din94_signed 0
set din95_width 31
set din95_signed 0
set din96_width 31
set din96_signed 0
set din97_width 31
set din97_signed 0
set din98_width 31
set din98_signed 0
set din99_width 31
set din99_signed 0
set din100_width 31
set din100_signed 0
set din101_width 31
set din101_signed 0
set din102_width 31
set din102_signed 0
set din103_width 31
set din103_signed 0
set din104_width 31
set din104_signed 0
set din105_width 31
set din105_signed 0
set din106_width 31
set din106_signed 0
set din107_width 31
set din107_signed 0
set din108_width 31
set din108_signed 0
set din109_width 31
set din109_signed 0
set din110_width 31
set din110_signed 0
set din111_width 31
set din111_signed 0
set din112_width 31
set din112_signed 0
set din113_width 31
set din113_signed 0
set din114_width 31
set din114_signed 0
set din115_width 31
set din115_signed 0
set din116_width 31
set din116_signed 0
set din117_width 31
set din117_signed 0
set din118_width 31
set din118_signed 0
set din119_width 31
set din119_signed 0
set din120_width 31
set din120_signed 0
set din121_width 31
set din121_signed 0
set din122_width 31
set din122_signed 0
set din123_width 31
set din123_signed 0
set din124_width 31
set din124_signed 0
set din125_width 31
set din125_signed 0
set din126_width 31
set din126_signed 0
set din127_width 31
set din127_signed 0
set din128_width 7
set din128_signed 0
set dout_width 31
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    din65_width ${din65_width} \
    din65_signed ${din65_signed} \
    din66_width ${din66_width} \
    din66_signed ${din66_signed} \
    din67_width ${din67_width} \
    din67_signed ${din67_signed} \
    din68_width ${din68_width} \
    din68_signed ${din68_signed} \
    din69_width ${din69_width} \
    din69_signed ${din69_signed} \
    din70_width ${din70_width} \
    din70_signed ${din70_signed} \
    din71_width ${din71_width} \
    din71_signed ${din71_signed} \
    din72_width ${din72_width} \
    din72_signed ${din72_signed} \
    din73_width ${din73_width} \
    din73_signed ${din73_signed} \
    din74_width ${din74_width} \
    din74_signed ${din74_signed} \
    din75_width ${din75_width} \
    din75_signed ${din75_signed} \
    din76_width ${din76_width} \
    din76_signed ${din76_signed} \
    din77_width ${din77_width} \
    din77_signed ${din77_signed} \
    din78_width ${din78_width} \
    din78_signed ${din78_signed} \
    din79_width ${din79_width} \
    din79_signed ${din79_signed} \
    din80_width ${din80_width} \
    din80_signed ${din80_signed} \
    din81_width ${din81_width} \
    din81_signed ${din81_signed} \
    din82_width ${din82_width} \
    din82_signed ${din82_signed} \
    din83_width ${din83_width} \
    din83_signed ${din83_signed} \
    din84_width ${din84_width} \
    din84_signed ${din84_signed} \
    din85_width ${din85_width} \
    din85_signed ${din85_signed} \
    din86_width ${din86_width} \
    din86_signed ${din86_signed} \
    din87_width ${din87_width} \
    din87_signed ${din87_signed} \
    din88_width ${din88_width} \
    din88_signed ${din88_signed} \
    din89_width ${din89_width} \
    din89_signed ${din89_signed} \
    din90_width ${din90_width} \
    din90_signed ${din90_signed} \
    din91_width ${din91_width} \
    din91_signed ${din91_signed} \
    din92_width ${din92_width} \
    din92_signed ${din92_signed} \
    din93_width ${din93_width} \
    din93_signed ${din93_signed} \
    din94_width ${din94_width} \
    din94_signed ${din94_signed} \
    din95_width ${din95_width} \
    din95_signed ${din95_signed} \
    din96_width ${din96_width} \
    din96_signed ${din96_signed} \
    din97_width ${din97_width} \
    din97_signed ${din97_signed} \
    din98_width ${din98_width} \
    din98_signed ${din98_signed} \
    din99_width ${din99_width} \
    din99_signed ${din99_signed} \
    din100_width ${din100_width} \
    din100_signed ${din100_signed} \
    din101_width ${din101_width} \
    din101_signed ${din101_signed} \
    din102_width ${din102_width} \
    din102_signed ${din102_signed} \
    din103_width ${din103_width} \
    din103_signed ${din103_signed} \
    din104_width ${din104_width} \
    din104_signed ${din104_signed} \
    din105_width ${din105_width} \
    din105_signed ${din105_signed} \
    din106_width ${din106_width} \
    din106_signed ${din106_signed} \
    din107_width ${din107_width} \
    din107_signed ${din107_signed} \
    din108_width ${din108_width} \
    din108_signed ${din108_signed} \
    din109_width ${din109_width} \
    din109_signed ${din109_signed} \
    din110_width ${din110_width} \
    din110_signed ${din110_signed} \
    din111_width ${din111_width} \
    din111_signed ${din111_signed} \
    din112_width ${din112_width} \
    din112_signed ${din112_signed} \
    din113_width ${din113_width} \
    din113_signed ${din113_signed} \
    din114_width ${din114_width} \
    din114_signed ${din114_signed} \
    din115_width ${din115_width} \
    din115_signed ${din115_signed} \
    din116_width ${din116_width} \
    din116_signed ${din116_signed} \
    din117_width ${din117_width} \
    din117_signed ${din117_signed} \
    din118_width ${din118_width} \
    din118_signed ${din118_signed} \
    din119_width ${din119_width} \
    din119_signed ${din119_signed} \
    din120_width ${din120_width} \
    din120_signed ${din120_signed} \
    din121_width ${din121_width} \
    din121_signed ${din121_signed} \
    din122_width ${din122_width} \
    din122_signed ${din122_signed} \
    din123_width ${din123_width} \
    din123_signed ${din123_signed} \
    din124_width ${din124_width} \
    din124_signed ${din124_signed} \
    din125_width ${din125_width} \
    din125_signed ${din125_signed} \
    din126_width ${din126_width} \
    din126_signed ${din126_signed} \
    din127_width ${din127_width} \
    din127_signed ${din127_signed} \
    din128_width ${din128_width} \
    din128_signed ${din128_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    din65_width ${din65_width} \
    din65_signed ${din65_signed} \
    din66_width ${din66_width} \
    din66_signed ${din66_signed} \
    din67_width ${din67_width} \
    din67_signed ${din67_signed} \
    din68_width ${din68_width} \
    din68_signed ${din68_signed} \
    din69_width ${din69_width} \
    din69_signed ${din69_signed} \
    din70_width ${din70_width} \
    din70_signed ${din70_signed} \
    din71_width ${din71_width} \
    din71_signed ${din71_signed} \
    din72_width ${din72_width} \
    din72_signed ${din72_signed} \
    din73_width ${din73_width} \
    din73_signed ${din73_signed} \
    din74_width ${din74_width} \
    din74_signed ${din74_signed} \
    din75_width ${din75_width} \
    din75_signed ${din75_signed} \
    din76_width ${din76_width} \
    din76_signed ${din76_signed} \
    din77_width ${din77_width} \
    din77_signed ${din77_signed} \
    din78_width ${din78_width} \
    din78_signed ${din78_signed} \
    din79_width ${din79_width} \
    din79_signed ${din79_signed} \
    din80_width ${din80_width} \
    din80_signed ${din80_signed} \
    din81_width ${din81_width} \
    din81_signed ${din81_signed} \
    din82_width ${din82_width} \
    din82_signed ${din82_signed} \
    din83_width ${din83_width} \
    din83_signed ${din83_signed} \
    din84_width ${din84_width} \
    din84_signed ${din84_signed} \
    din85_width ${din85_width} \
    din85_signed ${din85_signed} \
    din86_width ${din86_width} \
    din86_signed ${din86_signed} \
    din87_width ${din87_width} \
    din87_signed ${din87_signed} \
    din88_width ${din88_width} \
    din88_signed ${din88_signed} \
    din89_width ${din89_width} \
    din89_signed ${din89_signed} \
    din90_width ${din90_width} \
    din90_signed ${din90_signed} \
    din91_width ${din91_width} \
    din91_signed ${din91_signed} \
    din92_width ${din92_width} \
    din92_signed ${din92_signed} \
    din93_width ${din93_width} \
    din93_signed ${din93_signed} \
    din94_width ${din94_width} \
    din94_signed ${din94_signed} \
    din95_width ${din95_width} \
    din95_signed ${din95_signed} \
    din96_width ${din96_width} \
    din96_signed ${din96_signed} \
    din97_width ${din97_width} \
    din97_signed ${din97_signed} \
    din98_width ${din98_width} \
    din98_signed ${din98_signed} \
    din99_width ${din99_width} \
    din99_signed ${din99_signed} \
    din100_width ${din100_width} \
    din100_signed ${din100_signed} \
    din101_width ${din101_width} \
    din101_signed ${din101_signed} \
    din102_width ${din102_width} \
    din102_signed ${din102_signed} \
    din103_width ${din103_width} \
    din103_signed ${din103_signed} \
    din104_width ${din104_width} \
    din104_signed ${din104_signed} \
    din105_width ${din105_width} \
    din105_signed ${din105_signed} \
    din106_width ${din106_width} \
    din106_signed ${din106_signed} \
    din107_width ${din107_width} \
    din107_signed ${din107_signed} \
    din108_width ${din108_width} \
    din108_signed ${din108_signed} \
    din109_width ${din109_width} \
    din109_signed ${din109_signed} \
    din110_width ${din110_width} \
    din110_signed ${din110_signed} \
    din111_width ${din111_width} \
    din111_signed ${din111_signed} \
    din112_width ${din112_width} \
    din112_signed ${din112_signed} \
    din113_width ${din113_width} \
    din113_signed ${din113_signed} \
    din114_width ${din114_width} \
    din114_signed ${din114_signed} \
    din115_width ${din115_width} \
    din115_signed ${din115_signed} \
    din116_width ${din116_width} \
    din116_signed ${din116_signed} \
    din117_width ${din117_width} \
    din117_signed ${din117_signed} \
    din118_width ${din118_width} \
    din118_signed ${din118_signed} \
    din119_width ${din119_width} \
    din119_signed ${din119_signed} \
    din120_width ${din120_width} \
    din120_signed ${din120_signed} \
    din121_width ${din121_width} \
    din121_signed ${din121_signed} \
    din122_width ${din122_width} \
    din122_signed ${din122_signed} \
    din123_width ${din123_width} \
    din123_signed ${din123_signed} \
    din124_width ${din124_width} \
    din124_signed ${din124_signed} \
    din125_width ${din125_width} \
    din125_signed ${din125_signed} \
    din126_width ${din126_width} \
    din126_signed ${din126_signed} \
    din127_width ${din127_width} \
    din127_signed ${din127_signed} \
    din128_width ${din128_width} \
    din128_signed ${din128_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 497
set hasByteEnable 0
set MemName dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w10_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 2779
set AddrRange 8
set AddrWd 3
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "1111001111100110000011111111111111110010101101001011111111111111111110110010010011000000000000000100010100110010000000000000000110001111001101000000000000000010011101011101101000000000000000010010001110000100000000000001100101010011100000000000000000001000001001001001000000000000011011111000011101100000000000001001100010000001011111111111111110010100100110011111111111111111110111010110101000000000000000001011101110110101111111111111100011010011110010111111111111101000011110110000111111111111111111001111011000000000000000000011000100000011111111111111111110110000100000010011111111111111110011101110101111111111111111110101000111011101000000000000010000100110001110011111111111101011110100110101000000000000000011110011111111001000000000000001001110101000011111111111111110001010010101010011111111111111111101111001000001000000000000001010101011111000000000000000000001110000011001110000000000000001001000111000110111111111111000111110100011110100000000000000111101101110011101111111111111101000010101011111000000000000001111110011101011100000000000000110001000011100001111111111111010001001001101011111111111111110010011000111001100000000000000100100100000111000000000000000001001101011101100111111111111101101111101011100111111111111110101111100011010111111111111111110100110111001001111111111111101000111101011100011111111111111001100110000101110000000000000100111110000000100000000000000000000010001011100111111111111110010111011001101000000000000000101000111011111101000000000000000110011000110100000000000000000110001100011010010000000000000000110000011010110000000000000000011110111010000100000000000000110111001100101100000000000000001100001111011011000000000000001001001110111110100000000000000100000100110101000000000000000010000101100011111000000000000001010011101111000100000000000000001001000111111111111111111111010111000010100000111111111111111001000011010001011111111111111011000101111010001111111111111010010100011100110000000000000000010000101001100100000000000000010010111011011111111111111111101101000000011011000000000000001010110100111100000000000000001010010111001110000000000000000011001101100010011000000000000000101101101001101111111111111110111101111010100111111111111111100011111010000010000000000000010010101001101110011111111111101111100010011100101111111111110111101000101101101111111111111011101111111010101011111111111110110111101100111111111111111110111011001101100101000000000000010110010010001111000000000000000111010100000101101111111111111001101000010111011111111111111101010011000110011111111111111111110110111101010101111111111111101001010010010000111111111111110010100110000111111111111111110010100110000101100000000000000010100011101101100111111111111101110101100011010011111111111110111000110000000010000000000000011111101001001110" "1110011100000011101111111111111110101110111011100111111111111111000001011000000001000000000000000101111111011001100000000000000110010011001000010000000000000001110011000000111000000000000000000011001011100011111111111110110010110001110001111111111111110111101000011010111111111111100111111100101001100000000000000011111111100110101111111111111011011010010100110111111111111111101111011000100000000000000000011111111011001011111111111111010001100010011011000000000000010011101001101011011111111111111101011001110001111111111111111101111000011010010000000000000010001000001101000111111111111111010111101010111100000000000000010100101111101111000000000000001101011100010001000000000000011000100001011111101111111111111100000101101100110111111111111100000011010000010000000000000000000000101111010001111111111111110000010100011000111111111111101011010000011101011111111111111010100111111110011111111111111001110010011001101111111111111010010000000000000011111111111111000011110101001001111111111111001111111100101111000000000000001101001111000111100000000000000101000100011000111111111111111011100001100000001111111111111111010100010110101100000000000001011110100111010100000000000000101110011110000101000000000000000101101110101000111111111111111001000100110111100000000000000111101101111111001111111111111101100010111010011000000000000001000101110000011111111111111111100111101111001011000000000000110000111010011110100000000000000000011100110010101111111111111110010110000100110000000000000010000001110101101100000000000000111001010011100111111111111110111101001011111000000000000000001101010100011001111111111111101111101101110111001111111111110101100000110011000111111111111100011010010011011111111111111110011101011000001110000000000000110101011111000101111111111111100110100110101100000000000000000101010011110101010000000000000000101011110010010000000000000001100101010001001100000000000001010001101100100000000000000000001001010100010010111111111111101011010011000101100000000000000100100111101001011111111111111010011001000101011000000000000001001010001101100100000000000011110111111111111011111111111111000111110000111000111111111111111001011100100101011111111111110001101100010001001111111111111100001111100110101111111111111111101001000010001000000000000000000001111010101001111111111111101001010100110001000000000000100011010110000011111111111111110110001111111101001111111111111101110011100110000000000000000010010011110010100011111111111111010000101110000001111111111111000001001000000001000000000000000100100011001001100000000000000000110100001010111111111111111110010101100110010111111111111111001111011110111011111111111110011000100010010101111111111111010001000100111000111111111111100101111010001101011111111111111111100111001110100000000000000000100011011101000" "1111000110111011110111111111111111011000101100000001111111111111110001100110000001111111111111111010100111100001011111111111111001000010000011011111111111111011110111011011100111111111111110000001010111101111111111111110100011011110111110000000000001001000110010101110111111111111101001101001101111100000000000001010001111001010100000000000000101101011011101011000000000000001110001000011111111111111111111110101010000101110000000000000000100010111010011111111111111101111000111010111111111111111111100010001011011011111111111111101110101111100100111111111111111000010011010110011111111111110001010010101101100000000000000010110011111111010000000000000001001110010010000111111111111110001000111001111111111111111111011100110011010011111111111111110010000010111110000000000000000010110000011011101111111111111011100100001100000111111111111111010001011110000111111111111111110101100100100001111111111111101110110111011101000000000000001111011111011111000000000000000110011100010011110000000000000000000101110011000111111111111110000010100010111100000000000000000001110001101001111111111111110010001001000011000000000000001110110111101101111111111111111001001001011011110000000000000100100101111000110111111111111111111111011010011011111111111111111110101111100111111111111111100101111100010111000000000000010101100111101110011111111111110111001000111011000000000000000011101011100011101000000000000100101111111111000100000000000000010000010010001111111111111111111010111001110010000000000000001011000011110010111111111111111100010011011001101111111111111111010010011011100111111111111110110111101011100000000000000000001010100110001011111111111111111100001001000101111111111111111100000100110001100000000000000101000110000011000000000000001000111110110101100111111111111100111101101000000011111111111111001110110111110010000000000000010010100101101011111111111111111110110101011011011111111111111101001101110100111111111111111110011111110110110111111111111101011011110011010111111111111111110010010011110110000000000000011101010110011011111111111111110110001101100011100000000000001000111111101111101111111111111101001101000001111111111111111101100101010110010111111111111111001011001010110001111111111111101101101101101101111111111111101011010011010110011111111111111000001101011000101111111111111101110011110111111111111111111011000101110011000111111111111110101111101010101011111111111111101010110110001010111111111111110001101100111110100000000000000001000000011001010000000000000000001010001011101111111111111101001010100111000111111111111110111010100010001011111111111111100111000001000011111111111111101101010100101111111111111111110110010001100011101111111111111110110000110100111111111111111100111000000111111011111111111111000110010000010111111111111111100001010110000001" "0011100011011000110011111111111111101110011111000011111111111111010100011111010100000000000000001010010011010001000000000000000001001110000001101111111111111110010110100111110000000000000010101000111100010111111111111111111111010010111100000000000000000011000011101010000000000000000010101010101111100000000000000110010011100011011111111111111101010010000111100111111111111110111010101111100000000000000000111001101011000101111111111111011101110111100101000000000000000111110100011100000000000000001001000000110101010000000000000011000111000011000000000000000001111110000111001000000000000000001101001011111010000000000000011011000110010110111111111111101010100001111010111111111111110110010001111111100000000000000110111011110011000111111111111111101010000001010011111111111110100010110011000111111111111111011111101001111001000000000000000101010001001100100000000000000010110110111110111111111111111111100111100101100111111111111101101100101111001111111111111111000100010101010110000000000000010101000011000000111111111111101101010111111011100000000000000000101010111000100000000000000110000101110101001111111111111101111101011000111100000000000000001110010100101011111111111111011100011010111110000000000000000000000010010101100000000000001001011111001001111111111111111011010100011110011000000000000100011101001010010100000000000001010000000001000011111111111111111100000101000110111111111111111100010110111010011111111111110111010100011001001111111111111101001001110010111111111111111100101000010010001111111111111111011010001001000110000000000000011100110101010100111111111111111111001001001000100000000000000010111011101001010000000000000011101101110000111111111111111100011101000101010111111111111111001111010000111101111111111111011000011010001101111111111111110010000000000010011111111111110011001010001100110000000000000001011011110100000111111111111100000010100101011011111111111111100010111011110001111111111111100000000100101101111111111111111110010010100001100000000000001101001000011110011111111111111011100110101010000000000000000000011010101000101100000000000001111010000101100000000000000000110011111111110011000000000000001110000100100001000000000000000000101001000010001111111111111100110110011110011111111111111110101101100110000111111111111110010000101011100000000000000000001000111101101111111111111111001110000000000000000000000000000001111111110111011111111111111010110101111101011111111111111100110101011001100011111111111111010010010110110110000000000000001110010011100010111111111111110010100000011010111111111111110010101111101101110000000000000100010111000000000111111111111110100011110011001111111111111111001100001100010111111111111111111011010100010001000000000000010011111000100010111111111111111011110001010011011111111111111010001011100000111" "0100010010100011110111111111111111011000000000000110000000000000110000010000000010111111111111101001111000000001011111111111111010001011010100101111111111111111100011011111111111111111111110110010001111100100000000000000010110100100101000000000000001000010110110101101111111111111111001011100001100011111111111111011011011011100101111111111111101110011001111001000000000000001101010111100101111111111111111000010011000010111111111111111110010111100011000111111111111111011110110101010000000000000001100000100110111000000000000000000101011000110110000000000000010110000110110101100000000000000111111101111000010000000000000000101100010111001000000000000001011000010011111000000000000000110001001100011101111111111111101000010010111101111111111111101010100001110000011111111111110001101110101000011111111111111101100110110001000000000000000000111011100011111111111111111110100101001110111010000000000000010110101001010111111111111111101110101000111011100000000000000101001101111100111111111111111110110101101110100000000000000001110111011101010011111111111111010011111111110101111111111111010011100101001011000000000000001011000100001101111111111111111110110100100100111111111111111111110000000000110000000000000010000011110000010000000000000000111001111101110010000000000000100110101010001011000000000000000010000001101000111111111111111001110000111000011111111111111011111001010110111000000000000011001111111001011011111111111111111011000110010010000000000000010111111110101101111111111111101010100101110110011111111111111010010000011111011111111111111001000111001110110111111111111111011010100100011100000000000000011000000010001011111111111110010001111100101000111111111111101010111111010000011111111111101111001001110100010000000000000000001110010011101111111111111101001111001011100100000000000000101010101100010100000000000000011111010001000111111111111111110100110111100110111111111111111010010110000000010000000000000100000110010000111000000000000001010001101000101111111111111110010110100010110011111111111111111101011001100011111111111111111011111001010011111111111111111111010000001100010000000000000111000010011001100000000000000010000010110010010011111111111110001111101110100011111111111111011001000100110000111111111111110100111111101000011111111111110011011001110000101111111111111101010000011110101000000000000000100011110010010111111111111001110001010101001001111111111111100111110111100111000000000000010011110010011101011111111111111100001010100001001111111111111110000011101011101111111111111110000100000000110000000000000000111111111100101011111111111111010010000001111000000000000000000011010100101011111111111111110110010011101111001111111111111111011100010011010000000000000010111100000101011011111111111111111111110101100000000000000000010111101010100100" "0000111011111100100000000000000000110000111001111100000000000000010010110001100111000000000000001000001111111100111111111111111010101100010101111111111111111110111000011011111000000000000000010011000110010000000000000000000011000101100111111111111111100100111111011010000000000000000000011011110100100000000000000000001001000000100000000000000001101000101111101111111111111011100000100110001111111111111110111001001000001111111111111111101111110100101010000000000000010101000101101011111111111111110011100000010010011111111111111010010001110101111000000000000001000010001111101111111111111110011000100111000001111111111111110100101000100001000000000000010100000011010001111111111111110111100010010010101111111111111010011100101010100000000000000001010010101110000111111111111110001101011101001001111111111111111010001010101111000000000000001001011110100010000000000000000011110011011010011111111111111011110001101101111000000000000000000000011000010100000000000000101111010010101000000000000000011011111010100101000000000000000110111000010100011111111111111100011110011010000000000000000000111101000011001111111111111111101100000110000100000000000001000111010011011011111111111111100100100111001001000000000000001000111101100111011111111111110110100101011110011111111111111010010011011010000000000000000001101111101000101111111111111111100010110100000101111111111111011111100011001111000000000000010011001000001111100000000000000111010101010011000000000000000010011001101011100111111111111101000001011011100011111111111111101001001110001111111111111111001101110110011100111111111111101111000010010111111111111111111101011100111000100000000000001111100010001111001111111111111110010111001010000111111111111111100010001111101000000000000000010000110001111111000000000000000010010000000111100000000000000100011110100111101111111111111000011010110000101000000000000001011010001100010011111111111111010111110010000100000000000000100101101111010100111111111111101001100101101110100000000000001110101011010000010000000000000001011110101111101000000000000001010110110100100111111111111111011000011110101000000000000000101110110100011011111111111111111111000111011100111111111111110110000100111100111111111111111001100101110001100111111111111101001010000010101000000000000000101011100111010000000000000000010111001010001110111111111111101110110010110111111111111111100110101110110110101111111111111111010000101010011111111111111111101101001100111000000000000001000111101111111101111111111111010011010011110100111111111111101011011011010110111111111111110011010111110011100000000000000011001000111101011111111111111111100111010101000000000000000000111011001100110001111111111111101000011000010011111111111111100000010000100110111111111111110110101100010100111111111111111011111011101001100" "0000011111101001011111111111111111011011011110110001111111111111111010111011101100111111111111111110001010101001100000000000000000000110101101010000000000000100111010001011000111111111111111001100110100011011111111111111111000011000000111111111111111011000101000110110000000000000001110010110111100100000000000001000110001101101100000000000000000101010100000110000000000000001100010000011111100000000000000110011111101001011111111111111101111010100101010000000000000010001101100110100000000000000001010110101011110101111111111111110101101111111010000000000000000100111010110010111111111111110001111001001010100000000000000001110001001001111111111111111110001100110010111000000000000000010101010101101100000000000000000101001100101110000000000000001100000011101110100000000000001000100001100110001111111111111101000111101110001111111111111110000100010010101111111111111110011010101000010000000000000000000000011011010010000000000000001000011101010110000000000000001111011100110100011111111111111011111010101001111111111111111110101111001100101100000000000001011101001111111001111111111111100100001111110011000000000000000001000101111010100000000000001011100010011001011111111111111110111000110010000111111111111110101101101111101011111111111110110011010011111000000000000000101001100110010110111111111111110101110100100000011111111111111011111000111000111111111111111010000011101010001111111111111111101100010000010011111111111111110110011000001001111111111111100011010100010100000000000000001000111100000001011111111111111010111000110000001111111111111101011110011111001111111111111111001111011110100111111111111111111000110111001001111111111110001011100111010010111111111111111001010111011100000000000000000111110010001010011111111111110111000001111001001000000000000000001000100110100000000000000000010101010010111101111111111111100011111101001101000000000000001100101000110010111111111111111011001011011111100000000000000000010001011001010111111111111100101101000111010111111111111111101110101100110110000000000000010000001101101101000000000000000100010010010000111111111111110111010110110001100000000000000100111000000111101000000000000001000000000010001011111111111110101110101101000101111111111111101100000111010100000000000000001111000100011001011111111111110110010011011000101111111111111010010000110000110000000000000000100000011001011100000000000001001011001011101011111111111111001111001000011111111111111111011100100001111110000000000000000010101001110000111111111111111111001100011011111000000000000010000010111110101100000000000000100110110111001110000000000000010011111010001101000000000000001010100011110000100000000000000100001001111111011111111111111011110110010110100111111111111111111111111000110100000000000001000011000000010000000000000000000001000000111001" "0010010110111100010000000000000001000011110001110011111111111111001000011110000011111111111111111101000100011110011111111111110100101110110101101111111111111111000010110000011111111111111111101110101010011000000000000000100001100010111111111111111111010111000100001010000000000000001111110100110010011111111111111001010100111001101111111111111100001000101110101111111111111111011111010010100111111111111111110001100110001000000000000000101100110010011110000000000000000010010101001010100000000000000111101010100111100000000000000101001001110001111111111111111111001100011111100011111111111110100100111011100100000000000000000010000001001000111111111111110100101110001001011111111111110110010111011101101111111111100010010101101100001111111111111101100010100001011000000000000000011100110001011110000000000000000110001000110101000000000000000000101100000001000000000000000100100100101011011111111111111100010010011100110000000000000001101010010000010000000000000001111000100110111011111111111111001011110111111111000000000000000010110011101100000000000000000111101010000000000000000000000100000101100111101000000000000010000110110111101000000000000000001110100010001110000000000000011101110100011100111111111111110100000011010010011111111111111010110100000001101111111111111011000010000011101111111111111110110000100000111100000000000001000010011010011000000000000000010001011110111000000000000000011101111111100001000000000000010110110000111001111111111111111110001000100111000000000000000000010111001000101111111111111110100010011010000111111111111111111110001110000000111111111111100000100111101011100000000000000010000111101011011111111111110100110101000000110111111111111110010111101111111011111111111110101011000110100111111111111111100001010100000011111111111111111100100110011010111111111111110001101010101101000000000000000010010000110000101111111111111111011111101001111100000000000000111000001100001010000000000000011100010010111110000000000000000011111000110111011111111111110111001100111010011111111111111011001001010111110111111111111111100110101101111100000000000000000100001000111110000000000000101110110100001101111111111111110100101000010011100000000000000001100101101100100000000000000001010010110010011111111111111110011100110101110011111111111111111100100100110111111111111111101100101010111000111111111111100010100011011100000000000000001111000111100001010000000000000010001101000000101111111111111100110110101000101000000000000010000111100000100111111111111111011111001011000001000000000000001011010010000001100000000000000100111010100011100000000000000011101001110010111000000000000001100111110101111000000000000000000011000100111101111111111111111111110010111011000000000000010000101001101101111111111111110011101010111010101111111111111011100110000011110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.771
set ClkPeriod 6
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP_BRAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 498 \
    name data_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_0_V_read \
    op interface \
    ports { data_0_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 499 \
    name data_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_1_V_read \
    op interface \
    ports { data_1_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 500 \
    name data_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_2_V_read \
    op interface \
    ports { data_2_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 501 \
    name data_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_3_V_read \
    op interface \
    ports { data_3_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 502 \
    name data_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_4_V_read \
    op interface \
    ports { data_4_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 503 \
    name data_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_5_V_read \
    op interface \
    ports { data_5_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 504 \
    name data_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_6_V_read \
    op interface \
    ports { data_6_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 505 \
    name data_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_7_V_read \
    op interface \
    ports { data_7_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 506 \
    name data_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_8_V_read \
    op interface \
    ports { data_8_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 507 \
    name data_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_9_V_read \
    op interface \
    ports { data_9_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 508 \
    name data_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_10_V_read \
    op interface \
    ports { data_10_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 509 \
    name data_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_11_V_read \
    op interface \
    ports { data_11_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 510 \
    name data_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_12_V_read \
    op interface \
    ports { data_12_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 511 \
    name data_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_13_V_read \
    op interface \
    ports { data_13_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 512 \
    name data_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_14_V_read \
    op interface \
    ports { data_14_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 513 \
    name data_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_15_V_read \
    op interface \
    ports { data_15_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 514 \
    name data_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_16_V_read \
    op interface \
    ports { data_16_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 515 \
    name data_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_17_V_read \
    op interface \
    ports { data_17_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 516 \
    name data_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_18_V_read \
    op interface \
    ports { data_18_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 517 \
    name data_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_19_V_read \
    op interface \
    ports { data_19_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 518 \
    name data_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_20_V_read \
    op interface \
    ports { data_20_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 519 \
    name data_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_21_V_read \
    op interface \
    ports { data_21_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 520 \
    name data_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_22_V_read \
    op interface \
    ports { data_22_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 521 \
    name data_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_23_V_read \
    op interface \
    ports { data_23_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 522 \
    name data_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_24_V_read \
    op interface \
    ports { data_24_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 523 \
    name data_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_25_V_read \
    op interface \
    ports { data_25_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 524 \
    name data_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_26_V_read \
    op interface \
    ports { data_26_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 525 \
    name data_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_27_V_read \
    op interface \
    ports { data_27_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 526 \
    name data_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_28_V_read \
    op interface \
    ports { data_28_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 527 \
    name data_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_29_V_read \
    op interface \
    ports { data_29_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 528 \
    name data_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_30_V_read \
    op interface \
    ports { data_30_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 529 \
    name data_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_31_V_read \
    op interface \
    ports { data_31_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 530 \
    name data_32_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_32_V_read \
    op interface \
    ports { data_32_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 531 \
    name data_33_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_33_V_read \
    op interface \
    ports { data_33_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 532 \
    name data_34_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_34_V_read \
    op interface \
    ports { data_34_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 533 \
    name data_35_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_35_V_read \
    op interface \
    ports { data_35_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 534 \
    name data_36_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_36_V_read \
    op interface \
    ports { data_36_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 535 \
    name data_37_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_37_V_read \
    op interface \
    ports { data_37_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 536 \
    name data_38_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_38_V_read \
    op interface \
    ports { data_38_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 537 \
    name data_39_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_39_V_read \
    op interface \
    ports { data_39_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 538 \
    name data_40_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_40_V_read \
    op interface \
    ports { data_40_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 539 \
    name data_41_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_41_V_read \
    op interface \
    ports { data_41_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 540 \
    name data_42_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_42_V_read \
    op interface \
    ports { data_42_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 541 \
    name data_43_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_43_V_read \
    op interface \
    ports { data_43_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 542 \
    name data_44_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_44_V_read \
    op interface \
    ports { data_44_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 543 \
    name data_45_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_45_V_read \
    op interface \
    ports { data_45_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 544 \
    name data_46_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_46_V_read \
    op interface \
    ports { data_46_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 545 \
    name data_47_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_47_V_read \
    op interface \
    ports { data_47_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 546 \
    name data_48_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_48_V_read \
    op interface \
    ports { data_48_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 547 \
    name data_49_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_49_V_read \
    op interface \
    ports { data_49_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 548 \
    name data_50_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_50_V_read \
    op interface \
    ports { data_50_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 549 \
    name data_51_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_51_V_read \
    op interface \
    ports { data_51_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 550 \
    name data_52_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_52_V_read \
    op interface \
    ports { data_52_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 551 \
    name data_53_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_53_V_read \
    op interface \
    ports { data_53_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 552 \
    name data_54_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_54_V_read \
    op interface \
    ports { data_54_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 553 \
    name data_55_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_55_V_read \
    op interface \
    ports { data_55_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 554 \
    name data_56_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_56_V_read \
    op interface \
    ports { data_56_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 555 \
    name data_57_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_57_V_read \
    op interface \
    ports { data_57_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 556 \
    name data_58_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_58_V_read \
    op interface \
    ports { data_58_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 557 \
    name data_59_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_59_V_read \
    op interface \
    ports { data_59_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 558 \
    name data_60_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_60_V_read \
    op interface \
    ports { data_60_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 559 \
    name data_61_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_61_V_read \
    op interface \
    ports { data_61_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 560 \
    name data_62_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_62_V_read \
    op interface \
    ports { data_62_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 561 \
    name data_63_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_63_V_read \
    op interface \
    ports { data_63_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 562 \
    name data_64_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_64_V_read \
    op interface \
    ports { data_64_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 563 \
    name data_65_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_65_V_read \
    op interface \
    ports { data_65_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 564 \
    name data_66_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_66_V_read \
    op interface \
    ports { data_66_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 565 \
    name data_67_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_67_V_read \
    op interface \
    ports { data_67_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 566 \
    name data_68_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_68_V_read \
    op interface \
    ports { data_68_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 567 \
    name data_69_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_69_V_read \
    op interface \
    ports { data_69_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 568 \
    name data_70_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_70_V_read \
    op interface \
    ports { data_70_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 569 \
    name data_71_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_71_V_read \
    op interface \
    ports { data_71_V_read { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


