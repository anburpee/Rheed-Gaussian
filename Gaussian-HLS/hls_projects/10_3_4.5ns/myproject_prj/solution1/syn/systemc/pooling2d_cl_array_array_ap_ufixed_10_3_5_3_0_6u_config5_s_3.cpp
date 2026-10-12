#include "pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_add_ln220_fu_596_p2() {
    add_ln220_fu_596_p2 = (!pY_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pY_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_add_ln222_fu_760_p2() {
    add_ln222_fu_760_p2 = (!sY_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(sY_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_add_ln225_fu_572_p2() {
    add_ln225_fu_572_p2 = (!pX_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pX_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_add_ln227_fu_734_p2() {
    add_ln227_fu_734_p2 = (!sX_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(sX_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_add_ln241_fu_540_p2() {
    add_ln241_fu_540_p2 = (!indvar_flatten_reg_512.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_biguint<12>(indvar_flatten_reg_512.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_and_ln191_3_fu_724_p2() {
    and_ln191_3_fu_724_p2 = (icmp_ln191_5_reg_5554.read() & icmp_ln191_6_reg_5559.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_and_ln191_4_fu_728_p2() {
    and_ln191_4_fu_728_p2 = (and_ln191_3_fu_724_p2.read() & and_ln191_fu_718_p2.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_and_ln191_fu_718_p2() {
    and_ln191_fu_718_p2 = (icmp_ln191_fu_702_p2.read() & icmp_ln191_4_fu_712_p2.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[2];
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = (esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_condition_382() {
    ap_condition_382 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_condition_977() {
    ap_condition_977 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_condition_981() {
    ap_condition_981 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_condition_990() {
    ap_condition_990 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln216_fu_590_p2.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_condition_996() {
    ap_condition_996 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln241_fu_534_p2.read())) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_phi_mux_storemerge_i_i_phi_fu_527_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5564.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln216_reg_5568.read()))) {
        ap_phi_mux_storemerge_i_i_phi_fu_527_p4 = select_ln222_fu_766_p3.read();
    } else {
        ap_phi_mux_storemerge_i_i_phi_fu_527_p4 = ap_phi_reg_pp0_iter1_storemerge_i_i_reg_523.read();
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_phi_reg_pp0_iter0_storemerge_i_i_reg_523() {
    ap_phi_reg_pp0_iter0_storemerge_i_i_reg_523 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0))) {
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n.read();
    } else {
        data_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_0_V_read = ap_const_logic_1;
    } else {
        data_V_data_0_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0))) {
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n.read();
    } else {
        data_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_1_V_read = ap_const_logic_1;
    } else {
        data_V_data_1_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0))) {
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n.read();
    } else {
        data_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_2_V_read = ap_const_logic_1;
    } else {
        data_V_data_2_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0))) {
        data_V_data_3_V_blk_n = data_V_data_3_V_empty_n.read();
    } else {
        data_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_3_V_read = ap_const_logic_1;
    } else {
        data_V_data_3_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0))) {
        data_V_data_4_V_blk_n = data_V_data_4_V_empty_n.read();
    } else {
        data_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_4_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_4_V_read = ap_const_logic_1;
    } else {
        data_V_data_4_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0))) {
        data_V_data_5_V_blk_n = data_V_data_5_V_empty_n.read();
    } else {
        data_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_data_V_data_5_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_5_V_read = ap_const_logic_1;
    } else {
        data_V_data_5_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_100_fu_2617_p2() {
    icmp_ln1496_100_fu_2617_p2 = (!pool_window_6_V_10_fu_2521_p3.read().is_01() || !pool_window_7_V_10_fu_2529_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_6_V_10_fu_2521_p3.read()) < sc_biguint<16>(pool_window_7_V_10_fu_2529_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_101_fu_4759_p2() {
    icmp_ln1496_101_fu_4759_p2 = (!select_ln66_146_fu_4742_p3.read().is_01() || !select_ln66_148_fu_4754_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_146_fu_4742_p3.read()) < sc_biguint<16>(select_ln66_148_fu_4754_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_102_fu_4815_p2() {
    icmp_ln1496_102_fu_4815_p2 = (!phi_ln66_29_fu_4697_p18.read().is_01() || !phi_ln66_30_fu_4777_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_29_fu_4697_p18.read()) < sc_bigint<20>(phi_ln66_30_fu_4777_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_103_fu_2623_p2() {
    icmp_ln1496_103_fu_2623_p2 = (!pool_window_8_V_10_fu_2537_p3.read().is_01() || !pool_window_9_V_10_fu_2545_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_8_V_10_fu_2537_p3.read()) < sc_biguint<16>(pool_window_9_V_10_fu_2545_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_104_fu_2629_p2() {
    icmp_ln1496_104_fu_2629_p2 = (!pool_window_10_V_10_fu_2553_p3.read().is_01() || !pool_window_11_V_10_fu_2561_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_10_V_10_fu_2553_p3.read()) < sc_biguint<16>(pool_window_11_V_10_fu_2561_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_105_fu_4853_p2() {
    icmp_ln1496_105_fu_4853_p2 = (!select_ln66_152_fu_4836_p3.read().is_01() || !select_ln66_154_fu_4848_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_152_fu_4836_p3.read()) < sc_biguint<16>(select_ln66_154_fu_4848_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_106_fu_2635_p2() {
    icmp_ln1496_106_fu_2635_p2 = (!pool_window_12_V_10_fu_2568_p3.read().is_01() || !pool_window_13_V_10_fu_2576_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_12_V_10_fu_2568_p3.read()) < sc_biguint<16>(pool_window_13_V_10_fu_2576_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_107_fu_2641_p2() {
    icmp_ln1496_107_fu_2641_p2 = (!pool_window_14_V_10_fu_2584_p3.read().is_01() || !pool_window_15_V_10_fu_2592_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_14_V_10_fu_2584_p3.read()) < sc_biguint<16>(pool_window_15_V_10_fu_2592_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_108_fu_4929_p2() {
    icmp_ln1496_108_fu_4929_p2 = (!select_ln66_157_fu_4912_p3.read().is_01() || !select_ln66_159_fu_4924_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_157_fu_4912_p3.read()) < sc_biguint<16>(select_ln66_159_fu_4924_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_109_fu_4985_p2() {
    icmp_ln1496_109_fu_4985_p2 = (!phi_ln66_32_fu_4867_p18.read().is_01() || !phi_ln66_33_fu_4947_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_32_fu_4867_p18.read()) < sc_bigint<20>(phi_ln66_33_fu_4947_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_110_fu_5500_p2() {
    icmp_ln1496_110_fu_5500_p2 = (!phi_ln66_31_fu_5457_p18.read().is_01() || !phi_ln66_34_fu_5479_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_31_fu_5457_p18.read()) < sc_bigint<20>(phi_ln66_34_fu_5479_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_1_fu_1903_p2() {
    icmp_ln1496_1_fu_1903_p2 = (!pool_window_0_V_17_fu_1777_p3.read().is_01() || !pool_window_1_V_17_fu_1785_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_0_V_17_fu_1777_p3.read()) < sc_biguint<16>(pool_window_1_V_17_fu_1785_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_24_fu_1735_p2() {
    icmp_ln1496_24_fu_1735_p2 = (!pool_window_2_V_fu_1619_p3.read().is_01() || !pool_window_3_V_fu_1627_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_2_V_fu_1619_p3.read()) < sc_biguint<16>(pool_window_3_V_fu_1627_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_25_fu_2715_p2() {
    icmp_ln1496_25_fu_2715_p2 = (!select_ln66_fu_2698_p3.read().is_01() || !select_ln66_33_fu_2710_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_fu_2698_p3.read()) < sc_biguint<16>(select_ln66_33_fu_2710_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_26_fu_1741_p2() {
    icmp_ln1496_26_fu_1741_p2 = (!pool_window_4_V_fu_1635_p3.read().is_01() || !pool_window_5_V_fu_1643_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_4_V_fu_1635_p3.read()) < sc_biguint<16>(pool_window_5_V_fu_1643_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_27_fu_1747_p2() {
    icmp_ln1496_27_fu_1747_p2 = (!pool_window_6_V_fu_1651_p3.read().is_01() || !pool_window_7_V_fu_1659_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_6_V_fu_1651_p3.read()) < sc_biguint<16>(pool_window_7_V_fu_1659_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_28_fu_2799_p2() {
    icmp_ln1496_28_fu_2799_p2 = (!select_ln66_36_fu_2782_p3.read().is_01() || !select_ln66_38_fu_2794_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_36_fu_2782_p3.read()) < sc_biguint<16>(select_ln66_38_fu_2794_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_29_fu_2855_p2() {
    icmp_ln1496_29_fu_2855_p2 = (!phi_ln_fu_2737_p18.read().is_01() || !phi_ln66_1_fu_2817_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln_fu_2737_p18.read()) < sc_bigint<20>(phi_ln66_1_fu_2817_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_2_fu_2077_p2() {
    icmp_ln1496_2_fu_2077_p2 = (!pool_window_0_V_19_fu_1951_p3.read().is_01() || !pool_window_1_V_19_fu_1959_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_0_V_19_fu_1951_p3.read()) < sc_biguint<16>(pool_window_1_V_19_fu_1959_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_30_fu_1753_p2() {
    icmp_ln1496_30_fu_1753_p2 = (!pool_window_8_V_fu_1667_p3.read().is_01() || !pool_window_9_V_fu_1675_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_8_V_fu_1667_p3.read()) < sc_biguint<16>(pool_window_9_V_fu_1675_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_31_fu_1759_p2() {
    icmp_ln1496_31_fu_1759_p2 = (!pool_window_10_V_fu_1683_p3.read().is_01() || !pool_window_11_V_fu_1691_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_10_V_fu_1683_p3.read()) < sc_biguint<16>(pool_window_11_V_fu_1691_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_32_fu_2893_p2() {
    icmp_ln1496_32_fu_2893_p2 = (!select_ln66_42_fu_2876_p3.read().is_01() || !select_ln66_44_fu_2888_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_42_fu_2876_p3.read()) < sc_biguint<16>(select_ln66_44_fu_2888_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_33_fu_1765_p2() {
    icmp_ln1496_33_fu_1765_p2 = (!pool_window_12_V_fu_1698_p3.read().is_01() || !pool_window_13_V_fu_1706_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_12_V_fu_1698_p3.read()) < sc_biguint<16>(pool_window_13_V_fu_1706_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_34_fu_1771_p2() {
    icmp_ln1496_34_fu_1771_p2 = (!pool_window_14_V_fu_1714_p3.read().is_01() || !pool_window_15_V_fu_1722_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_14_V_fu_1714_p3.read()) < sc_biguint<16>(pool_window_15_V_fu_1722_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_35_fu_2969_p2() {
    icmp_ln1496_35_fu_2969_p2 = (!select_ln66_47_fu_2952_p3.read().is_01() || !select_ln66_49_fu_2964_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_47_fu_2952_p3.read()) < sc_biguint<16>(select_ln66_49_fu_2964_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_36_fu_3025_p2() {
    icmp_ln1496_36_fu_3025_p2 = (!phi_ln66_3_fu_2907_p18.read().is_01() || !phi_ln66_4_fu_2987_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_3_fu_2907_p18.read()) < sc_bigint<20>(phi_ln66_4_fu_2987_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_37_fu_5045_p2() {
    icmp_ln1496_37_fu_5045_p2 = (!phi_ln66_2_fu_5002_p18.read().is_01() || !phi_ln66_5_fu_5024_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_2_fu_5002_p18.read()) < sc_bigint<20>(phi_ln66_5_fu_5024_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_38_fu_1909_p2() {
    icmp_ln1496_38_fu_1909_p2 = (!pool_window_2_V_17_fu_1793_p3.read().is_01() || !pool_window_3_V_17_fu_1801_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_2_V_17_fu_1793_p3.read()) < sc_biguint<16>(pool_window_3_V_17_fu_1801_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_39_fu_3107_p2() {
    icmp_ln1496_39_fu_3107_p2 = (!select_ln66_53_fu_3090_p3.read().is_01() || !select_ln66_55_fu_3102_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_53_fu_3090_p3.read()) < sc_biguint<16>(select_ln66_55_fu_3102_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_40_fu_1915_p2() {
    icmp_ln1496_40_fu_1915_p2 = (!pool_window_4_V_2_fu_1809_p3.read().is_01() || !pool_window_5_V_2_fu_1817_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_4_V_2_fu_1809_p3.read()) < sc_biguint<16>(pool_window_5_V_2_fu_1817_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_41_fu_1921_p2() {
    icmp_ln1496_41_fu_1921_p2 = (!pool_window_6_V_2_fu_1825_p3.read().is_01() || !pool_window_7_V_2_fu_1833_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_6_V_2_fu_1825_p3.read()) < sc_biguint<16>(pool_window_7_V_2_fu_1833_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_42_fu_3191_p2() {
    icmp_ln1496_42_fu_3191_p2 = (!select_ln66_58_fu_3174_p3.read().is_01() || !select_ln66_60_fu_3186_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_58_fu_3174_p3.read()) < sc_biguint<16>(select_ln66_60_fu_3186_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_43_fu_3247_p2() {
    icmp_ln1496_43_fu_3247_p2 = (!phi_ln66_6_fu_3129_p18.read().is_01() || !phi_ln66_7_fu_3209_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_6_fu_3129_p18.read()) < sc_bigint<20>(phi_ln66_7_fu_3209_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_44_fu_1927_p2() {
    icmp_ln1496_44_fu_1927_p2 = (!pool_window_8_V_2_fu_1841_p3.read().is_01() || !pool_window_9_V_2_fu_1849_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_8_V_2_fu_1841_p3.read()) < sc_biguint<16>(pool_window_9_V_2_fu_1849_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_45_fu_1933_p2() {
    icmp_ln1496_45_fu_1933_p2 = (!pool_window_10_V_2_fu_1857_p3.read().is_01() || !pool_window_11_V_2_fu_1865_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_10_V_2_fu_1857_p3.read()) < sc_biguint<16>(pool_window_11_V_2_fu_1865_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_46_fu_3285_p2() {
    icmp_ln1496_46_fu_3285_p2 = (!select_ln66_64_fu_3268_p3.read().is_01() || !select_ln66_66_fu_3280_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_64_fu_3268_p3.read()) < sc_biguint<16>(select_ln66_66_fu_3280_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_47_fu_1939_p2() {
    icmp_ln1496_47_fu_1939_p2 = (!pool_window_12_V_2_fu_1872_p3.read().is_01() || !pool_window_13_V_2_fu_1880_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_12_V_2_fu_1872_p3.read()) < sc_biguint<16>(pool_window_13_V_2_fu_1880_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_48_fu_1945_p2() {
    icmp_ln1496_48_fu_1945_p2 = (!pool_window_14_V_2_fu_1888_p3.read().is_01() || !pool_window_15_V_2_fu_1896_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_14_V_2_fu_1888_p3.read()) < sc_biguint<16>(pool_window_15_V_2_fu_1896_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_49_fu_3361_p2() {
    icmp_ln1496_49_fu_3361_p2 = (!select_ln66_69_fu_3344_p3.read().is_01() || !select_ln66_71_fu_3356_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_69_fu_3344_p3.read()) < sc_biguint<16>(select_ln66_71_fu_3356_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_50_fu_3417_p2() {
    icmp_ln1496_50_fu_3417_p2 = (!phi_ln66_9_fu_3299_p18.read().is_01() || !phi_ln66_s_fu_3379_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_9_fu_3299_p18.read()) < sc_bigint<20>(phi_ln66_s_fu_3379_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_51_fu_5136_p2() {
    icmp_ln1496_51_fu_5136_p2 = (!phi_ln66_8_fu_5093_p18.read().is_01() || !phi_ln66_10_fu_5115_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_8_fu_5093_p18.read()) < sc_bigint<20>(phi_ln66_10_fu_5115_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_52_fu_2083_p2() {
    icmp_ln1496_52_fu_2083_p2 = (!pool_window_2_V_19_fu_1967_p3.read().is_01() || !pool_window_3_V_19_fu_1975_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_2_V_19_fu_1967_p3.read()) < sc_biguint<16>(pool_window_3_V_19_fu_1975_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_53_fu_3499_p2() {
    icmp_ln1496_53_fu_3499_p2 = (!select_ln66_75_fu_3482_p3.read().is_01() || !select_ln66_77_fu_3494_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_75_fu_3482_p3.read()) < sc_biguint<16>(select_ln66_77_fu_3494_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_54_fu_2089_p2() {
    icmp_ln1496_54_fu_2089_p2 = (!pool_window_4_V_4_fu_1983_p3.read().is_01() || !pool_window_5_V_4_fu_1991_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_4_V_4_fu_1983_p3.read()) < sc_biguint<16>(pool_window_5_V_4_fu_1991_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_55_fu_2095_p2() {
    icmp_ln1496_55_fu_2095_p2 = (!pool_window_6_V_4_fu_1999_p3.read().is_01() || !pool_window_7_V_4_fu_2007_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_6_V_4_fu_1999_p3.read()) < sc_biguint<16>(pool_window_7_V_4_fu_2007_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_56_fu_3583_p2() {
    icmp_ln1496_56_fu_3583_p2 = (!select_ln66_80_fu_3566_p3.read().is_01() || !select_ln66_82_fu_3578_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_80_fu_3566_p3.read()) < sc_biguint<16>(select_ln66_82_fu_3578_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_57_fu_3639_p2() {
    icmp_ln1496_57_fu_3639_p2 = (!phi_ln66_11_fu_3521_p18.read().is_01() || !phi_ln66_12_fu_3601_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_11_fu_3521_p18.read()) < sc_bigint<20>(phi_ln66_12_fu_3601_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_58_fu_2101_p2() {
    icmp_ln1496_58_fu_2101_p2 = (!pool_window_8_V_4_fu_2015_p3.read().is_01() || !pool_window_9_V_4_fu_2023_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_8_V_4_fu_2015_p3.read()) < sc_biguint<16>(pool_window_9_V_4_fu_2023_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_59_fu_2107_p2() {
    icmp_ln1496_59_fu_2107_p2 = (!pool_window_10_V_4_fu_2031_p3.read().is_01() || !pool_window_11_V_4_fu_2039_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_10_V_4_fu_2031_p3.read()) < sc_biguint<16>(pool_window_11_V_4_fu_2039_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_60_fu_3677_p2() {
    icmp_ln1496_60_fu_3677_p2 = (!select_ln66_86_fu_3660_p3.read().is_01() || !select_ln66_88_fu_3672_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_86_fu_3660_p3.read()) < sc_biguint<16>(select_ln66_88_fu_3672_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_61_fu_2113_p2() {
    icmp_ln1496_61_fu_2113_p2 = (!pool_window_12_V_4_fu_2046_p3.read().is_01() || !pool_window_13_V_4_fu_2054_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_12_V_4_fu_2046_p3.read()) < sc_biguint<16>(pool_window_13_V_4_fu_2054_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_62_fu_2119_p2() {
    icmp_ln1496_62_fu_2119_p2 = (!pool_window_14_V_4_fu_2062_p3.read().is_01() || !pool_window_15_V_4_fu_2070_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_14_V_4_fu_2062_p3.read()) < sc_biguint<16>(pool_window_15_V_4_fu_2070_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_63_fu_3753_p2() {
    icmp_ln1496_63_fu_3753_p2 = (!select_ln66_91_fu_3736_p3.read().is_01() || !select_ln66_93_fu_3748_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_91_fu_3736_p3.read()) < sc_biguint<16>(select_ln66_93_fu_3748_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_64_fu_3809_p2() {
    icmp_ln1496_64_fu_3809_p2 = (!phi_ln66_14_fu_3691_p18.read().is_01() || !phi_ln66_15_fu_3771_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_14_fu_3691_p18.read()) < sc_bigint<20>(phi_ln66_15_fu_3771_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_65_fu_5227_p2() {
    icmp_ln1496_65_fu_5227_p2 = (!phi_ln66_13_fu_5184_p18.read().is_01() || !phi_ln66_16_fu_5206_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_13_fu_5184_p18.read()) < sc_bigint<20>(phi_ln66_16_fu_5206_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_66_fu_2251_p2() {
    icmp_ln1496_66_fu_2251_p2 = (!pool_window_0_V_21_fu_2125_p3.read().is_01() || !pool_window_1_V_21_fu_2133_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_0_V_21_fu_2125_p3.read()) < sc_biguint<16>(pool_window_1_V_21_fu_2133_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_67_fu_2257_p2() {
    icmp_ln1496_67_fu_2257_p2 = (!pool_window_2_V_21_fu_2141_p3.read().is_01() || !pool_window_3_V_21_fu_2149_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_2_V_21_fu_2141_p3.read()) < sc_biguint<16>(pool_window_3_V_21_fu_2149_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_68_fu_3891_p2() {
    icmp_ln1496_68_fu_3891_p2 = (!select_ln66_97_fu_3874_p3.read().is_01() || !select_ln66_99_fu_3886_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_97_fu_3874_p3.read()) < sc_biguint<16>(select_ln66_99_fu_3886_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_69_fu_2263_p2() {
    icmp_ln1496_69_fu_2263_p2 = (!pool_window_4_V_6_fu_2157_p3.read().is_01() || !pool_window_5_V_6_fu_2165_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_4_V_6_fu_2157_p3.read()) < sc_biguint<16>(pool_window_5_V_6_fu_2165_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_70_fu_2269_p2() {
    icmp_ln1496_70_fu_2269_p2 = (!pool_window_6_V_6_fu_2173_p3.read().is_01() || !pool_window_7_V_6_fu_2181_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_6_V_6_fu_2173_p3.read()) < sc_biguint<16>(pool_window_7_V_6_fu_2181_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_71_fu_3975_p2() {
    icmp_ln1496_71_fu_3975_p2 = (!select_ln66_102_fu_3958_p3.read().is_01() || !select_ln66_104_fu_3970_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_102_fu_3958_p3.read()) < sc_biguint<16>(select_ln66_104_fu_3970_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_72_fu_4031_p2() {
    icmp_ln1496_72_fu_4031_p2 = (!phi_ln66_17_fu_3913_p18.read().is_01() || !phi_ln66_18_fu_3993_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_17_fu_3913_p18.read()) < sc_bigint<20>(phi_ln66_18_fu_3993_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_73_fu_2275_p2() {
    icmp_ln1496_73_fu_2275_p2 = (!pool_window_8_V_6_fu_2189_p3.read().is_01() || !pool_window_9_V_6_fu_2197_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_8_V_6_fu_2189_p3.read()) < sc_biguint<16>(pool_window_9_V_6_fu_2197_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_74_fu_2281_p2() {
    icmp_ln1496_74_fu_2281_p2 = (!pool_window_10_V_6_fu_2205_p3.read().is_01() || !pool_window_11_V_6_fu_2213_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_10_V_6_fu_2205_p3.read()) < sc_biguint<16>(pool_window_11_V_6_fu_2213_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_75_fu_4069_p2() {
    icmp_ln1496_75_fu_4069_p2 = (!select_ln66_108_fu_4052_p3.read().is_01() || !select_ln66_110_fu_4064_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_108_fu_4052_p3.read()) < sc_biguint<16>(select_ln66_110_fu_4064_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_76_fu_2287_p2() {
    icmp_ln1496_76_fu_2287_p2 = (!pool_window_12_V_6_fu_2220_p3.read().is_01() || !pool_window_13_V_6_fu_2228_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_12_V_6_fu_2220_p3.read()) < sc_biguint<16>(pool_window_13_V_6_fu_2228_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_77_fu_2293_p2() {
    icmp_ln1496_77_fu_2293_p2 = (!pool_window_14_V_6_fu_2236_p3.read().is_01() || !pool_window_15_V_6_fu_2244_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_14_V_6_fu_2236_p3.read()) < sc_biguint<16>(pool_window_15_V_6_fu_2244_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_78_fu_4145_p2() {
    icmp_ln1496_78_fu_4145_p2 = (!select_ln66_113_fu_4128_p3.read().is_01() || !select_ln66_115_fu_4140_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_113_fu_4128_p3.read()) < sc_biguint<16>(select_ln66_115_fu_4140_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_79_fu_4201_p2() {
    icmp_ln1496_79_fu_4201_p2 = (!phi_ln66_20_fu_4083_p18.read().is_01() || !phi_ln66_21_fu_4163_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_20_fu_4083_p18.read()) < sc_bigint<20>(phi_ln66_21_fu_4163_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_80_fu_5318_p2() {
    icmp_ln1496_80_fu_5318_p2 = (!phi_ln66_19_fu_5275_p18.read().is_01() || !phi_ln66_22_fu_5297_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_19_fu_5275_p18.read()) < sc_bigint<20>(phi_ln66_22_fu_5297_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_81_fu_2425_p2() {
    icmp_ln1496_81_fu_2425_p2 = (!pool_window_0_V_23_fu_2299_p3.read().is_01() || !pool_window_1_V_23_fu_2307_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_0_V_23_fu_2299_p3.read()) < sc_biguint<16>(pool_window_1_V_23_fu_2307_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_82_fu_2431_p2() {
    icmp_ln1496_82_fu_2431_p2 = (!pool_window_2_V_23_fu_2315_p3.read().is_01() || !pool_window_3_V_23_fu_2323_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_2_V_23_fu_2315_p3.read()) < sc_biguint<16>(pool_window_3_V_23_fu_2323_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_83_fu_4283_p2() {
    icmp_ln1496_83_fu_4283_p2 = (!select_ln66_119_fu_4266_p3.read().is_01() || !select_ln66_121_fu_4278_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_119_fu_4266_p3.read()) < sc_biguint<16>(select_ln66_121_fu_4278_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_84_fu_2437_p2() {
    icmp_ln1496_84_fu_2437_p2 = (!pool_window_4_V_8_fu_2331_p3.read().is_01() || !pool_window_5_V_8_fu_2339_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_4_V_8_fu_2331_p3.read()) < sc_biguint<16>(pool_window_5_V_8_fu_2339_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_85_fu_2443_p2() {
    icmp_ln1496_85_fu_2443_p2 = (!pool_window_6_V_8_fu_2347_p3.read().is_01() || !pool_window_7_V_8_fu_2355_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_6_V_8_fu_2347_p3.read()) < sc_biguint<16>(pool_window_7_V_8_fu_2355_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_86_fu_4367_p2() {
    icmp_ln1496_86_fu_4367_p2 = (!select_ln66_124_fu_4350_p3.read().is_01() || !select_ln66_126_fu_4362_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_124_fu_4350_p3.read()) < sc_biguint<16>(select_ln66_126_fu_4362_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_87_fu_4423_p2() {
    icmp_ln1496_87_fu_4423_p2 = (!phi_ln66_23_fu_4305_p18.read().is_01() || !phi_ln66_24_fu_4385_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_23_fu_4305_p18.read()) < sc_bigint<20>(phi_ln66_24_fu_4385_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_88_fu_2449_p2() {
    icmp_ln1496_88_fu_2449_p2 = (!pool_window_8_V_8_fu_2363_p3.read().is_01() || !pool_window_9_V_8_fu_2371_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_8_V_8_fu_2363_p3.read()) < sc_biguint<16>(pool_window_9_V_8_fu_2371_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_89_fu_2455_p2() {
    icmp_ln1496_89_fu_2455_p2 = (!pool_window_10_V_8_fu_2379_p3.read().is_01() || !pool_window_11_V_8_fu_2387_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_10_V_8_fu_2379_p3.read()) < sc_biguint<16>(pool_window_11_V_8_fu_2387_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_90_fu_4461_p2() {
    icmp_ln1496_90_fu_4461_p2 = (!select_ln66_130_fu_4444_p3.read().is_01() || !select_ln66_132_fu_4456_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_130_fu_4444_p3.read()) < sc_biguint<16>(select_ln66_132_fu_4456_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_91_fu_2461_p2() {
    icmp_ln1496_91_fu_2461_p2 = (!pool_window_12_V_8_fu_2394_p3.read().is_01() || !pool_window_13_V_8_fu_2402_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_12_V_8_fu_2394_p3.read()) < sc_biguint<16>(pool_window_13_V_8_fu_2402_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_92_fu_2467_p2() {
    icmp_ln1496_92_fu_2467_p2 = (!pool_window_14_V_8_fu_2410_p3.read().is_01() || !pool_window_15_V_8_fu_2418_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_14_V_8_fu_2410_p3.read()) < sc_biguint<16>(pool_window_15_V_8_fu_2418_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_93_fu_4537_p2() {
    icmp_ln1496_93_fu_4537_p2 = (!select_ln66_135_fu_4520_p3.read().is_01() || !select_ln66_137_fu_4532_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_135_fu_4520_p3.read()) < sc_biguint<16>(select_ln66_137_fu_4532_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_94_fu_4593_p2() {
    icmp_ln1496_94_fu_4593_p2 = (!phi_ln66_26_fu_4475_p18.read().is_01() || !phi_ln66_27_fu_4555_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_26_fu_4475_p18.read()) < sc_bigint<20>(phi_ln66_27_fu_4555_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_95_fu_5409_p2() {
    icmp_ln1496_95_fu_5409_p2 = (!phi_ln66_25_fu_5366_p18.read().is_01() || !phi_ln66_28_fu_5388_p18.read().is_01())? sc_lv<1>(): (sc_bigint<20>(phi_ln66_25_fu_5366_p18.read()) < sc_bigint<20>(phi_ln66_28_fu_5388_p18.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_96_fu_2599_p2() {
    icmp_ln1496_96_fu_2599_p2 = (!pool_window_0_V_25_fu_2473_p3.read().is_01() || !pool_window_1_V_25_fu_2481_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_0_V_25_fu_2473_p3.read()) < sc_biguint<16>(pool_window_1_V_25_fu_2481_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_97_fu_2605_p2() {
    icmp_ln1496_97_fu_2605_p2 = (!pool_window_2_V_25_fu_2489_p3.read().is_01() || !pool_window_3_V_25_fu_2497_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_2_V_25_fu_2489_p3.read()) < sc_biguint<16>(pool_window_3_V_25_fu_2497_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_98_fu_4675_p2() {
    icmp_ln1496_98_fu_4675_p2 = (!select_ln66_141_fu_4658_p3.read().is_01() || !select_ln66_143_fu_4670_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(select_ln66_141_fu_4658_p3.read()) < sc_biguint<16>(select_ln66_143_fu_4670_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_99_fu_2611_p2() {
    icmp_ln1496_99_fu_2611_p2 = (!pool_window_4_V_10_fu_2505_p3.read().is_01() || !pool_window_5_V_10_fu_2513_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_4_V_10_fu_2505_p3.read()) < sc_biguint<16>(pool_window_5_V_10_fu_2513_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln1496_fu_1729_p2() {
    icmp_ln1496_fu_1729_p2 = (!pool_window_0_V_fu_1603_p3.read().is_01() || !pool_window_1_V_fu_1611_p3.read().is_01())? sc_lv<1>(): (sc_biguint<16>(pool_window_0_V_fu_1603_p3.read()) < sc_biguint<16>(pool_window_1_V_fu_1611_p3.read()));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln191_4_fu_712_p2() {
    icmp_ln191_4_fu_712_p2 = (!sY_1.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(sY_1.read() == ap_const_lv32_3);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln191_5_fu_550_p2() {
    icmp_ln191_5_fu_550_p2 = (!pY_1.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<1>(): (sc_bigint<32>(pY_1.read()) > sc_bigint<32>(ap_const_lv32_2));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln191_6_fu_560_p2() {
    icmp_ln191_6_fu_560_p2 = (!pX_1.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<1>(): (sc_bigint<32>(pX_1.read()) > sc_bigint<32>(ap_const_lv32_2));
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln191_fu_702_p2() {
    icmp_ln191_fu_702_p2 = (!sX_1.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(sX_1.read() == ap_const_lv32_3);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln212_fu_566_p2() {
    icmp_ln212_fu_566_p2 = (!pX_1.read().is_01() || !ap_const_lv32_2D.is_01())? sc_lv<1>(): sc_lv<1>(pX_1.read() == ap_const_lv32_2D);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln216_fu_590_p2() {
    icmp_ln216_fu_590_p2 = (!pY_1.read().is_01() || !ap_const_lv32_2D.is_01())? sc_lv<1>(): sc_lv<1>(pY_1.read() == ap_const_lv32_2D);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_icmp_ln241_fu_534_p2() {
    icmp_ln241_fu_534_p2 = (!indvar_flatten_reg_512.read().is_01() || !ap_const_lv12_844.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_512.read() == ap_const_lv12_844);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_internal_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_io_acc_block_signal_op44() {
    io_acc_block_signal_op44 = (data_V_data_0_V_empty_n.read() & data_V_data_1_V_empty_n.read() & data_V_data_2_V_empty_n.read() & data_V_data_3_V_empty_n.read() & data_V_data_4_V_empty_n.read() & data_V_data_5_V_empty_n.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_io_acc_block_signal_op734() {
    io_acc_block_signal_op734 = (res_V_data_0_V_full_n.read() & res_V_data_1_V_full_n.read() & res_V_data_2_V_full_n.read() & res_V_data_3_V_full_n.read() & res_V_data_4_V_full_n.read() & res_V_data_5_V_full_n.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5545.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5545_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3521_p1() {
    phi_ln66_11_fu_3521_p1 = esl_zext<20,16>(pool_window_0_V_19_reg_5942.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3521_p17() {
    phi_ln66_11_fu_3521_p17 = esl_zext<4,2>(select_ln66_78_fu_3505_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3521_p2() {
    phi_ln66_11_fu_3521_p2 = esl_zext<20,16>(pool_window_1_V_19_reg_5948.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3521_p3() {
    phi_ln66_11_fu_3521_p3 = esl_zext<20,16>(pool_window_2_V_19_reg_5954.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3601_p17() {
    phi_ln66_12_fu_3601_p17 = esl_zext<4,3>(select_ln66_83_fu_3589_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3601_p5() {
    phi_ln66_12_fu_3601_p5 = esl_zext<20,16>(pool_window_4_V_4_reg_5966.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3601_p6() {
    phi_ln66_12_fu_3601_p6 = esl_zext<20,16>(pool_window_5_V_4_reg_5972.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3601_p7() {
    phi_ln66_12_fu_3601_p7 = esl_zext<20,16>(pool_window_6_V_4_reg_5978.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3691_p10() {
    phi_ln66_14_fu_3691_p10 = esl_zext<20,16>(pool_window_9_V_4_reg_5996.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3691_p11() {
    phi_ln66_14_fu_3691_p11 = esl_zext<20,16>(pool_window_10_V_4_reg_6002.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3691_p9() {
    phi_ln66_14_fu_3691_p9 = esl_zext<20,16>(pool_window_8_V_4_reg_5990.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3771_p13() {
    phi_ln66_15_fu_3771_p13 = esl_zext<20,16>(pool_window_12_V_4_reg_6014.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3771_p14() {
    phi_ln66_15_fu_3771_p14 = esl_zext<20,16>(pool_window_13_V_4_reg_6020.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3771_p15() {
    phi_ln66_15_fu_3771_p15 = esl_zext<20,16>(pool_window_14_V_4_reg_6026.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_3913_p1() {
    phi_ln66_17_fu_3913_p1 = esl_zext<20,16>(pool_window_0_V_21_reg_6086.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_3913_p17() {
    phi_ln66_17_fu_3913_p17 = esl_zext<4,2>(select_ln66_100_fu_3897_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_3913_p2() {
    phi_ln66_17_fu_3913_p2 = esl_zext<20,16>(pool_window_1_V_21_reg_6092.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_3913_p3() {
    phi_ln66_17_fu_3913_p3 = esl_zext<20,16>(pool_window_2_V_21_reg_6098.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_3993_p17() {
    phi_ln66_18_fu_3993_p17 = esl_zext<4,3>(select_ln66_105_fu_3981_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_3993_p5() {
    phi_ln66_18_fu_3993_p5 = esl_zext<20,16>(pool_window_4_V_6_reg_6110.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_3993_p6() {
    phi_ln66_18_fu_3993_p6 = esl_zext<20,16>(pool_window_5_V_6_reg_6116.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_3993_p7() {
    phi_ln66_18_fu_3993_p7 = esl_zext<20,16>(pool_window_6_V_6_reg_6122.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2817_p17() {
    phi_ln66_1_fu_2817_p17 = esl_zext<4,3>(select_ln66_39_fu_2805_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2817_p5() {
    phi_ln66_1_fu_2817_p5 = esl_zext<20,16>(pool_window_4_V_reg_5678.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2817_p6() {
    phi_ln66_1_fu_2817_p6 = esl_zext<20,16>(pool_window_5_V_reg_5684.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2817_p7() {
    phi_ln66_1_fu_2817_p7 = esl_zext<20,16>(pool_window_6_V_reg_5690.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4083_p10() {
    phi_ln66_20_fu_4083_p10 = esl_zext<20,16>(pool_window_9_V_6_reg_6140.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4083_p11() {
    phi_ln66_20_fu_4083_p11 = esl_zext<20,16>(pool_window_10_V_6_reg_6146.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4083_p9() {
    phi_ln66_20_fu_4083_p9 = esl_zext<20,16>(pool_window_8_V_6_reg_6134.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4163_p13() {
    phi_ln66_21_fu_4163_p13 = esl_zext<20,16>(pool_window_12_V_6_reg_6158.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4163_p14() {
    phi_ln66_21_fu_4163_p14 = esl_zext<20,16>(pool_window_13_V_6_reg_6164.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4163_p15() {
    phi_ln66_21_fu_4163_p15 = esl_zext<20,16>(pool_window_14_V_6_reg_6170.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4305_p1() {
    phi_ln66_23_fu_4305_p1 = esl_zext<20,16>(pool_window_0_V_23_reg_6230.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4305_p17() {
    phi_ln66_23_fu_4305_p17 = esl_zext<4,2>(select_ln66_122_fu_4289_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4305_p2() {
    phi_ln66_23_fu_4305_p2 = esl_zext<20,16>(pool_window_1_V_23_reg_6236.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4305_p3() {
    phi_ln66_23_fu_4305_p3 = esl_zext<20,16>(pool_window_2_V_23_reg_6242.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4385_p17() {
    phi_ln66_24_fu_4385_p17 = esl_zext<4,3>(select_ln66_127_fu_4373_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4385_p5() {
    phi_ln66_24_fu_4385_p5 = esl_zext<20,16>(pool_window_4_V_8_reg_6254.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4385_p6() {
    phi_ln66_24_fu_4385_p6 = esl_zext<20,16>(pool_window_5_V_8_reg_6260.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4385_p7() {
    phi_ln66_24_fu_4385_p7 = esl_zext<20,16>(pool_window_6_V_8_reg_6266.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4475_p10() {
    phi_ln66_26_fu_4475_p10 = esl_zext<20,16>(pool_window_9_V_8_reg_6284.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4475_p11() {
    phi_ln66_26_fu_4475_p11 = esl_zext<20,16>(pool_window_10_V_8_reg_6290.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4475_p9() {
    phi_ln66_26_fu_4475_p9 = esl_zext<20,16>(pool_window_8_V_8_reg_6278.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4555_p13() {
    phi_ln66_27_fu_4555_p13 = esl_zext<20,16>(pool_window_12_V_8_reg_6302.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4555_p14() {
    phi_ln66_27_fu_4555_p14 = esl_zext<20,16>(pool_window_13_V_8_reg_6308.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4555_p15() {
    phi_ln66_27_fu_4555_p15 = esl_zext<20,16>(pool_window_14_V_8_reg_6314.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4697_p1() {
    phi_ln66_29_fu_4697_p1 = esl_zext<20,16>(pool_window_0_V_25_reg_6374.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4697_p17() {
    phi_ln66_29_fu_4697_p17 = esl_zext<4,2>(select_ln66_144_fu_4681_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4697_p2() {
    phi_ln66_29_fu_4697_p2 = esl_zext<20,16>(pool_window_1_V_25_reg_6380.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4697_p3() {
    phi_ln66_29_fu_4697_p3 = esl_zext<20,16>(pool_window_2_V_25_reg_6386.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4777_p17() {
    phi_ln66_30_fu_4777_p17 = esl_zext<4,3>(select_ln66_149_fu_4765_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4777_p5() {
    phi_ln66_30_fu_4777_p5 = esl_zext<20,16>(pool_window_4_V_10_reg_6398.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4777_p6() {
    phi_ln66_30_fu_4777_p6 = esl_zext<20,16>(pool_window_5_V_10_reg_6404.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4777_p7() {
    phi_ln66_30_fu_4777_p7 = esl_zext<20,16>(pool_window_6_V_10_reg_6410.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4867_p10() {
    phi_ln66_32_fu_4867_p10 = esl_zext<20,16>(pool_window_9_V_10_reg_6428.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4867_p11() {
    phi_ln66_32_fu_4867_p11 = esl_zext<20,16>(pool_window_10_V_10_reg_6434.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4867_p9() {
    phi_ln66_32_fu_4867_p9 = esl_zext<20,16>(pool_window_8_V_10_reg_6422.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4947_p13() {
    phi_ln66_33_fu_4947_p13 = esl_zext<20,16>(pool_window_12_V_10_reg_6446.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4947_p14() {
    phi_ln66_33_fu_4947_p14 = esl_zext<20,16>(pool_window_13_V_10_reg_6452.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4947_p15() {
    phi_ln66_33_fu_4947_p15 = esl_zext<20,16>(pool_window_14_V_10_reg_6458.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_2907_p10() {
    phi_ln66_3_fu_2907_p10 = esl_zext<20,16>(pool_window_9_V_reg_5708.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_2907_p11() {
    phi_ln66_3_fu_2907_p11 = esl_zext<20,16>(pool_window_10_V_reg_5714.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_2907_p9() {
    phi_ln66_3_fu_2907_p9 = esl_zext<20,16>(pool_window_8_V_reg_5702.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_2987_p13() {
    phi_ln66_4_fu_2987_p13 = esl_zext<20,16>(pool_window_12_V_reg_5726.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_2987_p14() {
    phi_ln66_4_fu_2987_p14 = esl_zext<20,16>(pool_window_13_V_reg_5732.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_2987_p15() {
    phi_ln66_4_fu_2987_p15 = esl_zext<20,16>(pool_window_14_V_reg_5738.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3129_p1() {
    phi_ln66_6_fu_3129_p1 = esl_zext<20,16>(pool_window_0_V_17_reg_5798.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3129_p17() {
    phi_ln66_6_fu_3129_p17 = esl_zext<4,2>(select_ln66_56_fu_3113_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3129_p2() {
    phi_ln66_6_fu_3129_p2 = esl_zext<20,16>(pool_window_1_V_17_reg_5804.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3129_p3() {
    phi_ln66_6_fu_3129_p3 = esl_zext<20,16>(pool_window_2_V_17_reg_5810.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3209_p17() {
    phi_ln66_7_fu_3209_p17 = esl_zext<4,3>(select_ln66_61_fu_3197_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3209_p5() {
    phi_ln66_7_fu_3209_p5 = esl_zext<20,16>(pool_window_4_V_2_reg_5822.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3209_p6() {
    phi_ln66_7_fu_3209_p6 = esl_zext<20,16>(pool_window_5_V_2_reg_5828.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3209_p7() {
    phi_ln66_7_fu_3209_p7 = esl_zext<20,16>(pool_window_6_V_2_reg_5834.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3299_p10() {
    phi_ln66_9_fu_3299_p10 = esl_zext<20,16>(pool_window_9_V_2_reg_5852.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3299_p11() {
    phi_ln66_9_fu_3299_p11 = esl_zext<20,16>(pool_window_10_V_2_reg_5858.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3299_p9() {
    phi_ln66_9_fu_3299_p9 = esl_zext<20,16>(pool_window_8_V_2_reg_5846.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3379_p13() {
    phi_ln66_s_fu_3379_p13 = esl_zext<20,16>(pool_window_12_V_2_reg_5870.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3379_p14() {
    phi_ln66_s_fu_3379_p14 = esl_zext<20,16>(pool_window_13_V_2_reg_5876.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3379_p15() {
    phi_ln66_s_fu_3379_p15 = esl_zext<20,16>(pool_window_14_V_2_reg_5882.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln_fu_2737_p1() {
    phi_ln_fu_2737_p1 = esl_zext<20,16>(pool_window_0_V_reg_5654.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln_fu_2737_p17() {
    phi_ln_fu_2737_p17 = esl_zext<4,2>(select_ln66_34_fu_2721_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln_fu_2737_p2() {
    phi_ln_fu_2737_p2 = esl_zext<20,16>(pool_window_1_V_reg_5660.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_phi_ln_fu_2737_p3() {
    phi_ln_fu_2737_p3 = esl_zext<20,16>(pool_window_2_V_reg_5666.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_16_fu_2647_p1() {
    pool_window_0_V_16_fu_2647_p1 = esl_zext<20,16>(pool_window_0_V_reg_5654.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_17_fu_1777_p3() {
    pool_window_0_V_17_fu_1777_p3 = esl_concat<10,6>(kernel_data_V_4_7.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_18_fu_3039_p1() {
    pool_window_0_V_18_fu_3039_p1 = esl_zext<20,16>(pool_window_0_V_17_reg_5798.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_19_fu_1951_p3() {
    pool_window_0_V_19_fu_1951_p3 = esl_concat<10,6>(kernel_data_V_4_8.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_20_fu_3431_p1() {
    pool_window_0_V_20_fu_3431_p1 = esl_zext<20,16>(pool_window_0_V_19_reg_5942.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_21_fu_2125_p3() {
    pool_window_0_V_21_fu_2125_p3 = esl_concat<10,6>(kernel_data_V_4_9.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_22_fu_3823_p1() {
    pool_window_0_V_22_fu_3823_p1 = esl_zext<20,16>(pool_window_0_V_21_reg_6086.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_23_fu_2299_p3() {
    pool_window_0_V_23_fu_2299_p3 = esl_concat<10,6>(kernel_data_V_4_10.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_24_fu_4215_p1() {
    pool_window_0_V_24_fu_4215_p1 = esl_zext<20,16>(pool_window_0_V_23_reg_6230.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_25_fu_2473_p3() {
    pool_window_0_V_25_fu_2473_p3 = esl_concat<10,6>(kernel_data_V_4_11.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_26_fu_4607_p1() {
    pool_window_0_V_26_fu_4607_p1 = esl_zext<20,16>(pool_window_0_V_25_reg_6374.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_0_V_fu_1603_p3() {
    pool_window_0_V_fu_1603_p3 = esl_concat<10,6>(kernel_data_V_4_6.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_10_fu_2553_p3() {
    pool_window_10_V_10_fu_2553_p3 = esl_concat<10,6>(kernel_data_V_4_71.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_11_fu_4637_p1() {
    pool_window_10_V_11_fu_4637_p1 = esl_zext<20,16>(pool_window_10_V_10_reg_6434.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_1_fu_2677_p1() {
    pool_window_10_V_1_fu_2677_p1 = esl_zext<20,16>(pool_window_10_V_reg_5714.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_2_fu_1857_p3() {
    pool_window_10_V_2_fu_1857_p3 = esl_concat<10,6>(kernel_data_V_4_67.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_3_fu_3069_p1() {
    pool_window_10_V_3_fu_3069_p1 = esl_zext<20,16>(pool_window_10_V_2_reg_5858.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_4_fu_2031_p3() {
    pool_window_10_V_4_fu_2031_p3 = esl_concat<10,6>(kernel_data_V_4_68.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_5_fu_3461_p1() {
    pool_window_10_V_5_fu_3461_p1 = esl_zext<20,16>(pool_window_10_V_4_reg_6002.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_6_fu_2205_p3() {
    pool_window_10_V_6_fu_2205_p3 = esl_concat<10,6>(kernel_data_V_4_69.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_7_fu_3853_p1() {
    pool_window_10_V_7_fu_3853_p1 = esl_zext<20,16>(pool_window_10_V_6_reg_6146.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_8_fu_2379_p3() {
    pool_window_10_V_8_fu_2379_p3 = esl_concat<10,6>(kernel_data_V_4_70.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_9_fu_4245_p1() {
    pool_window_10_V_9_fu_4245_p1 = esl_zext<20,16>(pool_window_10_V_8_reg_6290.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_10_V_fu_1683_p3() {
    pool_window_10_V_fu_1683_p3 = esl_concat<10,6>(kernel_data_V_4_66.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_10_fu_2561_p3() {
    pool_window_11_V_10_fu_2561_p3 = esl_concat<10,6>(DataOut_V_108_reg_5643.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_11_fu_4640_p1() {
    pool_window_11_V_11_fu_4640_p1 = esl_zext<20,16>(pool_window_11_V_10_reg_6440.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_1_fu_2680_p1() {
    pool_window_11_V_1_fu_2680_p1 = esl_zext<20,16>(pool_window_11_V_reg_5720.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_2_fu_1865_p3() {
    pool_window_11_V_2_fu_1865_p3 = esl_concat<10,6>(DataOut_V_96_reg_5615.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_3_fu_3072_p1() {
    pool_window_11_V_3_fu_3072_p1 = esl_zext<20,16>(pool_window_11_V_2_reg_5864.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_4_fu_2039_p3() {
    pool_window_11_V_4_fu_2039_p3 = esl_concat<10,6>(DataOut_V_99_reg_5622.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_5_fu_3464_p1() {
    pool_window_11_V_5_fu_3464_p1 = esl_zext<20,16>(pool_window_11_V_4_reg_6008.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_6_fu_2213_p3() {
    pool_window_11_V_6_fu_2213_p3 = esl_concat<10,6>(DataOut_V_102_reg_5629.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_7_fu_3856_p1() {
    pool_window_11_V_7_fu_3856_p1 = esl_zext<20,16>(pool_window_11_V_6_reg_6152.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_8_fu_2387_p3() {
    pool_window_11_V_8_fu_2387_p3 = esl_concat<10,6>(DataOut_V_105_reg_5636.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_9_fu_4248_p1() {
    pool_window_11_V_9_fu_4248_p1 = esl_zext<20,16>(pool_window_11_V_8_reg_6296.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_11_V_fu_1691_p3() {
    pool_window_11_V_fu_1691_p3 = esl_concat<10,6>(DataOut_V_93_reg_5608.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_10_fu_2568_p3() {
    pool_window_12_V_10_fu_2568_p3 = esl_concat<10,6>(kernel_data_V_4_83.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_11_fu_4643_p1() {
    pool_window_12_V_11_fu_4643_p1 = esl_zext<20,16>(pool_window_12_V_10_reg_6446.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_1_fu_2683_p1() {
    pool_window_12_V_1_fu_2683_p1 = esl_zext<20,16>(pool_window_12_V_reg_5726.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_2_fu_1872_p3() {
    pool_window_12_V_2_fu_1872_p3 = esl_concat<10,6>(kernel_data_V_4_79.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_3_fu_3075_p1() {
    pool_window_12_V_3_fu_3075_p1 = esl_zext<20,16>(pool_window_12_V_2_reg_5870.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_4_fu_2046_p3() {
    pool_window_12_V_4_fu_2046_p3 = esl_concat<10,6>(kernel_data_V_4_80.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_5_fu_3467_p1() {
    pool_window_12_V_5_fu_3467_p1 = esl_zext<20,16>(pool_window_12_V_4_reg_6014.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_6_fu_2220_p3() {
    pool_window_12_V_6_fu_2220_p3 = esl_concat<10,6>(kernel_data_V_4_81.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_7_fu_3859_p1() {
    pool_window_12_V_7_fu_3859_p1 = esl_zext<20,16>(pool_window_12_V_6_reg_6158.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_8_fu_2394_p3() {
    pool_window_12_V_8_fu_2394_p3 = esl_concat<10,6>(kernel_data_V_4_82.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_9_fu_4251_p1() {
    pool_window_12_V_9_fu_4251_p1 = esl_zext<20,16>(pool_window_12_V_8_reg_6302.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_12_V_fu_1698_p3() {
    pool_window_12_V_fu_1698_p3 = esl_concat<10,6>(kernel_data_V_4_78.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_10_fu_2576_p3() {
    pool_window_13_V_10_fu_2576_p3 = esl_concat<10,6>(kernel_data_V_4_89.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_11_fu_4646_p1() {
    pool_window_13_V_11_fu_4646_p1 = esl_zext<20,16>(pool_window_13_V_10_reg_6452.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_1_fu_2686_p1() {
    pool_window_13_V_1_fu_2686_p1 = esl_zext<20,16>(pool_window_13_V_reg_5732.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_2_fu_1880_p3() {
    pool_window_13_V_2_fu_1880_p3 = esl_concat<10,6>(kernel_data_V_4_85.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_3_fu_3078_p1() {
    pool_window_13_V_3_fu_3078_p1 = esl_zext<20,16>(pool_window_13_V_2_reg_5876.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_4_fu_2054_p3() {
    pool_window_13_V_4_fu_2054_p3 = esl_concat<10,6>(kernel_data_V_4_86.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_5_fu_3470_p1() {
    pool_window_13_V_5_fu_3470_p1 = esl_zext<20,16>(pool_window_13_V_4_reg_6020.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_6_fu_2228_p3() {
    pool_window_13_V_6_fu_2228_p3 = esl_concat<10,6>(kernel_data_V_4_87.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_7_fu_3862_p1() {
    pool_window_13_V_7_fu_3862_p1 = esl_zext<20,16>(pool_window_13_V_6_reg_6164.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_8_fu_2402_p3() {
    pool_window_13_V_8_fu_2402_p3 = esl_concat<10,6>(kernel_data_V_4_88.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_9_fu_4254_p1() {
    pool_window_13_V_9_fu_4254_p1 = esl_zext<20,16>(pool_window_13_V_8_reg_6308.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_13_V_fu_1706_p3() {
    pool_window_13_V_fu_1706_p3 = esl_concat<10,6>(kernel_data_V_4_84.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_10_fu_2584_p3() {
    pool_window_14_V_10_fu_2584_p3 = esl_concat<10,6>(kernel_data_V_4_95.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_11_fu_4649_p1() {
    pool_window_14_V_11_fu_4649_p1 = esl_zext<20,16>(pool_window_14_V_10_reg_6458.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_1_fu_2689_p1() {
    pool_window_14_V_1_fu_2689_p1 = esl_zext<20,16>(pool_window_14_V_reg_5738.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_2_fu_1888_p3() {
    pool_window_14_V_2_fu_1888_p3 = esl_concat<10,6>(kernel_data_V_4_91.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_3_fu_3081_p1() {
    pool_window_14_V_3_fu_3081_p1 = esl_zext<20,16>(pool_window_14_V_2_reg_5882.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_4_fu_2062_p3() {
    pool_window_14_V_4_fu_2062_p3 = esl_concat<10,6>(kernel_data_V_4_92.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_5_fu_3473_p1() {
    pool_window_14_V_5_fu_3473_p1 = esl_zext<20,16>(pool_window_14_V_4_reg_6026.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_6_fu_2236_p3() {
    pool_window_14_V_6_fu_2236_p3 = esl_concat<10,6>(kernel_data_V_4_93.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_7_fu_3865_p1() {
    pool_window_14_V_7_fu_3865_p1 = esl_zext<20,16>(pool_window_14_V_6_reg_6170.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_8_fu_2410_p3() {
    pool_window_14_V_8_fu_2410_p3 = esl_concat<10,6>(kernel_data_V_4_94.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_9_fu_4257_p1() {
    pool_window_14_V_9_fu_4257_p1 = esl_zext<20,16>(pool_window_14_V_8_reg_6314.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_14_V_fu_1714_p3() {
    pool_window_14_V_fu_1714_p3 = esl_concat<10,6>(kernel_data_V_4_90.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_10_fu_2592_p3() {
    pool_window_15_V_10_fu_2592_p3 = esl_concat<10,6>(shift_buffer_3_5_V_reg_5602.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_11_fu_4652_p1() {
    pool_window_15_V_11_fu_4652_p1 = esl_zext<20,16>(pool_window_15_V_10_reg_6464.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_1_fu_2692_p1() {
    pool_window_15_V_1_fu_2692_p1 = esl_zext<20,16>(pool_window_15_V_reg_5744.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_2_fu_1896_p3() {
    pool_window_15_V_2_fu_1896_p3 = esl_concat<10,6>(shift_buffer_3_1_V_reg_5578.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_3_fu_3084_p1() {
    pool_window_15_V_3_fu_3084_p1 = esl_zext<20,16>(pool_window_15_V_2_reg_5888.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_4_fu_2070_p3() {
    pool_window_15_V_4_fu_2070_p3 = esl_concat<10,6>(shift_buffer_3_2_V_reg_5584.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_5_fu_3476_p1() {
    pool_window_15_V_5_fu_3476_p1 = esl_zext<20,16>(pool_window_15_V_4_reg_6032.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_6_fu_2244_p3() {
    pool_window_15_V_6_fu_2244_p3 = esl_concat<10,6>(shift_buffer_3_3_V_reg_5590.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_7_fu_3868_p1() {
    pool_window_15_V_7_fu_3868_p1 = esl_zext<20,16>(pool_window_15_V_6_reg_6176.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_8_fu_2418_p3() {
    pool_window_15_V_8_fu_2418_p3 = esl_concat<10,6>(shift_buffer_3_4_V_reg_5596.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_9_fu_4260_p1() {
    pool_window_15_V_9_fu_4260_p1 = esl_zext<20,16>(pool_window_15_V_8_reg_6320.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_15_V_fu_1722_p3() {
    pool_window_15_V_fu_1722_p3 = esl_concat<10,6>(shift_buffer_3_0_V_reg_5572.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_16_fu_2650_p1() {
    pool_window_1_V_16_fu_2650_p1 = esl_zext<20,16>(pool_window_1_V_reg_5660.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_17_fu_1785_p3() {
    pool_window_1_V_17_fu_1785_p3 = esl_concat<10,6>(kernel_data_V_4_13.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_18_fu_3042_p1() {
    pool_window_1_V_18_fu_3042_p1 = esl_zext<20,16>(pool_window_1_V_17_reg_5804.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_19_fu_1959_p3() {
    pool_window_1_V_19_fu_1959_p3 = esl_concat<10,6>(kernel_data_V_4_14.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_20_fu_3434_p1() {
    pool_window_1_V_20_fu_3434_p1 = esl_zext<20,16>(pool_window_1_V_19_reg_5948.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_21_fu_2133_p3() {
    pool_window_1_V_21_fu_2133_p3 = esl_concat<10,6>(kernel_data_V_4_15.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_22_fu_3826_p1() {
    pool_window_1_V_22_fu_3826_p1 = esl_zext<20,16>(pool_window_1_V_21_reg_6092.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_23_fu_2307_p3() {
    pool_window_1_V_23_fu_2307_p3 = esl_concat<10,6>(kernel_data_V_4_16.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_24_fu_4218_p1() {
    pool_window_1_V_24_fu_4218_p1 = esl_zext<20,16>(pool_window_1_V_23_reg_6236.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_25_fu_2481_p3() {
    pool_window_1_V_25_fu_2481_p3 = esl_concat<10,6>(kernel_data_V_4_17.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_26_fu_4610_p1() {
    pool_window_1_V_26_fu_4610_p1 = esl_zext<20,16>(pool_window_1_V_25_reg_6380.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_1_V_fu_1611_p3() {
    pool_window_1_V_fu_1611_p3 = esl_concat<10,6>(kernel_data_V_4_12.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_16_fu_2653_p1() {
    pool_window_2_V_16_fu_2653_p1 = esl_zext<20,16>(pool_window_2_V_reg_5666.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_17_fu_1793_p3() {
    pool_window_2_V_17_fu_1793_p3 = esl_concat<10,6>(kernel_data_V_4_19.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_18_fu_3045_p1() {
    pool_window_2_V_18_fu_3045_p1 = esl_zext<20,16>(pool_window_2_V_17_reg_5810.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_19_fu_1967_p3() {
    pool_window_2_V_19_fu_1967_p3 = esl_concat<10,6>(kernel_data_V_4_20.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_20_fu_3437_p1() {
    pool_window_2_V_20_fu_3437_p1 = esl_zext<20,16>(pool_window_2_V_19_reg_5954.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_21_fu_2141_p3() {
    pool_window_2_V_21_fu_2141_p3 = esl_concat<10,6>(kernel_data_V_4_21.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_22_fu_3829_p1() {
    pool_window_2_V_22_fu_3829_p1 = esl_zext<20,16>(pool_window_2_V_21_reg_6098.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_23_fu_2315_p3() {
    pool_window_2_V_23_fu_2315_p3 = esl_concat<10,6>(kernel_data_V_4_22.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_24_fu_4221_p1() {
    pool_window_2_V_24_fu_4221_p1 = esl_zext<20,16>(pool_window_2_V_23_reg_6242.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_25_fu_2489_p3() {
    pool_window_2_V_25_fu_2489_p3 = esl_concat<10,6>(kernel_data_V_4_23.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_26_fu_4613_p1() {
    pool_window_2_V_26_fu_4613_p1 = esl_zext<20,16>(pool_window_2_V_25_reg_6386.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_2_V_fu_1619_p3() {
    pool_window_2_V_fu_1619_p3 = esl_concat<10,6>(kernel_data_V_4_18.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_16_fu_2656_p1() {
    pool_window_3_V_16_fu_2656_p1 = esl_zext<20,16>(pool_window_3_V_reg_5672.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_17_fu_1801_p3() {
    pool_window_3_V_17_fu_1801_p3 = esl_concat<10,6>(line_buffer_Array_V_4_2_1_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_18_fu_3048_p1() {
    pool_window_3_V_18_fu_3048_p1 = esl_zext<20,16>(pool_window_3_V_17_reg_5816.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_19_fu_1975_p3() {
    pool_window_3_V_19_fu_1975_p3 = esl_concat<10,6>(line_buffer_Array_V_4_2_2_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_20_fu_3440_p1() {
    pool_window_3_V_20_fu_3440_p1 = esl_zext<20,16>(pool_window_3_V_19_reg_5960.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_21_fu_2149_p3() {
    pool_window_3_V_21_fu_2149_p3 = esl_concat<10,6>(line_buffer_Array_V_4_2_3_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_22_fu_3832_p1() {
    pool_window_3_V_22_fu_3832_p1 = esl_zext<20,16>(pool_window_3_V_21_reg_6104.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_23_fu_2323_p3() {
    pool_window_3_V_23_fu_2323_p3 = esl_concat<10,6>(line_buffer_Array_V_4_2_4_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_24_fu_4224_p1() {
    pool_window_3_V_24_fu_4224_p1 = esl_zext<20,16>(pool_window_3_V_23_reg_6248.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_25_fu_2497_p3() {
    pool_window_3_V_25_fu_2497_p3 = esl_concat<10,6>(line_buffer_Array_V_4_2_5_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_26_fu_4616_p1() {
    pool_window_3_V_26_fu_4616_p1 = esl_zext<20,16>(pool_window_3_V_25_reg_6392.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_3_V_fu_1627_p3() {
    pool_window_3_V_fu_1627_p3 = esl_concat<10,6>(line_buffer_Array_V_4_2_0_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_10_fu_2505_p3() {
    pool_window_4_V_10_fu_2505_p3 = esl_concat<10,6>(kernel_data_V_4_35.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_11_fu_4619_p1() {
    pool_window_4_V_11_fu_4619_p1 = esl_zext<20,16>(pool_window_4_V_10_reg_6398.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_1_fu_2659_p1() {
    pool_window_4_V_1_fu_2659_p1 = esl_zext<20,16>(pool_window_4_V_reg_5678.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_2_fu_1809_p3() {
    pool_window_4_V_2_fu_1809_p3 = esl_concat<10,6>(kernel_data_V_4_31.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_3_fu_3051_p1() {
    pool_window_4_V_3_fu_3051_p1 = esl_zext<20,16>(pool_window_4_V_2_reg_5822.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_4_fu_1983_p3() {
    pool_window_4_V_4_fu_1983_p3 = esl_concat<10,6>(kernel_data_V_4_32.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_5_fu_3443_p1() {
    pool_window_4_V_5_fu_3443_p1 = esl_zext<20,16>(pool_window_4_V_4_reg_5966.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_6_fu_2157_p3() {
    pool_window_4_V_6_fu_2157_p3 = esl_concat<10,6>(kernel_data_V_4_33.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_7_fu_3835_p1() {
    pool_window_4_V_7_fu_3835_p1 = esl_zext<20,16>(pool_window_4_V_6_reg_6110.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_8_fu_2331_p3() {
    pool_window_4_V_8_fu_2331_p3 = esl_concat<10,6>(kernel_data_V_4_34.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_9_fu_4227_p1() {
    pool_window_4_V_9_fu_4227_p1 = esl_zext<20,16>(pool_window_4_V_8_reg_6254.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_4_V_fu_1635_p3() {
    pool_window_4_V_fu_1635_p3 = esl_concat<10,6>(kernel_data_V_4_30.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_10_fu_2513_p3() {
    pool_window_5_V_10_fu_2513_p3 = esl_concat<10,6>(kernel_data_V_4_41.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_11_fu_4622_p1() {
    pool_window_5_V_11_fu_4622_p1 = esl_zext<20,16>(pool_window_5_V_10_reg_6404.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_1_fu_2662_p1() {
    pool_window_5_V_1_fu_2662_p1 = esl_zext<20,16>(pool_window_5_V_reg_5684.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_2_fu_1817_p3() {
    pool_window_5_V_2_fu_1817_p3 = esl_concat<10,6>(kernel_data_V_4_37.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_3_fu_3054_p1() {
    pool_window_5_V_3_fu_3054_p1 = esl_zext<20,16>(pool_window_5_V_2_reg_5828.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_4_fu_1991_p3() {
    pool_window_5_V_4_fu_1991_p3 = esl_concat<10,6>(kernel_data_V_4_38.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_5_fu_3446_p1() {
    pool_window_5_V_5_fu_3446_p1 = esl_zext<20,16>(pool_window_5_V_4_reg_5972.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_6_fu_2165_p3() {
    pool_window_5_V_6_fu_2165_p3 = esl_concat<10,6>(kernel_data_V_4_39.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_7_fu_3838_p1() {
    pool_window_5_V_7_fu_3838_p1 = esl_zext<20,16>(pool_window_5_V_6_reg_6116.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_8_fu_2339_p3() {
    pool_window_5_V_8_fu_2339_p3 = esl_concat<10,6>(kernel_data_V_4_40.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_9_fu_4230_p1() {
    pool_window_5_V_9_fu_4230_p1 = esl_zext<20,16>(pool_window_5_V_8_reg_6260.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_5_V_fu_1643_p3() {
    pool_window_5_V_fu_1643_p3 = esl_concat<10,6>(kernel_data_V_4_36.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_10_fu_2521_p3() {
    pool_window_6_V_10_fu_2521_p3 = esl_concat<10,6>(kernel_data_V_4_47.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_11_fu_4625_p1() {
    pool_window_6_V_11_fu_4625_p1 = esl_zext<20,16>(pool_window_6_V_10_reg_6410.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_1_fu_2665_p1() {
    pool_window_6_V_1_fu_2665_p1 = esl_zext<20,16>(pool_window_6_V_reg_5690.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_2_fu_1825_p3() {
    pool_window_6_V_2_fu_1825_p3 = esl_concat<10,6>(kernel_data_V_4_43.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_3_fu_3057_p1() {
    pool_window_6_V_3_fu_3057_p1 = esl_zext<20,16>(pool_window_6_V_2_reg_5834.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_4_fu_1999_p3() {
    pool_window_6_V_4_fu_1999_p3 = esl_concat<10,6>(kernel_data_V_4_44.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_5_fu_3449_p1() {
    pool_window_6_V_5_fu_3449_p1 = esl_zext<20,16>(pool_window_6_V_4_reg_5978.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_6_fu_2173_p3() {
    pool_window_6_V_6_fu_2173_p3 = esl_concat<10,6>(kernel_data_V_4_45.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_7_fu_3841_p1() {
    pool_window_6_V_7_fu_3841_p1 = esl_zext<20,16>(pool_window_6_V_6_reg_6122.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_8_fu_2347_p3() {
    pool_window_6_V_8_fu_2347_p3 = esl_concat<10,6>(kernel_data_V_4_46.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_9_fu_4233_p1() {
    pool_window_6_V_9_fu_4233_p1 = esl_zext<20,16>(pool_window_6_V_8_reg_6266.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_6_V_fu_1651_p3() {
    pool_window_6_V_fu_1651_p3 = esl_concat<10,6>(kernel_data_V_4_42.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_10_fu_2529_p3() {
    pool_window_7_V_10_fu_2529_p3 = esl_concat<10,6>(line_buffer_Array_V_4_1_5_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_11_fu_4628_p1() {
    pool_window_7_V_11_fu_4628_p1 = esl_zext<20,16>(pool_window_7_V_10_reg_6416.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_1_fu_2668_p1() {
    pool_window_7_V_1_fu_2668_p1 = esl_zext<20,16>(pool_window_7_V_reg_5696.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_2_fu_1833_p3() {
    pool_window_7_V_2_fu_1833_p3 = esl_concat<10,6>(line_buffer_Array_V_4_1_1_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_3_fu_3060_p1() {
    pool_window_7_V_3_fu_3060_p1 = esl_zext<20,16>(pool_window_7_V_2_reg_5840.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_4_fu_2007_p3() {
    pool_window_7_V_4_fu_2007_p3 = esl_concat<10,6>(line_buffer_Array_V_4_1_2_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_5_fu_3452_p1() {
    pool_window_7_V_5_fu_3452_p1 = esl_zext<20,16>(pool_window_7_V_4_reg_5984.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_6_fu_2181_p3() {
    pool_window_7_V_6_fu_2181_p3 = esl_concat<10,6>(line_buffer_Array_V_4_1_3_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_7_fu_3844_p1() {
    pool_window_7_V_7_fu_3844_p1 = esl_zext<20,16>(pool_window_7_V_6_reg_6128.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_8_fu_2355_p3() {
    pool_window_7_V_8_fu_2355_p3 = esl_concat<10,6>(line_buffer_Array_V_4_1_4_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_9_fu_4236_p1() {
    pool_window_7_V_9_fu_4236_p1 = esl_zext<20,16>(pool_window_7_V_8_reg_6272.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_7_V_fu_1659_p3() {
    pool_window_7_V_fu_1659_p3 = esl_concat<10,6>(line_buffer_Array_V_4_1_0_q0.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_10_fu_2537_p3() {
    pool_window_8_V_10_fu_2537_p3 = esl_concat<10,6>(kernel_data_V_4_59.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_11_fu_4631_p1() {
    pool_window_8_V_11_fu_4631_p1 = esl_zext<20,16>(pool_window_8_V_10_reg_6422.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_1_fu_2671_p1() {
    pool_window_8_V_1_fu_2671_p1 = esl_zext<20,16>(pool_window_8_V_reg_5702.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_2_fu_1841_p3() {
    pool_window_8_V_2_fu_1841_p3 = esl_concat<10,6>(kernel_data_V_4_55.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_3_fu_3063_p1() {
    pool_window_8_V_3_fu_3063_p1 = esl_zext<20,16>(pool_window_8_V_2_reg_5846.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_4_fu_2015_p3() {
    pool_window_8_V_4_fu_2015_p3 = esl_concat<10,6>(kernel_data_V_4_56.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_5_fu_3455_p1() {
    pool_window_8_V_5_fu_3455_p1 = esl_zext<20,16>(pool_window_8_V_4_reg_5990.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_6_fu_2189_p3() {
    pool_window_8_V_6_fu_2189_p3 = esl_concat<10,6>(kernel_data_V_4_57.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_7_fu_3847_p1() {
    pool_window_8_V_7_fu_3847_p1 = esl_zext<20,16>(pool_window_8_V_6_reg_6134.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_8_fu_2363_p3() {
    pool_window_8_V_8_fu_2363_p3 = esl_concat<10,6>(kernel_data_V_4_58.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_9_fu_4239_p1() {
    pool_window_8_V_9_fu_4239_p1 = esl_zext<20,16>(pool_window_8_V_8_reg_6278.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_8_V_fu_1667_p3() {
    pool_window_8_V_fu_1667_p3 = esl_concat<10,6>(kernel_data_V_4_54.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_10_fu_2545_p3() {
    pool_window_9_V_10_fu_2545_p3 = esl_concat<10,6>(kernel_data_V_4_65.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_11_fu_4634_p1() {
    pool_window_9_V_11_fu_4634_p1 = esl_zext<20,16>(pool_window_9_V_10_reg_6428.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_1_fu_2674_p1() {
    pool_window_9_V_1_fu_2674_p1 = esl_zext<20,16>(pool_window_9_V_reg_5708.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_2_fu_1849_p3() {
    pool_window_9_V_2_fu_1849_p3 = esl_concat<10,6>(kernel_data_V_4_61.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_3_fu_3066_p1() {
    pool_window_9_V_3_fu_3066_p1 = esl_zext<20,16>(pool_window_9_V_2_reg_5852.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_4_fu_2023_p3() {
    pool_window_9_V_4_fu_2023_p3 = esl_concat<10,6>(kernel_data_V_4_62.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_5_fu_3458_p1() {
    pool_window_9_V_5_fu_3458_p1 = esl_zext<20,16>(pool_window_9_V_4_reg_5996.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_6_fu_2197_p3() {
    pool_window_9_V_6_fu_2197_p3 = esl_concat<10,6>(kernel_data_V_4_63.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_7_fu_3850_p1() {
    pool_window_9_V_7_fu_3850_p1 = esl_zext<20,16>(pool_window_9_V_6_reg_6140.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_8_fu_2371_p3() {
    pool_window_9_V_8_fu_2371_p3 = esl_concat<10,6>(kernel_data_V_4_64.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_9_fu_4242_p1() {
    pool_window_9_V_9_fu_4242_p1 = esl_zext<20,16>(pool_window_9_V_8_reg_6284.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_pool_window_9_V_fu_1675_p3() {
    pool_window_9_V_fu_1675_p3 = esl_concat<10,6>(kernel_data_V_4_60.read(), ap_const_lv6_0);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_0_V_blk_n = res_V_data_0_V_full_n.read();
    } else {
        res_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_0_V_din() {
    res_V_data_0_V_din = tmp_data_0_V_reg_7256.read();
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_0_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_0_V_write = ap_const_logic_1;
    } else {
        res_V_data_0_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_1_V_blk_n = res_V_data_1_V_full_n.read();
    } else {
        res_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_1_V_din() {
    res_V_data_1_V_din = tmp_data_1_V_reg_7261.read();
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_1_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_1_V_write = ap_const_logic_1;
    } else {
        res_V_data_1_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_2_V_blk_n = res_V_data_2_V_full_n.read();
    } else {
        res_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_2_V_din() {
    res_V_data_2_V_din = tmp_data_2_V_reg_7266.read();
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_2_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_2_V_write = ap_const_logic_1;
    } else {
        res_V_data_2_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_3_V_blk_n = res_V_data_3_V_full_n.read();
    } else {
        res_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_3_V_din() {
    res_V_data_3_V_din = tmp_data_3_V_reg_7271.read();
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_3_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_3_V_write = ap_const_logic_1;
    } else {
        res_V_data_3_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_4_V_blk_n = res_V_data_4_V_full_n.read();
    } else {
        res_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_4_V_din() {
    res_V_data_4_V_din = tmp_data_4_V_reg_7276.read();
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_4_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_4_V_write = ap_const_logic_1;
    } else {
        res_V_data_4_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_5_V_blk_n = res_V_data_5_V_full_n.read();
    } else {
        res_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_5_V_din() {
    res_V_data_5_V_din = tmp_data_5_V_reg_7281.read();
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_res_V_data_5_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5650_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_5_V_write = ap_const_logic_1;
    } else {
        res_V_data_5_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln222_fu_766_p3() {
    select_ln222_fu_766_p3 = (!icmp_ln191_4_fu_712_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln191_4_fu_712_p2.read()[0].to_bool())? ap_const_lv32_0: add_ln222_fu_760_p2.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln227_fu_740_p3() {
    select_ln227_fu_740_p3 = (!icmp_ln191_fu_702_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln191_fu_702_p2.read()[0].to_bool())? ap_const_lv32_0: add_ln227_fu_734_p2.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_100_fu_3897_p3() {
    select_ln66_100_fu_3897_p3 = (!icmp_ln1496_68_fu_3891_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_68_fu_3891_p2.read()[0].to_bool())? select_ln66_98_fu_3879_p3.read(): zext_ln66_16_fu_3871_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_101_fu_3951_p3() {
    select_ln66_101_fu_3951_p3 = (!icmp_ln1496_69_reg_6194.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_69_reg_6194.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_102_fu_3958_p3() {
    select_ln66_102_fu_3958_p3 = (!icmp_ln1496_69_reg_6194.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_69_reg_6194.read()[0].to_bool())? pool_window_5_V_6_reg_6116.read(): pool_window_4_V_6_reg_6110.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_103_fu_3963_p3() {
    select_ln66_103_fu_3963_p3 = (!icmp_ln1496_70_reg_6200.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_70_reg_6200.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_104_fu_3970_p3() {
    select_ln66_104_fu_3970_p3 = (!icmp_ln1496_70_reg_6200.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_70_reg_6200.read()[0].to_bool())? pool_window_7_V_6_reg_6128.read(): pool_window_6_V_6_reg_6122.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_105_fu_3981_p3() {
    select_ln66_105_fu_3981_p3 = (!icmp_ln1496_71_fu_3975_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_71_fu_3975_p2.read()[0].to_bool())? select_ln66_103_fu_3963_p3.read(): select_ln66_101_fu_3951_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_106_fu_4037_p3() {
    select_ln66_106_fu_4037_p3 = (!icmp_ln1496_72_fu_4031_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_72_fu_4031_p2.read()[0].to_bool())? select_ln66_105_fu_3981_p3.read(): zext_ln66_17_fu_3905_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_107_fu_4045_p3() {
    select_ln66_107_fu_4045_p3 = (!icmp_ln1496_73_reg_6206.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_73_reg_6206.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_108_fu_4052_p3() {
    select_ln66_108_fu_4052_p3 = (!icmp_ln1496_73_reg_6206.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_73_reg_6206.read()[0].to_bool())? pool_window_9_V_6_reg_6140.read(): pool_window_8_V_6_reg_6134.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_109_fu_4057_p3() {
    select_ln66_109_fu_4057_p3 = (!icmp_ln1496_74_reg_6212.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_74_reg_6212.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_110_fu_4064_p3() {
    select_ln66_110_fu_4064_p3 = (!icmp_ln1496_74_reg_6212.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_74_reg_6212.read()[0].to_bool())? pool_window_11_V_6_reg_6152.read(): pool_window_10_V_6_reg_6146.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_111_fu_4075_p3() {
    select_ln66_111_fu_4075_p3 = (!icmp_ln1496_75_fu_4069_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_75_fu_4069_p2.read()[0].to_bool())? select_ln66_109_fu_4057_p3.read(): select_ln66_107_fu_4045_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_112_fu_4121_p3() {
    select_ln66_112_fu_4121_p3 = (!icmp_ln1496_76_reg_6218.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_76_reg_6218.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_113_fu_4128_p3() {
    select_ln66_113_fu_4128_p3 = (!icmp_ln1496_76_reg_6218.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_76_reg_6218.read()[0].to_bool())? pool_window_13_V_6_reg_6164.read(): pool_window_12_V_6_reg_6158.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_114_fu_4133_p3() {
    select_ln66_114_fu_4133_p3 = (!icmp_ln1496_77_reg_6224.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_77_reg_6224.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_115_fu_4140_p3() {
    select_ln66_115_fu_4140_p3 = (!icmp_ln1496_77_reg_6224.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_77_reg_6224.read()[0].to_bool())? pool_window_15_V_6_reg_6176.read(): pool_window_14_V_6_reg_6170.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_116_fu_4151_p3() {
    select_ln66_116_fu_4151_p3 = (!icmp_ln1496_78_fu_4145_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_78_fu_4145_p2.read()[0].to_bool())? select_ln66_114_fu_4133_p3.read(): select_ln66_112_fu_4121_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_117_fu_4207_p3() {
    select_ln66_117_fu_4207_p3 = (!icmp_ln1496_79_fu_4201_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_79_fu_4201_p2.read()[0].to_bool())? sext_ln66_3_fu_4159_p1.read(): select_ln66_111_fu_4075_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_119_fu_4266_p3() {
    select_ln66_119_fu_4266_p3 = (!icmp_ln1496_81_reg_6326.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_81_reg_6326.read()[0].to_bool())? pool_window_1_V_23_reg_6236.read(): pool_window_0_V_23_reg_6230.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_120_fu_4271_p3() {
    select_ln66_120_fu_4271_p3 = (!icmp_ln1496_82_reg_6332.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_82_reg_6332.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_121_fu_4278_p3() {
    select_ln66_121_fu_4278_p3 = (!icmp_ln1496_82_reg_6332.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_82_reg_6332.read()[0].to_bool())? pool_window_3_V_23_reg_6248.read(): pool_window_2_V_23_reg_6242.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_122_fu_4289_p3() {
    select_ln66_122_fu_4289_p3 = (!icmp_ln1496_83_fu_4283_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_83_fu_4283_p2.read()[0].to_bool())? select_ln66_120_fu_4271_p3.read(): zext_ln66_19_fu_4263_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_123_fu_4343_p3() {
    select_ln66_123_fu_4343_p3 = (!icmp_ln1496_84_reg_6338.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_84_reg_6338.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_124_fu_4350_p3() {
    select_ln66_124_fu_4350_p3 = (!icmp_ln1496_84_reg_6338.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_84_reg_6338.read()[0].to_bool())? pool_window_5_V_8_reg_6260.read(): pool_window_4_V_8_reg_6254.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_125_fu_4355_p3() {
    select_ln66_125_fu_4355_p3 = (!icmp_ln1496_85_reg_6344.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_85_reg_6344.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_126_fu_4362_p3() {
    select_ln66_126_fu_4362_p3 = (!icmp_ln1496_85_reg_6344.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_85_reg_6344.read()[0].to_bool())? pool_window_7_V_8_reg_6272.read(): pool_window_6_V_8_reg_6266.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_127_fu_4373_p3() {
    select_ln66_127_fu_4373_p3 = (!icmp_ln1496_86_fu_4367_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_86_fu_4367_p2.read()[0].to_bool())? select_ln66_125_fu_4355_p3.read(): select_ln66_123_fu_4343_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_128_fu_4429_p3() {
    select_ln66_128_fu_4429_p3 = (!icmp_ln1496_87_fu_4423_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_87_fu_4423_p2.read()[0].to_bool())? select_ln66_127_fu_4373_p3.read(): zext_ln66_20_fu_4297_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_129_fu_4437_p3() {
    select_ln66_129_fu_4437_p3 = (!icmp_ln1496_88_reg_6350.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_88_reg_6350.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_130_fu_4444_p3() {
    select_ln66_130_fu_4444_p3 = (!icmp_ln1496_88_reg_6350.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_88_reg_6350.read()[0].to_bool())? pool_window_9_V_8_reg_6284.read(): pool_window_8_V_8_reg_6278.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_131_fu_4449_p3() {
    select_ln66_131_fu_4449_p3 = (!icmp_ln1496_89_reg_6356.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_89_reg_6356.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_132_fu_4456_p3() {
    select_ln66_132_fu_4456_p3 = (!icmp_ln1496_89_reg_6356.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_89_reg_6356.read()[0].to_bool())? pool_window_11_V_8_reg_6296.read(): pool_window_10_V_8_reg_6290.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_133_fu_4467_p3() {
    select_ln66_133_fu_4467_p3 = (!icmp_ln1496_90_fu_4461_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_90_fu_4461_p2.read()[0].to_bool())? select_ln66_131_fu_4449_p3.read(): select_ln66_129_fu_4437_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_134_fu_4513_p3() {
    select_ln66_134_fu_4513_p3 = (!icmp_ln1496_91_reg_6362.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_91_reg_6362.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_135_fu_4520_p3() {
    select_ln66_135_fu_4520_p3 = (!icmp_ln1496_91_reg_6362.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_91_reg_6362.read()[0].to_bool())? pool_window_13_V_8_reg_6308.read(): pool_window_12_V_8_reg_6302.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_136_fu_4525_p3() {
    select_ln66_136_fu_4525_p3 = (!icmp_ln1496_92_reg_6368.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_92_reg_6368.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_137_fu_4532_p3() {
    select_ln66_137_fu_4532_p3 = (!icmp_ln1496_92_reg_6368.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_92_reg_6368.read()[0].to_bool())? pool_window_15_V_8_reg_6320.read(): pool_window_14_V_8_reg_6314.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_138_fu_4543_p3() {
    select_ln66_138_fu_4543_p3 = (!icmp_ln1496_93_fu_4537_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_93_fu_4537_p2.read()[0].to_bool())? select_ln66_136_fu_4525_p3.read(): select_ln66_134_fu_4513_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_139_fu_4599_p3() {
    select_ln66_139_fu_4599_p3 = (!icmp_ln1496_94_fu_4593_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_94_fu_4593_p2.read()[0].to_bool())? sext_ln66_4_fu_4551_p1.read(): select_ln66_133_fu_4467_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_141_fu_4658_p3() {
    select_ln66_141_fu_4658_p3 = (!icmp_ln1496_96_reg_6470.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_96_reg_6470.read()[0].to_bool())? pool_window_1_V_25_reg_6380.read(): pool_window_0_V_25_reg_6374.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_142_fu_4663_p3() {
    select_ln66_142_fu_4663_p3 = (!icmp_ln1496_97_reg_6476.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_97_reg_6476.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_143_fu_4670_p3() {
    select_ln66_143_fu_4670_p3 = (!icmp_ln1496_97_reg_6476.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_97_reg_6476.read()[0].to_bool())? pool_window_3_V_25_reg_6392.read(): pool_window_2_V_25_reg_6386.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_144_fu_4681_p3() {
    select_ln66_144_fu_4681_p3 = (!icmp_ln1496_98_fu_4675_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_98_fu_4675_p2.read()[0].to_bool())? select_ln66_142_fu_4663_p3.read(): zext_ln66_22_fu_4655_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_145_fu_4735_p3() {
    select_ln66_145_fu_4735_p3 = (!icmp_ln1496_99_reg_6482.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_99_reg_6482.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_146_fu_4742_p3() {
    select_ln66_146_fu_4742_p3 = (!icmp_ln1496_99_reg_6482.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_99_reg_6482.read()[0].to_bool())? pool_window_5_V_10_reg_6404.read(): pool_window_4_V_10_reg_6398.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_147_fu_4747_p3() {
    select_ln66_147_fu_4747_p3 = (!icmp_ln1496_100_reg_6488.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_100_reg_6488.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_148_fu_4754_p3() {
    select_ln66_148_fu_4754_p3 = (!icmp_ln1496_100_reg_6488.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_100_reg_6488.read()[0].to_bool())? pool_window_7_V_10_reg_6416.read(): pool_window_6_V_10_reg_6410.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_149_fu_4765_p3() {
    select_ln66_149_fu_4765_p3 = (!icmp_ln1496_101_fu_4759_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_101_fu_4759_p2.read()[0].to_bool())? select_ln66_147_fu_4747_p3.read(): select_ln66_145_fu_4735_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_150_fu_4821_p3() {
    select_ln66_150_fu_4821_p3 = (!icmp_ln1496_102_fu_4815_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_102_fu_4815_p2.read()[0].to_bool())? select_ln66_149_fu_4765_p3.read(): zext_ln66_23_fu_4689_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_151_fu_4829_p3() {
    select_ln66_151_fu_4829_p3 = (!icmp_ln1496_103_reg_6494.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_103_reg_6494.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_152_fu_4836_p3() {
    select_ln66_152_fu_4836_p3 = (!icmp_ln1496_103_reg_6494.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_103_reg_6494.read()[0].to_bool())? pool_window_9_V_10_reg_6428.read(): pool_window_8_V_10_reg_6422.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_153_fu_4841_p3() {
    select_ln66_153_fu_4841_p3 = (!icmp_ln1496_104_reg_6500.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_104_reg_6500.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_154_fu_4848_p3() {
    select_ln66_154_fu_4848_p3 = (!icmp_ln1496_104_reg_6500.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_104_reg_6500.read()[0].to_bool())? pool_window_11_V_10_reg_6440.read(): pool_window_10_V_10_reg_6434.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_155_fu_4859_p3() {
    select_ln66_155_fu_4859_p3 = (!icmp_ln1496_105_fu_4853_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_105_fu_4853_p2.read()[0].to_bool())? select_ln66_153_fu_4841_p3.read(): select_ln66_151_fu_4829_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_156_fu_4905_p3() {
    select_ln66_156_fu_4905_p3 = (!icmp_ln1496_106_reg_6506.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_106_reg_6506.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_157_fu_4912_p3() {
    select_ln66_157_fu_4912_p3 = (!icmp_ln1496_106_reg_6506.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_106_reg_6506.read()[0].to_bool())? pool_window_13_V_10_reg_6452.read(): pool_window_12_V_10_reg_6446.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_158_fu_4917_p3() {
    select_ln66_158_fu_4917_p3 = (!icmp_ln1496_107_reg_6512.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_107_reg_6512.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_159_fu_4924_p3() {
    select_ln66_159_fu_4924_p3 = (!icmp_ln1496_107_reg_6512.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_107_reg_6512.read()[0].to_bool())? pool_window_15_V_10_reg_6464.read(): pool_window_14_V_10_reg_6458.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_160_fu_4935_p3() {
    select_ln66_160_fu_4935_p3 = (!icmp_ln1496_108_fu_4929_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_108_fu_4929_p2.read()[0].to_bool())? select_ln66_158_fu_4917_p3.read(): select_ln66_156_fu_4905_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_161_fu_4991_p3() {
    select_ln66_161_fu_4991_p3 = (!icmp_ln1496_109_fu_4985_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_109_fu_4985_p2.read()[0].to_bool())? sext_ln66_5_fu_4943_p1.read(): select_ln66_155_fu_4859_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_32_fu_2703_p3() {
    select_ln66_32_fu_2703_p3 = (!icmp_ln1496_24_reg_5756.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_24_reg_5756.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_33_fu_2710_p3() {
    select_ln66_33_fu_2710_p3 = (!icmp_ln1496_24_reg_5756.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_24_reg_5756.read()[0].to_bool())? pool_window_3_V_reg_5672.read(): pool_window_2_V_reg_5666.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_34_fu_2721_p3() {
    select_ln66_34_fu_2721_p3 = (!icmp_ln1496_25_fu_2715_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_25_fu_2715_p2.read()[0].to_bool())? select_ln66_32_fu_2703_p3.read(): zext_ln66_fu_2695_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_35_fu_2775_p3() {
    select_ln66_35_fu_2775_p3 = (!icmp_ln1496_26_reg_5762.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_26_reg_5762.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_36_fu_2782_p3() {
    select_ln66_36_fu_2782_p3 = (!icmp_ln1496_26_reg_5762.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_26_reg_5762.read()[0].to_bool())? pool_window_5_V_reg_5684.read(): pool_window_4_V_reg_5678.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_37_fu_2787_p3() {
    select_ln66_37_fu_2787_p3 = (!icmp_ln1496_27_reg_5768.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_27_reg_5768.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_38_fu_2794_p3() {
    select_ln66_38_fu_2794_p3 = (!icmp_ln1496_27_reg_5768.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_27_reg_5768.read()[0].to_bool())? pool_window_7_V_reg_5696.read(): pool_window_6_V_reg_5690.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_39_fu_2805_p3() {
    select_ln66_39_fu_2805_p3 = (!icmp_ln1496_28_fu_2799_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_28_fu_2799_p2.read()[0].to_bool())? select_ln66_37_fu_2787_p3.read(): select_ln66_35_fu_2775_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_40_fu_2861_p3() {
    select_ln66_40_fu_2861_p3 = (!icmp_ln1496_29_fu_2855_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_29_fu_2855_p2.read()[0].to_bool())? select_ln66_39_fu_2805_p3.read(): zext_ln66_8_fu_2729_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_41_fu_2869_p3() {
    select_ln66_41_fu_2869_p3 = (!icmp_ln1496_30_reg_5774.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_30_reg_5774.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_42_fu_2876_p3() {
    select_ln66_42_fu_2876_p3 = (!icmp_ln1496_30_reg_5774.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_30_reg_5774.read()[0].to_bool())? pool_window_9_V_reg_5708.read(): pool_window_8_V_reg_5702.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_43_fu_2881_p3() {
    select_ln66_43_fu_2881_p3 = (!icmp_ln1496_31_reg_5780.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_31_reg_5780.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_44_fu_2888_p3() {
    select_ln66_44_fu_2888_p3 = (!icmp_ln1496_31_reg_5780.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_31_reg_5780.read()[0].to_bool())? pool_window_11_V_reg_5720.read(): pool_window_10_V_reg_5714.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_45_fu_2899_p3() {
    select_ln66_45_fu_2899_p3 = (!icmp_ln1496_32_fu_2893_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_32_fu_2893_p2.read()[0].to_bool())? select_ln66_43_fu_2881_p3.read(): select_ln66_41_fu_2869_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_46_fu_2945_p3() {
    select_ln66_46_fu_2945_p3 = (!icmp_ln1496_33_reg_5786.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_33_reg_5786.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_47_fu_2952_p3() {
    select_ln66_47_fu_2952_p3 = (!icmp_ln1496_33_reg_5786.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_33_reg_5786.read()[0].to_bool())? pool_window_13_V_reg_5732.read(): pool_window_12_V_reg_5726.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_48_fu_2957_p3() {
    select_ln66_48_fu_2957_p3 = (!icmp_ln1496_34_reg_5792.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_34_reg_5792.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_49_fu_2964_p3() {
    select_ln66_49_fu_2964_p3 = (!icmp_ln1496_34_reg_5792.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_34_reg_5792.read()[0].to_bool())? pool_window_15_V_reg_5744.read(): pool_window_14_V_reg_5738.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_50_fu_2975_p3() {
    select_ln66_50_fu_2975_p3 = (!icmp_ln1496_35_fu_2969_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_35_fu_2969_p2.read()[0].to_bool())? select_ln66_48_fu_2957_p3.read(): select_ln66_46_fu_2945_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_51_fu_3031_p3() {
    select_ln66_51_fu_3031_p3 = (!icmp_ln1496_36_fu_3025_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_36_fu_3025_p2.read()[0].to_bool())? sext_ln66_fu_2983_p1.read(): select_ln66_45_fu_2899_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_53_fu_3090_p3() {
    select_ln66_53_fu_3090_p3 = (!icmp_ln1496_1_reg_5894.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_1_reg_5894.read()[0].to_bool())? pool_window_1_V_17_reg_5804.read(): pool_window_0_V_17_reg_5798.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_54_fu_3095_p3() {
    select_ln66_54_fu_3095_p3 = (!icmp_ln1496_38_reg_5900.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_38_reg_5900.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_55_fu_3102_p3() {
    select_ln66_55_fu_3102_p3 = (!icmp_ln1496_38_reg_5900.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_38_reg_5900.read()[0].to_bool())? pool_window_3_V_17_reg_5816.read(): pool_window_2_V_17_reg_5810.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_56_fu_3113_p3() {
    select_ln66_56_fu_3113_p3 = (!icmp_ln1496_39_fu_3107_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_39_fu_3107_p2.read()[0].to_bool())? select_ln66_54_fu_3095_p3.read(): zext_ln66_10_fu_3087_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_57_fu_3167_p3() {
    select_ln66_57_fu_3167_p3 = (!icmp_ln1496_40_reg_5906.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_40_reg_5906.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_58_fu_3174_p3() {
    select_ln66_58_fu_3174_p3 = (!icmp_ln1496_40_reg_5906.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_40_reg_5906.read()[0].to_bool())? pool_window_5_V_2_reg_5828.read(): pool_window_4_V_2_reg_5822.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_59_fu_3179_p3() {
    select_ln66_59_fu_3179_p3 = (!icmp_ln1496_41_reg_5912.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_41_reg_5912.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_60_fu_3186_p3() {
    select_ln66_60_fu_3186_p3 = (!icmp_ln1496_41_reg_5912.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_41_reg_5912.read()[0].to_bool())? pool_window_7_V_2_reg_5840.read(): pool_window_6_V_2_reg_5834.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_61_fu_3197_p3() {
    select_ln66_61_fu_3197_p3 = (!icmp_ln1496_42_fu_3191_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_42_fu_3191_p2.read()[0].to_bool())? select_ln66_59_fu_3179_p3.read(): select_ln66_57_fu_3167_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_62_fu_3253_p3() {
    select_ln66_62_fu_3253_p3 = (!icmp_ln1496_43_fu_3247_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_43_fu_3247_p2.read()[0].to_bool())? select_ln66_61_fu_3197_p3.read(): zext_ln66_11_fu_3121_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_63_fu_3261_p3() {
    select_ln66_63_fu_3261_p3 = (!icmp_ln1496_44_reg_5918.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_44_reg_5918.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_64_fu_3268_p3() {
    select_ln66_64_fu_3268_p3 = (!icmp_ln1496_44_reg_5918.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_44_reg_5918.read()[0].to_bool())? pool_window_9_V_2_reg_5852.read(): pool_window_8_V_2_reg_5846.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_65_fu_3273_p3() {
    select_ln66_65_fu_3273_p3 = (!icmp_ln1496_45_reg_5924.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_45_reg_5924.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_66_fu_3280_p3() {
    select_ln66_66_fu_3280_p3 = (!icmp_ln1496_45_reg_5924.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_45_reg_5924.read()[0].to_bool())? pool_window_11_V_2_reg_5864.read(): pool_window_10_V_2_reg_5858.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_67_fu_3291_p3() {
    select_ln66_67_fu_3291_p3 = (!icmp_ln1496_46_fu_3285_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_46_fu_3285_p2.read()[0].to_bool())? select_ln66_65_fu_3273_p3.read(): select_ln66_63_fu_3261_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_68_fu_3337_p3() {
    select_ln66_68_fu_3337_p3 = (!icmp_ln1496_47_reg_5930.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_47_reg_5930.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_69_fu_3344_p3() {
    select_ln66_69_fu_3344_p3 = (!icmp_ln1496_47_reg_5930.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_47_reg_5930.read()[0].to_bool())? pool_window_13_V_2_reg_5876.read(): pool_window_12_V_2_reg_5870.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_70_fu_3349_p3() {
    select_ln66_70_fu_3349_p3 = (!icmp_ln1496_48_reg_5936.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_48_reg_5936.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_71_fu_3356_p3() {
    select_ln66_71_fu_3356_p3 = (!icmp_ln1496_48_reg_5936.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_48_reg_5936.read()[0].to_bool())? pool_window_15_V_2_reg_5888.read(): pool_window_14_V_2_reg_5882.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_72_fu_3367_p3() {
    select_ln66_72_fu_3367_p3 = (!icmp_ln1496_49_fu_3361_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_49_fu_3361_p2.read()[0].to_bool())? select_ln66_70_fu_3349_p3.read(): select_ln66_68_fu_3337_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_73_fu_3423_p3() {
    select_ln66_73_fu_3423_p3 = (!icmp_ln1496_50_fu_3417_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_50_fu_3417_p2.read()[0].to_bool())? sext_ln66_1_fu_3375_p1.read(): select_ln66_67_fu_3291_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_75_fu_3482_p3() {
    select_ln66_75_fu_3482_p3 = (!icmp_ln1496_2_reg_6038.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_2_reg_6038.read()[0].to_bool())? pool_window_1_V_19_reg_5948.read(): pool_window_0_V_19_reg_5942.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_76_fu_3487_p3() {
    select_ln66_76_fu_3487_p3 = (!icmp_ln1496_52_reg_6044.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_52_reg_6044.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_77_fu_3494_p3() {
    select_ln66_77_fu_3494_p3 = (!icmp_ln1496_52_reg_6044.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_52_reg_6044.read()[0].to_bool())? pool_window_3_V_19_reg_5960.read(): pool_window_2_V_19_reg_5954.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_78_fu_3505_p3() {
    select_ln66_78_fu_3505_p3 = (!icmp_ln1496_53_fu_3499_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_53_fu_3499_p2.read()[0].to_bool())? select_ln66_76_fu_3487_p3.read(): zext_ln66_13_fu_3479_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_79_fu_3559_p3() {
    select_ln66_79_fu_3559_p3 = (!icmp_ln1496_54_reg_6050.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_54_reg_6050.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_80_fu_3566_p3() {
    select_ln66_80_fu_3566_p3 = (!icmp_ln1496_54_reg_6050.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_54_reg_6050.read()[0].to_bool())? pool_window_5_V_4_reg_5972.read(): pool_window_4_V_4_reg_5966.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_81_fu_3571_p3() {
    select_ln66_81_fu_3571_p3 = (!icmp_ln1496_55_reg_6056.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_55_reg_6056.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_82_fu_3578_p3() {
    select_ln66_82_fu_3578_p3 = (!icmp_ln1496_55_reg_6056.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_55_reg_6056.read()[0].to_bool())? pool_window_7_V_4_reg_5984.read(): pool_window_6_V_4_reg_5978.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_83_fu_3589_p3() {
    select_ln66_83_fu_3589_p3 = (!icmp_ln1496_56_fu_3583_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_56_fu_3583_p2.read()[0].to_bool())? select_ln66_81_fu_3571_p3.read(): select_ln66_79_fu_3559_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_84_fu_3645_p3() {
    select_ln66_84_fu_3645_p3 = (!icmp_ln1496_57_fu_3639_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_57_fu_3639_p2.read()[0].to_bool())? select_ln66_83_fu_3589_p3.read(): zext_ln66_14_fu_3513_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_85_fu_3653_p3() {
    select_ln66_85_fu_3653_p3 = (!icmp_ln1496_58_reg_6062.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_58_reg_6062.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_86_fu_3660_p3() {
    select_ln66_86_fu_3660_p3 = (!icmp_ln1496_58_reg_6062.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_58_reg_6062.read()[0].to_bool())? pool_window_9_V_4_reg_5996.read(): pool_window_8_V_4_reg_5990.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_87_fu_3665_p3() {
    select_ln66_87_fu_3665_p3 = (!icmp_ln1496_59_reg_6068.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_59_reg_6068.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_88_fu_3672_p3() {
    select_ln66_88_fu_3672_p3 = (!icmp_ln1496_59_reg_6068.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_59_reg_6068.read()[0].to_bool())? pool_window_11_V_4_reg_6008.read(): pool_window_10_V_4_reg_6002.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_89_fu_3683_p3() {
    select_ln66_89_fu_3683_p3 = (!icmp_ln1496_60_fu_3677_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_60_fu_3677_p2.read()[0].to_bool())? select_ln66_87_fu_3665_p3.read(): select_ln66_85_fu_3653_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_90_fu_3729_p3() {
    select_ln66_90_fu_3729_p3 = (!icmp_ln1496_61_reg_6074.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_61_reg_6074.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_91_fu_3736_p3() {
    select_ln66_91_fu_3736_p3 = (!icmp_ln1496_61_reg_6074.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_61_reg_6074.read()[0].to_bool())? pool_window_13_V_4_reg_6020.read(): pool_window_12_V_4_reg_6014.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_92_fu_3741_p3() {
    select_ln66_92_fu_3741_p3 = (!icmp_ln1496_62_reg_6080.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_62_reg_6080.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_93_fu_3748_p3() {
    select_ln66_93_fu_3748_p3 = (!icmp_ln1496_62_reg_6080.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_62_reg_6080.read()[0].to_bool())? pool_window_15_V_4_reg_6032.read(): pool_window_14_V_4_reg_6026.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_94_fu_3759_p3() {
    select_ln66_94_fu_3759_p3 = (!icmp_ln1496_63_fu_3753_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_63_fu_3753_p2.read()[0].to_bool())? select_ln66_92_fu_3741_p3.read(): select_ln66_90_fu_3729_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_95_fu_3815_p3() {
    select_ln66_95_fu_3815_p3 = (!icmp_ln1496_64_fu_3809_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_64_fu_3809_p2.read()[0].to_bool())? sext_ln66_2_fu_3767_p1.read(): select_ln66_89_fu_3683_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_97_fu_3874_p3() {
    select_ln66_97_fu_3874_p3 = (!icmp_ln1496_66_reg_6182.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_66_reg_6182.read()[0].to_bool())? pool_window_1_V_21_reg_6092.read(): pool_window_0_V_21_reg_6086.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_98_fu_3879_p3() {
    select_ln66_98_fu_3879_p3 = (!icmp_ln1496_67_reg_6188.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_67_reg_6188.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_99_fu_3886_p3() {
    select_ln66_99_fu_3886_p3 = (!icmp_ln1496_67_reg_6188.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_67_reg_6188.read()[0].to_bool())? pool_window_3_V_21_reg_6104.read(): pool_window_2_V_21_reg_6098.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_select_ln66_fu_2698_p3() {
    select_ln66_fu_2698_p3 = (!icmp_ln1496_reg_5750.read()[0].is_01())? sc_lv<16>(): ((icmp_ln1496_reg_5750.read()[0].to_bool())? pool_window_1_V_reg_5660.read(): pool_window_0_V_reg_5654.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_sext_ln66_1_fu_3375_p1() {
    sext_ln66_1_fu_3375_p1 = esl_sext<4,3>(select_ln66_72_fu_3367_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_sext_ln66_2_fu_3767_p1() {
    sext_ln66_2_fu_3767_p1 = esl_sext<4,3>(select_ln66_94_fu_3759_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_sext_ln66_3_fu_4159_p1() {
    sext_ln66_3_fu_4159_p1 = esl_sext<4,3>(select_ln66_116_fu_4151_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_sext_ln66_4_fu_4551_p1() {
    sext_ln66_4_fu_4551_p1 = esl_sext<4,3>(select_ln66_138_fu_4543_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_sext_ln66_5_fu_4943_p1() {
    sext_ln66_5_fu_4943_p1 = esl_sext<4,3>(select_ln66_160_fu_4935_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_sext_ln66_fu_2983_p1() {
    sext_ln66_fu_2983_p1 = esl_sext<4,3>(select_ln66_50_fu_2975_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_start_out() {
    start_out = real_start.read();
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_tmp_1_fu_5149_p17() {
    tmp_1_fu_5149_p17 = (!icmp_ln1496_51_fu_5136_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_51_fu_5136_p2.read()[0].to_bool())? select_ln66_73_reg_6758.read(): zext_ln66_12_fu_5090_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_tmp_2_fu_5240_p17() {
    tmp_2_fu_5240_p17 = (!icmp_ln1496_65_fu_5227_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_65_fu_5227_p2.read()[0].to_bool())? select_ln66_95_reg_6881.read(): zext_ln66_15_fu_5181_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_tmp_3_fu_5331_p17() {
    tmp_3_fu_5331_p17 = (!icmp_ln1496_80_fu_5318_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_80_fu_5318_p2.read()[0].to_bool())? select_ln66_117_reg_7004.read(): zext_ln66_18_fu_5272_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_tmp_4_fu_5422_p17() {
    tmp_4_fu_5422_p17 = (!icmp_ln1496_95_fu_5409_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_95_fu_5409_p2.read()[0].to_bool())? select_ln66_139_reg_7127.read(): zext_ln66_21_fu_5363_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_tmp_5_fu_5513_p17() {
    tmp_5_fu_5513_p17 = (!icmp_ln1496_110_fu_5500_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_110_fu_5500_p2.read()[0].to_bool())? select_ln66_161_reg_7250.read(): zext_ln66_24_fu_5454_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_tmp_9_fu_5058_p17() {
    tmp_9_fu_5058_p17 = (!icmp_ln1496_37_fu_5045_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_37_fu_5045_p2.read()[0].to_bool())? select_ln66_51_reg_6635.read(): zext_ln66_9_fu_4999_p1.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_10_fu_3087_p1() {
    zext_ln66_10_fu_3087_p1 = esl_zext<2,1>(icmp_ln1496_1_reg_5894.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_11_fu_3121_p1() {
    zext_ln66_11_fu_3121_p1 = esl_zext<3,2>(select_ln66_56_fu_3113_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_12_fu_5090_p1() {
    zext_ln66_12_fu_5090_p1 = esl_zext<4,3>(select_ln66_62_reg_6753.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_13_fu_3479_p1() {
    zext_ln66_13_fu_3479_p1 = esl_zext<2,1>(icmp_ln1496_2_reg_6038.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_14_fu_3513_p1() {
    zext_ln66_14_fu_3513_p1 = esl_zext<3,2>(select_ln66_78_fu_3505_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_15_fu_5181_p1() {
    zext_ln66_15_fu_5181_p1 = esl_zext<4,3>(select_ln66_84_reg_6876.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_16_fu_3871_p1() {
    zext_ln66_16_fu_3871_p1 = esl_zext<2,1>(icmp_ln1496_66_reg_6182.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_17_fu_3905_p1() {
    zext_ln66_17_fu_3905_p1 = esl_zext<3,2>(select_ln66_100_fu_3897_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_18_fu_5272_p1() {
    zext_ln66_18_fu_5272_p1 = esl_zext<4,3>(select_ln66_106_reg_6999.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_19_fu_4263_p1() {
    zext_ln66_19_fu_4263_p1 = esl_zext<2,1>(icmp_ln1496_81_reg_6326.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_20_fu_4297_p1() {
    zext_ln66_20_fu_4297_p1 = esl_zext<3,2>(select_ln66_122_fu_4289_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_21_fu_5363_p1() {
    zext_ln66_21_fu_5363_p1 = esl_zext<4,3>(select_ln66_128_reg_7122.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_22_fu_4655_p1() {
    zext_ln66_22_fu_4655_p1 = esl_zext<2,1>(icmp_ln1496_96_reg_6470.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_23_fu_4689_p1() {
    zext_ln66_23_fu_4689_p1 = esl_zext<3,2>(select_ln66_144_fu_4681_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_24_fu_5454_p1() {
    zext_ln66_24_fu_5454_p1 = esl_zext<4,3>(select_ln66_150_reg_7245.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_8_fu_2729_p1() {
    zext_ln66_8_fu_2729_p1 = esl_zext<3,2>(select_ln66_34_fu_2721_p3.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_9_fu_4999_p1() {
    zext_ln66_9_fu_4999_p1 = esl_zext<4,3>(select_ln66_40_reg_6630.read());
}

void pooling2d_cl_array_array_ap_ufixed_10_3_5_3_0_6u_config5_s::thread_zext_ln66_fu_2695_p1() {
    zext_ln66_fu_2695_p1 = esl_zext<2,1>(icmp_ln1496_reg_5750.read());
}

}

