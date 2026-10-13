# This script segment is generated automatically by AutoPilot

set id 677
set name myproject_mux_104_28_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 28
set din0_signed 0
set din1_width 28
set din1_signed 0
set din2_width 28
set din2_signed 0
set din3_width 28
set din3_signed 0
set din4_width 28
set din4_signed 0
set din5_width 28
set din5_signed 0
set din6_width 28
set din6_signed 0
set din7_width 28
set din7_signed 0
set din8_width 28
set din8_signed 0
set din9_width 28
set din9_signed 0
set din10_width 4
set din10_signed 0
set dout_width 28
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
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 679
set hasByteEnable 0
set MemName dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config15_s_w15_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 411
set AddrRange 10
set AddrWd 4
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "011111000011101001111111111111110101000110100101111111111100110101100011110000000000001111100101010001100000000001001010000011100010000000000110000101100110001111111111111001000101010010111111111110110100101111000101111111111111010001000111001111111111110010011000110111000000000000000111011011100101111111111101011110011100100111111111111011000110000000111111111110100101101110010100000000000100011011101001111" "111101101111010110111111111111010010011100000000000000000011110001001101110111111111111001011100101111011111111111011010110010010001111111111111110101000000111111111111011110100010010101111111111111000110111011101011111111111001001010110101110000000000000101111011001001000000000000110110001000000100000000000110001101001000110000000000000100010011110001100000000000001000010000000001111111111111101011110000000" "110001110110010011011111111111011011000110101011111111111101011101010011101000000000100100100000000000011111111110110100100011111111111111111001110101000111011111111111111010100000000000000000000000100101111111110110000000000001000001011111010000000000000000101011011111111111111111101101100011111101111111111011101111110101000111111111111110101100100001000000000000010100111110111110000000000001000011000010001" "101010100110010111000000000000010001101001000111111111111101000110011011100000000000000000101110100100111111111111100011101100000100000000000000101111111010010111111111101001101000000111011111111111011011110101100001111111111000000000111000001000000000010110101001010111000000000000000101111011101110000000000001101010001011100000000000010011001100011111111111111111101011111011110110000000000010010111101110110" "000111011000011001111111111111100100100000110110000000000000111100011100111111111111110001110001000001100000000000111111111101100110000000000010111111111011110111111111111110101000000111000000000000001011000001100111111111111011110100011001101000000000000010000100100011111111111111010110110010000101111111111010110000001000000111111111110111100010001000111111111110110011100111101111111111111111011001110001000" "011000011000101010000000000000100101100111000110000000000010010111101101110111111111111010111101101010111111111111011010111001101011111111111010110001001000100111111111110100010111000001000000000001111001011110111001111111111001011001110111100000000000010000100000010000000000000000001100101000111110000000000100010010101010010000000000010111010110110000111111111111111101100001110101111111111111000111100111100" "001110101011011101000000000001011011001101011000000000000000110101001000001000000000000001110100010000011111111111100110001010001001111111111010101000000011001111111111101010000110010100111111111110100100111110010111111111111111110011100010000000000000000010001111110110000000000001010011111011010110000000000110000000111010001111111111110101101000010000100000000001000101000000011110000000000011000101100111110" "111110000110000101111111111111100111000000101111111111111011000111100111110000000000000100010101111010011111111111011001100111000111111111111100000010000101011111111111101001001101111100111111111111001111110110110100000000000000010110110101011000000000000010101000110111100000000000101110111111000000000000000010011010111000000000000000001000111001110110000000000000001011011101011011111111111111101111100010100" "111011011001001011011111111111010000111100100001111111111110010010001110011111111111101010111101100111011111111110010111001100110100000000000000001011110100000111111111110100111110001111011111111110110011011110010011111111111110100001110011111111111111110010110010011100111111111111011111111100001011111111111110110010001101111000000000011100110011010101100000000001010000101011001111111111111111010001101000010" "101110011100010011111111111110001100010010011110000000000000001100101011011000000000000010011010111100011111111110111010000101010001111111111100100100100001011000000000011000010010000101000000000001001001100110111001111111110110110110110001111000000000000100011101111101111111111111111111110001100110000000000011010110011011110000000000000100011001101001111111111110010011010100111110000000000011100010111101001" }
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
    id 680 \
    name data_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_0_V_read \
    op interface \
    ports { data_0_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 681 \
    name data_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_1_V_read \
    op interface \
    ports { data_1_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 682 \
    name data_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_2_V_read \
    op interface \
    ports { data_2_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 683 \
    name data_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_3_V_read \
    op interface \
    ports { data_3_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 684 \
    name data_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_4_V_read \
    op interface \
    ports { data_4_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 685 \
    name data_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_5_V_read \
    op interface \
    ports { data_5_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 686 \
    name data_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_6_V_read \
    op interface \
    ports { data_6_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 687 \
    name data_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_7_V_read \
    op interface \
    ports { data_7_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 688 \
    name data_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_8_V_read \
    op interface \
    ports { data_8_V_read { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 689 \
    name data_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_9_V_read \
    op interface \
    ports { data_9_V_read { I 28 vector } } \
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


