# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 9
set hasByteEnable 0
set MemName dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 160
set AddrRange 9
set AddrWd 4
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "0100000011010111001100000000011100101110111100001111111110000010000001010100000000000110101101001100110000000000010101100110101111000000000000010000001111010011" "0000000001001000100011111111101101001010011111101111111111101101011010100001111111111100011110111100110111111111101100001110101001001111111111100101110001001100" "0001001100000011100011111111110110011010010001000000000000000000010100101101000000000111110000101110001111111111100010011010101010001111111110110010101110110001" "0101001011100000001000000000001110010010010100001111111111001101100101010111000000001000001011000001100100000000011000101011011110000000000010010001110111100011" "1111111000101100000011111111101101000111110000001111111110100101101001010000111111110111010010001001000011111111110000111000010011100000000000111011111011111110" "1111110010000010001111111111111011010000000110100000000001110000011011101000111111111001001110001100011111111111110100111010111010011111111110111100010011110011" "0101000011111010111111111111100011110100001001111111111110110101100001001101000000000000001010000001000111111111111110110000001000001111111101111111100100000101" "0110100000101011000000000000000100011001100111001111111110001101000010101111111111110111010011110010110000000000010101001010000100110000000000110101011011111000" "0001100110010101100011111111111110000100101011010000000000110110010110011001111111111011100010100101101011111111011010110101101000111111111110100111001101101001" }
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
    id 10 \
    name kernel_data_V_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_8 \
    op interface \
    ports { kernel_data_V_8 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name kernel_data_V_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_0 \
    op interface \
    ports { kernel_data_V_0 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name kernel_data_V_1411 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_1411 \
    op interface \
    ports { kernel_data_V_1411 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
    name kernel_data_V_2412 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_2412 \
    op interface \
    ports { kernel_data_V_2412 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name kernel_data_V_3413 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_3413 \
    op interface \
    ports { kernel_data_V_3413 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name kernel_data_V_4414 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_4414 \
    op interface \
    ports { kernel_data_V_4414 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name kernel_data_V_5415 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_5415 \
    op interface \
    ports { kernel_data_V_5415 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name kernel_data_V_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_6 \
    op interface \
    ports { kernel_data_V_6 { I 28 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name kernel_data_V_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_data_V_7 \
    op interface \
    ports { kernel_data_V_7 { I 28 vector } } \
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


