# This script segment is generated automatically by AutoPilot

set id 157
set name myproject_mux_164_31_1_1
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
set din16_width 4
set din16_signed 0
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
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 158
set name myproject_mux_646_31_1_1
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
set din64_width 6
set din64_signed 0
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
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 207
set hasByteEnable 0
set MemName dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config6_mult_0_0_0_0_0_0_0_0_0_wHfu
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 1476
set AddrRange 9
set AddrWd 4
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "101101000111010100011111111111111010001110001011000000000000001001101111011100111111111111111100010100101011010000000000000000000111111011010000000000000000001110001101010001000000000000011100011001001101000000000000000010011010011010110000000000000001100111011000010000000000000011011110101101100111111111111111001001011011101101111111111111001011101111100001111111111111110000110001000011011111111111111000001110111011110000000000001001000011000100101000000000000010011011000101111100000000000000011100110110110110000000000000111010010001010011000000000000101001001111100010000000000000001011011100110000001111111111111101010000100001111111111111111111001100011010110100000000000001010110110010110101111111111111110111000100110011000000000000000110000011110111011111111111110011010101111111010000000000000000011010011010000111111111111111011101010101100111111111111101111111101010000000000000000000100111111011000011111111111111111000111100101100111111111111111001001111000000111111111111111110010010010000111000000000000001000000101010001111111111111110110011001100001000000000000000100011010010111010000000000000001000110111000110100000000000001000000111011110111111111111111100011011110000001111111111111101110001011001110111111111111111011000010010000100000000000000010111000001111000111111111111101101010011000111011111111111110111001001110011010000000000000000101011011111011111111111111101000010010011000000000000000000101100010011000110000000000000011110011010001111" "101010100010001011111111111111110001011100110010010000000000000000001000011100010111111111111101000011101111110000000000000001010111100100110110000000000000010010010010100000000000000000100000111110101100100000000000000100001010001000110000000000000000100001110100000000000000000001000100101011111000000000000000011111001101010010000000000000101110101100101011000000000000010001110100110011111111111111111000000010111011100000000000000101001001010111001111111111111111100010011100011011111111111110000100110100100011111111111111101110010000110111111111111111110000101001001110111111111111111100111000101001010000000000000000010000000011101111111111111100101100110001101000000000000000110111110000001110000000000000001001110001011000111111111111101001111011111111111111111111110101011000011000100000000000000011011010110111110000000000000011001111010000001111111111111110110111001010101000000000000000000001100011100101000000000000010001101100001110100000000000001000000010010010001111111111111010010101010010011111111111111101101010000110011011111111111111011010010000111000000000000000011110101001110000111111111111011011001111011001111111111111110010110111111001010000000000000011001100111010011111111111111100010110101101010000000000000001000100100110001101111111111111010011111011011111000000000000011000111100001101100000000000001001111011010110011111111111111001101101111110110000000000000010000001110011101111111111111110100111111100101011111111111111111100011100010001" "110001011000000011111111111111101011101000001110101111111111101010110000001101001000000000000010000001001110100100000000000100000001111001001011111111111111010100000010100111000000000000000111100001100011111111111111110101010100111110110000000000000000101111001110100111111111111100100001011110110100000000000001110100011110011101111111111111110000101100111000000000000000000111010111011100000000000000000001000110111000110000000000000011100101001011100000000000000010110111011010101100000000000000011111110101001011111111111111111101100111010010111111111111100100100110101010000000000000001101100010100100010000000000000000010010100100110111111111111101010001001101100011111111111110001101100100111111111111111111010101101101110100111111111111111000010011110101111111111111111111100101000001011111111111111010110000100100001111111111111110011111010101011111111111111110010010011111101110000000000000001000110111101111111111111111111100110100110111111111111111111000011100001010011111111111111110101011000010000111111111111100111101000001010011111111111111000101000101001000000000000000001010101101101111111111111111100110011110000010011111111111110111000001100000111111111111111111010010010100001000000000000000001101100011011100000000000000110100110111110011111111111111111011011111101011111111111111110100101100000110100000000000001101001010000001000000000000000101111000110001010111111111111011111100110001000000000000000010011110101001000100000000000000000100110111001010" "010000111000011010111111111111110100100011111001000000000000001111101011111110111111111111111111001111101110000100000000000010001110010011100001111111111110111011011111010011000000000000001001001011000110011111111111111110010000100010111111111111111000111000011000111111111111111101110011110011101000000000000010111001101000011000000000000000001011110000011010000000000000011000110101010010111111111111111100100110111110010000000000001001010111011010011111111111111100000100011001111011111111111110100000011101011110000000000000000010111110001011111111111111110101100011011000000000000000000100100011011010001111111111111100000110001111111000000000000010011011101001000011111111111110010111111100000001111111111111100000001010100000000000000000001010111001000000111111111111110011100110100000100000000000000101011000110011101000000000000011011011100110010100000000000000111000000011111011111111111111100001110001001010111111111111011110010111110010011111111111110101110100101110010000000000000100011100001110010111111111111111110000111011010111111111111110000001110000100001111111111111001101110101010001111111111111110110101000010101111111111111111000011101110010110000000000000100010101001110101111111111111101000101101000010111111111111111111111000100010000000000000000011010111001100010000000000000010001111001011100100000000000010000001101101111101111111111111111001111011011001111111111111101111011010001111011111111111110110110100110000111111111111111010110100001111001" "101010110001110000000000000000000110100001110001010000000000000010100000001010111111111111111101110001110101000000000000000001110110000000110000000000000000000010000011111110000000000000110111000100001100000000000000000111100000100000001111111111111011010001111100000000000000000011111011001110000111111111111111000111000000110000000000000000000100001100100000000000000000000101111011100111100000000000000110100101010010100000000000001001001111100011011111111111111110101011001001001100000000000000000110101011100100000000000000001110110011011111111111111111110111111010011000111111111111110111111111111001010000000000000110011000000110010111111111111111011100011111011111111111111110000011101111010010000000000000001111001011001111111111111111101001111100111100000000000000000011010101001010011111111111110110001001111010010111111111111101101011000110100100000000000001100011100111000001111111111111110110011100000010000000000000001110111111011000111111111111111110101100110011001111111111111011100101000111010111111111111101101000101000101011111111111110110011100100101010000000000000001110011010011000000000000000001000010010110111011111111111111001000001010100000000000000000010100011100000101000000000000000011011001011110111111111111111010110111010100110000000000000100100100101111011000000000000010000110001100111100000000000001011000111010111101111111111111011110000111001100000000000000000100111101000000100000000000000101001110110001110000000000000011111100110111110" "100001010000101100000000000000000011011100011110111111111111110110111100101010110000000000000001001110010101010100000000000011111111010100111001111111111111001010100111111010000000000000000110110111010110100000000000000000111010010010000000000000000001010110011001010000000000000011011010001000010100000000000000000110001100011111111111111111110100110111111100000000000000010100101000000011000000000000001000010100110100111111111111111100101111110000110111111111111111001000001010010011111111111111100101010001001100000000000000101111001010011000000000000000011000100001000011100000000000001100101001000000111111111111111100101100000100100000000000000010100010101001100011111111111110101011000001000110000000000000101010010101101110111111111111111100100011100010000000000000001111111100101010000000000000000010001010001010011000000000000010010001001000001111111111111111110110010111010111111111111111100100010110110000111111111111111110100100111000100000000000000100111000111111101111111111111110000010000101001000000000000011111011111000000100000000000000110001000010011101111111111111111001011100011010111111111111100110011101110101100000000000000011100010001100100000000000000110010010101001001111111111111111001001000110000100000000000000110000010011110101111111111111100101011110100100111111111111101110111101100110011111111111111011001000000010101111111111110110001011110000010000000000000001011110101000011000000000000010001110111010001100000000000000000001000100001001" "101001111100101101011111111111101101111001111111101111111111111011100010000110010111111111111100100010011011001000000000000001000001001011100110000000000000100001001010011100000000000000100010101010111010000000000000000011111000010100100000000000000001001001111010000000000000000001000100010110100111111111111110011010111101001101111111111111011100111100010000111111111111110000011101001000011111111111111100110010011111000000000000000111110110101011111000000000000010011001101111111111111111111110100111110110001101111111111111111111010111111100111111111111101101101101011011100000000000000000101110100111000000000000000110000001110111001111111111111101101000011011100000000000000001010111101001100000000000000000100101100111101101111111111111110111001111100000000000000000000011111111001010000000000000000001110010000001100000000000000011101000001000000011111111111101110101110010101000000000000000010010001011110001000000000000011000000110010100100000000000000010001011000010010000000000000100101010010000101000000000000001010001101110011011111111111110101101010100000001111111111111011010101111111010000000000000000110110001110010000000000000000111100111000000001111111111111001110110100010101111111111111101001000011000100000000000000001001110010001001111111111111111100110011000101110000000000000011101011100000101111111111111110111100110111000001111111111111010110010100000001111111111111110011100100100001111111111111111011001111001001110000000000000011001010110110110" "000111000111010111111111111111101100000001100001011111111111110100010001011110101111111111111111100100001100101111111111111110111110111101001100000000000000000010101110011100000000000000100101101001001011011111111111110000000100000001000000000000000000010000111111011111111111111100011101010101011011111111111111111111100001100001111111111111100100001101110110000000000000001010001100111000100000000000001010011001110010111111111111111100111110010011001111111111111101010110111011100111111111111111100011011000101001111111111111110010110101101001000000000000001001001000011001111111111111110101010001100011010000000000000010000010011001001111111111111101111100010000001111111111111110100100011111110011111111111111110000010101111010111111111111110011111001011000100000000000000010001100010110100000000000000001110011100011001000000000000010110011101000000111111111111110001110011001100110000000000000001011101111010001111111111111111100110011110001000000000000000001000111111111101111111111111001001000100111111111111111111100111001110000001000000000000000111111011101110011111111111111111110100010101101000000000000001010101001110101000000000000000011111000110100011111111111111000100101011011000111111111111111111001000101111111111111111110001101000111110110000000000000000101101100110101111111111111111111101101000010000000000000001000110111010100110000000000000011110001100011001000000000000001001111011111101100000000000000100000010101110100000000000001000000000111111000" "001001101010101101111111111111111011001101110001101111111111111010011010110011001111111111111100011110100101110000000000000001000101100101001001111111111110111101100110101101000000000001000000110111011000100000000000001000111101011111000000000000000010111000110101111111111111111110011110110010100011111111111110011001100110110101111111111111000110110000101001000000000000000010101111101010100000000000001010001000011101010000000000001000001100101100100000000000000001011010111110100111111111111110101001100011001000000000000000101011010101010000111111111111100100001111110000000000000000010001011011001010001111111111111001101100011101000000000000000000010101010110111011111111111111101110101101110110000000000001000000101010101101111111111111100100001111101110011111111111101111111011010100000000000000000110000101000110110111111111111110010110111101111011111111111111111110110101110000000000000000011011110100010001000000000000011001110001100111011111111111111010100110111011010000000000000100001101110101001000000000000001001111101000011111111111111101011000010011011111111111111111100100100000010111000000000000000001010010100111111111111111110111000110011000110000000000000010101011100000001111111111111111001010110111101011111111111111011010011111010010000000000000110100001101011100000000000000001011000001001010011111111111111101001111101101000000000000000110110100100011110000000000000011100100110011110000000000000010011111010001011100000000000000010110111010110101" }
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
    id 208 \
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
    id 209 \
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
    id 210 \
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
    id 211 \
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
    id 212 \
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
    id 213 \
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
    id 214 \
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
    id 215 \
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
    id 216 \
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
    id 217 \
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
    id 218 \
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
    id 219 \
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
    id 220 \
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
    id 221 \
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
    id 222 \
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
    id 223 \
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
    id 224 \
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
    id 225 \
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
    id 226 \
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
    id 227 \
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
    id 228 \
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
    id 229 \
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
    id 230 \
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
    id 231 \
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
    id 232 \
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
    id 233 \
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
    id 234 \
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
    id 235 \
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
    id 236 \
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
    id 237 \
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
    id 238 \
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
    id 239 \
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
    id 240 \
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
    id 241 \
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
    id 242 \
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
    id 243 \
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
    id 244 \
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
    id 245 \
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
    id 246 \
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
    id 247 \
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
    id 248 \
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
    id 249 \
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
    id 250 \
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
    id 251 \
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
    id 252 \
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
    id 253 \
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
    id 254 \
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
    id 255 \
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
    id 256 \
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
    id 257 \
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
    id 258 \
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
    id 259 \
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
    id 260 \
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
    id 261 \
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


