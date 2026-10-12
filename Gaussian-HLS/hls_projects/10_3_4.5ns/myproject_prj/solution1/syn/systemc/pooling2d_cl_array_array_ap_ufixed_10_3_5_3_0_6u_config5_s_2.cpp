#include "pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_382.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_condition_990.read(), ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_523 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
            ap_phi_reg_pp0_iter1_storemerge_i_i_reg_523 = ap_phi_reg_pp0_iter0_storemerge_i_i_reg_523.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()))) {
        indvar_flatten_reg_512 = add_ln241_fu_540_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        indvar_flatten_reg_512 = ap_const_lv12_0;
    }
    if (esl_seteq<1,1,1>(ap_condition_977.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read())) {
            pX_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln212_fu_566_p2.read())) {
            pX_1 = add_ln225_fu_572_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_996.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln216_fu_590_p2.read())) {
            pY_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln216_fu_590_p2.read())) {
            pY_1 = add_ln220_fu_596_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_981.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5564.read())) {
            sX_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln212_reg_5564.read())) {
            sX_1 = select_ln227_fu_740_p3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        DataOut_V_102_reg_5629 = line_buffer_Array_V_4_0_3_q0.read();
        DataOut_V_105_reg_5636 = line_buffer_Array_V_4_0_4_q0.read();
        DataOut_V_108_reg_5643 = line_buffer_Array_V_4_0_5_q0.read();
        DataOut_V_93_reg_5608 = line_buffer_Array_V_4_0_0_q0.read();
        DataOut_V_96_reg_5615 = line_buffer_Array_V_4_0_1_q0.read();
        DataOut_V_99_reg_5622 = line_buffer_Array_V_4_0_2_q0.read();
        and_ln191_4_reg_5650 = and_ln191_4_fu_728_p2.read();
        shift_buffer_3_0_V_reg_5572 = data_V_data_0_V_dout.read();
        shift_buffer_3_1_V_reg_5578 = data_V_data_1_V_dout.read();
        shift_buffer_3_2_V_reg_5584 = data_V_data_2_V_dout.read();
        shift_buffer_3_3_V_reg_5590 = data_V_data_3_V_dout.read();
        shift_buffer_3_4_V_reg_5596 = data_V_data_4_V_dout.read();
        shift_buffer_3_5_V_reg_5602 = data_V_data_5_V_dout.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        and_ln191_4_reg_5650_pp0_iter2_reg = and_ln191_4_reg_5650.read();
        and_ln191_4_reg_5650_pp0_iter3_reg = and_ln191_4_reg_5650_pp0_iter2_reg.read();
        and_ln191_4_reg_5650_pp0_iter4_reg = and_ln191_4_reg_5650_pp0_iter3_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(and_ln191_4_reg_5650.read(), ap_const_lv1_1))) {
        icmp_ln1496_100_reg_6488 = icmp_ln1496_100_fu_2617_p2.read();
        icmp_ln1496_103_reg_6494 = icmp_ln1496_103_fu_2623_p2.read();
        icmp_ln1496_104_reg_6500 = icmp_ln1496_104_fu_2629_p2.read();
        icmp_ln1496_106_reg_6506 = icmp_ln1496_106_fu_2635_p2.read();
        icmp_ln1496_107_reg_6512 = icmp_ln1496_107_fu_2641_p2.read();
        icmp_ln1496_1_reg_5894 = icmp_ln1496_1_fu_1903_p2.read();
        icmp_ln1496_24_reg_5756 = icmp_ln1496_24_fu_1735_p2.read();
        icmp_ln1496_26_reg_5762 = icmp_ln1496_26_fu_1741_p2.read();
        icmp_ln1496_27_reg_5768 = icmp_ln1496_27_fu_1747_p2.read();
        icmp_ln1496_2_reg_6038 = icmp_ln1496_2_fu_2077_p2.read();
        icmp_ln1496_30_reg_5774 = icmp_ln1496_30_fu_1753_p2.read();
        icmp_ln1496_31_reg_5780 = icmp_ln1496_31_fu_1759_p2.read();
        icmp_ln1496_33_reg_5786 = icmp_ln1496_33_fu_1765_p2.read();
        icmp_ln1496_34_reg_5792 = icmp_ln1496_34_fu_1771_p2.read();
        icmp_ln1496_38_reg_5900 = icmp_ln1496_38_fu_1909_p2.read();
        icmp_ln1496_40_reg_5906 = icmp_ln1496_40_fu_1915_p2.read();
        icmp_ln1496_41_reg_5912 = icmp_ln1496_41_fu_1921_p2.read();
        icmp_ln1496_44_reg_5918 = icmp_ln1496_44_fu_1927_p2.read();
        icmp_ln1496_45_reg_5924 = icmp_ln1496_45_fu_1933_p2.read();
        icmp_ln1496_47_reg_5930 = icmp_ln1496_47_fu_1939_p2.read();
        icmp_ln1496_48_reg_5936 = icmp_ln1496_48_fu_1945_p2.read();
        icmp_ln1496_52_reg_6044 = icmp_ln1496_52_fu_2083_p2.read();
        icmp_ln1496_54_reg_6050 = icmp_ln1496_54_fu_2089_p2.read();
        icmp_ln1496_55_reg_6056 = icmp_ln1496_55_fu_2095_p2.read();
        icmp_ln1496_58_reg_6062 = icmp_ln1496_58_fu_2101_p2.read();
        icmp_ln1496_59_reg_6068 = icmp_ln1496_59_fu_2107_p2.read();
        icmp_ln1496_61_reg_6074 = icmp_ln1496_61_fu_2113_p2.read();
        icmp_ln1496_62_reg_6080 = icmp_ln1496_62_fu_2119_p2.read();
        icmp_ln1496_66_reg_6182 = icmp_ln1496_66_fu_2251_p2.read();
        icmp_ln1496_67_reg_6188 = icmp_ln1496_67_fu_2257_p2.read();
        icmp_ln1496_69_reg_6194 = icmp_ln1496_69_fu_2263_p2.read();
        icmp_ln1496_70_reg_6200 = icmp_ln1496_70_fu_2269_p2.read();
        icmp_ln1496_73_reg_6206 = icmp_ln1496_73_fu_2275_p2.read();
        icmp_ln1496_74_reg_6212 = icmp_ln1496_74_fu_2281_p2.read();
        icmp_ln1496_76_reg_6218 = icmp_ln1496_76_fu_2287_p2.read();
        icmp_ln1496_77_reg_6224 = icmp_ln1496_77_fu_2293_p2.read();
        icmp_ln1496_81_reg_6326 = icmp_ln1496_81_fu_2425_p2.read();
        icmp_ln1496_82_reg_6332 = icmp_ln1496_82_fu_2431_p2.read();
        icmp_ln1496_84_reg_6338 = icmp_ln1496_84_fu_2437_p2.read();
        icmp_ln1496_85_reg_6344 = icmp_ln1496_85_fu_2443_p2.read();
        icmp_ln1496_88_reg_6350 = icmp_ln1496_88_fu_2449_p2.read();
        icmp_ln1496_89_reg_6356 = icmp_ln1496_89_fu_2455_p2.read();
        icmp_ln1496_91_reg_6362 = icmp_ln1496_91_fu_2461_p2.read();
        icmp_ln1496_92_reg_6368 = icmp_ln1496_92_fu_2467_p2.read();
        icmp_ln1496_96_reg_6470 = icmp_ln1496_96_fu_2599_p2.read();
        icmp_ln1496_97_reg_6476 = icmp_ln1496_97_fu_2605_p2.read();
        icmp_ln1496_99_reg_6482 = icmp_ln1496_99_fu_2611_p2.read();
        icmp_ln1496_reg_5750 = icmp_ln1496_fu_1729_p2.read();
        pool_window_0_V_17_reg_5798 = pool_window_0_V_17_fu_1777_p3.read();
        pool_window_0_V_19_reg_5942 = pool_window_0_V_19_fu_1951_p3.read();
        pool_window_0_V_21_reg_6086 = pool_window_0_V_21_fu_2125_p3.read();
        pool_window_0_V_23_reg_6230 = pool_window_0_V_23_fu_2299_p3.read();
        pool_window_0_V_25_reg_6374 = pool_window_0_V_25_fu_2473_p3.read();
        pool_window_0_V_reg_5654 = pool_window_0_V_fu_1603_p3.read();
        pool_window_10_V_10_reg_6434 = pool_window_10_V_10_fu_2553_p3.read();
        pool_window_10_V_2_reg_5858 = pool_window_10_V_2_fu_1857_p3.read();
        pool_window_10_V_4_reg_6002 = pool_window_10_V_4_fu_2031_p3.read();
        pool_window_10_V_6_reg_6146 = pool_window_10_V_6_fu_2205_p3.read();
        pool_window_10_V_8_reg_6290 = pool_window_10_V_8_fu_2379_p3.read();
        pool_window_10_V_reg_5714 = pool_window_10_V_fu_1683_p3.read();
        pool_window_11_V_10_reg_6440 = pool_window_11_V_10_fu_2561_p3.read();
        pool_window_11_V_2_reg_5864 = pool_window_11_V_2_fu_1865_p3.read();
        pool_window_11_V_4_reg_6008 = pool_window_11_V_4_fu_2039_p3.read();
        pool_window_11_V_6_reg_6152 = pool_window_11_V_6_fu_2213_p3.read();
        pool_window_11_V_8_reg_6296 = pool_window_11_V_8_fu_2387_p3.read();
        pool_window_11_V_reg_5720 = pool_window_11_V_fu_1691_p3.read();
        pool_window_12_V_10_reg_6446 = pool_window_12_V_10_fu_2568_p3.read();
        pool_window_12_V_2_reg_5870 = pool_window_12_V_2_fu_1872_p3.read();
        pool_window_12_V_4_reg_6014 = pool_window_12_V_4_fu_2046_p3.read();
        pool_window_12_V_6_reg_6158 = pool_window_12_V_6_fu_2220_p3.read();
        pool_window_12_V_8_reg_6302 = pool_window_12_V_8_fu_2394_p3.read();
        pool_window_12_V_reg_5726 = pool_window_12_V_fu_1698_p3.read();
        pool_window_13_V_10_reg_6452 = pool_window_13_V_10_fu_2576_p3.read();
        pool_window_13_V_2_reg_5876 = pool_window_13_V_2_fu_1880_p3.read();
        pool_window_13_V_4_reg_6020 = pool_window_13_V_4_fu_2054_p3.read();
        pool_window_13_V_6_reg_6164 = pool_window_13_V_6_fu_2228_p3.read();
        pool_window_13_V_8_reg_6308 = pool_window_13_V_8_fu_2402_p3.read();
        pool_window_13_V_reg_5732 = pool_window_13_V_fu_1706_p3.read();
        pool_window_14_V_10_reg_6458 = pool_window_14_V_10_fu_2584_p3.read();
        pool_window_14_V_2_reg_5882 = pool_window_14_V_2_fu_1888_p3.read();
        pool_window_14_V_4_reg_6026 = pool_window_14_V_4_fu_2062_p3.read();
        pool_window_14_V_6_reg_6170 = pool_window_14_V_6_fu_2236_p3.read();
        pool_window_14_V_8_reg_6314 = pool_window_14_V_8_fu_2410_p3.read();
        pool_window_14_V_reg_5738 = pool_window_14_V_fu_1714_p3.read();
        pool_window_15_V_10_reg_6464 = pool_window_15_V_10_fu_2592_p3.read();
        pool_window_15_V_2_reg_5888 = pool_window_15_V_2_fu_1896_p3.read();
        pool_window_15_V_4_reg_6032 = pool_window_15_V_4_fu_2070_p3.read();
        pool_window_15_V_6_reg_6176 = pool_window_15_V_6_fu_2244_p3.read();
        pool_window_15_V_8_reg_6320 = pool_window_15_V_8_fu_2418_p3.read();
        pool_window_15_V_reg_5744 = pool_window_15_V_fu_1722_p3.read();
        pool_window_1_V_17_reg_5804 = pool_window_1_V_17_fu_1785_p3.read();
        pool_window_1_V_19_reg_5948 = pool_window_1_V_19_fu_1959_p3.read();
        pool_window_1_V_21_reg_6092 = pool_window_1_V_21_fu_2133_p3.read();
        pool_window_1_V_23_reg_6236 = pool_window_1_V_23_fu_2307_p3.read();
        pool_window_1_V_25_reg_6380 = pool_window_1_V_25_fu_2481_p3.read();
        pool_window_1_V_reg_5660 = pool_window_1_V_fu_1611_p3.read();
        pool_window_2_V_17_reg_5810 = pool_window_2_V_17_fu_1793_p3.read();
        pool_window_2_V_19_reg_5954 = pool_window_2_V_19_fu_1967_p3.read();
        pool_window_2_V_21_reg_6098 = pool_window_2_V_21_fu_2141_p3.read();
        pool_window_2_V_23_reg_6242 = pool_window_2_V_23_fu_2315_p3.read();
        pool_window_2_V_25_reg_6386 = pool_window_2_V_25_fu_2489_p3.read();
        pool_window_2_V_reg_5666 = pool_window_2_V_fu_1619_p3.read();
        pool_window_3_V_17_reg_5816 = pool_window_3_V_17_fu_1801_p3.read();
        pool_window_3_V_19_reg_5960 = pool_window_3_V_19_fu_1975_p3.read();
        pool_window_3_V_21_reg_6104 = pool_window_3_V_21_fu_2149_p3.read();
        pool_window_3_V_23_reg_6248 = pool_window_3_V_23_fu_2323_p3.read();
        pool_window_3_V_25_reg_6392 = pool_window_3_V_25_fu_2497_p3.read();
        pool_window_3_V_reg_5672 = pool_window_3_V_fu_1627_p3.read();
        pool_window_4_V_10_reg_6398 = pool_window_4_V_10_fu_2505_p3.read();
        pool_window_4_V_2_reg_5822 = pool_window_4_V_2_fu_1809_p3.read();
        pool_window_4_V_4_reg_5966 = pool_window_4_V_4_fu_1983_p3.read();
        pool_window_4_V_6_reg_6110 = pool_window_4_V_6_fu_2157_p3.read();
        pool_window_4_V_8_reg_6254 = pool_window_4_V_8_fu_2331_p3.read();
        pool_window_4_V_reg_5678 = pool_window_4_V_fu_1635_p3.read();
        pool_window_5_V_10_reg_6404 = pool_window_5_V_10_fu_2513_p3.read();
        pool_window_5_V_2_reg_5828 = pool_window_5_V_2_fu_1817_p3.read();
        pool_window_5_V_4_reg_5972 = pool_window_5_V_4_fu_1991_p3.read();
        pool_window_5_V_6_reg_6116 = pool_window_5_V_6_fu_2165_p3.read();
        pool_window_5_V_8_reg_6260 = pool_window_5_V_8_fu_2339_p3.read();
        pool_window_5_V_reg_5684 = pool_window_5_V_fu_1643_p3.read();
        pool_window_6_V_10_reg_6410 = pool_window_6_V_10_fu_2521_p3.read();
        pool_window_6_V_2_reg_5834 = pool_window_6_V_2_fu_1825_p3.read();
        pool_window_6_V_4_reg_5978 = pool_window_6_V_4_fu_1999_p3.read();
        pool_window_6_V_6_reg_6122 = pool_window_6_V_6_fu_2173_p3.read();
        pool_window_6_V_8_reg_6266 = pool_window_6_V_8_fu_2347_p3.read();
        pool_window_6_V_reg_5690 = pool_window_6_V_fu_1651_p3.read();
        pool_window_7_V_10_reg_6416 = pool_window_7_V_10_fu_2529_p3.read();
        pool_window_7_V_2_reg_5840 = pool_window_7_V_2_fu_1833_p3.read();
        pool_window_7_V_4_reg_5984 = pool_window_7_V_4_fu_2007_p3.read();
        pool_window_7_V_6_reg_6128 = pool_window_7_V_6_fu_2181_p3.read();
        pool_window_7_V_8_reg_6272 = pool_window_7_V_8_fu_2355_p3.read();
        pool_window_7_V_reg_5696 = pool_window_7_V_fu_1659_p3.read();
        pool_window_8_V_10_reg_6422 = pool_window_8_V_10_fu_2537_p3.read();
        pool_window_8_V_2_reg_5846 = pool_window_8_V_2_fu_1841_p3.read();
        pool_window_8_V_4_reg_5990 = pool_window_8_V_4_fu_2015_p3.read();
        pool_window_8_V_6_reg_6134 = pool_window_8_V_6_fu_2189_p3.read();
        pool_window_8_V_8_reg_6278 = pool_window_8_V_8_fu_2363_p3.read();
        pool_window_8_V_reg_5702 = pool_window_8_V_fu_1667_p3.read();
        pool_window_9_V_10_reg_6428 = pool_window_9_V_10_fu_2545_p3.read();
        pool_window_9_V_2_reg_5852 = pool_window_9_V_2_fu_1849_p3.read();
        pool_window_9_V_4_reg_5996 = pool_window_9_V_4_fu_2023_p3.read();
        pool_window_9_V_6_reg_6140 = pool_window_9_V_6_fu_2197_p3.read();
        pool_window_9_V_8_reg_6284 = pool_window_9_V_8_fu_2371_p3.read();
        pool_window_9_V_reg_5708 = pool_window_9_V_fu_1675_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()))) {
        icmp_ln191_5_reg_5554 = icmp_ln191_5_fu_550_p2.read();
        icmp_ln191_6_reg_5559 = icmp_ln191_6_fu_560_p2.read();
        icmp_ln212_reg_5564 = icmp_ln212_fu_566_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()))) {
        icmp_ln216_reg_5568 = icmp_ln216_fu_590_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln241_reg_5545 = icmp_ln241_fu_534_p2.read();
        icmp_ln241_reg_5545_pp0_iter1_reg = icmp_ln241_reg_5545.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        kernel_data_V_4_10 = kernel_data_V_4_16.read();
        kernel_data_V_4_11 = kernel_data_V_4_17.read();
        kernel_data_V_4_12 = kernel_data_V_4_18.read();
        kernel_data_V_4_13 = kernel_data_V_4_19.read();
        kernel_data_V_4_14 = kernel_data_V_4_20.read();
        kernel_data_V_4_15 = kernel_data_V_4_21.read();
        kernel_data_V_4_16 = kernel_data_V_4_22.read();
        kernel_data_V_4_17 = kernel_data_V_4_23.read();
        kernel_data_V_4_18 = line_buffer_Array_V_4_2_0_q0.read();
        kernel_data_V_4_19 = line_buffer_Array_V_4_2_1_q0.read();
        kernel_data_V_4_20 = line_buffer_Array_V_4_2_2_q0.read();
        kernel_data_V_4_21 = line_buffer_Array_V_4_2_3_q0.read();
        kernel_data_V_4_22 = line_buffer_Array_V_4_2_4_q0.read();
        kernel_data_V_4_23 = line_buffer_Array_V_4_2_5_q0.read();
        kernel_data_V_4_30 = kernel_data_V_4_36.read();
        kernel_data_V_4_31 = kernel_data_V_4_37.read();
        kernel_data_V_4_32 = kernel_data_V_4_38.read();
        kernel_data_V_4_33 = kernel_data_V_4_39.read();
        kernel_data_V_4_34 = kernel_data_V_4_40.read();
        kernel_data_V_4_35 = kernel_data_V_4_41.read();
        kernel_data_V_4_36 = kernel_data_V_4_42.read();
        kernel_data_V_4_37 = kernel_data_V_4_43.read();
        kernel_data_V_4_38 = kernel_data_V_4_44.read();
        kernel_data_V_4_39 = kernel_data_V_4_45.read();
        kernel_data_V_4_40 = kernel_data_V_4_46.read();
        kernel_data_V_4_41 = kernel_data_V_4_47.read();
        kernel_data_V_4_42 = line_buffer_Array_V_4_1_0_q0.read();
        kernel_data_V_4_43 = line_buffer_Array_V_4_1_1_q0.read();
        kernel_data_V_4_44 = line_buffer_Array_V_4_1_2_q0.read();
        kernel_data_V_4_45 = line_buffer_Array_V_4_1_3_q0.read();
        kernel_data_V_4_46 = line_buffer_Array_V_4_1_4_q0.read();
        kernel_data_V_4_47 = line_buffer_Array_V_4_1_5_q0.read();
        kernel_data_V_4_54 = kernel_data_V_4_60.read();
        kernel_data_V_4_55 = kernel_data_V_4_61.read();
        kernel_data_V_4_56 = kernel_data_V_4_62.read();
        kernel_data_V_4_57 = kernel_data_V_4_63.read();
        kernel_data_V_4_58 = kernel_data_V_4_64.read();
        kernel_data_V_4_59 = kernel_data_V_4_65.read();
        kernel_data_V_4_6 = kernel_data_V_4_12.read();
        kernel_data_V_4_60 = kernel_data_V_4_66.read();
        kernel_data_V_4_61 = kernel_data_V_4_67.read();
        kernel_data_V_4_62 = kernel_data_V_4_68.read();
        kernel_data_V_4_63 = kernel_data_V_4_69.read();
        kernel_data_V_4_64 = kernel_data_V_4_70.read();
        kernel_data_V_4_65 = kernel_data_V_4_71.read();
        kernel_data_V_4_66 = DataOut_V_93_reg_5608.read();
        kernel_data_V_4_67 = DataOut_V_96_reg_5615.read();
        kernel_data_V_4_68 = DataOut_V_99_reg_5622.read();
        kernel_data_V_4_69 = DataOut_V_102_reg_5629.read();
        kernel_data_V_4_7 = kernel_data_V_4_13.read();
        kernel_data_V_4_70 = DataOut_V_105_reg_5636.read();
        kernel_data_V_4_71 = DataOut_V_108_reg_5643.read();
        kernel_data_V_4_78 = kernel_data_V_4_84.read();
        kernel_data_V_4_79 = kernel_data_V_4_85.read();
        kernel_data_V_4_8 = kernel_data_V_4_14.read();
        kernel_data_V_4_80 = kernel_data_V_4_86.read();
        kernel_data_V_4_81 = kernel_data_V_4_87.read();
        kernel_data_V_4_82 = kernel_data_V_4_88.read();
        kernel_data_V_4_83 = kernel_data_V_4_89.read();
        kernel_data_V_4_84 = kernel_data_V_4_90.read();
        kernel_data_V_4_85 = kernel_data_V_4_91.read();
        kernel_data_V_4_86 = kernel_data_V_4_92.read();
        kernel_data_V_4_87 = kernel_data_V_4_93.read();
        kernel_data_V_4_88 = kernel_data_V_4_94.read();
        kernel_data_V_4_89 = kernel_data_V_4_95.read();
        kernel_data_V_4_9 = kernel_data_V_4_15.read();
        kernel_data_V_4_90 = shift_buffer_3_0_V_reg_5572.read();
        kernel_data_V_4_91 = shift_buffer_3_1_V_reg_5578.read();
        kernel_data_V_4_92 = shift_buffer_3_2_V_reg_5584.read();
        kernel_data_V_4_93 = shift_buffer_3_3_V_reg_5590.read();
        kernel_data_V_4_94 = shift_buffer_3_4_V_reg_5596.read();
        kernel_data_V_4_95 = shift_buffer_3_5_V_reg_5602.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln191_4_reg_5650_pp0_iter2_reg.read()))) {
        pool_window_0_V_16_reg_6518 = pool_window_0_V_16_fu_2647_p1.read();
        pool_window_0_V_18_reg_6641 = pool_window_0_V_18_fu_3039_p1.read();
        pool_window_0_V_20_reg_6764 = pool_window_0_V_20_fu_3431_p1.read();
        pool_window_0_V_22_reg_6887 = pool_window_0_V_22_fu_3823_p1.read();
        pool_window_0_V_24_reg_7010 = pool_window_0_V_24_fu_4215_p1.read();
        pool_window_0_V_26_reg_7133 = pool_window_0_V_26_fu_4607_p1.read();
        pool_window_10_V_11_reg_7201 = pool_window_10_V_11_fu_4637_p1.read();
        pool_window_10_V_1_reg_6586 = pool_window_10_V_1_fu_2677_p1.read();
        pool_window_10_V_3_reg_6709 = pool_window_10_V_3_fu_3069_p1.read();
        pool_window_10_V_5_reg_6832 = pool_window_10_V_5_fu_3461_p1.read();
        pool_window_10_V_7_reg_6955 = pool_window_10_V_7_fu_3853_p1.read();
        pool_window_10_V_9_reg_7078 = pool_window_10_V_9_fu_4245_p1.read();
        pool_window_11_V_11_reg_7207 = pool_window_11_V_11_fu_4640_p1.read();
        pool_window_11_V_1_reg_6592 = pool_window_11_V_1_fu_2680_p1.read();
        pool_window_11_V_3_reg_6715 = pool_window_11_V_3_fu_3072_p1.read();
        pool_window_11_V_5_reg_6838 = pool_window_11_V_5_fu_3464_p1.read();
        pool_window_11_V_7_reg_6961 = pool_window_11_V_7_fu_3856_p1.read();
        pool_window_11_V_9_reg_7084 = pool_window_11_V_9_fu_4248_p1.read();
        pool_window_12_V_11_reg_7213 = pool_window_12_V_11_fu_4643_p1.read();
        pool_window_12_V_1_reg_6598 = pool_window_12_V_1_fu_2683_p1.read();
        pool_window_12_V_3_reg_6721 = pool_window_12_V_3_fu_3075_p1.read();
        pool_window_12_V_5_reg_6844 = pool_window_12_V_5_fu_3467_p1.read();
        pool_window_12_V_7_reg_6967 = pool_window_12_V_7_fu_3859_p1.read();
        pool_window_12_V_9_reg_7090 = pool_window_12_V_9_fu_4251_p1.read();
        pool_window_13_V_11_reg_7219 = pool_window_13_V_11_fu_4646_p1.read();
        pool_window_13_V_1_reg_6604 = pool_window_13_V_1_fu_2686_p1.read();
        pool_window_13_V_3_reg_6727 = pool_window_13_V_3_fu_3078_p1.read();
        pool_window_13_V_5_reg_6850 = pool_window_13_V_5_fu_3470_p1.read();
        pool_window_13_V_7_reg_6973 = pool_window_13_V_7_fu_3862_p1.read();
        pool_window_13_V_9_reg_7096 = pool_window_13_V_9_fu_4254_p1.read();
        pool_window_14_V_11_reg_7225 = pool_window_14_V_11_fu_4649_p1.read();
        pool_window_14_V_1_reg_6610 = pool_window_14_V_1_fu_2689_p1.read();
        pool_window_14_V_3_reg_6733 = pool_window_14_V_3_fu_3081_p1.read();
        pool_window_14_V_5_reg_6856 = pool_window_14_V_5_fu_3473_p1.read();
        pool_window_14_V_7_reg_6979 = pool_window_14_V_7_fu_3865_p1.read();
        pool_window_14_V_9_reg_7102 = pool_window_14_V_9_fu_4257_p1.read();
        pool_window_15_V_11_reg_7231 = pool_window_15_V_11_fu_4652_p1.read();
        pool_window_15_V_1_reg_6616 = pool_window_15_V_1_fu_2692_p1.read();
        pool_window_15_V_3_reg_6739 = pool_window_15_V_3_fu_3084_p1.read();
        pool_window_15_V_5_reg_6862 = pool_window_15_V_5_fu_3476_p1.read();
        pool_window_15_V_7_reg_6985 = pool_window_15_V_7_fu_3868_p1.read();
        pool_window_15_V_9_reg_7108 = pool_window_15_V_9_fu_4260_p1.read();
        pool_window_1_V_16_reg_6524 = pool_window_1_V_16_fu_2650_p1.read();
        pool_window_1_V_18_reg_6647 = pool_window_1_V_18_fu_3042_p1.read();
        pool_window_1_V_20_reg_6770 = pool_window_1_V_20_fu_3434_p1.read();
        pool_window_1_V_22_reg_6893 = pool_window_1_V_22_fu_3826_p1.read();
        pool_window_1_V_24_reg_7016 = pool_window_1_V_24_fu_4218_p1.read();
        pool_window_1_V_26_reg_7139 = pool_window_1_V_26_fu_4610_p1.read();
        pool_window_2_V_16_reg_6530 = pool_window_2_V_16_fu_2653_p1.read();
        pool_window_2_V_18_reg_6653 = pool_window_2_V_18_fu_3045_p1.read();
        pool_window_2_V_20_reg_6776 = pool_window_2_V_20_fu_3437_p1.read();
        pool_window_2_V_22_reg_6899 = pool_window_2_V_22_fu_3829_p1.read();
        pool_window_2_V_24_reg_7022 = pool_window_2_V_24_fu_4221_p1.read();
        pool_window_2_V_26_reg_7145 = pool_window_2_V_26_fu_4613_p1.read();
        pool_window_3_V_16_reg_6536 = pool_window_3_V_16_fu_2656_p1.read();
        pool_window_3_V_18_reg_6659 = pool_window_3_V_18_fu_3048_p1.read();
        pool_window_3_V_20_reg_6782 = pool_window_3_V_20_fu_3440_p1.read();
        pool_window_3_V_22_reg_6905 = pool_window_3_V_22_fu_3832_p1.read();
        pool_window_3_V_24_reg_7028 = pool_window_3_V_24_fu_4224_p1.read();
        pool_window_3_V_26_reg_7151 = pool_window_3_V_26_fu_4616_p1.read();
        pool_window_4_V_11_reg_7157 = pool_window_4_V_11_fu_4619_p1.read();
        pool_window_4_V_1_reg_6542 = pool_window_4_V_1_fu_2659_p1.read();
        pool_window_4_V_3_reg_6665 = pool_window_4_V_3_fu_3051_p1.read();
        pool_window_4_V_5_reg_6788 = pool_window_4_V_5_fu_3443_p1.read();
        pool_window_4_V_7_reg_6911 = pool_window_4_V_7_fu_3835_p1.read();
        pool_window_4_V_9_reg_7034 = pool_window_4_V_9_fu_4227_p1.read();
        pool_window_5_V_11_reg_7163 = pool_window_5_V_11_fu_4622_p1.read();
        pool_window_5_V_1_reg_6548 = pool_window_5_V_1_fu_2662_p1.read();
        pool_window_5_V_3_reg_6671 = pool_window_5_V_3_fu_3054_p1.read();
        pool_window_5_V_5_reg_6794 = pool_window_5_V_5_fu_3446_p1.read();
        pool_window_5_V_7_reg_6917 = pool_window_5_V_7_fu_3838_p1.read();
        pool_window_5_V_9_reg_7040 = pool_window_5_V_9_fu_4230_p1.read();
        pool_window_6_V_11_reg_7169 = pool_window_6_V_11_fu_4625_p1.read();
        pool_window_6_V_1_reg_6554 = pool_window_6_V_1_fu_2665_p1.read();
        pool_window_6_V_3_reg_6677 = pool_window_6_V_3_fu_3057_p1.read();
        pool_window_6_V_5_reg_6800 = pool_window_6_V_5_fu_3449_p1.read();
        pool_window_6_V_7_reg_6923 = pool_window_6_V_7_fu_3841_p1.read();
        pool_window_6_V_9_reg_7046 = pool_window_6_V_9_fu_4233_p1.read();
        pool_window_7_V_11_reg_7175 = pool_window_7_V_11_fu_4628_p1.read();
        pool_window_7_V_1_reg_6560 = pool_window_7_V_1_fu_2668_p1.read();
        pool_window_7_V_3_reg_6683 = pool_window_7_V_3_fu_3060_p1.read();
        pool_window_7_V_5_reg_6806 = pool_window_7_V_5_fu_3452_p1.read();
        pool_window_7_V_7_reg_6929 = pool_window_7_V_7_fu_3844_p1.read();
        pool_window_7_V_9_reg_7052 = pool_window_7_V_9_fu_4236_p1.read();
        pool_window_8_V_11_reg_7189 = pool_window_8_V_11_fu_4631_p1.read();
        pool_window_8_V_1_reg_6574 = pool_window_8_V_1_fu_2671_p1.read();
        pool_window_8_V_3_reg_6697 = pool_window_8_V_3_fu_3063_p1.read();
        pool_window_8_V_5_reg_6820 = pool_window_8_V_5_fu_3455_p1.read();
        pool_window_8_V_7_reg_6943 = pool_window_8_V_7_fu_3847_p1.read();
        pool_window_8_V_9_reg_7066 = pool_window_8_V_9_fu_4239_p1.read();
        pool_window_9_V_11_reg_7195 = pool_window_9_V_11_fu_4634_p1.read();
        pool_window_9_V_1_reg_6580 = pool_window_9_V_1_fu_2674_p1.read();
        pool_window_9_V_3_reg_6703 = pool_window_9_V_3_fu_3066_p1.read();
        pool_window_9_V_5_reg_6826 = pool_window_9_V_5_fu_3458_p1.read();
        pool_window_9_V_7_reg_6949 = pool_window_9_V_7_fu_3850_p1.read();
        pool_window_9_V_9_reg_7072 = pool_window_9_V_9_fu_4242_p1.read();
        select_ln66_106_reg_6999 = select_ln66_106_fu_4037_p3.read();
        select_ln66_117_reg_7004 = select_ln66_117_fu_4207_p3.read();
        select_ln66_128_reg_7122 = select_ln66_128_fu_4429_p3.read();
        select_ln66_139_reg_7127 = select_ln66_139_fu_4599_p3.read();
        select_ln66_150_reg_7245 = select_ln66_150_fu_4821_p3.read();
        select_ln66_161_reg_7250 = select_ln66_161_fu_4991_p3.read();
        select_ln66_40_reg_6630 = select_ln66_40_fu_2861_p3.read();
        select_ln66_51_reg_6635 = select_ln66_51_fu_3031_p3.read();
        select_ln66_62_reg_6753 = select_ln66_62_fu_3253_p3.read();
        select_ln66_73_reg_6758 = select_ln66_73_fu_3423_p3.read();
        select_ln66_84_reg_6876 = select_ln66_84_fu_3645_p3.read();
        select_ln66_95_reg_6881 = select_ln66_95_fu_3815_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5564.read()))) {
        sY_1 = ap_phi_mux_storemerge_i_i_phi_fu_527_p4.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln191_4_reg_5650_pp0_iter3_reg.read()))) {
        tmp_data_0_V_reg_7256 = tmp_9_fu_5058_p18.read().range(15, 6);
        tmp_data_1_V_reg_7261 = tmp_1_fu_5149_p18.read().range(15, 6);
        tmp_data_2_V_reg_7266 = tmp_2_fu_5240_p18.read().range(15, 6);
        tmp_data_3_V_reg_7271 = tmp_3_fu_5331_p18.read().range(15, 6);
        tmp_data_4_V_reg_7276 = tmp_4_fu_5422_p18.read().range(15, 6);
        tmp_data_5_V_reg_7281 = tmp_5_fu_5513_p18.read().range(15, 6);
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln241_fu_534_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

