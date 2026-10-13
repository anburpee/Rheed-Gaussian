# This script segment is generated automatically by AutoPilot

set id 409
set name myproject_mux_83_25_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 25
set din0_signed 0
set din1_width 25
set din1_signed 0
set din2_width 25
set din2_signed 0
set din3_width 25
set din3_signed 0
set din4_width 25
set din4_signed 0
set din5_width 25
set din5_signed 0
set din6_width 25
set din6_signed 0
set din7_width 25
set din7_signed 0
set din8_width 3
set din8_signed 0
set dout_width 25
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


set id 410
set name myproject_mux_1287_25_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 25
set din0_signed 0
set din1_width 25
set din1_signed 0
set din2_width 25
set din2_signed 0
set din3_width 25
set din3_signed 0
set din4_width 25
set din4_signed 0
set din5_width 25
set din5_signed 0
set din6_width 25
set din6_signed 0
set din7_width 25
set din7_signed 0
set din8_width 25
set din8_signed 0
set din9_width 25
set din9_signed 0
set din10_width 25
set din10_signed 0
set din11_width 25
set din11_signed 0
set din12_width 25
set din12_signed 0
set din13_width 25
set din13_signed 0
set din14_width 25
set din14_signed 0
set din15_width 25
set din15_signed 0
set din16_width 25
set din16_signed 0
set din17_width 25
set din17_signed 0
set din18_width 25
set din18_signed 0
set din19_width 25
set din19_signed 0
set din20_width 25
set din20_signed 0
set din21_width 25
set din21_signed 0
set din22_width 25
set din22_signed 0
set din23_width 25
set din23_signed 0
set din24_width 25
set din24_signed 0
set din25_width 25
set din25_signed 0
set din26_width 25
set din26_signed 0
set din27_width 25
set din27_signed 0
set din28_width 25
set din28_signed 0
set din29_width 25
set din29_signed 0
set din30_width 25
set din30_signed 0
set din31_width 25
set din31_signed 0
set din32_width 25
set din32_signed 0
set din33_width 25
set din33_signed 0
set din34_width 25
set din34_signed 0
set din35_width 25
set din35_signed 0
set din36_width 25
set din36_signed 0
set din37_width 25
set din37_signed 0
set din38_width 25
set din38_signed 0
set din39_width 25
set din39_signed 0
set din40_width 25
set din40_signed 0
set din41_width 25
set din41_signed 0
set din42_width 25
set din42_signed 0
set din43_width 25
set din43_signed 0
set din44_width 25
set din44_signed 0
set din45_width 25
set din45_signed 0
set din46_width 25
set din46_signed 0
set din47_width 25
set din47_signed 0
set din48_width 25
set din48_signed 0
set din49_width 25
set din49_signed 0
set din50_width 25
set din50_signed 0
set din51_width 25
set din51_signed 0
set din52_width 25
set din52_signed 0
set din53_width 25
set din53_signed 0
set din54_width 25
set din54_signed 0
set din55_width 25
set din55_signed 0
set din56_width 25
set din56_signed 0
set din57_width 25
set din57_signed 0
set din58_width 25
set din58_signed 0
set din59_width 25
set din59_signed 0
set din60_width 25
set din60_signed 0
set din61_width 25
set din61_signed 0
set din62_width 25
set din62_signed 0
set din63_width 25
set din63_signed 0
set din64_width 25
set din64_signed 0
set din65_width 25
set din65_signed 0
set din66_width 25
set din66_signed 0
set din67_width 25
set din67_signed 0
set din68_width 25
set din68_signed 0
set din69_width 25
set din69_signed 0
set din70_width 25
set din70_signed 0
set din71_width 25
set din71_signed 0
set din72_width 25
set din72_signed 0
set din73_width 25
set din73_signed 0
set din74_width 25
set din74_signed 0
set din75_width 25
set din75_signed 0
set din76_width 25
set din76_signed 0
set din77_width 25
set din77_signed 0
set din78_width 25
set din78_signed 0
set din79_width 25
set din79_signed 0
set din80_width 25
set din80_signed 0
set din81_width 25
set din81_signed 0
set din82_width 25
set din82_signed 0
set din83_width 25
set din83_signed 0
set din84_width 25
set din84_signed 0
set din85_width 25
set din85_signed 0
set din86_width 25
set din86_signed 0
set din87_width 25
set din87_signed 0
set din88_width 25
set din88_signed 0
set din89_width 25
set din89_signed 0
set din90_width 25
set din90_signed 0
set din91_width 25
set din91_signed 0
set din92_width 25
set din92_signed 0
set din93_width 25
set din93_signed 0
set din94_width 25
set din94_signed 0
set din95_width 25
set din95_signed 0
set din96_width 25
set din96_signed 0
set din97_width 25
set din97_signed 0
set din98_width 25
set din98_signed 0
set din99_width 25
set din99_signed 0
set din100_width 25
set din100_signed 0
set din101_width 25
set din101_signed 0
set din102_width 25
set din102_signed 0
set din103_width 25
set din103_signed 0
set din104_width 25
set din104_signed 0
set din105_width 25
set din105_signed 0
set din106_width 25
set din106_signed 0
set din107_width 25
set din107_signed 0
set din108_width 25
set din108_signed 0
set din109_width 25
set din109_signed 0
set din110_width 25
set din110_signed 0
set din111_width 25
set din111_signed 0
set din112_width 25
set din112_signed 0
set din113_width 25
set din113_signed 0
set din114_width 25
set din114_signed 0
set din115_width 25
set din115_signed 0
set din116_width 25
set din116_signed 0
set din117_width 25
set din117_signed 0
set din118_width 25
set din118_signed 0
set din119_width 25
set din119_signed 0
set din120_width 25
set din120_signed 0
set din121_width 25
set din121_signed 0
set din122_width 25
set din122_signed 0
set din123_width 25
set din123_signed 0
set din124_width 25
set din124_signed 0
set din125_width 25
set din125_signed 0
set din126_width 25
set din126_signed 0
set din127_width 25
set din127_signed 0
set din128_width 7
set din128_signed 0
set dout_width 25
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


set id 499
set name myproject_mul_mul_25ns_16s_41_1_1
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 25
set in0_signed 0
set in1_width 16
set in1_signed 1
set out_width 41
set exp i0*i1
set arg_lists {i0 {25 0 +} i1 {16 1 +} p {41 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 503
set hasByteEnable 0
set MemName dense_resource_rf_leq_nin_0_0_0_0_0_0_0_0_0_0_0_w10_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 2241
set AddrRange 8
set AddrWd 3
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "111100111110011011111111111111001010110101111111111111111011001001000000000000010001010011000000000000011000111100110000000000001001110101111000000000000001001000111000000000000110010101001110000000000000100000100101000000000001101111100010000000000000100110001000001111111111111001010010011111111111111111011101011100000000000000101110111101111111111110001101001111111111111110100001111011011111111111111100111101100000000000001100010000010111111111111011000010000011111111111111001110111011111111111111010100011110000000000001000010011001011111111110101111010011010000000000001111010000000000000000000100111010100011111111111000101001010111111111111111110111100100000000000000101010101111100000000000000111000001100000000000000100100011100111111111100011111010010000000000000011110110111011111111111110100001010110000000000000111111001110100000000000011000100001111111111111101000100100111111111111111001001100011100000000000010010010000100000000000000100110101111111111111110110111110110011111111111010111110001111111111111111010011011101111111111110100011110101111111111111100110011000010000000000010011111000000000000000000000001000110011111111111001011101100110000000000010100011110000000000000000011001100011000000000000011000110001110000000000000011000001101000000000000001111011101000000000000011011100110010000000000000110000111110000000000000100100111100000000000000010000010011010000000000001000010110010000000000000101001110111100000000000000100100100001111111111101011100001010111111111111100100001101011111111111101100010111111111111111101001010001110000000000000001000010101000000000000001001011101111111111111110110100000010000000000000101011010100000000000000101001011101000000000000001100110110001000000000000010110110101011111111111011110111101011111111111110001111101000000000000001001010100111011111111110111110001001111111111111011110100010111111111111101110111111101111111111111011011110110101111111111011101100110110000000000001011001001001000000000000011101010000011111111111100110100001100111111111110101001100011011111111111111011011110111111111111110100101001001111111111111001010011000111111111111001010011000010000000000001010001110111111111111110111010110001111111111111011100011000000000000000001111110100101" "111001110000010011111111111010111011101111111111111100000101100000000000000000010111111101100000000000011001001100100000000000000111001100000000000000000000001100110011111111111011001011001001111111111111011110100010111111111110011111110010100000000000001111111110101111111111101101101001010111111111111110111101100100000000000001111111101101111111111101000110001010000000000001001110100110111111111111110101100111001111111111110111100001101000000000001000100000110111111111111101011110101100000000000001010010111111000000000000110101110001000000000001100010000110001111111111110000010110110111111111110000001101000000000000000000000010111111111111111111000001010010111111111110101101000010011111111111101010100000001111111111100111001001101111111111101001000000000011111111111100001111010101111111111100111111110011000000000000110100111100100000000000010100010001101111111111101110000110000111111111111101010001011100000000000101111010011110000000000010111001111000000000000000010110111010111111111111100100010011100000000000011110111000000111111111110110001011101000000000000100010111000011111111111110011110111101000000000011000011101010000000000000000001110011011111111111111001011000010000000000001000000111011000000000000011100101001111111111111011110100101111000000000000110101010001111111111110111110110111101111111111010110000011010111111111110001101001001111111111111001110101100000000000000011010101111100111111111110011010011011000000000000010101001111010000000000000010101111001000000000000110010101000100000000000101000110110010000000000000100101010001111111111110101101001100100000000000010010011110101111111111101001100100011000000000000100101000111000000000001111100000000001111111111100011111000011111111111111100101110010111111111111000110110001001111111111110000111110011111111111111110100100001000000000000000000111101011111111111110100101010011000000000010001101011000011111111111011000111111111111111111110111001110011000000000001001001111001111111111111101000010111001111111111100000100100000000000000000010010001100100000000000000011010000111111111111111001010110011111111111111100111101111111111111111001100010001011111111111101000100010100111111111110010111101001011111111111111110011101000000000000000010001101110" "111100011011110011111111111101100010110001111111111111000110011000111111111111101010011110011111111111100100001000011111111111101111011101110111111111111000000101100011111111111010001101111100000000000100100011001011111111111110100110100111000000000000101000111100110000000000010110101101111000000000000111000100010011111111111111010101000010000000000000010001011101111111111110111100011101111111111111110001000101111111111111110111010111110111111111111100001001101111111111111000101001010110000000000001011010000000000000000000100111001001011111111111000100011101001111111111101110011001101111111111111001000001100000000000000001011000001111111111111101110010000110111111111111101000101111011111111111111010110010011111111111110111011011110000000000000111101111110000000000000011001110001010000000000000000010111001111111111111000001010001100000000000000000111000111111111111111001000100100000000000000111011011111011111111111100100100101110000000000010010010111100111111111111111111101101011111111111111111010111111111111111110010111110001000000000001010110011111011111111111011100100011110000000000001110101110010000000000010010111111111100000000000001000001001001111111111111101011100111000000000000101100001111011111111111110001001101101111111111111101001001110111111111111011011110110000000000000000101010011001111111111111110000100100111111111111110000010011000000000000010100011000010000000000100011111011011111111111110011110110100011111111111100111011100000000000000001001010010111111111111111111011010101111111111111110100110111011111111111111001111111011111111111110101101111001111111111111111001001010000000000000001110101011010111111111111011000110110000000000000100011111111001111111111110100110100001111111111110110010101011011111111111100101100101011111111111110110110110111111111111110101101001101111111111111100000110101101111111111110111001111100111111111101100010111001111111111111010111110101011111111111110101011011001111111111111000110110100000000000000000100000001100000000000000000101000110111111111110100101010011111111111111011101010001001111111111110011100000100111111111110110101010011011111111111011001000110011111111111111011000011010111111111110011100000100011111111111100011001000011111111111110000101011000" "001110001101100111111111111110111001111101111111111101010001111101000000000000101001001101000000000000000100111000001111111111111001011010100000000000001010100011110011111111111111111101001100000000000000001100001111000000000000001010101011000000000000011001001110011111111111110101001000100111111111111011101010111100000000000011100110101101111111111101110111011110000000000000011111010010000000000000100100000011010000000000001100011100010000000000000111111000011100000000000000110100110000000000000001101100011001111111111110101010000111111111111111011001001000000000000000011011101111010111111111111110101000000111111111111010001011001101111111111101111110101000000000000000010101000101000000000000001011011100001111111111111110011110011111111111110110110010111111111111111100010001010110000000000001010100001100111111111110110101011111100000000000000010101011100000000000011000010111011111111111110111110101100100000000000000111001010011111111111101110001101100000000000000000000001001100000000000100101111100101111111111101101010001111000000000010001110100101000000000000101000000000101111111111111110000010100111111111111110001011011111111111111011101010001101111111111110100100111001111111111110010100001001011111111111101101000100100000000000001110011010101111111111111111100100100100000000000001011101110100000000000001110110111000111111111110001110100010111111111111100111101000101111111111101100001101001111111111111001000000000011111111111001100101000110000000000000101101111010111111111110000001010010111111111111110001011110001111111111110000000010011111111111111111001001010000000000000110100100010001111111111101110011010101000000000000001101010100100000000000111101000010110000000000011001111111111000000000000111000010010000000000000000010100100001111111111110011011001111111111111111010110110011011111111111001000010101110000000000000100011110111111111111100111000000000000000000000000111111111101111111111101011010111111111111111110011010101101011111111111101001001011100000000000000111001001110111111111111001010000001111111111111001010111110110000000000010001011100000111111111111010001111001111111111111100110000110011111111111111101101010001000000000001001111100010011111111111101111000101011111111111101000101110000" "010001001010010011111111111101100000000000000000000011000001000000111111111110100111100000011111111111101000101101011111111111111110001110000111111111111011001001000000000000000001011010010010000000000100001011011011111111111111100101110000111111111111101101101101111111111111110111001101000000000000000110101011110111111111111100001001100011111111111111001011110010111111111111101111011010100000000000110000010011100000000000000010101100011000000000001011000011011100000000000011111110111100000000000000010110001100000000000000101100001010000000000000011000100110011111111111110100001001100111111111110101010000111011111111111000110111010101111111111110110011011001000000000000011101110010011111111111010010100111100000000000001011010100101111111111110111010100011100000000000010100110111111111111111111011010110111000000000000111011101110111111111111101010000000001111111111101001110010101000000000000101100010001011111111111111011010010011111111111111111000000000000000000001000001111000000000000000011100111111000000000000010011010101001000000000000001000000110111111111111100111000011101111111111101111100101011000000000001100111111100111111111111111101100011010000000000001011111111011111111111110101010010111111111111111101001000010001111111111100100011100111111111111111101101010010000000000000001100000001001111111111001000111110010111111111110101011111101011111111110111100100111010000000000000000111001010111111111110100111100110000000000000010101010110010000000000001111101000100111111111111010011011110111111111111101001011000000000000000010000011001000000000000000101000110100111111111111001011010001101111111111111110101100110111111111111101111100101011111111111111101000000110000000000011100001001101000000000001000001011001011111111111000111110111011111111111101100100010011111111111111010011111110111111111111001101100111001111111111110101000001111000000000000010001111001011111111100111000101010101111111111110011111011110000000000001001111001010011111111111110000101010001111111111111000001110110111111111111000010000000100000000000011111111110011111111111101001000001000000000000000001101010010111111111111011001001111001111111111111101110001010000000000001011110000010111111111111111111111010110000000000001011110101010" "000011101111110000000000000011000011101000000000000001001011000110000000000000100001000000011111111111101010110001011111111111111011100001110000000000000001001100011000000000000000001100010111111111111110010011111110000000000000000001101111100000000000000000100100000000000000000110100011000111111111101110000010011011111111111011100100100001111111111110111111010011000000000001010100010110111111111111001110000001011111111111101001000111011000000000000100001001000011111111111001100010011101111111111111010010100010000000000001010000001101011111111111011110001001011111111111101001110010101000000000000101001010111011111111111000110101110101111111111111101000101011000000000000100101111010000000000000001111001101111111111111101111000110111000000000000000000001100000000000000010111101001010000000000001101111101010000000000000011011100001011111111111110001111001100000000000000011110100010111111111111110110000011000000000000100011101001111111111111110010010011101000000000000100011110110111111111111011010010110001111111111101001001101101000000000000110111110100111111111111110001011010001111111111101111110001101000000000001001100100001000000000000011101010101010000000000001001100110110111111111110100000101110011111111111110100100111001111111111100110111011010111111111110111100001001111111111111110101110011100000000000111110001001000111111111111001011100101011111111111110001000111110000000000001000011001000000000000000001001000000100000000000010001111010101111111111100001101011000000000000000101101000110011111111111101011111001000000000000010010110111101111111111110100110010111000000000000111010101101000000000000000101111011000000000000000101011011010111111111111101100001111010000000000010111011010010111111111111111100011110011111111111011000010011111111111111100110010111001111111111110100101000001100000000000010101110011100000000000001011100101001111111111110111011001011111111111110011010111011101111111111111101000010101111111111111110110100110100000000000100011111000001111111111101001101001111111111111110101101101101111111111111001101011111010000000000001100100011111111111111111110011101010100000000000011101100110011111111111110100001100001111111111110000001000010111111111111011010110001011111111111101111101110101" "000001111110100111111111111101101101111101111111111111101011101111111111111111111000101010100000000000000000011010110000000000010011101000110111111111111100110011010011111111111111100001100001111111111101100010100011000000000000111001011100000000000000100011000110110000000000000010101010000000000000000110001000010000000000000011001111110101111111111110111101010011000000000001000110110011100000000000101011010110001111111111111010111000000000000000000010011101011011111111111000111100100110000000000000111000100101111111111111000110011001100000000000001010101010110000000000000010100110011000000000000110000001111000000000000100010000110101111111111110100011110111111111111111000010001001111111111111001101010100000000000000000000001101101000000000000100001110101100000000000111101110011011111111111101111101010101111111111111010111100110100000000000101110101000001111111111110010000111111000000000000000100010111100000000000101110001001101111111111111011100011001111111111111010110111000011111111111011001101010000000000000010100110011001111111111111010111010010011111111111101111100011101111111111101000001110101111111111111110110001000011111111111111011001100001111111111110001101010001000000000000100011110000011111111111101011100011001111111111110101111010000111111111111100111101111111111111111111100011011101111111111000101110011101111111111111100101011110000000000000011111001000111111111111011100000111101000000000000000100010011100000000000001010101001101111111111110001111110101000000000000110010100011011111111111101100101110000000000000000001000101101111111111110010110100011111111111111110111010110100000000000001000000110111000000000000010001001001011111111111011101011011000000000000010011100000100000000000000100000000001011111111111010111010110101111111111110110000011101000000000000111100010001111111111111011001001101101111111111101001000011000000000000000010000001100100000000000100101100101111111111111100111100100010111111111101110010001000000000000000001010100111001111111111111100110001110000000000001000001011111100000000000010011011011100000000000001001111101001000000000000101010001111000000000000010000101000001111111111101111011001011111111111111111111111100100000000000100001100000000000000000000000100000100" "001001011011110000000000000100001111001001111111111100100001111000111111111111110100010010011111111111010010111011011111111111111100001011000111111111111110111010101000000000000010000110001101111111111101011100010001000000000000111111010011011111111111100101010011101111111111110000100010111111111111111101111101001111111111111111000110011000000000000010110011001010000000000000001001010100100000000000011110101010100000000000010100100111001111111111111100110010000011111111111010010011101110000000000000001000000100111111111111010010111000111111111111011001011101111111111110001001010110110111111111110110001010000100000000000001110011000110000000000000011000100011000000000000000010110000000000000000010010010010111111111111110001001001110000000000000110101001000000000000000111100010011101111111111100101111100000000000000000001011001110100000000000011110101000000000000000010000010110100000000000001000011011100000000000000000111010001000000000000001110111010010111111111111010000001101011111111111101011010000001111111111101100001000010111111111111011000010000100000000000100001001101010000000000001000101111011000000000001110111111110000000000001011011000011101111111111111000100010100000000000000001011100100111111111111010001001101001111111111111111000111000111111111110000010011110100000000000001000011110111111111111010011010100000111111111111001011111000011111111111010101100011011111111111110000101010000111111111111110010011001111111111111000110101010110000000000001001000011000111111111111101111110101000000000000011100000110000000000000001110001001100000000000000001111100011111111111111011100110011111111111111101100100101100111111111111110011010111000000000000000010000100100000000000010111011010001111111111111010010100001000000000000000110010110110000000000000101001011001111111111111001110011011011111111111111110010010101111111111110110010101100111111111110001010001110000000000000111100011110000000000000001000110100000111111111110011011010100100000000001000011110000011111111111101111100101100000000000000101101001000000000000000010011101010010000000000001110100111001000000000000110011111011000000000000000001100010101111111111111111111001100000000000001000010100111011111111111001110101011111111111111101110011000010" }
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
    id 504 \
    name data_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_0_V_read \
    op interface \
    ports { data_0_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 505 \
    name data_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_1_V_read \
    op interface \
    ports { data_1_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 506 \
    name data_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_2_V_read \
    op interface \
    ports { data_2_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 507 \
    name data_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_3_V_read \
    op interface \
    ports { data_3_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 508 \
    name data_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_4_V_read \
    op interface \
    ports { data_4_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 509 \
    name data_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_5_V_read \
    op interface \
    ports { data_5_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 510 \
    name data_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_6_V_read \
    op interface \
    ports { data_6_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 511 \
    name data_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_7_V_read \
    op interface \
    ports { data_7_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 512 \
    name data_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_8_V_read \
    op interface \
    ports { data_8_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 513 \
    name data_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_9_V_read \
    op interface \
    ports { data_9_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 514 \
    name data_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_10_V_read \
    op interface \
    ports { data_10_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 515 \
    name data_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_11_V_read \
    op interface \
    ports { data_11_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 516 \
    name data_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_12_V_read \
    op interface \
    ports { data_12_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 517 \
    name data_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_13_V_read \
    op interface \
    ports { data_13_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 518 \
    name data_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_14_V_read \
    op interface \
    ports { data_14_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 519 \
    name data_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_15_V_read \
    op interface \
    ports { data_15_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 520 \
    name data_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_16_V_read \
    op interface \
    ports { data_16_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 521 \
    name data_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_17_V_read \
    op interface \
    ports { data_17_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 522 \
    name data_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_18_V_read \
    op interface \
    ports { data_18_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 523 \
    name data_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_19_V_read \
    op interface \
    ports { data_19_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 524 \
    name data_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_20_V_read \
    op interface \
    ports { data_20_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 525 \
    name data_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_21_V_read \
    op interface \
    ports { data_21_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 526 \
    name data_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_22_V_read \
    op interface \
    ports { data_22_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 527 \
    name data_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_23_V_read \
    op interface \
    ports { data_23_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 528 \
    name data_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_24_V_read \
    op interface \
    ports { data_24_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 529 \
    name data_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_25_V_read \
    op interface \
    ports { data_25_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 530 \
    name data_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_26_V_read \
    op interface \
    ports { data_26_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 531 \
    name data_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_27_V_read \
    op interface \
    ports { data_27_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 532 \
    name data_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_28_V_read \
    op interface \
    ports { data_28_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 533 \
    name data_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_29_V_read \
    op interface \
    ports { data_29_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 534 \
    name data_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_30_V_read \
    op interface \
    ports { data_30_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 535 \
    name data_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_31_V_read \
    op interface \
    ports { data_31_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 536 \
    name data_32_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_32_V_read \
    op interface \
    ports { data_32_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 537 \
    name data_33_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_33_V_read \
    op interface \
    ports { data_33_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 538 \
    name data_34_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_34_V_read \
    op interface \
    ports { data_34_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 539 \
    name data_35_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_35_V_read \
    op interface \
    ports { data_35_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 540 \
    name data_36_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_36_V_read \
    op interface \
    ports { data_36_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 541 \
    name data_37_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_37_V_read \
    op interface \
    ports { data_37_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 542 \
    name data_38_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_38_V_read \
    op interface \
    ports { data_38_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 543 \
    name data_39_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_39_V_read \
    op interface \
    ports { data_39_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 544 \
    name data_40_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_40_V_read \
    op interface \
    ports { data_40_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 545 \
    name data_41_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_41_V_read \
    op interface \
    ports { data_41_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 546 \
    name data_42_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_42_V_read \
    op interface \
    ports { data_42_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 547 \
    name data_43_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_43_V_read \
    op interface \
    ports { data_43_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 548 \
    name data_44_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_44_V_read \
    op interface \
    ports { data_44_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 549 \
    name data_45_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_45_V_read \
    op interface \
    ports { data_45_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 550 \
    name data_46_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_46_V_read \
    op interface \
    ports { data_46_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 551 \
    name data_47_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_47_V_read \
    op interface \
    ports { data_47_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 552 \
    name data_48_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_48_V_read \
    op interface \
    ports { data_48_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 553 \
    name data_49_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_49_V_read \
    op interface \
    ports { data_49_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 554 \
    name data_50_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_50_V_read \
    op interface \
    ports { data_50_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 555 \
    name data_51_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_51_V_read \
    op interface \
    ports { data_51_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 556 \
    name data_52_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_52_V_read \
    op interface \
    ports { data_52_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 557 \
    name data_53_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_53_V_read \
    op interface \
    ports { data_53_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 558 \
    name data_54_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_54_V_read \
    op interface \
    ports { data_54_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 559 \
    name data_55_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_55_V_read \
    op interface \
    ports { data_55_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 560 \
    name data_56_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_56_V_read \
    op interface \
    ports { data_56_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 561 \
    name data_57_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_57_V_read \
    op interface \
    ports { data_57_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 562 \
    name data_58_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_58_V_read \
    op interface \
    ports { data_58_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 563 \
    name data_59_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_59_V_read \
    op interface \
    ports { data_59_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 564 \
    name data_60_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_60_V_read \
    op interface \
    ports { data_60_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 565 \
    name data_61_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_61_V_read \
    op interface \
    ports { data_61_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 566 \
    name data_62_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_62_V_read \
    op interface \
    ports { data_62_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 567 \
    name data_63_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_63_V_read \
    op interface \
    ports { data_63_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 568 \
    name data_64_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_64_V_read \
    op interface \
    ports { data_64_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 569 \
    name data_65_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_65_V_read \
    op interface \
    ports { data_65_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 570 \
    name data_66_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_66_V_read \
    op interface \
    ports { data_66_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 571 \
    name data_67_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_67_V_read \
    op interface \
    ports { data_67_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 572 \
    name data_68_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_68_V_read \
    op interface \
    ports { data_68_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 573 \
    name data_69_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_69_V_read \
    op interface \
    ports { data_69_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 574 \
    name data_70_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_70_V_read \
    op interface \
    ports { data_70_V_read { I 25 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 575 \
    name data_71_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_71_V_read \
    op interface \
    ports { data_71_V_read { I 25 vector } } \
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


