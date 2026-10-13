#include "pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_add_ln220_fu_596_p2() {
    add_ln220_fu_596_p2 = (!pY_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pY_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_add_ln222_fu_760_p2() {
    add_ln222_fu_760_p2 = (!sY_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(sY_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_add_ln225_fu_572_p2() {
    add_ln225_fu_572_p2 = (!pX_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(pX_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_add_ln227_fu_734_p2() {
    add_ln227_fu_734_p2 = (!sX_1.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(sX_1.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_add_ln241_fu_540_p2() {
    add_ln241_fu_540_p2 = (!indvar_flatten_reg_512.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_biguint<12>(indvar_flatten_reg_512.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_and_ln191_3_fu_724_p2() {
    and_ln191_3_fu_724_p2 = (icmp_ln191_5_reg_5584.read() & icmp_ln191_6_reg_5589.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_and_ln191_4_fu_728_p2() {
    and_ln191_4_fu_728_p2 = (and_ln191_3_fu_724_p2.read() & and_ln191_fu_718_p2.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_and_ln191_fu_718_p2() {
    and_ln191_fu_718_p2 = (icmp_ln191_fu_702_p2.read() & icmp_ln191_4_fu_712_p2.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[2];
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_01001() {
    ap_block_pp0_stage0_01001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
  esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read())));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op44.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = (esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op734.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_condition_1002() {
    ap_condition_1002 = (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln216_fu_590_p2.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_condition_1008() {
    ap_condition_1008 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_fu_566_p2.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_condition_382() {
    ap_condition_382 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_condition_989() {
    ap_condition_989 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_fu_534_p2.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_condition_993() {
    ap_condition_993 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln241_fu_534_p2.read())) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_idle_pp0() {
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

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_phi_mux_storemerge_i_i_phi_fu_527_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln212_reg_5594.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln216_reg_5598.read()))) {
        ap_phi_mux_storemerge_i_i_phi_fu_527_p4 = select_ln222_fu_766_p3.read();
    } else {
        ap_phi_mux_storemerge_i_i_phi_fu_527_p4 = ap_phi_reg_pp0_iter1_storemerge_i_i_reg_523.read();
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_phi_reg_pp0_iter0_storemerge_i_i_reg_523() {
    ap_phi_reg_pp0_iter0_storemerge_i_i_reg_523 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0))) {
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n.read();
    } else {
        data_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_0_V_read = ap_const_logic_1;
    } else {
        data_V_data_0_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0))) {
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n.read();
    } else {
        data_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_1_V_read = ap_const_logic_1;
    } else {
        data_V_data_1_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0))) {
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n.read();
    } else {
        data_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_2_V_read = ap_const_logic_1;
    } else {
        data_V_data_2_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0))) {
        data_V_data_3_V_blk_n = data_V_data_3_V_empty_n.read();
    } else {
        data_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_3_V_read = ap_const_logic_1;
    } else {
        data_V_data_3_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0))) {
        data_V_data_4_V_blk_n = data_V_data_4_V_empty_n.read();
    } else {
        data_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_4_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_4_V_read = ap_const_logic_1;
    } else {
        data_V_data_4_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0))) {
        data_V_data_5_V_blk_n = data_V_data_5_V_empty_n.read();
    } else {
        data_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_data_V_data_5_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_V_data_5_V_read = ap_const_logic_1;
    } else {
        data_V_data_5_V_read = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_100_fu_2727_p2() {
    icmp_ln1496_100_fu_2727_p2 = (!pool_window_6_V_10_fu_2631_p3.read().is_01() || !pool_window_7_V_10_fu_2639_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_10_fu_2631_p3.read()) < sc_biguint<12>(pool_window_7_V_10_fu_2639_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_101_fu_4806_p2() {
    icmp_ln1496_101_fu_4806_p2 = (!select_ln66_146_fu_4789_p3.read().is_01() || !select_ln66_148_fu_4801_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_146_fu_4789_p3.read()) < sc_biguint<12>(select_ln66_148_fu_4801_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_102_fu_4862_p2() {
    icmp_ln1496_102_fu_4862_p2 = (!phi_ln66_29_fu_4744_p18.read().is_01() || !phi_ln66_30_fu_4824_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_29_fu_4744_p18.read()) < sc_bigint<16>(phi_ln66_30_fu_4824_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_103_fu_2733_p2() {
    icmp_ln1496_103_fu_2733_p2 = (!pool_window_8_V_10_fu_2647_p3.read().is_01() || !pool_window_9_V_10_fu_2655_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_10_fu_2647_p3.read()) < sc_biguint<12>(pool_window_9_V_10_fu_2655_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_104_fu_2739_p2() {
    icmp_ln1496_104_fu_2739_p2 = (!pool_window_10_V_10_fu_2663_p3.read().is_01() || !pool_window_11_V_10_fu_2671_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_10_fu_2663_p3.read()) < sc_biguint<12>(pool_window_11_V_10_fu_2671_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_105_fu_4900_p2() {
    icmp_ln1496_105_fu_4900_p2 = (!select_ln66_152_fu_4883_p3.read().is_01() || !select_ln66_154_fu_4895_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_152_fu_4883_p3.read()) < sc_biguint<12>(select_ln66_154_fu_4895_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_106_fu_2745_p2() {
    icmp_ln1496_106_fu_2745_p2 = (!pool_window_12_V_10_fu_2678_p3.read().is_01() || !pool_window_13_V_10_fu_2686_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_10_fu_2678_p3.read()) < sc_biguint<12>(pool_window_13_V_10_fu_2686_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_107_fu_2759_p2() {
    icmp_ln1496_107_fu_2759_p2 = (!pool_window_14_V_10_fu_2694_p3.read().is_01() || !pool_window_15_V_10_fu_2702_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_10_fu_2694_p3.read()) < sc_biguint<12>(pool_window_15_V_10_fu_2702_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_108_fu_2773_p2() {
    icmp_ln1496_108_fu_2773_p2 = (!select_ln66_157_fu_2751_p3.read().is_01() || !select_ln66_159_fu_2765_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_157_fu_2751_p3.read()) < sc_biguint<12>(select_ln66_159_fu_2765_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_109_fu_5015_p2() {
    icmp_ln1496_109_fu_5015_p2 = (!phi_ln66_32_fu_4914_p18.read().is_01() || !phi_ln66_33_fu_4977_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_32_fu_4914_p18.read()) < sc_bigint<16>(phi_ln66_33_fu_4977_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_110_fu_5530_p2() {
    icmp_ln1496_110_fu_5530_p2 = (!phi_ln66_31_fu_5487_p18.read().is_01() || !phi_ln66_34_fu_5509_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_31_fu_5487_p18.read()) < sc_bigint<16>(phi_ln66_34_fu_5509_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_1_fu_1925_p2() {
    icmp_ln1496_1_fu_1925_p2 = (!pool_window_0_V_17_fu_1799_p3.read().is_01() || !pool_window_1_V_17_fu_1807_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_17_fu_1799_p3.read()) < sc_biguint<12>(pool_window_1_V_17_fu_1807_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_24_fu_1735_p2() {
    icmp_ln1496_24_fu_1735_p2 = (!pool_window_2_V_fu_1619_p3.read().is_01() || !pool_window_3_V_fu_1627_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_fu_1619_p3.read()) < sc_biguint<12>(pool_window_3_V_fu_1627_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_25_fu_2847_p2() {
    icmp_ln1496_25_fu_2847_p2 = (!select_ln66_fu_2830_p3.read().is_01() || !select_ln66_33_fu_2842_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_fu_2830_p3.read()) < sc_biguint<12>(select_ln66_33_fu_2842_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_26_fu_1741_p2() {
    icmp_ln1496_26_fu_1741_p2 = (!pool_window_4_V_fu_1635_p3.read().is_01() || !pool_window_5_V_fu_1643_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_fu_1635_p3.read()) < sc_biguint<12>(pool_window_5_V_fu_1643_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_27_fu_1747_p2() {
    icmp_ln1496_27_fu_1747_p2 = (!pool_window_6_V_fu_1651_p3.read().is_01() || !pool_window_7_V_fu_1659_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_fu_1651_p3.read()) < sc_biguint<12>(pool_window_7_V_fu_1659_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_28_fu_2931_p2() {
    icmp_ln1496_28_fu_2931_p2 = (!select_ln66_36_fu_2914_p3.read().is_01() || !select_ln66_38_fu_2926_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_36_fu_2914_p3.read()) < sc_biguint<12>(select_ln66_38_fu_2926_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_29_fu_2987_p2() {
    icmp_ln1496_29_fu_2987_p2 = (!phi_ln_fu_2869_p18.read().is_01() || !phi_ln66_1_fu_2949_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln_fu_2869_p18.read()) < sc_bigint<16>(phi_ln66_1_fu_2949_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_2_fu_2121_p2() {
    icmp_ln1496_2_fu_2121_p2 = (!pool_window_0_V_19_fu_1995_p3.read().is_01() || !pool_window_1_V_19_fu_2003_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_19_fu_1995_p3.read()) < sc_biguint<12>(pool_window_1_V_19_fu_2003_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_30_fu_1753_p2() {
    icmp_ln1496_30_fu_1753_p2 = (!pool_window_8_V_fu_1667_p3.read().is_01() || !pool_window_9_V_fu_1675_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_fu_1667_p3.read()) < sc_biguint<12>(pool_window_9_V_fu_1675_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_31_fu_1759_p2() {
    icmp_ln1496_31_fu_1759_p2 = (!pool_window_10_V_fu_1683_p3.read().is_01() || !pool_window_11_V_fu_1691_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_fu_1683_p3.read()) < sc_biguint<12>(pool_window_11_V_fu_1691_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_32_fu_3025_p2() {
    icmp_ln1496_32_fu_3025_p2 = (!select_ln66_42_fu_3008_p3.read().is_01() || !select_ln66_44_fu_3020_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_42_fu_3008_p3.read()) < sc_biguint<12>(select_ln66_44_fu_3020_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_33_fu_1765_p2() {
    icmp_ln1496_33_fu_1765_p2 = (!pool_window_12_V_fu_1698_p3.read().is_01() || !pool_window_13_V_fu_1706_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_fu_1698_p3.read()) < sc_biguint<12>(pool_window_13_V_fu_1706_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_34_fu_1779_p2() {
    icmp_ln1496_34_fu_1779_p2 = (!pool_window_14_V_fu_1714_p3.read().is_01() || !pool_window_15_V_fu_1722_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_fu_1714_p3.read()) < sc_biguint<12>(pool_window_15_V_fu_1722_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_35_fu_1793_p2() {
    icmp_ln1496_35_fu_1793_p2 = (!select_ln66_47_fu_1771_p3.read().is_01() || !select_ln66_49_fu_1785_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_47_fu_1771_p3.read()) < sc_biguint<12>(select_ln66_49_fu_1785_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_36_fu_3140_p2() {
    icmp_ln1496_36_fu_3140_p2 = (!phi_ln66_3_fu_3039_p18.read().is_01() || !phi_ln66_4_fu_3102_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_3_fu_3039_p18.read()) < sc_bigint<16>(phi_ln66_4_fu_3102_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_37_fu_5075_p2() {
    icmp_ln1496_37_fu_5075_p2 = (!phi_ln66_2_fu_5032_p18.read().is_01() || !phi_ln66_5_fu_5054_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_2_fu_5032_p18.read()) < sc_bigint<16>(phi_ln66_5_fu_5054_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_38_fu_1931_p2() {
    icmp_ln1496_38_fu_1931_p2 = (!pool_window_2_V_17_fu_1815_p3.read().is_01() || !pool_window_3_V_17_fu_1823_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_17_fu_1815_p3.read()) < sc_biguint<12>(pool_window_3_V_17_fu_1823_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_39_fu_3222_p2() {
    icmp_ln1496_39_fu_3222_p2 = (!select_ln66_53_fu_3205_p3.read().is_01() || !select_ln66_55_fu_3217_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_53_fu_3205_p3.read()) < sc_biguint<12>(select_ln66_55_fu_3217_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_40_fu_1937_p2() {
    icmp_ln1496_40_fu_1937_p2 = (!pool_window_4_V_2_fu_1831_p3.read().is_01() || !pool_window_5_V_2_fu_1839_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_2_fu_1831_p3.read()) < sc_biguint<12>(pool_window_5_V_2_fu_1839_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_41_fu_1943_p2() {
    icmp_ln1496_41_fu_1943_p2 = (!pool_window_6_V_2_fu_1847_p3.read().is_01() || !pool_window_7_V_2_fu_1855_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_2_fu_1847_p3.read()) < sc_biguint<12>(pool_window_7_V_2_fu_1855_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_42_fu_3306_p2() {
    icmp_ln1496_42_fu_3306_p2 = (!select_ln66_58_fu_3289_p3.read().is_01() || !select_ln66_60_fu_3301_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_58_fu_3289_p3.read()) < sc_biguint<12>(select_ln66_60_fu_3301_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_43_fu_3362_p2() {
    icmp_ln1496_43_fu_3362_p2 = (!phi_ln66_6_fu_3244_p18.read().is_01() || !phi_ln66_7_fu_3324_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_6_fu_3244_p18.read()) < sc_bigint<16>(phi_ln66_7_fu_3324_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_44_fu_1949_p2() {
    icmp_ln1496_44_fu_1949_p2 = (!pool_window_8_V_2_fu_1863_p3.read().is_01() || !pool_window_9_V_2_fu_1871_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_2_fu_1863_p3.read()) < sc_biguint<12>(pool_window_9_V_2_fu_1871_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_45_fu_1955_p2() {
    icmp_ln1496_45_fu_1955_p2 = (!pool_window_10_V_2_fu_1879_p3.read().is_01() || !pool_window_11_V_2_fu_1887_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_2_fu_1879_p3.read()) < sc_biguint<12>(pool_window_11_V_2_fu_1887_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_46_fu_3400_p2() {
    icmp_ln1496_46_fu_3400_p2 = (!select_ln66_64_fu_3383_p3.read().is_01() || !select_ln66_66_fu_3395_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_64_fu_3383_p3.read()) < sc_biguint<12>(select_ln66_66_fu_3395_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_47_fu_1961_p2() {
    icmp_ln1496_47_fu_1961_p2 = (!pool_window_12_V_2_fu_1894_p3.read().is_01() || !pool_window_13_V_2_fu_1902_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_2_fu_1894_p3.read()) < sc_biguint<12>(pool_window_13_V_2_fu_1902_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_48_fu_1975_p2() {
    icmp_ln1496_48_fu_1975_p2 = (!pool_window_14_V_2_fu_1910_p3.read().is_01() || !pool_window_15_V_2_fu_1918_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_2_fu_1910_p3.read()) < sc_biguint<12>(pool_window_15_V_2_fu_1918_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_49_fu_1989_p2() {
    icmp_ln1496_49_fu_1989_p2 = (!select_ln66_69_fu_1967_p3.read().is_01() || !select_ln66_71_fu_1981_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_69_fu_1967_p3.read()) < sc_biguint<12>(select_ln66_71_fu_1981_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_50_fu_3515_p2() {
    icmp_ln1496_50_fu_3515_p2 = (!phi_ln66_9_fu_3414_p18.read().is_01() || !phi_ln66_s_fu_3477_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_9_fu_3414_p18.read()) < sc_bigint<16>(phi_ln66_s_fu_3477_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_51_fu_5166_p2() {
    icmp_ln1496_51_fu_5166_p2 = (!phi_ln66_8_fu_5123_p18.read().is_01() || !phi_ln66_10_fu_5145_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_8_fu_5123_p18.read()) < sc_bigint<16>(phi_ln66_10_fu_5145_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_52_fu_2127_p2() {
    icmp_ln1496_52_fu_2127_p2 = (!pool_window_2_V_19_fu_2011_p3.read().is_01() || !pool_window_3_V_19_fu_2019_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_19_fu_2011_p3.read()) < sc_biguint<12>(pool_window_3_V_19_fu_2019_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_53_fu_3597_p2() {
    icmp_ln1496_53_fu_3597_p2 = (!select_ln66_75_fu_3580_p3.read().is_01() || !select_ln66_77_fu_3592_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_75_fu_3580_p3.read()) < sc_biguint<12>(select_ln66_77_fu_3592_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_54_fu_2133_p2() {
    icmp_ln1496_54_fu_2133_p2 = (!pool_window_4_V_4_fu_2027_p3.read().is_01() || !pool_window_5_V_4_fu_2035_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_4_fu_2027_p3.read()) < sc_biguint<12>(pool_window_5_V_4_fu_2035_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_55_fu_2139_p2() {
    icmp_ln1496_55_fu_2139_p2 = (!pool_window_6_V_4_fu_2043_p3.read().is_01() || !pool_window_7_V_4_fu_2051_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_4_fu_2043_p3.read()) < sc_biguint<12>(pool_window_7_V_4_fu_2051_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_56_fu_3681_p2() {
    icmp_ln1496_56_fu_3681_p2 = (!select_ln66_80_fu_3664_p3.read().is_01() || !select_ln66_82_fu_3676_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_80_fu_3664_p3.read()) < sc_biguint<12>(select_ln66_82_fu_3676_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_57_fu_3737_p2() {
    icmp_ln1496_57_fu_3737_p2 = (!phi_ln66_11_fu_3619_p18.read().is_01() || !phi_ln66_12_fu_3699_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_11_fu_3619_p18.read()) < sc_bigint<16>(phi_ln66_12_fu_3699_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_58_fu_2145_p2() {
    icmp_ln1496_58_fu_2145_p2 = (!pool_window_8_V_4_fu_2059_p3.read().is_01() || !pool_window_9_V_4_fu_2067_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_4_fu_2059_p3.read()) < sc_biguint<12>(pool_window_9_V_4_fu_2067_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_59_fu_2151_p2() {
    icmp_ln1496_59_fu_2151_p2 = (!pool_window_10_V_4_fu_2075_p3.read().is_01() || !pool_window_11_V_4_fu_2083_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_4_fu_2075_p3.read()) < sc_biguint<12>(pool_window_11_V_4_fu_2083_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_60_fu_3775_p2() {
    icmp_ln1496_60_fu_3775_p2 = (!select_ln66_86_fu_3758_p3.read().is_01() || !select_ln66_88_fu_3770_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_86_fu_3758_p3.read()) < sc_biguint<12>(select_ln66_88_fu_3770_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_61_fu_2157_p2() {
    icmp_ln1496_61_fu_2157_p2 = (!pool_window_12_V_4_fu_2090_p3.read().is_01() || !pool_window_13_V_4_fu_2098_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_4_fu_2090_p3.read()) < sc_biguint<12>(pool_window_13_V_4_fu_2098_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_62_fu_2171_p2() {
    icmp_ln1496_62_fu_2171_p2 = (!pool_window_14_V_4_fu_2106_p3.read().is_01() || !pool_window_15_V_4_fu_2114_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_4_fu_2106_p3.read()) < sc_biguint<12>(pool_window_15_V_4_fu_2114_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_63_fu_2185_p2() {
    icmp_ln1496_63_fu_2185_p2 = (!select_ln66_91_fu_2163_p3.read().is_01() || !select_ln66_93_fu_2177_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_91_fu_2163_p3.read()) < sc_biguint<12>(select_ln66_93_fu_2177_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_64_fu_3890_p2() {
    icmp_ln1496_64_fu_3890_p2 = (!phi_ln66_14_fu_3789_p18.read().is_01() || !phi_ln66_15_fu_3852_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_14_fu_3789_p18.read()) < sc_bigint<16>(phi_ln66_15_fu_3852_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_65_fu_5257_p2() {
    icmp_ln1496_65_fu_5257_p2 = (!phi_ln66_13_fu_5214_p18.read().is_01() || !phi_ln66_16_fu_5236_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_13_fu_5214_p18.read()) < sc_bigint<16>(phi_ln66_16_fu_5236_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_66_fu_2317_p2() {
    icmp_ln1496_66_fu_2317_p2 = (!pool_window_0_V_21_fu_2191_p3.read().is_01() || !pool_window_1_V_21_fu_2199_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_21_fu_2191_p3.read()) < sc_biguint<12>(pool_window_1_V_21_fu_2199_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_67_fu_2323_p2() {
    icmp_ln1496_67_fu_2323_p2 = (!pool_window_2_V_21_fu_2207_p3.read().is_01() || !pool_window_3_V_21_fu_2215_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_21_fu_2207_p3.read()) < sc_biguint<12>(pool_window_3_V_21_fu_2215_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_68_fu_3972_p2() {
    icmp_ln1496_68_fu_3972_p2 = (!select_ln66_97_fu_3955_p3.read().is_01() || !select_ln66_99_fu_3967_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_97_fu_3955_p3.read()) < sc_biguint<12>(select_ln66_99_fu_3967_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_69_fu_2329_p2() {
    icmp_ln1496_69_fu_2329_p2 = (!pool_window_4_V_6_fu_2223_p3.read().is_01() || !pool_window_5_V_6_fu_2231_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_6_fu_2223_p3.read()) < sc_biguint<12>(pool_window_5_V_6_fu_2231_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_70_fu_2335_p2() {
    icmp_ln1496_70_fu_2335_p2 = (!pool_window_6_V_6_fu_2239_p3.read().is_01() || !pool_window_7_V_6_fu_2247_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_6_fu_2239_p3.read()) < sc_biguint<12>(pool_window_7_V_6_fu_2247_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_71_fu_4056_p2() {
    icmp_ln1496_71_fu_4056_p2 = (!select_ln66_102_fu_4039_p3.read().is_01() || !select_ln66_104_fu_4051_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_102_fu_4039_p3.read()) < sc_biguint<12>(select_ln66_104_fu_4051_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_72_fu_4112_p2() {
    icmp_ln1496_72_fu_4112_p2 = (!phi_ln66_17_fu_3994_p18.read().is_01() || !phi_ln66_18_fu_4074_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_17_fu_3994_p18.read()) < sc_bigint<16>(phi_ln66_18_fu_4074_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_73_fu_2341_p2() {
    icmp_ln1496_73_fu_2341_p2 = (!pool_window_8_V_6_fu_2255_p3.read().is_01() || !pool_window_9_V_6_fu_2263_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_6_fu_2255_p3.read()) < sc_biguint<12>(pool_window_9_V_6_fu_2263_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_74_fu_2347_p2() {
    icmp_ln1496_74_fu_2347_p2 = (!pool_window_10_V_6_fu_2271_p3.read().is_01() || !pool_window_11_V_6_fu_2279_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_6_fu_2271_p3.read()) < sc_biguint<12>(pool_window_11_V_6_fu_2279_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_75_fu_4150_p2() {
    icmp_ln1496_75_fu_4150_p2 = (!select_ln66_108_fu_4133_p3.read().is_01() || !select_ln66_110_fu_4145_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_108_fu_4133_p3.read()) < sc_biguint<12>(select_ln66_110_fu_4145_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_76_fu_2353_p2() {
    icmp_ln1496_76_fu_2353_p2 = (!pool_window_12_V_6_fu_2286_p3.read().is_01() || !pool_window_13_V_6_fu_2294_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_6_fu_2286_p3.read()) < sc_biguint<12>(pool_window_13_V_6_fu_2294_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_77_fu_2367_p2() {
    icmp_ln1496_77_fu_2367_p2 = (!pool_window_14_V_6_fu_2302_p3.read().is_01() || !pool_window_15_V_6_fu_2310_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_6_fu_2302_p3.read()) < sc_biguint<12>(pool_window_15_V_6_fu_2310_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_78_fu_2381_p2() {
    icmp_ln1496_78_fu_2381_p2 = (!select_ln66_113_fu_2359_p3.read().is_01() || !select_ln66_115_fu_2373_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_113_fu_2359_p3.read()) < sc_biguint<12>(select_ln66_115_fu_2373_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_79_fu_4265_p2() {
    icmp_ln1496_79_fu_4265_p2 = (!phi_ln66_20_fu_4164_p18.read().is_01() || !phi_ln66_21_fu_4227_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_20_fu_4164_p18.read()) < sc_bigint<16>(phi_ln66_21_fu_4227_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_80_fu_5348_p2() {
    icmp_ln1496_80_fu_5348_p2 = (!phi_ln66_19_fu_5305_p18.read().is_01() || !phi_ln66_22_fu_5327_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_19_fu_5305_p18.read()) < sc_bigint<16>(phi_ln66_22_fu_5327_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_81_fu_2513_p2() {
    icmp_ln1496_81_fu_2513_p2 = (!pool_window_0_V_23_fu_2387_p3.read().is_01() || !pool_window_1_V_23_fu_2395_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_23_fu_2387_p3.read()) < sc_biguint<12>(pool_window_1_V_23_fu_2395_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_82_fu_2519_p2() {
    icmp_ln1496_82_fu_2519_p2 = (!pool_window_2_V_23_fu_2403_p3.read().is_01() || !pool_window_3_V_23_fu_2411_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_23_fu_2403_p3.read()) < sc_biguint<12>(pool_window_3_V_23_fu_2411_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_83_fu_4347_p2() {
    icmp_ln1496_83_fu_4347_p2 = (!select_ln66_119_fu_4330_p3.read().is_01() || !select_ln66_121_fu_4342_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_119_fu_4330_p3.read()) < sc_biguint<12>(select_ln66_121_fu_4342_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_84_fu_2525_p2() {
    icmp_ln1496_84_fu_2525_p2 = (!pool_window_4_V_8_fu_2419_p3.read().is_01() || !pool_window_5_V_8_fu_2427_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_8_fu_2419_p3.read()) < sc_biguint<12>(pool_window_5_V_8_fu_2427_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_85_fu_2531_p2() {
    icmp_ln1496_85_fu_2531_p2 = (!pool_window_6_V_8_fu_2435_p3.read().is_01() || !pool_window_7_V_8_fu_2443_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_6_V_8_fu_2435_p3.read()) < sc_biguint<12>(pool_window_7_V_8_fu_2443_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_86_fu_4431_p2() {
    icmp_ln1496_86_fu_4431_p2 = (!select_ln66_124_fu_4414_p3.read().is_01() || !select_ln66_126_fu_4426_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_124_fu_4414_p3.read()) < sc_biguint<12>(select_ln66_126_fu_4426_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_87_fu_4487_p2() {
    icmp_ln1496_87_fu_4487_p2 = (!phi_ln66_23_fu_4369_p18.read().is_01() || !phi_ln66_24_fu_4449_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_23_fu_4369_p18.read()) < sc_bigint<16>(phi_ln66_24_fu_4449_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_88_fu_2537_p2() {
    icmp_ln1496_88_fu_2537_p2 = (!pool_window_8_V_8_fu_2451_p3.read().is_01() || !pool_window_9_V_8_fu_2459_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_8_V_8_fu_2451_p3.read()) < sc_biguint<12>(pool_window_9_V_8_fu_2459_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_89_fu_2543_p2() {
    icmp_ln1496_89_fu_2543_p2 = (!pool_window_10_V_8_fu_2467_p3.read().is_01() || !pool_window_11_V_8_fu_2475_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_10_V_8_fu_2467_p3.read()) < sc_biguint<12>(pool_window_11_V_8_fu_2475_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_90_fu_4525_p2() {
    icmp_ln1496_90_fu_4525_p2 = (!select_ln66_130_fu_4508_p3.read().is_01() || !select_ln66_132_fu_4520_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_130_fu_4508_p3.read()) < sc_biguint<12>(select_ln66_132_fu_4520_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_91_fu_2549_p2() {
    icmp_ln1496_91_fu_2549_p2 = (!pool_window_12_V_8_fu_2482_p3.read().is_01() || !pool_window_13_V_8_fu_2490_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_12_V_8_fu_2482_p3.read()) < sc_biguint<12>(pool_window_13_V_8_fu_2490_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_92_fu_2563_p2() {
    icmp_ln1496_92_fu_2563_p2 = (!pool_window_14_V_8_fu_2498_p3.read().is_01() || !pool_window_15_V_8_fu_2506_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_14_V_8_fu_2498_p3.read()) < sc_biguint<12>(pool_window_15_V_8_fu_2506_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_93_fu_2577_p2() {
    icmp_ln1496_93_fu_2577_p2 = (!select_ln66_135_fu_2555_p3.read().is_01() || !select_ln66_137_fu_2569_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_135_fu_2555_p3.read()) < sc_biguint<12>(select_ln66_137_fu_2569_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_94_fu_4640_p2() {
    icmp_ln1496_94_fu_4640_p2 = (!phi_ln66_26_fu_4539_p18.read().is_01() || !phi_ln66_27_fu_4602_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_26_fu_4539_p18.read()) < sc_bigint<16>(phi_ln66_27_fu_4602_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_95_fu_5439_p2() {
    icmp_ln1496_95_fu_5439_p2 = (!phi_ln66_25_fu_5396_p18.read().is_01() || !phi_ln66_28_fu_5418_p18.read().is_01())? sc_lv<1>(): (sc_bigint<16>(phi_ln66_25_fu_5396_p18.read()) < sc_bigint<16>(phi_ln66_28_fu_5418_p18.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_96_fu_2709_p2() {
    icmp_ln1496_96_fu_2709_p2 = (!pool_window_0_V_25_fu_2583_p3.read().is_01() || !pool_window_1_V_25_fu_2591_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_25_fu_2583_p3.read()) < sc_biguint<12>(pool_window_1_V_25_fu_2591_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_97_fu_2715_p2() {
    icmp_ln1496_97_fu_2715_p2 = (!pool_window_2_V_25_fu_2599_p3.read().is_01() || !pool_window_3_V_25_fu_2607_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_2_V_25_fu_2599_p3.read()) < sc_biguint<12>(pool_window_3_V_25_fu_2607_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_98_fu_4722_p2() {
    icmp_ln1496_98_fu_4722_p2 = (!select_ln66_141_fu_4705_p3.read().is_01() || !select_ln66_143_fu_4717_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(select_ln66_141_fu_4705_p3.read()) < sc_biguint<12>(select_ln66_143_fu_4717_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_99_fu_2721_p2() {
    icmp_ln1496_99_fu_2721_p2 = (!pool_window_4_V_10_fu_2615_p3.read().is_01() || !pool_window_5_V_10_fu_2623_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_4_V_10_fu_2615_p3.read()) < sc_biguint<12>(pool_window_5_V_10_fu_2623_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln1496_fu_1729_p2() {
    icmp_ln1496_fu_1729_p2 = (!pool_window_0_V_fu_1603_p3.read().is_01() || !pool_window_1_V_fu_1611_p3.read().is_01())? sc_lv<1>(): (sc_biguint<12>(pool_window_0_V_fu_1603_p3.read()) < sc_biguint<12>(pool_window_1_V_fu_1611_p3.read()));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln191_4_fu_712_p2() {
    icmp_ln191_4_fu_712_p2 = (!sY_1.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(sY_1.read() == ap_const_lv32_3);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln191_5_fu_550_p2() {
    icmp_ln191_5_fu_550_p2 = (!pY_1.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<1>(): (sc_bigint<32>(pY_1.read()) > sc_bigint<32>(ap_const_lv32_2));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln191_6_fu_560_p2() {
    icmp_ln191_6_fu_560_p2 = (!pX_1.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<1>(): (sc_bigint<32>(pX_1.read()) > sc_bigint<32>(ap_const_lv32_2));
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln191_fu_702_p2() {
    icmp_ln191_fu_702_p2 = (!sX_1.read().is_01() || !ap_const_lv32_3.is_01())? sc_lv<1>(): sc_lv<1>(sX_1.read() == ap_const_lv32_3);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln212_fu_566_p2() {
    icmp_ln212_fu_566_p2 = (!pX_1.read().is_01() || !ap_const_lv32_2D.is_01())? sc_lv<1>(): sc_lv<1>(pX_1.read() == ap_const_lv32_2D);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln216_fu_590_p2() {
    icmp_ln216_fu_590_p2 = (!pY_1.read().is_01() || !ap_const_lv32_2D.is_01())? sc_lv<1>(): sc_lv<1>(pY_1.read() == ap_const_lv32_2D);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_icmp_ln241_fu_534_p2() {
    icmp_ln241_fu_534_p2 = (!indvar_flatten_reg_512.read().is_01() || !ap_const_lv12_844.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_512.read() == ap_const_lv12_844);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_internal_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_io_acc_block_signal_op44() {
    io_acc_block_signal_op44 = (data_V_data_0_V_empty_n.read() & data_V_data_1_V_empty_n.read() & data_V_data_2_V_empty_n.read() & data_V_data_3_V_empty_n.read() & data_V_data_4_V_empty_n.read() & data_V_data_5_V_empty_n.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_io_acc_block_signal_op734() {
    io_acc_block_signal_op734 = (res_V_data_0_V_full_n.read() & res_V_data_1_V_full_n.read() & res_V_data_2_V_full_n.read() & res_V_data_3_V_full_n.read() & res_V_data_4_V_full_n.read() & res_V_data_5_V_full_n.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln241_reg_5575.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        line_buffer_Array_V_4_0_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_0_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_1_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_1_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_0_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_0_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_0_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_0_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_1_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_1_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_1_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_1_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_2_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_2_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_2_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_2_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_3_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_3_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_3_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_3_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_4_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_4_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_4_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_4_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_5_ce0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_5_ce0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_line_buffer_Array_V_4_2_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln241_reg_5575_pp0_iter1_reg.read()))) {
        line_buffer_Array_V_4_2_5_we0 =  (sc_logic) (ap_const_lv1_1[0]);
    } else {
        line_buffer_Array_V_4_2_5_we0 = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3619_p1() {
    phi_ln66_11_fu_3619_p1 = esl_zext<16,12>(pool_window_0_V_19_reg_5970.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3619_p17() {
    phi_ln66_11_fu_3619_p17 = esl_zext<4,2>(select_ln66_78_fu_3603_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3619_p2() {
    phi_ln66_11_fu_3619_p2 = esl_zext<16,12>(pool_window_1_V_19_reg_5976.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_11_fu_3619_p3() {
    phi_ln66_11_fu_3619_p3 = esl_zext<16,12>(pool_window_2_V_19_reg_5982.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3699_p17() {
    phi_ln66_12_fu_3699_p17 = esl_zext<4,3>(select_ln66_83_fu_3687_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3699_p5() {
    phi_ln66_12_fu_3699_p5 = esl_zext<16,12>(pool_window_4_V_4_reg_5994.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3699_p6() {
    phi_ln66_12_fu_3699_p6 = esl_zext<16,12>(pool_window_5_V_4_reg_6000.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_12_fu_3699_p7() {
    phi_ln66_12_fu_3699_p7 = esl_zext<16,12>(pool_window_6_V_4_reg_6006.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3789_p10() {
    phi_ln66_14_fu_3789_p10 = esl_zext<16,12>(pool_window_9_V_4_reg_6024.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3789_p11() {
    phi_ln66_14_fu_3789_p11 = esl_zext<16,12>(pool_window_10_V_4_reg_6030.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_14_fu_3789_p9() {
    phi_ln66_14_fu_3789_p9 = esl_zext<16,12>(pool_window_8_V_4_reg_6018.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3852_p13() {
    phi_ln66_15_fu_3852_p13 = esl_zext<16,12>(pool_window_12_V_4_reg_6042.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3852_p14() {
    phi_ln66_15_fu_3852_p14 = esl_zext<16,12>(pool_window_13_V_4_reg_6047.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_15_fu_3852_p15() {
    phi_ln66_15_fu_3852_p15 = esl_zext<16,12>(pool_window_14_V_4_reg_6052.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_3994_p1() {
    phi_ln66_17_fu_3994_p1 = esl_zext<16,12>(pool_window_0_V_21_reg_6113.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_3994_p17() {
    phi_ln66_17_fu_3994_p17 = esl_zext<4,2>(select_ln66_100_fu_3978_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_3994_p2() {
    phi_ln66_17_fu_3994_p2 = esl_zext<16,12>(pool_window_1_V_21_reg_6119.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_17_fu_3994_p3() {
    phi_ln66_17_fu_3994_p3 = esl_zext<16,12>(pool_window_2_V_21_reg_6125.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_4074_p17() {
    phi_ln66_18_fu_4074_p17 = esl_zext<4,3>(select_ln66_105_fu_4062_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_4074_p5() {
    phi_ln66_18_fu_4074_p5 = esl_zext<16,12>(pool_window_4_V_6_reg_6137.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_4074_p6() {
    phi_ln66_18_fu_4074_p6 = esl_zext<16,12>(pool_window_5_V_6_reg_6143.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_18_fu_4074_p7() {
    phi_ln66_18_fu_4074_p7 = esl_zext<16,12>(pool_window_6_V_6_reg_6149.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2949_p17() {
    phi_ln66_1_fu_2949_p17 = esl_zext<4,3>(select_ln66_39_fu_2937_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2949_p5() {
    phi_ln66_1_fu_2949_p5 = esl_zext<16,12>(pool_window_4_V_reg_5708.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2949_p6() {
    phi_ln66_1_fu_2949_p6 = esl_zext<16,12>(pool_window_5_V_reg_5714.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_1_fu_2949_p7() {
    phi_ln66_1_fu_2949_p7 = esl_zext<16,12>(pool_window_6_V_reg_5720.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4164_p10() {
    phi_ln66_20_fu_4164_p10 = esl_zext<16,12>(pool_window_9_V_6_reg_6167.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4164_p11() {
    phi_ln66_20_fu_4164_p11 = esl_zext<16,12>(pool_window_10_V_6_reg_6173.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_20_fu_4164_p9() {
    phi_ln66_20_fu_4164_p9 = esl_zext<16,12>(pool_window_8_V_6_reg_6161.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4227_p13() {
    phi_ln66_21_fu_4227_p13 = esl_zext<16,12>(pool_window_12_V_6_reg_6185.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4227_p14() {
    phi_ln66_21_fu_4227_p14 = esl_zext<16,12>(pool_window_13_V_6_reg_6190.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_21_fu_4227_p15() {
    phi_ln66_21_fu_4227_p15 = esl_zext<16,12>(pool_window_14_V_6_reg_6195.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4369_p1() {
    phi_ln66_23_fu_4369_p1 = esl_zext<16,12>(pool_window_0_V_23_reg_6256.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4369_p17() {
    phi_ln66_23_fu_4369_p17 = esl_zext<4,2>(select_ln66_122_fu_4353_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4369_p2() {
    phi_ln66_23_fu_4369_p2 = esl_zext<16,12>(pool_window_1_V_23_reg_6262.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_23_fu_4369_p3() {
    phi_ln66_23_fu_4369_p3 = esl_zext<16,12>(pool_window_2_V_23_reg_6268.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4449_p17() {
    phi_ln66_24_fu_4449_p17 = esl_zext<4,3>(select_ln66_127_fu_4437_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4449_p5() {
    phi_ln66_24_fu_4449_p5 = esl_zext<16,12>(pool_window_4_V_8_reg_6280.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4449_p6() {
    phi_ln66_24_fu_4449_p6 = esl_zext<16,12>(pool_window_5_V_8_reg_6286.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_24_fu_4449_p7() {
    phi_ln66_24_fu_4449_p7 = esl_zext<16,12>(pool_window_6_V_8_reg_6292.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4539_p10() {
    phi_ln66_26_fu_4539_p10 = esl_zext<16,12>(pool_window_9_V_8_reg_6310.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4539_p11() {
    phi_ln66_26_fu_4539_p11 = esl_zext<16,12>(pool_window_10_V_8_reg_6316.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_26_fu_4539_p9() {
    phi_ln66_26_fu_4539_p9 = esl_zext<16,12>(pool_window_8_V_8_reg_6304.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4602_p13() {
    phi_ln66_27_fu_4602_p13 = esl_zext<16,12>(pool_window_12_V_8_reg_6328.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4602_p14() {
    phi_ln66_27_fu_4602_p14 = esl_zext<16,12>(pool_window_13_V_8_reg_6333.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_27_fu_4602_p15() {
    phi_ln66_27_fu_4602_p15 = esl_zext<16,12>(pool_window_14_V_8_reg_6338.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4744_p1() {
    phi_ln66_29_fu_4744_p1 = esl_zext<16,12>(pool_window_0_V_25_reg_6399.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4744_p17() {
    phi_ln66_29_fu_4744_p17 = esl_zext<4,2>(select_ln66_144_fu_4728_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4744_p2() {
    phi_ln66_29_fu_4744_p2 = esl_zext<16,12>(pool_window_1_V_25_reg_6405.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_29_fu_4744_p3() {
    phi_ln66_29_fu_4744_p3 = esl_zext<16,12>(pool_window_2_V_25_reg_6411.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4824_p17() {
    phi_ln66_30_fu_4824_p17 = esl_zext<4,3>(select_ln66_149_fu_4812_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4824_p5() {
    phi_ln66_30_fu_4824_p5 = esl_zext<16,12>(pool_window_4_V_10_reg_6423.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4824_p6() {
    phi_ln66_30_fu_4824_p6 = esl_zext<16,12>(pool_window_5_V_10_reg_6429.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_30_fu_4824_p7() {
    phi_ln66_30_fu_4824_p7 = esl_zext<16,12>(pool_window_6_V_10_reg_6435.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4914_p10() {
    phi_ln66_32_fu_4914_p10 = esl_zext<16,12>(pool_window_9_V_10_reg_6453.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4914_p11() {
    phi_ln66_32_fu_4914_p11 = esl_zext<16,12>(pool_window_10_V_10_reg_6459.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_32_fu_4914_p9() {
    phi_ln66_32_fu_4914_p9 = esl_zext<16,12>(pool_window_8_V_10_reg_6447.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4977_p13() {
    phi_ln66_33_fu_4977_p13 = esl_zext<16,12>(pool_window_12_V_10_reg_6471.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4977_p14() {
    phi_ln66_33_fu_4977_p14 = esl_zext<16,12>(pool_window_13_V_10_reg_6476.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_33_fu_4977_p15() {
    phi_ln66_33_fu_4977_p15 = esl_zext<16,12>(pool_window_14_V_10_reg_6481.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_3039_p10() {
    phi_ln66_3_fu_3039_p10 = esl_zext<16,12>(pool_window_9_V_reg_5738.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_3039_p11() {
    phi_ln66_3_fu_3039_p11 = esl_zext<16,12>(pool_window_10_V_reg_5744.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_3_fu_3039_p9() {
    phi_ln66_3_fu_3039_p9 = esl_zext<16,12>(pool_window_8_V_reg_5732.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_3102_p13() {
    phi_ln66_4_fu_3102_p13 = esl_zext<16,12>(pool_window_12_V_reg_5756.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_3102_p14() {
    phi_ln66_4_fu_3102_p14 = esl_zext<16,12>(pool_window_13_V_reg_5761.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_4_fu_3102_p15() {
    phi_ln66_4_fu_3102_p15 = esl_zext<16,12>(pool_window_14_V_reg_5766.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3244_p1() {
    phi_ln66_6_fu_3244_p1 = esl_zext<16,12>(pool_window_0_V_17_reg_5827.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3244_p17() {
    phi_ln66_6_fu_3244_p17 = esl_zext<4,2>(select_ln66_56_fu_3228_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3244_p2() {
    phi_ln66_6_fu_3244_p2 = esl_zext<16,12>(pool_window_1_V_17_reg_5833.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_6_fu_3244_p3() {
    phi_ln66_6_fu_3244_p3 = esl_zext<16,12>(pool_window_2_V_17_reg_5839.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3324_p17() {
    phi_ln66_7_fu_3324_p17 = esl_zext<4,3>(select_ln66_61_fu_3312_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3324_p5() {
    phi_ln66_7_fu_3324_p5 = esl_zext<16,12>(pool_window_4_V_2_reg_5851.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3324_p6() {
    phi_ln66_7_fu_3324_p6 = esl_zext<16,12>(pool_window_5_V_2_reg_5857.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_7_fu_3324_p7() {
    phi_ln66_7_fu_3324_p7 = esl_zext<16,12>(pool_window_6_V_2_reg_5863.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3414_p10() {
    phi_ln66_9_fu_3414_p10 = esl_zext<16,12>(pool_window_9_V_2_reg_5881.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3414_p11() {
    phi_ln66_9_fu_3414_p11 = esl_zext<16,12>(pool_window_10_V_2_reg_5887.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_9_fu_3414_p9() {
    phi_ln66_9_fu_3414_p9 = esl_zext<16,12>(pool_window_8_V_2_reg_5875.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3477_p13() {
    phi_ln66_s_fu_3477_p13 = esl_zext<16,12>(pool_window_12_V_2_reg_5899.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3477_p14() {
    phi_ln66_s_fu_3477_p14 = esl_zext<16,12>(pool_window_13_V_2_reg_5904.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln66_s_fu_3477_p15() {
    phi_ln66_s_fu_3477_p15 = esl_zext<16,12>(pool_window_14_V_2_reg_5909.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln_fu_2869_p1() {
    phi_ln_fu_2869_p1 = esl_zext<16,12>(pool_window_0_V_reg_5684.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln_fu_2869_p17() {
    phi_ln_fu_2869_p17 = esl_zext<4,2>(select_ln66_34_fu_2853_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln_fu_2869_p2() {
    phi_ln_fu_2869_p2 = esl_zext<16,12>(pool_window_1_V_reg_5690.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_phi_ln_fu_2869_p3() {
    phi_ln_fu_2869_p3 = esl_zext<16,12>(pool_window_2_V_reg_5696.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_16_fu_2779_p1() {
    pool_window_0_V_16_fu_2779_p1 = esl_zext<16,12>(pool_window_0_V_reg_5684.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_17_fu_1799_p3() {
    pool_window_0_V_17_fu_1799_p3 = esl_concat<4,8>(kernel_data_V_4_7.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_18_fu_3154_p1() {
    pool_window_0_V_18_fu_3154_p1 = esl_zext<16,12>(pool_window_0_V_17_reg_5827.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_19_fu_1995_p3() {
    pool_window_0_V_19_fu_1995_p3 = esl_concat<4,8>(kernel_data_V_4_8.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_20_fu_3529_p1() {
    pool_window_0_V_20_fu_3529_p1 = esl_zext<16,12>(pool_window_0_V_19_reg_5970.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_21_fu_2191_p3() {
    pool_window_0_V_21_fu_2191_p3 = esl_concat<4,8>(kernel_data_V_4_9.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_22_fu_3904_p1() {
    pool_window_0_V_22_fu_3904_p1 = esl_zext<16,12>(pool_window_0_V_21_reg_6113.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_23_fu_2387_p3() {
    pool_window_0_V_23_fu_2387_p3 = esl_concat<4,8>(kernel_data_V_4_10.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_24_fu_4279_p1() {
    pool_window_0_V_24_fu_4279_p1 = esl_zext<16,12>(pool_window_0_V_23_reg_6256.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_25_fu_2583_p3() {
    pool_window_0_V_25_fu_2583_p3 = esl_concat<4,8>(kernel_data_V_4_11.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_26_fu_4654_p1() {
    pool_window_0_V_26_fu_4654_p1 = esl_zext<16,12>(pool_window_0_V_25_reg_6399.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_0_V_fu_1603_p3() {
    pool_window_0_V_fu_1603_p3 = esl_concat<4,8>(kernel_data_V_4_6.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_10_fu_2663_p3() {
    pool_window_10_V_10_fu_2663_p3 = esl_concat<4,8>(kernel_data_V_4_71.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_11_fu_4684_p1() {
    pool_window_10_V_11_fu_4684_p1 = esl_zext<16,12>(pool_window_10_V_10_reg_6459.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_1_fu_2809_p1() {
    pool_window_10_V_1_fu_2809_p1 = esl_zext<16,12>(pool_window_10_V_reg_5744.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_2_fu_1879_p3() {
    pool_window_10_V_2_fu_1879_p3 = esl_concat<4,8>(kernel_data_V_4_67.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_3_fu_3184_p1() {
    pool_window_10_V_3_fu_3184_p1 = esl_zext<16,12>(pool_window_10_V_2_reg_5887.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_4_fu_2075_p3() {
    pool_window_10_V_4_fu_2075_p3 = esl_concat<4,8>(kernel_data_V_4_68.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_5_fu_3559_p1() {
    pool_window_10_V_5_fu_3559_p1 = esl_zext<16,12>(pool_window_10_V_4_reg_6030.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_6_fu_2271_p3() {
    pool_window_10_V_6_fu_2271_p3 = esl_concat<4,8>(kernel_data_V_4_69.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_7_fu_3934_p1() {
    pool_window_10_V_7_fu_3934_p1 = esl_zext<16,12>(pool_window_10_V_6_reg_6173.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_8_fu_2467_p3() {
    pool_window_10_V_8_fu_2467_p3 = esl_concat<4,8>(kernel_data_V_4_70.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_9_fu_4309_p1() {
    pool_window_10_V_9_fu_4309_p1 = esl_zext<16,12>(pool_window_10_V_8_reg_6316.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_10_V_fu_1683_p3() {
    pool_window_10_V_fu_1683_p3 = esl_concat<4,8>(kernel_data_V_4_66.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_10_fu_2671_p3() {
    pool_window_11_V_10_fu_2671_p3 = esl_concat<4,8>(DataOut_V_108_reg_5673.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_11_fu_4687_p1() {
    pool_window_11_V_11_fu_4687_p1 = esl_zext<16,12>(pool_window_11_V_10_reg_6465.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_1_fu_2812_p1() {
    pool_window_11_V_1_fu_2812_p1 = esl_zext<16,12>(pool_window_11_V_reg_5750.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_2_fu_1887_p3() {
    pool_window_11_V_2_fu_1887_p3 = esl_concat<4,8>(DataOut_V_96_reg_5645.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_3_fu_3187_p1() {
    pool_window_11_V_3_fu_3187_p1 = esl_zext<16,12>(pool_window_11_V_2_reg_5893.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_4_fu_2083_p3() {
    pool_window_11_V_4_fu_2083_p3 = esl_concat<4,8>(DataOut_V_99_reg_5652.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_5_fu_3562_p1() {
    pool_window_11_V_5_fu_3562_p1 = esl_zext<16,12>(pool_window_11_V_4_reg_6036.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_6_fu_2279_p3() {
    pool_window_11_V_6_fu_2279_p3 = esl_concat<4,8>(DataOut_V_102_reg_5659.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_7_fu_3937_p1() {
    pool_window_11_V_7_fu_3937_p1 = esl_zext<16,12>(pool_window_11_V_6_reg_6179.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_8_fu_2475_p3() {
    pool_window_11_V_8_fu_2475_p3 = esl_concat<4,8>(DataOut_V_105_reg_5666.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_9_fu_4312_p1() {
    pool_window_11_V_9_fu_4312_p1 = esl_zext<16,12>(pool_window_11_V_8_reg_6322.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_11_V_fu_1691_p3() {
    pool_window_11_V_fu_1691_p3 = esl_concat<4,8>(DataOut_V_93_reg_5638.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_10_fu_2678_p3() {
    pool_window_12_V_10_fu_2678_p3 = esl_concat<4,8>(kernel_data_V_4_83.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_11_fu_4690_p1() {
    pool_window_12_V_11_fu_4690_p1 = esl_zext<16,12>(pool_window_12_V_10_reg_6471.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_1_fu_2815_p1() {
    pool_window_12_V_1_fu_2815_p1 = esl_zext<16,12>(pool_window_12_V_reg_5756.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_2_fu_1894_p3() {
    pool_window_12_V_2_fu_1894_p3 = esl_concat<4,8>(kernel_data_V_4_79.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_3_fu_3190_p1() {
    pool_window_12_V_3_fu_3190_p1 = esl_zext<16,12>(pool_window_12_V_2_reg_5899.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_4_fu_2090_p3() {
    pool_window_12_V_4_fu_2090_p3 = esl_concat<4,8>(kernel_data_V_4_80.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_5_fu_3565_p1() {
    pool_window_12_V_5_fu_3565_p1 = esl_zext<16,12>(pool_window_12_V_4_reg_6042.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_6_fu_2286_p3() {
    pool_window_12_V_6_fu_2286_p3 = esl_concat<4,8>(kernel_data_V_4_81.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_7_fu_3940_p1() {
    pool_window_12_V_7_fu_3940_p1 = esl_zext<16,12>(pool_window_12_V_6_reg_6185.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_8_fu_2482_p3() {
    pool_window_12_V_8_fu_2482_p3 = esl_concat<4,8>(kernel_data_V_4_82.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_9_fu_4315_p1() {
    pool_window_12_V_9_fu_4315_p1 = esl_zext<16,12>(pool_window_12_V_8_reg_6328.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_12_V_fu_1698_p3() {
    pool_window_12_V_fu_1698_p3 = esl_concat<4,8>(kernel_data_V_4_78.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_10_fu_2686_p3() {
    pool_window_13_V_10_fu_2686_p3 = esl_concat<4,8>(kernel_data_V_4_89.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_11_fu_4693_p1() {
    pool_window_13_V_11_fu_4693_p1 = esl_zext<16,12>(pool_window_13_V_10_reg_6476.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_1_fu_2818_p1() {
    pool_window_13_V_1_fu_2818_p1 = esl_zext<16,12>(pool_window_13_V_reg_5761.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_2_fu_1902_p3() {
    pool_window_13_V_2_fu_1902_p3 = esl_concat<4,8>(kernel_data_V_4_85.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_3_fu_3193_p1() {
    pool_window_13_V_3_fu_3193_p1 = esl_zext<16,12>(pool_window_13_V_2_reg_5904.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_4_fu_2098_p3() {
    pool_window_13_V_4_fu_2098_p3 = esl_concat<4,8>(kernel_data_V_4_86.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_5_fu_3568_p1() {
    pool_window_13_V_5_fu_3568_p1 = esl_zext<16,12>(pool_window_13_V_4_reg_6047.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_6_fu_2294_p3() {
    pool_window_13_V_6_fu_2294_p3 = esl_concat<4,8>(kernel_data_V_4_87.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_7_fu_3943_p1() {
    pool_window_13_V_7_fu_3943_p1 = esl_zext<16,12>(pool_window_13_V_6_reg_6190.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_8_fu_2490_p3() {
    pool_window_13_V_8_fu_2490_p3 = esl_concat<4,8>(kernel_data_V_4_88.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_9_fu_4318_p1() {
    pool_window_13_V_9_fu_4318_p1 = esl_zext<16,12>(pool_window_13_V_8_reg_6333.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_13_V_fu_1706_p3() {
    pool_window_13_V_fu_1706_p3 = esl_concat<4,8>(kernel_data_V_4_84.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_10_fu_2694_p3() {
    pool_window_14_V_10_fu_2694_p3 = esl_concat<4,8>(kernel_data_V_4_95.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_11_fu_4696_p1() {
    pool_window_14_V_11_fu_4696_p1 = esl_zext<16,12>(pool_window_14_V_10_reg_6481.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_1_fu_2821_p1() {
    pool_window_14_V_1_fu_2821_p1 = esl_zext<16,12>(pool_window_14_V_reg_5766.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_2_fu_1910_p3() {
    pool_window_14_V_2_fu_1910_p3 = esl_concat<4,8>(kernel_data_V_4_91.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_3_fu_3196_p1() {
    pool_window_14_V_3_fu_3196_p1 = esl_zext<16,12>(pool_window_14_V_2_reg_5909.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_4_fu_2106_p3() {
    pool_window_14_V_4_fu_2106_p3 = esl_concat<4,8>(kernel_data_V_4_92.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_5_fu_3571_p1() {
    pool_window_14_V_5_fu_3571_p1 = esl_zext<16,12>(pool_window_14_V_4_reg_6052.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_6_fu_2302_p3() {
    pool_window_14_V_6_fu_2302_p3 = esl_concat<4,8>(kernel_data_V_4_93.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_7_fu_3946_p1() {
    pool_window_14_V_7_fu_3946_p1 = esl_zext<16,12>(pool_window_14_V_6_reg_6195.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_8_fu_2498_p3() {
    pool_window_14_V_8_fu_2498_p3 = esl_concat<4,8>(kernel_data_V_4_94.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_9_fu_4321_p1() {
    pool_window_14_V_9_fu_4321_p1 = esl_zext<16,12>(pool_window_14_V_8_reg_6338.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_14_V_fu_1714_p3() {
    pool_window_14_V_fu_1714_p3 = esl_concat<4,8>(kernel_data_V_4_90.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_10_fu_2702_p3() {
    pool_window_15_V_10_fu_2702_p3 = esl_concat<4,8>(shift_buffer_3_5_V_reg_5632.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_11_fu_4699_p1() {
    pool_window_15_V_11_fu_4699_p1 = esl_zext<16,12>(pool_window_15_V_10_reg_6486.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_1_fu_2824_p1() {
    pool_window_15_V_1_fu_2824_p1 = esl_zext<16,12>(pool_window_15_V_reg_5771.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_2_fu_1918_p3() {
    pool_window_15_V_2_fu_1918_p3 = esl_concat<4,8>(shift_buffer_3_1_V_reg_5608.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_3_fu_3199_p1() {
    pool_window_15_V_3_fu_3199_p1 = esl_zext<16,12>(pool_window_15_V_2_reg_5914.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_4_fu_2114_p3() {
    pool_window_15_V_4_fu_2114_p3 = esl_concat<4,8>(shift_buffer_3_2_V_reg_5614.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_5_fu_3574_p1() {
    pool_window_15_V_5_fu_3574_p1 = esl_zext<16,12>(pool_window_15_V_4_reg_6057.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_6_fu_2310_p3() {
    pool_window_15_V_6_fu_2310_p3 = esl_concat<4,8>(shift_buffer_3_3_V_reg_5620.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_7_fu_3949_p1() {
    pool_window_15_V_7_fu_3949_p1 = esl_zext<16,12>(pool_window_15_V_6_reg_6200.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_8_fu_2506_p3() {
    pool_window_15_V_8_fu_2506_p3 = esl_concat<4,8>(shift_buffer_3_4_V_reg_5626.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_9_fu_4324_p1() {
    pool_window_15_V_9_fu_4324_p1 = esl_zext<16,12>(pool_window_15_V_8_reg_6343.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_15_V_fu_1722_p3() {
    pool_window_15_V_fu_1722_p3 = esl_concat<4,8>(shift_buffer_3_0_V_reg_5602.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_16_fu_2782_p1() {
    pool_window_1_V_16_fu_2782_p1 = esl_zext<16,12>(pool_window_1_V_reg_5690.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_17_fu_1807_p3() {
    pool_window_1_V_17_fu_1807_p3 = esl_concat<4,8>(kernel_data_V_4_13.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_18_fu_3157_p1() {
    pool_window_1_V_18_fu_3157_p1 = esl_zext<16,12>(pool_window_1_V_17_reg_5833.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_19_fu_2003_p3() {
    pool_window_1_V_19_fu_2003_p3 = esl_concat<4,8>(kernel_data_V_4_14.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_20_fu_3532_p1() {
    pool_window_1_V_20_fu_3532_p1 = esl_zext<16,12>(pool_window_1_V_19_reg_5976.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_21_fu_2199_p3() {
    pool_window_1_V_21_fu_2199_p3 = esl_concat<4,8>(kernel_data_V_4_15.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_22_fu_3907_p1() {
    pool_window_1_V_22_fu_3907_p1 = esl_zext<16,12>(pool_window_1_V_21_reg_6119.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_23_fu_2395_p3() {
    pool_window_1_V_23_fu_2395_p3 = esl_concat<4,8>(kernel_data_V_4_16.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_24_fu_4282_p1() {
    pool_window_1_V_24_fu_4282_p1 = esl_zext<16,12>(pool_window_1_V_23_reg_6262.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_25_fu_2591_p3() {
    pool_window_1_V_25_fu_2591_p3 = esl_concat<4,8>(kernel_data_V_4_17.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_26_fu_4657_p1() {
    pool_window_1_V_26_fu_4657_p1 = esl_zext<16,12>(pool_window_1_V_25_reg_6405.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_1_V_fu_1611_p3() {
    pool_window_1_V_fu_1611_p3 = esl_concat<4,8>(kernel_data_V_4_12.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_16_fu_2785_p1() {
    pool_window_2_V_16_fu_2785_p1 = esl_zext<16,12>(pool_window_2_V_reg_5696.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_17_fu_1815_p3() {
    pool_window_2_V_17_fu_1815_p3 = esl_concat<4,8>(kernel_data_V_4_19.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_18_fu_3160_p1() {
    pool_window_2_V_18_fu_3160_p1 = esl_zext<16,12>(pool_window_2_V_17_reg_5839.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_19_fu_2011_p3() {
    pool_window_2_V_19_fu_2011_p3 = esl_concat<4,8>(kernel_data_V_4_20.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_20_fu_3535_p1() {
    pool_window_2_V_20_fu_3535_p1 = esl_zext<16,12>(pool_window_2_V_19_reg_5982.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_21_fu_2207_p3() {
    pool_window_2_V_21_fu_2207_p3 = esl_concat<4,8>(kernel_data_V_4_21.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_22_fu_3910_p1() {
    pool_window_2_V_22_fu_3910_p1 = esl_zext<16,12>(pool_window_2_V_21_reg_6125.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_23_fu_2403_p3() {
    pool_window_2_V_23_fu_2403_p3 = esl_concat<4,8>(kernel_data_V_4_22.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_24_fu_4285_p1() {
    pool_window_2_V_24_fu_4285_p1 = esl_zext<16,12>(pool_window_2_V_23_reg_6268.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_25_fu_2599_p3() {
    pool_window_2_V_25_fu_2599_p3 = esl_concat<4,8>(kernel_data_V_4_23.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_26_fu_4660_p1() {
    pool_window_2_V_26_fu_4660_p1 = esl_zext<16,12>(pool_window_2_V_25_reg_6411.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_2_V_fu_1619_p3() {
    pool_window_2_V_fu_1619_p3 = esl_concat<4,8>(kernel_data_V_4_18.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_16_fu_2788_p1() {
    pool_window_3_V_16_fu_2788_p1 = esl_zext<16,12>(pool_window_3_V_reg_5702.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_17_fu_1823_p3() {
    pool_window_3_V_17_fu_1823_p3 = esl_concat<4,8>(line_buffer_Array_V_4_2_1_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_18_fu_3163_p1() {
    pool_window_3_V_18_fu_3163_p1 = esl_zext<16,12>(pool_window_3_V_17_reg_5845.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_19_fu_2019_p3() {
    pool_window_3_V_19_fu_2019_p3 = esl_concat<4,8>(line_buffer_Array_V_4_2_2_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_20_fu_3538_p1() {
    pool_window_3_V_20_fu_3538_p1 = esl_zext<16,12>(pool_window_3_V_19_reg_5988.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_21_fu_2215_p3() {
    pool_window_3_V_21_fu_2215_p3 = esl_concat<4,8>(line_buffer_Array_V_4_2_3_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_22_fu_3913_p1() {
    pool_window_3_V_22_fu_3913_p1 = esl_zext<16,12>(pool_window_3_V_21_reg_6131.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_23_fu_2411_p3() {
    pool_window_3_V_23_fu_2411_p3 = esl_concat<4,8>(line_buffer_Array_V_4_2_4_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_24_fu_4288_p1() {
    pool_window_3_V_24_fu_4288_p1 = esl_zext<16,12>(pool_window_3_V_23_reg_6274.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_25_fu_2607_p3() {
    pool_window_3_V_25_fu_2607_p3 = esl_concat<4,8>(line_buffer_Array_V_4_2_5_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_26_fu_4663_p1() {
    pool_window_3_V_26_fu_4663_p1 = esl_zext<16,12>(pool_window_3_V_25_reg_6417.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_3_V_fu_1627_p3() {
    pool_window_3_V_fu_1627_p3 = esl_concat<4,8>(line_buffer_Array_V_4_2_0_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_10_fu_2615_p3() {
    pool_window_4_V_10_fu_2615_p3 = esl_concat<4,8>(kernel_data_V_4_35.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_11_fu_4666_p1() {
    pool_window_4_V_11_fu_4666_p1 = esl_zext<16,12>(pool_window_4_V_10_reg_6423.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_1_fu_2791_p1() {
    pool_window_4_V_1_fu_2791_p1 = esl_zext<16,12>(pool_window_4_V_reg_5708.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_2_fu_1831_p3() {
    pool_window_4_V_2_fu_1831_p3 = esl_concat<4,8>(kernel_data_V_4_31.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_3_fu_3166_p1() {
    pool_window_4_V_3_fu_3166_p1 = esl_zext<16,12>(pool_window_4_V_2_reg_5851.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_4_fu_2027_p3() {
    pool_window_4_V_4_fu_2027_p3 = esl_concat<4,8>(kernel_data_V_4_32.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_5_fu_3541_p1() {
    pool_window_4_V_5_fu_3541_p1 = esl_zext<16,12>(pool_window_4_V_4_reg_5994.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_6_fu_2223_p3() {
    pool_window_4_V_6_fu_2223_p3 = esl_concat<4,8>(kernel_data_V_4_33.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_7_fu_3916_p1() {
    pool_window_4_V_7_fu_3916_p1 = esl_zext<16,12>(pool_window_4_V_6_reg_6137.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_8_fu_2419_p3() {
    pool_window_4_V_8_fu_2419_p3 = esl_concat<4,8>(kernel_data_V_4_34.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_9_fu_4291_p1() {
    pool_window_4_V_9_fu_4291_p1 = esl_zext<16,12>(pool_window_4_V_8_reg_6280.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_4_V_fu_1635_p3() {
    pool_window_4_V_fu_1635_p3 = esl_concat<4,8>(kernel_data_V_4_30.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_10_fu_2623_p3() {
    pool_window_5_V_10_fu_2623_p3 = esl_concat<4,8>(kernel_data_V_4_41.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_11_fu_4669_p1() {
    pool_window_5_V_11_fu_4669_p1 = esl_zext<16,12>(pool_window_5_V_10_reg_6429.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_1_fu_2794_p1() {
    pool_window_5_V_1_fu_2794_p1 = esl_zext<16,12>(pool_window_5_V_reg_5714.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_2_fu_1839_p3() {
    pool_window_5_V_2_fu_1839_p3 = esl_concat<4,8>(kernel_data_V_4_37.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_3_fu_3169_p1() {
    pool_window_5_V_3_fu_3169_p1 = esl_zext<16,12>(pool_window_5_V_2_reg_5857.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_4_fu_2035_p3() {
    pool_window_5_V_4_fu_2035_p3 = esl_concat<4,8>(kernel_data_V_4_38.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_5_fu_3544_p1() {
    pool_window_5_V_5_fu_3544_p1 = esl_zext<16,12>(pool_window_5_V_4_reg_6000.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_6_fu_2231_p3() {
    pool_window_5_V_6_fu_2231_p3 = esl_concat<4,8>(kernel_data_V_4_39.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_7_fu_3919_p1() {
    pool_window_5_V_7_fu_3919_p1 = esl_zext<16,12>(pool_window_5_V_6_reg_6143.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_8_fu_2427_p3() {
    pool_window_5_V_8_fu_2427_p3 = esl_concat<4,8>(kernel_data_V_4_40.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_9_fu_4294_p1() {
    pool_window_5_V_9_fu_4294_p1 = esl_zext<16,12>(pool_window_5_V_8_reg_6286.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_5_V_fu_1643_p3() {
    pool_window_5_V_fu_1643_p3 = esl_concat<4,8>(kernel_data_V_4_36.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_10_fu_2631_p3() {
    pool_window_6_V_10_fu_2631_p3 = esl_concat<4,8>(kernel_data_V_4_47.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_11_fu_4672_p1() {
    pool_window_6_V_11_fu_4672_p1 = esl_zext<16,12>(pool_window_6_V_10_reg_6435.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_1_fu_2797_p1() {
    pool_window_6_V_1_fu_2797_p1 = esl_zext<16,12>(pool_window_6_V_reg_5720.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_2_fu_1847_p3() {
    pool_window_6_V_2_fu_1847_p3 = esl_concat<4,8>(kernel_data_V_4_43.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_3_fu_3172_p1() {
    pool_window_6_V_3_fu_3172_p1 = esl_zext<16,12>(pool_window_6_V_2_reg_5863.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_4_fu_2043_p3() {
    pool_window_6_V_4_fu_2043_p3 = esl_concat<4,8>(kernel_data_V_4_44.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_5_fu_3547_p1() {
    pool_window_6_V_5_fu_3547_p1 = esl_zext<16,12>(pool_window_6_V_4_reg_6006.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_6_fu_2239_p3() {
    pool_window_6_V_6_fu_2239_p3 = esl_concat<4,8>(kernel_data_V_4_45.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_7_fu_3922_p1() {
    pool_window_6_V_7_fu_3922_p1 = esl_zext<16,12>(pool_window_6_V_6_reg_6149.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_8_fu_2435_p3() {
    pool_window_6_V_8_fu_2435_p3 = esl_concat<4,8>(kernel_data_V_4_46.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_9_fu_4297_p1() {
    pool_window_6_V_9_fu_4297_p1 = esl_zext<16,12>(pool_window_6_V_8_reg_6292.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_6_V_fu_1651_p3() {
    pool_window_6_V_fu_1651_p3 = esl_concat<4,8>(kernel_data_V_4_42.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_10_fu_2639_p3() {
    pool_window_7_V_10_fu_2639_p3 = esl_concat<4,8>(line_buffer_Array_V_4_1_5_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_11_fu_4675_p1() {
    pool_window_7_V_11_fu_4675_p1 = esl_zext<16,12>(pool_window_7_V_10_reg_6441.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_1_fu_2800_p1() {
    pool_window_7_V_1_fu_2800_p1 = esl_zext<16,12>(pool_window_7_V_reg_5726.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_2_fu_1855_p3() {
    pool_window_7_V_2_fu_1855_p3 = esl_concat<4,8>(line_buffer_Array_V_4_1_1_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_3_fu_3175_p1() {
    pool_window_7_V_3_fu_3175_p1 = esl_zext<16,12>(pool_window_7_V_2_reg_5869.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_4_fu_2051_p3() {
    pool_window_7_V_4_fu_2051_p3 = esl_concat<4,8>(line_buffer_Array_V_4_1_2_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_5_fu_3550_p1() {
    pool_window_7_V_5_fu_3550_p1 = esl_zext<16,12>(pool_window_7_V_4_reg_6012.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_6_fu_2247_p3() {
    pool_window_7_V_6_fu_2247_p3 = esl_concat<4,8>(line_buffer_Array_V_4_1_3_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_7_fu_3925_p1() {
    pool_window_7_V_7_fu_3925_p1 = esl_zext<16,12>(pool_window_7_V_6_reg_6155.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_8_fu_2443_p3() {
    pool_window_7_V_8_fu_2443_p3 = esl_concat<4,8>(line_buffer_Array_V_4_1_4_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_9_fu_4300_p1() {
    pool_window_7_V_9_fu_4300_p1 = esl_zext<16,12>(pool_window_7_V_8_reg_6298.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_7_V_fu_1659_p3() {
    pool_window_7_V_fu_1659_p3 = esl_concat<4,8>(line_buffer_Array_V_4_1_0_q0.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_10_fu_2647_p3() {
    pool_window_8_V_10_fu_2647_p3 = esl_concat<4,8>(kernel_data_V_4_59.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_11_fu_4678_p1() {
    pool_window_8_V_11_fu_4678_p1 = esl_zext<16,12>(pool_window_8_V_10_reg_6447.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_1_fu_2803_p1() {
    pool_window_8_V_1_fu_2803_p1 = esl_zext<16,12>(pool_window_8_V_reg_5732.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_2_fu_1863_p3() {
    pool_window_8_V_2_fu_1863_p3 = esl_concat<4,8>(kernel_data_V_4_55.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_3_fu_3178_p1() {
    pool_window_8_V_3_fu_3178_p1 = esl_zext<16,12>(pool_window_8_V_2_reg_5875.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_4_fu_2059_p3() {
    pool_window_8_V_4_fu_2059_p3 = esl_concat<4,8>(kernel_data_V_4_56.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_5_fu_3553_p1() {
    pool_window_8_V_5_fu_3553_p1 = esl_zext<16,12>(pool_window_8_V_4_reg_6018.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_6_fu_2255_p3() {
    pool_window_8_V_6_fu_2255_p3 = esl_concat<4,8>(kernel_data_V_4_57.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_7_fu_3928_p1() {
    pool_window_8_V_7_fu_3928_p1 = esl_zext<16,12>(pool_window_8_V_6_reg_6161.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_8_fu_2451_p3() {
    pool_window_8_V_8_fu_2451_p3 = esl_concat<4,8>(kernel_data_V_4_58.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_9_fu_4303_p1() {
    pool_window_8_V_9_fu_4303_p1 = esl_zext<16,12>(pool_window_8_V_8_reg_6304.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_8_V_fu_1667_p3() {
    pool_window_8_V_fu_1667_p3 = esl_concat<4,8>(kernel_data_V_4_54.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_10_fu_2655_p3() {
    pool_window_9_V_10_fu_2655_p3 = esl_concat<4,8>(kernel_data_V_4_65.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_11_fu_4681_p1() {
    pool_window_9_V_11_fu_4681_p1 = esl_zext<16,12>(pool_window_9_V_10_reg_6453.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_1_fu_2806_p1() {
    pool_window_9_V_1_fu_2806_p1 = esl_zext<16,12>(pool_window_9_V_reg_5738.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_2_fu_1871_p3() {
    pool_window_9_V_2_fu_1871_p3 = esl_concat<4,8>(kernel_data_V_4_61.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_3_fu_3181_p1() {
    pool_window_9_V_3_fu_3181_p1 = esl_zext<16,12>(pool_window_9_V_2_reg_5881.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_4_fu_2067_p3() {
    pool_window_9_V_4_fu_2067_p3 = esl_concat<4,8>(kernel_data_V_4_62.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_5_fu_3556_p1() {
    pool_window_9_V_5_fu_3556_p1 = esl_zext<16,12>(pool_window_9_V_4_reg_6024.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_6_fu_2263_p3() {
    pool_window_9_V_6_fu_2263_p3 = esl_concat<4,8>(kernel_data_V_4_63.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_7_fu_3931_p1() {
    pool_window_9_V_7_fu_3931_p1 = esl_zext<16,12>(pool_window_9_V_6_reg_6167.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_8_fu_2459_p3() {
    pool_window_9_V_8_fu_2459_p3 = esl_concat<4,8>(kernel_data_V_4_64.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_9_fu_4306_p1() {
    pool_window_9_V_9_fu_4306_p1 = esl_zext<16,12>(pool_window_9_V_8_reg_6310.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_pool_window_9_V_fu_1675_p3() {
    pool_window_9_V_fu_1675_p3 = esl_concat<4,8>(kernel_data_V_4_60.read(), ap_const_lv8_0);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_0_V_blk_n = res_V_data_0_V_full_n.read();
    } else {
        res_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_0_V_din() {
    res_V_data_0_V_din = tmp_data_0_V_reg_7280.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_0_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_0_V_write = ap_const_logic_1;
    } else {
        res_V_data_0_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_1_V_blk_n = res_V_data_1_V_full_n.read();
    } else {
        res_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_1_V_din() {
    res_V_data_1_V_din = tmp_data_1_V_reg_7285.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_1_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_1_V_write = ap_const_logic_1;
    } else {
        res_V_data_1_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_2_V_blk_n = res_V_data_2_V_full_n.read();
    } else {
        res_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_2_V_din() {
    res_V_data_2_V_din = tmp_data_2_V_reg_7290.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_2_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_2_V_write = ap_const_logic_1;
    } else {
        res_V_data_2_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_3_V_blk_n = res_V_data_3_V_full_n.read();
    } else {
        res_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_3_V_din() {
    res_V_data_3_V_din = tmp_data_3_V_reg_7295.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_3_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_3_V_write = ap_const_logic_1;
    } else {
        res_V_data_3_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_4_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_4_V_blk_n = res_V_data_4_V_full_n.read();
    } else {
        res_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_4_V_din() {
    res_V_data_4_V_din = tmp_data_4_V_reg_7300.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_4_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_4_V_write = ap_const_logic_1;
    } else {
        res_V_data_4_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_5_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1))) {
        res_V_data_5_V_blk_n = res_V_data_5_V_full_n.read();
    } else {
        res_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_5_V_din() {
    res_V_data_5_V_din = tmp_data_5_V_reg_7305.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_res_V_data_5_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(and_ln191_4_reg_5680_pp0_iter4_reg.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        res_V_data_5_V_write = ap_const_logic_1;
    } else {
        res_V_data_5_V_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln222_fu_766_p3() {
    select_ln222_fu_766_p3 = (!icmp_ln191_4_fu_712_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln191_4_fu_712_p2.read()[0].to_bool())? ap_const_lv32_0: add_ln222_fu_760_p2.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln227_fu_740_p3() {
    select_ln227_fu_740_p3 = (!icmp_ln191_fu_702_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln191_fu_702_p2.read()[0].to_bool())? ap_const_lv32_0: add_ln227_fu_734_p2.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_100_fu_3978_p3() {
    select_ln66_100_fu_3978_p3 = (!icmp_ln1496_68_fu_3972_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_68_fu_3972_p2.read()[0].to_bool())? select_ln66_98_fu_3960_p3.read(): zext_ln66_16_fu_3952_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_101_fu_4032_p3() {
    select_ln66_101_fu_4032_p3 = (!icmp_ln1496_69_reg_6217.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_69_reg_6217.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_102_fu_4039_p3() {
    select_ln66_102_fu_4039_p3 = (!icmp_ln1496_69_reg_6217.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_69_reg_6217.read()[0].to_bool())? pool_window_5_V_6_reg_6143.read(): pool_window_4_V_6_reg_6137.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_103_fu_4044_p3() {
    select_ln66_103_fu_4044_p3 = (!icmp_ln1496_70_reg_6223.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_70_reg_6223.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_104_fu_4051_p3() {
    select_ln66_104_fu_4051_p3 = (!icmp_ln1496_70_reg_6223.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_70_reg_6223.read()[0].to_bool())? pool_window_7_V_6_reg_6155.read(): pool_window_6_V_6_reg_6149.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_105_fu_4062_p3() {
    select_ln66_105_fu_4062_p3 = (!icmp_ln1496_71_fu_4056_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_71_fu_4056_p2.read()[0].to_bool())? select_ln66_103_fu_4044_p3.read(): select_ln66_101_fu_4032_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_106_fu_4118_p3() {
    select_ln66_106_fu_4118_p3 = (!icmp_ln1496_72_fu_4112_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_72_fu_4112_p2.read()[0].to_bool())? select_ln66_105_fu_4062_p3.read(): zext_ln66_17_fu_3986_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_107_fu_4126_p3() {
    select_ln66_107_fu_4126_p3 = (!icmp_ln1496_73_reg_6229.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_73_reg_6229.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_108_fu_4133_p3() {
    select_ln66_108_fu_4133_p3 = (!icmp_ln1496_73_reg_6229.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_73_reg_6229.read()[0].to_bool())? pool_window_9_V_6_reg_6167.read(): pool_window_8_V_6_reg_6161.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_109_fu_4138_p3() {
    select_ln66_109_fu_4138_p3 = (!icmp_ln1496_74_reg_6235.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_74_reg_6235.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_110_fu_4145_p3() {
    select_ln66_110_fu_4145_p3 = (!icmp_ln1496_74_reg_6235.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_74_reg_6235.read()[0].to_bool())? pool_window_11_V_6_reg_6179.read(): pool_window_10_V_6_reg_6173.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_111_fu_4156_p3() {
    select_ln66_111_fu_4156_p3 = (!icmp_ln1496_75_fu_4150_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_75_fu_4150_p2.read()[0].to_bool())? select_ln66_109_fu_4138_p3.read(): select_ln66_107_fu_4126_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_112_fu_4202_p3() {
    select_ln66_112_fu_4202_p3 = (!icmp_ln1496_76_reg_6241.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_76_reg_6241.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_113_fu_2359_p3() {
    select_ln66_113_fu_2359_p3 = (!icmp_ln1496_76_fu_2353_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_76_fu_2353_p2.read()[0].to_bool())? pool_window_13_V_6_fu_2294_p3.read(): pool_window_12_V_6_fu_2286_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_114_fu_4209_p3() {
    select_ln66_114_fu_4209_p3 = (!icmp_ln1496_77_reg_6246.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_77_reg_6246.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_115_fu_2373_p3() {
    select_ln66_115_fu_2373_p3 = (!icmp_ln1496_77_fu_2367_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_77_fu_2367_p2.read()[0].to_bool())? pool_window_15_V_6_fu_2310_p3.read(): pool_window_14_V_6_fu_2302_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_116_fu_4216_p3() {
    select_ln66_116_fu_4216_p3 = (!icmp_ln1496_78_reg_6251.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_78_reg_6251.read()[0].to_bool())? select_ln66_114_fu_4209_p3.read(): select_ln66_112_fu_4202_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_117_fu_4271_p3() {
    select_ln66_117_fu_4271_p3 = (!icmp_ln1496_79_fu_4265_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_79_fu_4265_p2.read()[0].to_bool())? sext_ln66_3_fu_4223_p1.read(): select_ln66_111_fu_4156_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_119_fu_4330_p3() {
    select_ln66_119_fu_4330_p3 = (!icmp_ln1496_81_reg_6348.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_81_reg_6348.read()[0].to_bool())? pool_window_1_V_23_reg_6262.read(): pool_window_0_V_23_reg_6256.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_120_fu_4335_p3() {
    select_ln66_120_fu_4335_p3 = (!icmp_ln1496_82_reg_6354.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_82_reg_6354.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_121_fu_4342_p3() {
    select_ln66_121_fu_4342_p3 = (!icmp_ln1496_82_reg_6354.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_82_reg_6354.read()[0].to_bool())? pool_window_3_V_23_reg_6274.read(): pool_window_2_V_23_reg_6268.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_122_fu_4353_p3() {
    select_ln66_122_fu_4353_p3 = (!icmp_ln1496_83_fu_4347_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_83_fu_4347_p2.read()[0].to_bool())? select_ln66_120_fu_4335_p3.read(): zext_ln66_19_fu_4327_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_123_fu_4407_p3() {
    select_ln66_123_fu_4407_p3 = (!icmp_ln1496_84_reg_6360.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_84_reg_6360.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_124_fu_4414_p3() {
    select_ln66_124_fu_4414_p3 = (!icmp_ln1496_84_reg_6360.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_84_reg_6360.read()[0].to_bool())? pool_window_5_V_8_reg_6286.read(): pool_window_4_V_8_reg_6280.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_125_fu_4419_p3() {
    select_ln66_125_fu_4419_p3 = (!icmp_ln1496_85_reg_6366.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_85_reg_6366.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_126_fu_4426_p3() {
    select_ln66_126_fu_4426_p3 = (!icmp_ln1496_85_reg_6366.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_85_reg_6366.read()[0].to_bool())? pool_window_7_V_8_reg_6298.read(): pool_window_6_V_8_reg_6292.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_127_fu_4437_p3() {
    select_ln66_127_fu_4437_p3 = (!icmp_ln1496_86_fu_4431_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_86_fu_4431_p2.read()[0].to_bool())? select_ln66_125_fu_4419_p3.read(): select_ln66_123_fu_4407_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_128_fu_4493_p3() {
    select_ln66_128_fu_4493_p3 = (!icmp_ln1496_87_fu_4487_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_87_fu_4487_p2.read()[0].to_bool())? select_ln66_127_fu_4437_p3.read(): zext_ln66_20_fu_4361_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_129_fu_4501_p3() {
    select_ln66_129_fu_4501_p3 = (!icmp_ln1496_88_reg_6372.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_88_reg_6372.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_130_fu_4508_p3() {
    select_ln66_130_fu_4508_p3 = (!icmp_ln1496_88_reg_6372.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_88_reg_6372.read()[0].to_bool())? pool_window_9_V_8_reg_6310.read(): pool_window_8_V_8_reg_6304.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_131_fu_4513_p3() {
    select_ln66_131_fu_4513_p3 = (!icmp_ln1496_89_reg_6378.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_89_reg_6378.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_132_fu_4520_p3() {
    select_ln66_132_fu_4520_p3 = (!icmp_ln1496_89_reg_6378.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_89_reg_6378.read()[0].to_bool())? pool_window_11_V_8_reg_6322.read(): pool_window_10_V_8_reg_6316.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_133_fu_4531_p3() {
    select_ln66_133_fu_4531_p3 = (!icmp_ln1496_90_fu_4525_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_90_fu_4525_p2.read()[0].to_bool())? select_ln66_131_fu_4513_p3.read(): select_ln66_129_fu_4501_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_134_fu_4577_p3() {
    select_ln66_134_fu_4577_p3 = (!icmp_ln1496_91_reg_6384.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_91_reg_6384.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_135_fu_2555_p3() {
    select_ln66_135_fu_2555_p3 = (!icmp_ln1496_91_fu_2549_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_91_fu_2549_p2.read()[0].to_bool())? pool_window_13_V_8_fu_2490_p3.read(): pool_window_12_V_8_fu_2482_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_136_fu_4584_p3() {
    select_ln66_136_fu_4584_p3 = (!icmp_ln1496_92_reg_6389.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_92_reg_6389.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_137_fu_2569_p3() {
    select_ln66_137_fu_2569_p3 = (!icmp_ln1496_92_fu_2563_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_92_fu_2563_p2.read()[0].to_bool())? pool_window_15_V_8_fu_2506_p3.read(): pool_window_14_V_8_fu_2498_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_138_fu_4591_p3() {
    select_ln66_138_fu_4591_p3 = (!icmp_ln1496_93_reg_6394.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_93_reg_6394.read()[0].to_bool())? select_ln66_136_fu_4584_p3.read(): select_ln66_134_fu_4577_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_139_fu_4646_p3() {
    select_ln66_139_fu_4646_p3 = (!icmp_ln1496_94_fu_4640_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_94_fu_4640_p2.read()[0].to_bool())? sext_ln66_4_fu_4598_p1.read(): select_ln66_133_fu_4531_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_141_fu_4705_p3() {
    select_ln66_141_fu_4705_p3 = (!icmp_ln1496_96_reg_6491.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_96_reg_6491.read()[0].to_bool())? pool_window_1_V_25_reg_6405.read(): pool_window_0_V_25_reg_6399.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_142_fu_4710_p3() {
    select_ln66_142_fu_4710_p3 = (!icmp_ln1496_97_reg_6497.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_97_reg_6497.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_143_fu_4717_p3() {
    select_ln66_143_fu_4717_p3 = (!icmp_ln1496_97_reg_6497.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_97_reg_6497.read()[0].to_bool())? pool_window_3_V_25_reg_6417.read(): pool_window_2_V_25_reg_6411.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_144_fu_4728_p3() {
    select_ln66_144_fu_4728_p3 = (!icmp_ln1496_98_fu_4722_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_98_fu_4722_p2.read()[0].to_bool())? select_ln66_142_fu_4710_p3.read(): zext_ln66_22_fu_4702_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_145_fu_4782_p3() {
    select_ln66_145_fu_4782_p3 = (!icmp_ln1496_99_reg_6503.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_99_reg_6503.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_146_fu_4789_p3() {
    select_ln66_146_fu_4789_p3 = (!icmp_ln1496_99_reg_6503.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_99_reg_6503.read()[0].to_bool())? pool_window_5_V_10_reg_6429.read(): pool_window_4_V_10_reg_6423.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_147_fu_4794_p3() {
    select_ln66_147_fu_4794_p3 = (!icmp_ln1496_100_reg_6509.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_100_reg_6509.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_148_fu_4801_p3() {
    select_ln66_148_fu_4801_p3 = (!icmp_ln1496_100_reg_6509.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_100_reg_6509.read()[0].to_bool())? pool_window_7_V_10_reg_6441.read(): pool_window_6_V_10_reg_6435.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_149_fu_4812_p3() {
    select_ln66_149_fu_4812_p3 = (!icmp_ln1496_101_fu_4806_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_101_fu_4806_p2.read()[0].to_bool())? select_ln66_147_fu_4794_p3.read(): select_ln66_145_fu_4782_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_150_fu_4868_p3() {
    select_ln66_150_fu_4868_p3 = (!icmp_ln1496_102_fu_4862_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_102_fu_4862_p2.read()[0].to_bool())? select_ln66_149_fu_4812_p3.read(): zext_ln66_23_fu_4736_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_151_fu_4876_p3() {
    select_ln66_151_fu_4876_p3 = (!icmp_ln1496_103_reg_6515.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_103_reg_6515.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_152_fu_4883_p3() {
    select_ln66_152_fu_4883_p3 = (!icmp_ln1496_103_reg_6515.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_103_reg_6515.read()[0].to_bool())? pool_window_9_V_10_reg_6453.read(): pool_window_8_V_10_reg_6447.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_153_fu_4888_p3() {
    select_ln66_153_fu_4888_p3 = (!icmp_ln1496_104_reg_6521.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_104_reg_6521.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_154_fu_4895_p3() {
    select_ln66_154_fu_4895_p3 = (!icmp_ln1496_104_reg_6521.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_104_reg_6521.read()[0].to_bool())? pool_window_11_V_10_reg_6465.read(): pool_window_10_V_10_reg_6459.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_155_fu_4906_p3() {
    select_ln66_155_fu_4906_p3 = (!icmp_ln1496_105_fu_4900_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_105_fu_4900_p2.read()[0].to_bool())? select_ln66_153_fu_4888_p3.read(): select_ln66_151_fu_4876_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_156_fu_4952_p3() {
    select_ln66_156_fu_4952_p3 = (!icmp_ln1496_106_reg_6527.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_106_reg_6527.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_157_fu_2751_p3() {
    select_ln66_157_fu_2751_p3 = (!icmp_ln1496_106_fu_2745_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_106_fu_2745_p2.read()[0].to_bool())? pool_window_13_V_10_fu_2686_p3.read(): pool_window_12_V_10_fu_2678_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_158_fu_4959_p3() {
    select_ln66_158_fu_4959_p3 = (!icmp_ln1496_107_reg_6532.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_107_reg_6532.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_159_fu_2765_p3() {
    select_ln66_159_fu_2765_p3 = (!icmp_ln1496_107_fu_2759_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_107_fu_2759_p2.read()[0].to_bool())? pool_window_15_V_10_fu_2702_p3.read(): pool_window_14_V_10_fu_2694_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_160_fu_4966_p3() {
    select_ln66_160_fu_4966_p3 = (!icmp_ln1496_108_reg_6537.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_108_reg_6537.read()[0].to_bool())? select_ln66_158_fu_4959_p3.read(): select_ln66_156_fu_4952_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_161_fu_5021_p3() {
    select_ln66_161_fu_5021_p3 = (!icmp_ln1496_109_fu_5015_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_109_fu_5015_p2.read()[0].to_bool())? sext_ln66_5_fu_4973_p1.read(): select_ln66_155_fu_4906_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_32_fu_2835_p3() {
    select_ln66_32_fu_2835_p3 = (!icmp_ln1496_24_reg_5782.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_24_reg_5782.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_33_fu_2842_p3() {
    select_ln66_33_fu_2842_p3 = (!icmp_ln1496_24_reg_5782.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_24_reg_5782.read()[0].to_bool())? pool_window_3_V_reg_5702.read(): pool_window_2_V_reg_5696.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_34_fu_2853_p3() {
    select_ln66_34_fu_2853_p3 = (!icmp_ln1496_25_fu_2847_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_25_fu_2847_p2.read()[0].to_bool())? select_ln66_32_fu_2835_p3.read(): zext_ln66_fu_2827_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_35_fu_2907_p3() {
    select_ln66_35_fu_2907_p3 = (!icmp_ln1496_26_reg_5788.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_26_reg_5788.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_36_fu_2914_p3() {
    select_ln66_36_fu_2914_p3 = (!icmp_ln1496_26_reg_5788.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_26_reg_5788.read()[0].to_bool())? pool_window_5_V_reg_5714.read(): pool_window_4_V_reg_5708.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_37_fu_2919_p3() {
    select_ln66_37_fu_2919_p3 = (!icmp_ln1496_27_reg_5794.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_27_reg_5794.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_38_fu_2926_p3() {
    select_ln66_38_fu_2926_p3 = (!icmp_ln1496_27_reg_5794.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_27_reg_5794.read()[0].to_bool())? pool_window_7_V_reg_5726.read(): pool_window_6_V_reg_5720.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_39_fu_2937_p3() {
    select_ln66_39_fu_2937_p3 = (!icmp_ln1496_28_fu_2931_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_28_fu_2931_p2.read()[0].to_bool())? select_ln66_37_fu_2919_p3.read(): select_ln66_35_fu_2907_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_40_fu_2993_p3() {
    select_ln66_40_fu_2993_p3 = (!icmp_ln1496_29_fu_2987_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_29_fu_2987_p2.read()[0].to_bool())? select_ln66_39_fu_2937_p3.read(): zext_ln66_8_fu_2861_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_41_fu_3001_p3() {
    select_ln66_41_fu_3001_p3 = (!icmp_ln1496_30_reg_5800.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_30_reg_5800.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_42_fu_3008_p3() {
    select_ln66_42_fu_3008_p3 = (!icmp_ln1496_30_reg_5800.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_30_reg_5800.read()[0].to_bool())? pool_window_9_V_reg_5738.read(): pool_window_8_V_reg_5732.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_43_fu_3013_p3() {
    select_ln66_43_fu_3013_p3 = (!icmp_ln1496_31_reg_5806.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_31_reg_5806.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_44_fu_3020_p3() {
    select_ln66_44_fu_3020_p3 = (!icmp_ln1496_31_reg_5806.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_31_reg_5806.read()[0].to_bool())? pool_window_11_V_reg_5750.read(): pool_window_10_V_reg_5744.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_45_fu_3031_p3() {
    select_ln66_45_fu_3031_p3 = (!icmp_ln1496_32_fu_3025_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_32_fu_3025_p2.read()[0].to_bool())? select_ln66_43_fu_3013_p3.read(): select_ln66_41_fu_3001_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_46_fu_3077_p3() {
    select_ln66_46_fu_3077_p3 = (!icmp_ln1496_33_reg_5812.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_33_reg_5812.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_47_fu_1771_p3() {
    select_ln66_47_fu_1771_p3 = (!icmp_ln1496_33_fu_1765_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_33_fu_1765_p2.read()[0].to_bool())? pool_window_13_V_fu_1706_p3.read(): pool_window_12_V_fu_1698_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_48_fu_3084_p3() {
    select_ln66_48_fu_3084_p3 = (!icmp_ln1496_34_reg_5817.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_34_reg_5817.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_49_fu_1785_p3() {
    select_ln66_49_fu_1785_p3 = (!icmp_ln1496_34_fu_1779_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_34_fu_1779_p2.read()[0].to_bool())? pool_window_15_V_fu_1722_p3.read(): pool_window_14_V_fu_1714_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_50_fu_3091_p3() {
    select_ln66_50_fu_3091_p3 = (!icmp_ln1496_35_reg_5822.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_35_reg_5822.read()[0].to_bool())? select_ln66_48_fu_3084_p3.read(): select_ln66_46_fu_3077_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_51_fu_3146_p3() {
    select_ln66_51_fu_3146_p3 = (!icmp_ln1496_36_fu_3140_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_36_fu_3140_p2.read()[0].to_bool())? sext_ln66_fu_3098_p1.read(): select_ln66_45_fu_3031_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_53_fu_3205_p3() {
    select_ln66_53_fu_3205_p3 = (!icmp_ln1496_1_reg_5919.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_1_reg_5919.read()[0].to_bool())? pool_window_1_V_17_reg_5833.read(): pool_window_0_V_17_reg_5827.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_54_fu_3210_p3() {
    select_ln66_54_fu_3210_p3 = (!icmp_ln1496_38_reg_5925.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_38_reg_5925.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_55_fu_3217_p3() {
    select_ln66_55_fu_3217_p3 = (!icmp_ln1496_38_reg_5925.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_38_reg_5925.read()[0].to_bool())? pool_window_3_V_17_reg_5845.read(): pool_window_2_V_17_reg_5839.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_56_fu_3228_p3() {
    select_ln66_56_fu_3228_p3 = (!icmp_ln1496_39_fu_3222_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_39_fu_3222_p2.read()[0].to_bool())? select_ln66_54_fu_3210_p3.read(): zext_ln66_10_fu_3202_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_57_fu_3282_p3() {
    select_ln66_57_fu_3282_p3 = (!icmp_ln1496_40_reg_5931.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_40_reg_5931.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_58_fu_3289_p3() {
    select_ln66_58_fu_3289_p3 = (!icmp_ln1496_40_reg_5931.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_40_reg_5931.read()[0].to_bool())? pool_window_5_V_2_reg_5857.read(): pool_window_4_V_2_reg_5851.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_59_fu_3294_p3() {
    select_ln66_59_fu_3294_p3 = (!icmp_ln1496_41_reg_5937.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_41_reg_5937.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_60_fu_3301_p3() {
    select_ln66_60_fu_3301_p3 = (!icmp_ln1496_41_reg_5937.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_41_reg_5937.read()[0].to_bool())? pool_window_7_V_2_reg_5869.read(): pool_window_6_V_2_reg_5863.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_61_fu_3312_p3() {
    select_ln66_61_fu_3312_p3 = (!icmp_ln1496_42_fu_3306_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_42_fu_3306_p2.read()[0].to_bool())? select_ln66_59_fu_3294_p3.read(): select_ln66_57_fu_3282_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_62_fu_3368_p3() {
    select_ln66_62_fu_3368_p3 = (!icmp_ln1496_43_fu_3362_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_43_fu_3362_p2.read()[0].to_bool())? select_ln66_61_fu_3312_p3.read(): zext_ln66_11_fu_3236_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_63_fu_3376_p3() {
    select_ln66_63_fu_3376_p3 = (!icmp_ln1496_44_reg_5943.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_44_reg_5943.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_64_fu_3383_p3() {
    select_ln66_64_fu_3383_p3 = (!icmp_ln1496_44_reg_5943.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_44_reg_5943.read()[0].to_bool())? pool_window_9_V_2_reg_5881.read(): pool_window_8_V_2_reg_5875.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_65_fu_3388_p3() {
    select_ln66_65_fu_3388_p3 = (!icmp_ln1496_45_reg_5949.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_45_reg_5949.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_66_fu_3395_p3() {
    select_ln66_66_fu_3395_p3 = (!icmp_ln1496_45_reg_5949.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_45_reg_5949.read()[0].to_bool())? pool_window_11_V_2_reg_5893.read(): pool_window_10_V_2_reg_5887.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_67_fu_3406_p3() {
    select_ln66_67_fu_3406_p3 = (!icmp_ln1496_46_fu_3400_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_46_fu_3400_p2.read()[0].to_bool())? select_ln66_65_fu_3388_p3.read(): select_ln66_63_fu_3376_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_68_fu_3452_p3() {
    select_ln66_68_fu_3452_p3 = (!icmp_ln1496_47_reg_5955.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_47_reg_5955.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_69_fu_1967_p3() {
    select_ln66_69_fu_1967_p3 = (!icmp_ln1496_47_fu_1961_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_47_fu_1961_p2.read()[0].to_bool())? pool_window_13_V_2_fu_1902_p3.read(): pool_window_12_V_2_fu_1894_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_70_fu_3459_p3() {
    select_ln66_70_fu_3459_p3 = (!icmp_ln1496_48_reg_5960.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_48_reg_5960.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_71_fu_1981_p3() {
    select_ln66_71_fu_1981_p3 = (!icmp_ln1496_48_fu_1975_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_48_fu_1975_p2.read()[0].to_bool())? pool_window_15_V_2_fu_1918_p3.read(): pool_window_14_V_2_fu_1910_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_72_fu_3466_p3() {
    select_ln66_72_fu_3466_p3 = (!icmp_ln1496_49_reg_5965.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_49_reg_5965.read()[0].to_bool())? select_ln66_70_fu_3459_p3.read(): select_ln66_68_fu_3452_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_73_fu_3521_p3() {
    select_ln66_73_fu_3521_p3 = (!icmp_ln1496_50_fu_3515_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_50_fu_3515_p2.read()[0].to_bool())? sext_ln66_1_fu_3473_p1.read(): select_ln66_67_fu_3406_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_75_fu_3580_p3() {
    select_ln66_75_fu_3580_p3 = (!icmp_ln1496_2_reg_6062.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_2_reg_6062.read()[0].to_bool())? pool_window_1_V_19_reg_5976.read(): pool_window_0_V_19_reg_5970.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_76_fu_3585_p3() {
    select_ln66_76_fu_3585_p3 = (!icmp_ln1496_52_reg_6068.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_52_reg_6068.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_77_fu_3592_p3() {
    select_ln66_77_fu_3592_p3 = (!icmp_ln1496_52_reg_6068.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_52_reg_6068.read()[0].to_bool())? pool_window_3_V_19_reg_5988.read(): pool_window_2_V_19_reg_5982.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_78_fu_3603_p3() {
    select_ln66_78_fu_3603_p3 = (!icmp_ln1496_53_fu_3597_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_53_fu_3597_p2.read()[0].to_bool())? select_ln66_76_fu_3585_p3.read(): zext_ln66_13_fu_3577_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_79_fu_3657_p3() {
    select_ln66_79_fu_3657_p3 = (!icmp_ln1496_54_reg_6074.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_54_reg_6074.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_80_fu_3664_p3() {
    select_ln66_80_fu_3664_p3 = (!icmp_ln1496_54_reg_6074.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_54_reg_6074.read()[0].to_bool())? pool_window_5_V_4_reg_6000.read(): pool_window_4_V_4_reg_5994.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_81_fu_3669_p3() {
    select_ln66_81_fu_3669_p3 = (!icmp_ln1496_55_reg_6080.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_55_reg_6080.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_82_fu_3676_p3() {
    select_ln66_82_fu_3676_p3 = (!icmp_ln1496_55_reg_6080.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_55_reg_6080.read()[0].to_bool())? pool_window_7_V_4_reg_6012.read(): pool_window_6_V_4_reg_6006.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_83_fu_3687_p3() {
    select_ln66_83_fu_3687_p3 = (!icmp_ln1496_56_fu_3681_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_56_fu_3681_p2.read()[0].to_bool())? select_ln66_81_fu_3669_p3.read(): select_ln66_79_fu_3657_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_84_fu_3743_p3() {
    select_ln66_84_fu_3743_p3 = (!icmp_ln1496_57_fu_3737_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_57_fu_3737_p2.read()[0].to_bool())? select_ln66_83_fu_3687_p3.read(): zext_ln66_14_fu_3611_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_85_fu_3751_p3() {
    select_ln66_85_fu_3751_p3 = (!icmp_ln1496_58_reg_6086.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_58_reg_6086.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_86_fu_3758_p3() {
    select_ln66_86_fu_3758_p3 = (!icmp_ln1496_58_reg_6086.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_58_reg_6086.read()[0].to_bool())? pool_window_9_V_4_reg_6024.read(): pool_window_8_V_4_reg_6018.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_87_fu_3763_p3() {
    select_ln66_87_fu_3763_p3 = (!icmp_ln1496_59_reg_6092.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_59_reg_6092.read()[0].to_bool())? ap_const_lv4_B: ap_const_lv4_A);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_88_fu_3770_p3() {
    select_ln66_88_fu_3770_p3 = (!icmp_ln1496_59_reg_6092.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_59_reg_6092.read()[0].to_bool())? pool_window_11_V_4_reg_6036.read(): pool_window_10_V_4_reg_6030.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_89_fu_3781_p3() {
    select_ln66_89_fu_3781_p3 = (!icmp_ln1496_60_fu_3775_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_60_fu_3775_p2.read()[0].to_bool())? select_ln66_87_fu_3763_p3.read(): select_ln66_85_fu_3751_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_90_fu_3827_p3() {
    select_ln66_90_fu_3827_p3 = (!icmp_ln1496_61_reg_6098.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_61_reg_6098.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_91_fu_2163_p3() {
    select_ln66_91_fu_2163_p3 = (!icmp_ln1496_61_fu_2157_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_61_fu_2157_p2.read()[0].to_bool())? pool_window_13_V_4_fu_2098_p3.read(): pool_window_12_V_4_fu_2090_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_92_fu_3834_p3() {
    select_ln66_92_fu_3834_p3 = (!icmp_ln1496_62_reg_6103.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_62_reg_6103.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_93_fu_2177_p3() {
    select_ln66_93_fu_2177_p3 = (!icmp_ln1496_62_fu_2171_p2.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_62_fu_2171_p2.read()[0].to_bool())? pool_window_15_V_4_fu_2114_p3.read(): pool_window_14_V_4_fu_2106_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_94_fu_3841_p3() {
    select_ln66_94_fu_3841_p3 = (!icmp_ln1496_63_reg_6108.read()[0].is_01())? sc_lv<3>(): ((icmp_ln1496_63_reg_6108.read()[0].to_bool())? select_ln66_92_fu_3834_p3.read(): select_ln66_90_fu_3827_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_95_fu_3896_p3() {
    select_ln66_95_fu_3896_p3 = (!icmp_ln1496_64_fu_3890_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_64_fu_3890_p2.read()[0].to_bool())? sext_ln66_2_fu_3848_p1.read(): select_ln66_89_fu_3781_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_97_fu_3955_p3() {
    select_ln66_97_fu_3955_p3 = (!icmp_ln1496_66_reg_6205.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_66_reg_6205.read()[0].to_bool())? pool_window_1_V_21_reg_6119.read(): pool_window_0_V_21_reg_6113.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_98_fu_3960_p3() {
    select_ln66_98_fu_3960_p3 = (!icmp_ln1496_67_reg_6211.read()[0].is_01())? sc_lv<2>(): ((icmp_ln1496_67_reg_6211.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_99_fu_3967_p3() {
    select_ln66_99_fu_3967_p3 = (!icmp_ln1496_67_reg_6211.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_67_reg_6211.read()[0].to_bool())? pool_window_3_V_21_reg_6131.read(): pool_window_2_V_21_reg_6125.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_select_ln66_fu_2830_p3() {
    select_ln66_fu_2830_p3 = (!icmp_ln1496_reg_5776.read()[0].is_01())? sc_lv<12>(): ((icmp_ln1496_reg_5776.read()[0].to_bool())? pool_window_1_V_reg_5690.read(): pool_window_0_V_reg_5684.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_sext_ln66_1_fu_3473_p1() {
    sext_ln66_1_fu_3473_p1 = esl_sext<4,3>(select_ln66_72_fu_3466_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_sext_ln66_2_fu_3848_p1() {
    sext_ln66_2_fu_3848_p1 = esl_sext<4,3>(select_ln66_94_fu_3841_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_sext_ln66_3_fu_4223_p1() {
    sext_ln66_3_fu_4223_p1 = esl_sext<4,3>(select_ln66_116_fu_4216_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_sext_ln66_4_fu_4598_p1() {
    sext_ln66_4_fu_4598_p1 = esl_sext<4,3>(select_ln66_138_fu_4591_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_sext_ln66_5_fu_4973_p1() {
    sext_ln66_5_fu_4973_p1 = esl_sext<4,3>(select_ln66_160_fu_4966_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_sext_ln66_fu_3098_p1() {
    sext_ln66_fu_3098_p1 = esl_sext<4,3>(select_ln66_50_fu_3091_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_start_out() {
    start_out = real_start.read();
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_tmp_1_fu_5179_p17() {
    tmp_1_fu_5179_p17 = (!icmp_ln1496_51_fu_5166_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_51_fu_5166_p2.read()[0].to_bool())? select_ln66_73_reg_6782.read(): zext_ln66_12_fu_5120_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_tmp_2_fu_5270_p17() {
    tmp_2_fu_5270_p17 = (!icmp_ln1496_65_fu_5257_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_65_fu_5257_p2.read()[0].to_bool())? select_ln66_95_reg_6905.read(): zext_ln66_15_fu_5211_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_tmp_3_fu_5361_p17() {
    tmp_3_fu_5361_p17 = (!icmp_ln1496_80_fu_5348_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_80_fu_5348_p2.read()[0].to_bool())? select_ln66_117_reg_7028.read(): zext_ln66_18_fu_5302_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_tmp_4_fu_5452_p17() {
    tmp_4_fu_5452_p17 = (!icmp_ln1496_95_fu_5439_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_95_fu_5439_p2.read()[0].to_bool())? select_ln66_139_reg_7151.read(): zext_ln66_21_fu_5393_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_tmp_5_fu_5543_p17() {
    tmp_5_fu_5543_p17 = (!icmp_ln1496_110_fu_5530_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_110_fu_5530_p2.read()[0].to_bool())? select_ln66_161_reg_7274.read(): zext_ln66_24_fu_5484_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_tmp_9_fu_5088_p17() {
    tmp_9_fu_5088_p17 = (!icmp_ln1496_37_fu_5075_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln1496_37_fu_5075_p2.read()[0].to_bool())? select_ln66_51_reg_6659.read(): zext_ln66_9_fu_5029_p1.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_10_fu_3202_p1() {
    zext_ln66_10_fu_3202_p1 = esl_zext<2,1>(icmp_ln1496_1_reg_5919.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_11_fu_3236_p1() {
    zext_ln66_11_fu_3236_p1 = esl_zext<3,2>(select_ln66_56_fu_3228_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_12_fu_5120_p1() {
    zext_ln66_12_fu_5120_p1 = esl_zext<4,3>(select_ln66_62_reg_6777.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_13_fu_3577_p1() {
    zext_ln66_13_fu_3577_p1 = esl_zext<2,1>(icmp_ln1496_2_reg_6062.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_14_fu_3611_p1() {
    zext_ln66_14_fu_3611_p1 = esl_zext<3,2>(select_ln66_78_fu_3603_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_15_fu_5211_p1() {
    zext_ln66_15_fu_5211_p1 = esl_zext<4,3>(select_ln66_84_reg_6900.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_16_fu_3952_p1() {
    zext_ln66_16_fu_3952_p1 = esl_zext<2,1>(icmp_ln1496_66_reg_6205.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_17_fu_3986_p1() {
    zext_ln66_17_fu_3986_p1 = esl_zext<3,2>(select_ln66_100_fu_3978_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_18_fu_5302_p1() {
    zext_ln66_18_fu_5302_p1 = esl_zext<4,3>(select_ln66_106_reg_7023.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_19_fu_4327_p1() {
    zext_ln66_19_fu_4327_p1 = esl_zext<2,1>(icmp_ln1496_81_reg_6348.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_20_fu_4361_p1() {
    zext_ln66_20_fu_4361_p1 = esl_zext<3,2>(select_ln66_122_fu_4353_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_21_fu_5393_p1() {
    zext_ln66_21_fu_5393_p1 = esl_zext<4,3>(select_ln66_128_reg_7146.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_22_fu_4702_p1() {
    zext_ln66_22_fu_4702_p1 = esl_zext<2,1>(icmp_ln1496_96_reg_6491.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_23_fu_4736_p1() {
    zext_ln66_23_fu_4736_p1 = esl_zext<3,2>(select_ln66_144_fu_4728_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_24_fu_5484_p1() {
    zext_ln66_24_fu_5484_p1 = esl_zext<4,3>(select_ln66_150_reg_7269.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_8_fu_2861_p1() {
    zext_ln66_8_fu_2861_p1 = esl_zext<3,2>(select_ln66_34_fu_2853_p3.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_9_fu_5029_p1() {
    zext_ln66_9_fu_5029_p1 = esl_zext<4,3>(select_ln66_40_reg_6654.read());
}

void pooling2d_cl_array_ap_ufixed_6u_array_ap_ufixed_4_2_5_3_0_6u_config5_s::thread_zext_ln66_fu_2827_p1() {
    zext_ln66_fu_2827_p1 = esl_zext<2,1>(icmp_ln1496_reg_5776.read());
}

}

