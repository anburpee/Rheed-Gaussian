#include "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_clk_no_reset_() {
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
        if (esl_seteq<1,1,1>(ap_condition_1002.read(), ap_const_boolean_1)) {
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
    if (esl_seteq<1,1,1>(ap_condition_989.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read())) {
            pX_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln212_fu_566_p2.read())) {
            pX_1 = add_ln225_fu_572_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_1008.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln216_fu_590_p2.read())) {
            pY_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln216_fu_590_p2.read())) {
            pY_1 = add_ln220_fu_596_p2.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_condition_993.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5594.read())) {
            sX_1 = ap_const_lv32_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln212_reg_5594.read())) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        DataOut_V_102_reg_5659 = line_buffer_Array_V_4_0_3_q0.read();
        DataOut_V_105_reg_5666 = line_buffer_Array_V_4_0_4_q0.read();
        DataOut_V_108_reg_5673 = line_buffer_Array_V_4_0_5_q0.read();
        DataOut_V_93_reg_5638 = line_buffer_Array_V_4_0_0_q0.read();
        DataOut_V_96_reg_5645 = line_buffer_Array_V_4_0_1_q0.read();
        DataOut_V_99_reg_5652 = line_buffer_Array_V_4_0_2_q0.read();
        and_ln191_4_reg_5680 = and_ln191_4_fu_728_p2.read();
        shift_buffer_3_0_V_reg_5602 = data_V_data_0_V_dout.read();
        shift_buffer_3_1_V_reg_5608 = data_V_data_1_V_dout.read();
        shift_buffer_3_2_V_reg_5614 = data_V_data_2_V_dout.read();
        shift_buffer_3_3_V_reg_5620 = data_V_data_3_V_dout.read();
        shift_buffer_3_4_V_reg_5626 = data_V_data_4_V_dout.read();
        shift_buffer_3_5_V_reg_5632 = data_V_data_5_V_dout.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        and_ln191_4_reg_5680_pp0_iter2_reg = and_ln191_4_reg_5680.read();
        and_ln191_4_reg_5680_pp0_iter3_reg = and_ln191_4_reg_5680_pp0_iter2_reg.read();
        and_ln191_4_reg_5680_pp0_iter4_reg = and_ln191_4_reg_5680_pp0_iter3_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(and_ln191_4_reg_5680.read(), ap_const_lv1_1))) {
        icmp_ln1496_100_reg_6509 = icmp_ln1496_100_fu_2727_p2.read();
        icmp_ln1496_103_reg_6515 = icmp_ln1496_103_fu_2733_p2.read();
        icmp_ln1496_104_reg_6521 = icmp_ln1496_104_fu_2739_p2.read();
        icmp_ln1496_106_reg_6527 = icmp_ln1496_106_fu_2745_p2.read();
        icmp_ln1496_107_reg_6532 = icmp_ln1496_107_fu_2759_p2.read();
        icmp_ln1496_108_reg_6537 = icmp_ln1496_108_fu_2773_p2.read();
        icmp_ln1496_1_reg_5919 = icmp_ln1496_1_fu_1925_p2.read();
        icmp_ln1496_24_reg_5782 = icmp_ln1496_24_fu_1735_p2.read();
        icmp_ln1496_26_reg_5788 = icmp_ln1496_26_fu_1741_p2.read();
        icmp_ln1496_27_reg_5794 = icmp_ln1496_27_fu_1747_p2.read();
        icmp_ln1496_2_reg_6062 = icmp_ln1496_2_fu_2121_p2.read();
        icmp_ln1496_30_reg_5800 = icmp_ln1496_30_fu_1753_p2.read();
        icmp_ln1496_31_reg_5806 = icmp_ln1496_31_fu_1759_p2.read();
        icmp_ln1496_33_reg_5812 = icmp_ln1496_33_fu_1765_p2.read();
        icmp_ln1496_34_reg_5817 = icmp_ln1496_34_fu_1779_p2.read();
        icmp_ln1496_35_reg_5822 = icmp_ln1496_35_fu_1793_p2.read();
        icmp_ln1496_38_reg_5925 = icmp_ln1496_38_fu_1931_p2.read();
        icmp_ln1496_40_reg_5931 = icmp_ln1496_40_fu_1937_p2.read();
        icmp_ln1496_41_reg_5937 = icmp_ln1496_41_fu_1943_p2.read();
        icmp_ln1496_44_reg_5943 = icmp_ln1496_44_fu_1949_p2.read();
        icmp_ln1496_45_reg_5949 = icmp_ln1496_45_fu_1955_p2.read();
        icmp_ln1496_47_reg_5955 = icmp_ln1496_47_fu_1961_p2.read();
        icmp_ln1496_48_reg_5960 = icmp_ln1496_48_fu_1975_p2.read();
        icmp_ln1496_49_reg_5965 = icmp_ln1496_49_fu_1989_p2.read();
        icmp_ln1496_52_reg_6068 = icmp_ln1496_52_fu_2127_p2.read();
        icmp_ln1496_54_reg_6074 = icmp_ln1496_54_fu_2133_p2.read();
        icmp_ln1496_55_reg_6080 = icmp_ln1496_55_fu_2139_p2.read();
        icmp_ln1496_58_reg_6086 = icmp_ln1496_58_fu_2145_p2.read();
        icmp_ln1496_59_reg_6092 = icmp_ln1496_59_fu_2151_p2.read();
        icmp_ln1496_61_reg_6098 = icmp_ln1496_61_fu_2157_p2.read();
        icmp_ln1496_62_reg_6103 = icmp_ln1496_62_fu_2171_p2.read();
        icmp_ln1496_63_reg_6108 = icmp_ln1496_63_fu_2185_p2.read();
        icmp_ln1496_66_reg_6205 = icmp_ln1496_66_fu_2317_p2.read();
        icmp_ln1496_67_reg_6211 = icmp_ln1496_67_fu_2323_p2.read();
        icmp_ln1496_69_reg_6217 = icmp_ln1496_69_fu_2329_p2.read();
        icmp_ln1496_70_reg_6223 = icmp_ln1496_70_fu_2335_p2.read();
        icmp_ln1496_73_reg_6229 = icmp_ln1496_73_fu_2341_p2.read();
        icmp_ln1496_74_reg_6235 = icmp_ln1496_74_fu_2347_p2.read();
        icmp_ln1496_76_reg_6241 = icmp_ln1496_76_fu_2353_p2.read();
        icmp_ln1496_77_reg_6246 = icmp_ln1496_77_fu_2367_p2.read();
        icmp_ln1496_78_reg_6251 = icmp_ln1496_78_fu_2381_p2.read();
        icmp_ln1496_81_reg_6348 = icmp_ln1496_81_fu_2513_p2.read();
        icmp_ln1496_82_reg_6354 = icmp_ln1496_82_fu_2519_p2.read();
        icmp_ln1496_84_reg_6360 = icmp_ln1496_84_fu_2525_p2.read();
        icmp_ln1496_85_reg_6366 = icmp_ln1496_85_fu_2531_p2.read();
        icmp_ln1496_88_reg_6372 = icmp_ln1496_88_fu_2537_p2.read();
        icmp_ln1496_89_reg_6378 = icmp_ln1496_89_fu_2543_p2.read();
        icmp_ln1496_91_reg_6384 = icmp_ln1496_91_fu_2549_p2.read();
        icmp_ln1496_92_reg_6389 = icmp_ln1496_92_fu_2563_p2.read();
        icmp_ln1496_93_reg_6394 = icmp_ln1496_93_fu_2577_p2.read();
        icmp_ln1496_96_reg_6491 = icmp_ln1496_96_fu_2709_p2.read();
        icmp_ln1496_97_reg_6497 = icmp_ln1496_97_fu_2715_p2.read();
        icmp_ln1496_99_reg_6503 = icmp_ln1496_99_fu_2721_p2.read();
        icmp_ln1496_reg_5776 = icmp_ln1496_fu_1729_p2.read();
        pool_window_0_V_17_reg_5827 = pool_window_0_V_17_fu_1799_p3.read();
        pool_window_0_V_19_reg_5970 = pool_window_0_V_19_fu_1995_p3.read();
        pool_window_0_V_21_reg_6113 = pool_window_0_V_21_fu_2191_p3.read();
        pool_window_0_V_23_reg_6256 = pool_window_0_V_23_fu_2387_p3.read();
        pool_window_0_V_25_reg_6399 = pool_window_0_V_25_fu_2583_p3.read();
        pool_window_0_V_reg_5684 = pool_window_0_V_fu_1603_p3.read();
        pool_window_10_V_10_reg_6459 = pool_window_10_V_10_fu_2663_p3.read();
        pool_window_10_V_2_reg_5887 = pool_window_10_V_2_fu_1879_p3.read();
        pool_window_10_V_4_reg_6030 = pool_window_10_V_4_fu_2075_p3.read();
        pool_window_10_V_6_reg_6173 = pool_window_10_V_6_fu_2271_p3.read();
        pool_window_10_V_8_reg_6316 = pool_window_10_V_8_fu_2467_p3.read();
        pool_window_10_V_reg_5744 = pool_window_10_V_fu_1683_p3.read();
        pool_window_11_V_10_reg_6465 = pool_window_11_V_10_fu_2671_p3.read();
        pool_window_11_V_2_reg_5893 = pool_window_11_V_2_fu_1887_p3.read();
        pool_window_11_V_4_reg_6036 = pool_window_11_V_4_fu_2083_p3.read();
        pool_window_11_V_6_reg_6179 = pool_window_11_V_6_fu_2279_p3.read();
        pool_window_11_V_8_reg_6322 = pool_window_11_V_8_fu_2475_p3.read();
        pool_window_11_V_reg_5750 = pool_window_11_V_fu_1691_p3.read();
        pool_window_12_V_10_reg_6471 = pool_window_12_V_10_fu_2678_p3.read();
        pool_window_12_V_2_reg_5899 = pool_window_12_V_2_fu_1894_p3.read();
        pool_window_12_V_4_reg_6042 = pool_window_12_V_4_fu_2090_p3.read();
        pool_window_12_V_6_reg_6185 = pool_window_12_V_6_fu_2286_p3.read();
        pool_window_12_V_8_reg_6328 = pool_window_12_V_8_fu_2482_p3.read();
        pool_window_12_V_reg_5756 = pool_window_12_V_fu_1698_p3.read();
        pool_window_13_V_10_reg_6476 = pool_window_13_V_10_fu_2686_p3.read();
        pool_window_13_V_2_reg_5904 = pool_window_13_V_2_fu_1902_p3.read();
        pool_window_13_V_4_reg_6047 = pool_window_13_V_4_fu_2098_p3.read();
        pool_window_13_V_6_reg_6190 = pool_window_13_V_6_fu_2294_p3.read();
        pool_window_13_V_8_reg_6333 = pool_window_13_V_8_fu_2490_p3.read();
        pool_window_13_V_reg_5761 = pool_window_13_V_fu_1706_p3.read();
        pool_window_14_V_10_reg_6481 = pool_window_14_V_10_fu_2694_p3.read();
        pool_window_14_V_2_reg_5909 = pool_window_14_V_2_fu_1910_p3.read();
        pool_window_14_V_4_reg_6052 = pool_window_14_V_4_fu_2106_p3.read();
        pool_window_14_V_6_reg_6195 = pool_window_14_V_6_fu_2302_p3.read();
        pool_window_14_V_8_reg_6338 = pool_window_14_V_8_fu_2498_p3.read();
        pool_window_14_V_reg_5766 = pool_window_14_V_fu_1714_p3.read();
        pool_window_15_V_10_reg_6486 = pool_window_15_V_10_fu_2702_p3.read();
        pool_window_15_V_2_reg_5914 = pool_window_15_V_2_fu_1918_p3.read();
        pool_window_15_V_4_reg_6057 = pool_window_15_V_4_fu_2114_p3.read();
        pool_window_15_V_6_reg_6200 = pool_window_15_V_6_fu_2310_p3.read();
        pool_window_15_V_8_reg_6343 = pool_window_15_V_8_fu_2506_p3.read();
        pool_window_15_V_reg_5771 = pool_window_15_V_fu_1722_p3.read();
        pool_window_1_V_17_reg_5833 = pool_window_1_V_17_fu_1807_p3.read();
        pool_window_1_V_19_reg_5976 = pool_window_1_V_19_fu_2003_p3.read();
        pool_window_1_V_21_reg_6119 = pool_window_1_V_21_fu_2199_p3.read();
        pool_window_1_V_23_reg_6262 = pool_window_1_V_23_fu_2395_p3.read();
        pool_window_1_V_25_reg_6405 = pool_window_1_V_25_fu_2591_p3.read();
        pool_window_1_V_reg_5690 = pool_window_1_V_fu_1611_p3.read();
        pool_window_2_V_17_reg_5839 = pool_window_2_V_17_fu_1815_p3.read();
        pool_window_2_V_19_reg_5982 = pool_window_2_V_19_fu_2011_p3.read();
        pool_window_2_V_21_reg_6125 = pool_window_2_V_21_fu_2207_p3.read();
        pool_window_2_V_23_reg_6268 = pool_window_2_V_23_fu_2403_p3.read();
        pool_window_2_V_25_reg_6411 = pool_window_2_V_25_fu_2599_p3.read();
        pool_window_2_V_reg_5696 = pool_window_2_V_fu_1619_p3.read();
        pool_window_3_V_17_reg_5845 = pool_window_3_V_17_fu_1823_p3.read();
        pool_window_3_V_19_reg_5988 = pool_window_3_V_19_fu_2019_p3.read();
        pool_window_3_V_21_reg_6131 = pool_window_3_V_21_fu_2215_p3.read();
        pool_window_3_V_23_reg_6274 = pool_window_3_V_23_fu_2411_p3.read();
        pool_window_3_V_25_reg_6417 = pool_window_3_V_25_fu_2607_p3.read();
        pool_window_3_V_reg_5702 = pool_window_3_V_fu_1627_p3.read();
        pool_window_4_V_10_reg_6423 = pool_window_4_V_10_fu_2615_p3.read();
        pool_window_4_V_2_reg_5851 = pool_window_4_V_2_fu_1831_p3.read();
        pool_window_4_V_4_reg_5994 = pool_window_4_V_4_fu_2027_p3.read();
        pool_window_4_V_6_reg_6137 = pool_window_4_V_6_fu_2223_p3.read();
        pool_window_4_V_8_reg_6280 = pool_window_4_V_8_fu_2419_p3.read();
        pool_window_4_V_reg_5708 = pool_window_4_V_fu_1635_p3.read();
        pool_window_5_V_10_reg_6429 = pool_window_5_V_10_fu_2623_p3.read();
        pool_window_5_V_2_reg_5857 = pool_window_5_V_2_fu_1839_p3.read();
        pool_window_5_V_4_reg_6000 = pool_window_5_V_4_fu_2035_p3.read();
        pool_window_5_V_6_reg_6143 = pool_window_5_V_6_fu_2231_p3.read();
        pool_window_5_V_8_reg_6286 = pool_window_5_V_8_fu_2427_p3.read();
        pool_window_5_V_reg_5714 = pool_window_5_V_fu_1643_p3.read();
        pool_window_6_V_10_reg_6435 = pool_window_6_V_10_fu_2631_p3.read();
        pool_window_6_V_2_reg_5863 = pool_window_6_V_2_fu_1847_p3.read();
        pool_window_6_V_4_reg_6006 = pool_window_6_V_4_fu_2043_p3.read();
        pool_window_6_V_6_reg_6149 = pool_window_6_V_6_fu_2239_p3.read();
        pool_window_6_V_8_reg_6292 = pool_window_6_V_8_fu_2435_p3.read();
        pool_window_6_V_reg_5720 = pool_window_6_V_fu_1651_p3.read();
        pool_window_7_V_10_reg_6441 = pool_window_7_V_10_fu_2639_p3.read();
        pool_window_7_V_2_reg_5869 = pool_window_7_V_2_fu_1855_p3.read();
        pool_window_7_V_4_reg_6012 = pool_window_7_V_4_fu_2051_p3.read();
        pool_window_7_V_6_reg_6155 = pool_window_7_V_6_fu_2247_p3.read();
        pool_window_7_V_8_reg_6298 = pool_window_7_V_8_fu_2443_p3.read();
        pool_window_7_V_reg_5726 = pool_window_7_V_fu_1659_p3.read();
        pool_window_8_V_10_reg_6447 = pool_window_8_V_10_fu_2647_p3.read();
        pool_window_8_V_2_reg_5875 = pool_window_8_V_2_fu_1863_p3.read();
        pool_window_8_V_4_reg_6018 = pool_window_8_V_4_fu_2059_p3.read();
        pool_window_8_V_6_reg_6161 = pool_window_8_V_6_fu_2255_p3.read();
        pool_window_8_V_8_reg_6304 = pool_window_8_V_8_fu_2451_p3.read();
        pool_window_8_V_reg_5732 = pool_window_8_V_fu_1667_p3.read();
        pool_window_9_V_10_reg_6453 = pool_window_9_V_10_fu_2655_p3.read();
        pool_window_9_V_2_reg_5881 = pool_window_9_V_2_fu_1871_p3.read();
        pool_window_9_V_4_reg_6024 = pool_window_9_V_4_fu_2067_p3.read();
        pool_window_9_V_6_reg_6167 = pool_window_9_V_6_fu_2263_p3.read();
        pool_window_9_V_8_reg_6310 = pool_window_9_V_8_fu_2459_p3.read();
        pool_window_9_V_reg_5738 = pool_window_9_V_fu_1675_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()))) {
        icmp_ln191_5_reg_5584 = icmp_ln191_5_fu_550_p2.read();
        icmp_ln191_6_reg_5589 = icmp_ln191_6_fu_560_p2.read();
        icmp_ln212_reg_5594 = icmp_ln212_fu_566_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()))) {
        icmp_ln216_reg_5598 = icmp_ln216_fu_590_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln241_reg_5575 = icmp_ln241_fu_534_p2.read();
        icmp_ln241_reg_5575_pp0_iter1_reg = icmp_ln241_reg_5575.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
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
        kernel_data_V_4_66 = DataOut_V_93_reg_5638.read();
        kernel_data_V_4_67 = DataOut_V_96_reg_5645.read();
        kernel_data_V_4_68 = DataOut_V_99_reg_5652.read();
        kernel_data_V_4_69 = DataOut_V_102_reg_5659.read();
        kernel_data_V_4_7 = kernel_data_V_4_13.read();
        kernel_data_V_4_70 = DataOut_V_105_reg_5666.read();
        kernel_data_V_4_71 = DataOut_V_108_reg_5673.read();
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
        kernel_data_V_4_90 = shift_buffer_3_0_V_reg_5602.read();
        kernel_data_V_4_91 = shift_buffer_3_1_V_reg_5608.read();
        kernel_data_V_4_92 = shift_buffer_3_2_V_reg_5614.read();
        kernel_data_V_4_93 = shift_buffer_3_3_V_reg_5620.read();
        kernel_data_V_4_94 = shift_buffer_3_4_V_reg_5626.read();
        kernel_data_V_4_95 = shift_buffer_3_5_V_reg_5632.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln191_4_reg_5680_pp0_iter2_reg.read()))) {
        pool_window_0_V_16_reg_6542 = pool_window_0_V_16_fu_2779_p1.read();
        pool_window_0_V_18_reg_6665 = pool_window_0_V_18_fu_3154_p1.read();
        pool_window_0_V_20_reg_6788 = pool_window_0_V_20_fu_3529_p1.read();
        pool_window_0_V_22_reg_6911 = pool_window_0_V_22_fu_3904_p1.read();
        pool_window_0_V_24_reg_7034 = pool_window_0_V_24_fu_4279_p1.read();
        pool_window_0_V_26_reg_7157 = pool_window_0_V_26_fu_4654_p1.read();
        pool_window_10_V_11_reg_7225 = pool_window_10_V_11_fu_4684_p1.read();
        pool_window_10_V_1_reg_6610 = pool_window_10_V_1_fu_2809_p1.read();
        pool_window_10_V_3_reg_6733 = pool_window_10_V_3_fu_3184_p1.read();
        pool_window_10_V_5_reg_6856 = pool_window_10_V_5_fu_3559_p1.read();
        pool_window_10_V_7_reg_6979 = pool_window_10_V_7_fu_3934_p1.read();
        pool_window_10_V_9_reg_7102 = pool_window_10_V_9_fu_4309_p1.read();
        pool_window_11_V_11_reg_7231 = pool_window_11_V_11_fu_4687_p1.read();
        pool_window_11_V_1_reg_6616 = pool_window_11_V_1_fu_2812_p1.read();
        pool_window_11_V_3_reg_6739 = pool_window_11_V_3_fu_3187_p1.read();
        pool_window_11_V_5_reg_6862 = pool_window_11_V_5_fu_3562_p1.read();
        pool_window_11_V_7_reg_6985 = pool_window_11_V_7_fu_3937_p1.read();
        pool_window_11_V_9_reg_7108 = pool_window_11_V_9_fu_4312_p1.read();
        pool_window_12_V_11_reg_7237 = pool_window_12_V_11_fu_4690_p1.read();
        pool_window_12_V_1_reg_6622 = pool_window_12_V_1_fu_2815_p1.read();
        pool_window_12_V_3_reg_6745 = pool_window_12_V_3_fu_3190_p1.read();
        pool_window_12_V_5_reg_6868 = pool_window_12_V_5_fu_3565_p1.read();
        pool_window_12_V_7_reg_6991 = pool_window_12_V_7_fu_3940_p1.read();
        pool_window_12_V_9_reg_7114 = pool_window_12_V_9_fu_4315_p1.read();
        pool_window_13_V_11_reg_7243 = pool_window_13_V_11_fu_4693_p1.read();
        pool_window_13_V_1_reg_6628 = pool_window_13_V_1_fu_2818_p1.read();
        pool_window_13_V_3_reg_6751 = pool_window_13_V_3_fu_3193_p1.read();
        pool_window_13_V_5_reg_6874 = pool_window_13_V_5_fu_3568_p1.read();
        pool_window_13_V_7_reg_6997 = pool_window_13_V_7_fu_3943_p1.read();
        pool_window_13_V_9_reg_7120 = pool_window_13_V_9_fu_4318_p1.read();
        pool_window_14_V_11_reg_7249 = pool_window_14_V_11_fu_4696_p1.read();
        pool_window_14_V_1_reg_6634 = pool_window_14_V_1_fu_2821_p1.read();
        pool_window_14_V_3_reg_6757 = pool_window_14_V_3_fu_3196_p1.read();
        pool_window_14_V_5_reg_6880 = pool_window_14_V_5_fu_3571_p1.read();
        pool_window_14_V_7_reg_7003 = pool_window_14_V_7_fu_3946_p1.read();
        pool_window_14_V_9_reg_7126 = pool_window_14_V_9_fu_4321_p1.read();
        pool_window_15_V_11_reg_7255 = pool_window_15_V_11_fu_4699_p1.read();
        pool_window_15_V_1_reg_6640 = pool_window_15_V_1_fu_2824_p1.read();
        pool_window_15_V_3_reg_6763 = pool_window_15_V_3_fu_3199_p1.read();
        pool_window_15_V_5_reg_6886 = pool_window_15_V_5_fu_3574_p1.read();
        pool_window_15_V_7_reg_7009 = pool_window_15_V_7_fu_3949_p1.read();
        pool_window_15_V_9_reg_7132 = pool_window_15_V_9_fu_4324_p1.read();
        pool_window_1_V_16_reg_6548 = pool_window_1_V_16_fu_2782_p1.read();
        pool_window_1_V_18_reg_6671 = pool_window_1_V_18_fu_3157_p1.read();
        pool_window_1_V_20_reg_6794 = pool_window_1_V_20_fu_3532_p1.read();
        pool_window_1_V_22_reg_6917 = pool_window_1_V_22_fu_3907_p1.read();
        pool_window_1_V_24_reg_7040 = pool_window_1_V_24_fu_4282_p1.read();
        pool_window_1_V_26_reg_7163 = pool_window_1_V_26_fu_4657_p1.read();
        pool_window_2_V_16_reg_6554 = pool_window_2_V_16_fu_2785_p1.read();
        pool_window_2_V_18_reg_6677 = pool_window_2_V_18_fu_3160_p1.read();
        pool_window_2_V_20_reg_6800 = pool_window_2_V_20_fu_3535_p1.read();
        pool_window_2_V_22_reg_6923 = pool_window_2_V_22_fu_3910_p1.read();
        pool_window_2_V_24_reg_7046 = pool_window_2_V_24_fu_4285_p1.read();
        pool_window_2_V_26_reg_7169 = pool_window_2_V_26_fu_4660_p1.read();
        pool_window_3_V_16_reg_6560 = pool_window_3_V_16_fu_2788_p1.read();
        pool_window_3_V_18_reg_6683 = pool_window_3_V_18_fu_3163_p1.read();
        pool_window_3_V_20_reg_6806 = pool_window_3_V_20_fu_3538_p1.read();
        pool_window_3_V_22_reg_6929 = pool_window_3_V_22_fu_3913_p1.read();
        pool_window_3_V_24_reg_7052 = pool_window_3_V_24_fu_4288_p1.read();
        pool_window_3_V_26_reg_7175 = pool_window_3_V_26_fu_4663_p1.read();
        pool_window_4_V_11_reg_7181 = pool_window_4_V_11_fu_4666_p1.read();
        pool_window_4_V_1_reg_6566 = pool_window_4_V_1_fu_2791_p1.read();
        pool_window_4_V_3_reg_6689 = pool_window_4_V_3_fu_3166_p1.read();
        pool_window_4_V_5_reg_6812 = pool_window_4_V_5_fu_3541_p1.read();
        pool_window_4_V_7_reg_6935 = pool_window_4_V_7_fu_3916_p1.read();
        pool_window_4_V_9_reg_7058 = pool_window_4_V_9_fu_4291_p1.read();
        pool_window_5_V_11_reg_7187 = pool_window_5_V_11_fu_4669_p1.read();
        pool_window_5_V_1_reg_6572 = pool_window_5_V_1_fu_2794_p1.read();
        pool_window_5_V_3_reg_6695 = pool_window_5_V_3_fu_3169_p1.read();
        pool_window_5_V_5_reg_6818 = pool_window_5_V_5_fu_3544_p1.read();
        pool_window_5_V_7_reg_6941 = pool_window_5_V_7_fu_3919_p1.read();
        pool_window_5_V_9_reg_7064 = pool_window_5_V_9_fu_4294_p1.read();
        pool_window_6_V_11_reg_7193 = pool_window_6_V_11_fu_4672_p1.read();
        pool_window_6_V_1_reg_6578 = pool_window_6_V_1_fu_2797_p1.read();
        pool_window_6_V_3_reg_6701 = pool_window_6_V_3_fu_3172_p1.read();
        pool_window_6_V_5_reg_6824 = pool_window_6_V_5_fu_3547_p1.read();
        pool_window_6_V_7_reg_6947 = pool_window_6_V_7_fu_3922_p1.read();
        pool_window_6_V_9_reg_7070 = pool_window_6_V_9_fu_4297_p1.read();
        pool_window_7_V_11_reg_7199 = pool_window_7_V_11_fu_4675_p1.read();
        pool_window_7_V_1_reg_6584 = pool_window_7_V_1_fu_2800_p1.read();
        pool_window_7_V_3_reg_6707 = pool_window_7_V_3_fu_3175_p1.read();
        pool_window_7_V_5_reg_6830 = pool_window_7_V_5_fu_3550_p1.read();
        pool_window_7_V_7_reg_6953 = pool_window_7_V_7_fu_3925_p1.read();
        pool_window_7_V_9_reg_7076 = pool_window_7_V_9_fu_4300_p1.read();
        pool_window_8_V_11_reg_7213 = pool_window_8_V_11_fu_4678_p1.read();
        pool_window_8_V_1_reg_6598 = pool_window_8_V_1_fu_2803_p1.read();
        pool_window_8_V_3_reg_6721 = pool_window_8_V_3_fu_3178_p1.read();
        pool_window_8_V_5_reg_6844 = pool_window_8_V_5_fu_3553_p1.read();
        pool_window_8_V_7_reg_6967 = pool_window_8_V_7_fu_3928_p1.read();
        pool_window_8_V_9_reg_7090 = pool_window_8_V_9_fu_4303_p1.read();
        pool_window_9_V_11_reg_7219 = pool_window_9_V_11_fu_4681_p1.read();
        pool_window_9_V_1_reg_6604 = pool_window_9_V_1_fu_2806_p1.read();
        pool_window_9_V_3_reg_6727 = pool_window_9_V_3_fu_3181_p1.read();
        pool_window_9_V_5_reg_6850 = pool_window_9_V_5_fu_3556_p1.read();
        pool_window_9_V_7_reg_6973 = pool_window_9_V_7_fu_3931_p1.read();
        pool_window_9_V_9_reg_7096 = pool_window_9_V_9_fu_4306_p1.read();
        select_ln66_106_reg_7023 = select_ln66_106_fu_4118_p3.read();
        select_ln66_117_reg_7028 = select_ln66_117_fu_4271_p3.read();
        select_ln66_128_reg_7146 = select_ln66_128_fu_4493_p3.read();
        select_ln66_139_reg_7151 = select_ln66_139_fu_4646_p3.read();
        select_ln66_150_reg_7269 = select_ln66_150_fu_4868_p3.read();
        select_ln66_161_reg_7274 = select_ln66_161_fu_5021_p3.read();
        select_ln66_40_reg_6654 = select_ln66_40_fu_2993_p3.read();
        select_ln66_51_reg_6659 = select_ln66_51_fu_3146_p3.read();
        select_ln66_62_reg_6777 = select_ln66_62_fu_3368_p3.read();
        select_ln66_73_reg_6782 = select_ln66_73_fu_3521_p3.read();
        select_ln66_84_reg_6900 = select_ln66_84_fu_3743_p3.read();
        select_ln66_95_reg_6905 = select_ln66_95_fu_3896_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5594.read()))) {
        sY_1 = ap_phi_mux_storemerge_i_i_phi_fu_527_p4.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln191_4_reg_5680_pp0_iter3_reg.read()))) {
        tmp_data_0_V_reg_7280 = tmp_9_fu_5088_p18.read().range(11, 8);
        tmp_data_1_V_reg_7285 = tmp_1_fu_5179_p18.read().range(11, 8);
        tmp_data_2_V_reg_7290 = tmp_2_fu_5270_p18.read().range(11, 8);
        tmp_data_3_V_reg_7295 = tmp_3_fu_5361_p18.read().range(11, 8);
        tmp_data_4_V_reg_7300 = tmp_4_fu_5452_p18.read().range(11, 8);
        tmp_data_5_V_reg_7305 = tmp_5_fu_5543_p18.read().range(11, 8);
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_NS_fsm() {
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

