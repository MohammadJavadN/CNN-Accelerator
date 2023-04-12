#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_add_ln122_1_fu_11605_p2() {
    add_ln122_1_fu_11605_p2 = (!select_ln91_reg_13052.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln91_reg_13052.read()) + sc_biguint<4>(ap_const_lv4_C));
}

void cnn::thread_add_ln122_2_fu_10914_p2() {
    add_ln122_2_fu_10914_p2 = (!ap_const_lv4_C.is_01() || !ap_phi_mux_row_0_i49_phi_fu_5204_p4.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_C) + sc_biguint<4>(ap_phi_mux_row_0_i49_phi_fu_5204_p4.read()));
}

void cnn::thread_add_ln122_3_fu_11614_p2() {
    add_ln122_3_fu_11614_p2 = (!sext_ln87_fu_11247_p1.read().is_01() || !zext_ln122_fu_11610_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln87_fu_11247_p1.read()) + sc_biguint<8>(zext_ln122_fu_11610_p1.read()));
}

void cnn::thread_add_ln122_fu_10908_p2() {
    add_ln122_fu_10908_p2 = (!ap_const_lv4_D.is_01() || !select_ln23_fu_10811_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_D) + sc_biguint<4>(select_ln23_fu_10811_p3.read()));
}

void cnn::thread_add_ln20_1_fu_10579_p2() {
    add_ln20_1_fu_10579_p2 = (!phi_ln20_1_reg_5144.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(phi_ln20_1_reg_5144.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_add_ln20_2_fu_10585_p2() {
    add_ln20_2_fu_10585_p2 = (!phi_ln20_2_reg_5156.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(phi_ln20_2_reg_5156.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_add_ln20_fu_10573_p2() {
    add_ln20_fu_10573_p2 = (!phi_ln20_reg_5132.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln20_reg_5132.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_add_ln22_fu_10637_p2() {
    add_ln22_fu_10637_p2 = (!indvar_flatten281_reg_5167.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten281_reg_5167.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void cnn::thread_add_ln24_1_fu_8563_p2() {
    add_ln24_1_fu_8563_p2 = (!indvar_flatten_reg_5087.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten_reg_5087.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void cnn::thread_add_ln24_fu_9214_p2() {
    add_ln24_fu_9214_p2 = (!zext_ln24_fu_9211_p1.read().is_01() || !ap_const_lv6_3C.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln24_fu_9211_p1.read()) + sc_bigint<6>(ap_const_lv6_3C));
}

void cnn::thread_add_ln59_1_fu_10239_p2() {
    add_ln59_1_fu_10239_p2 = (!sub_ln59_fu_9240_p2.read().is_01() || !zext_ln59_fu_10235_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln59_fu_9240_p2.read()) + sc_biguint<11>(zext_ln59_fu_10235_p1.read()));
}

void cnn::thread_add_ln59_fu_10230_p2() {
    add_ln59_fu_10230_p2 = (!ap_const_lv5_1C.is_01() || !select_ln24_reg_11904.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1C) + sc_biguint<5>(select_ln24_reg_11904.read()));
}

void cnn::thread_add_ln87_fu_10797_p2() {
    add_ln87_fu_10797_p2 = (!indvar_flatten11_reg_5189.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten11_reg_5189.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void cnn::thread_add_ln91_1_fu_11254_p2() {
    add_ln91_1_fu_11254_p2 = (!zext_ln91_3_fu_11251_p1.read().is_01() || !sub_ln91_1_fu_11234_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln91_3_fu_11251_p1.read()) + sc_biguint<11>(sub_ln91_1_fu_11234_p2.read()));
}

void cnn::thread_add_ln91_fu_11204_p2() {
    add_ln91_fu_11204_p2 = (!zext_ln91_2_fu_11201_p1.read().is_01() || !sub_ln91_fu_11195_p2.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln91_2_fu_11201_p1.read()) + sc_biguint<64>(sub_ln91_fu_11195_p2.read()));
}

void cnn::thread_and_ln115_fu_11161_p2() {
    and_ln115_fu_11161_p2 = (select_ln91_2_fu_10900_p3.read() & icmp_ln115_2_fu_11155_p2.read());
}

void cnn::thread_and_ln23_1_fu_10851_p2() {
    and_ln23_1_fu_10851_p2 = (icmp_ln88_fu_10845_p2.read() & xor_ln23_fu_10818_p2.read());
}

void cnn::thread_and_ln23_fu_10839_p2() {
    and_ln23_fu_10839_p2 = (icmp_ln115_fu_10833_p2.read() & xor_ln23_fu_10818_p2.read());
}

void cnn::thread_and_ln52_fu_9199_p2() {
    and_ln52_fu_9199_p2 = (select_ln24_1_fu_8621_p3.read() & icmp_ln52_2_fu_9193_p2.read());
}

void cnn::thread_and_ln5_1_fu_10342_p2() {
    and_ln5_1_fu_10342_p2 = (or_ln5_1_fu_10336_p2.read() & tmp_9_fu_8503_p2.read());
}

void cnn::thread_and_ln5_2_fu_10393_p2() {
    and_ln5_2_fu_10393_p2 = (or_ln5_2_fu_10387_p2.read() & tmp_11_fu_8509_p2.read());
}

void cnn::thread_and_ln5_3_fu_10444_p2() {
    and_ln5_3_fu_10444_p2 = (or_ln5_3_fu_10438_p2.read() & tmp_13_fu_8515_p2.read());
}

void cnn::thread_and_ln5_4_fu_10495_p2() {
    and_ln5_4_fu_10495_p2 = (or_ln5_4_fu_10489_p2.read() & tmp_15_fu_8521_p2.read());
}

void cnn::thread_and_ln5_5_fu_10546_p2() {
    and_ln5_5_fu_10546_p2 = (or_ln5_5_fu_10540_p2.read() & tmp_17_fu_8527_p2.read());
}

void cnn::thread_and_ln5_fu_10291_p2() {
    and_ln5_fu_10291_p2 = (or_ln5_fu_10285_p2.read() & tmp_6_fu_8497_p2.read());
}

void cnn::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[4];
}

void cnn::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[11];
}

void cnn::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void cnn::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[8];
}

void cnn::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[9];
}

void cnn::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[10];
}

void cnn::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[12];
}

void cnn::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[13];
}

void cnn::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[14];
}

void cnn::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void cnn::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[15];
}

void cnn::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[16];
}

void cnn::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[17];
}

void cnn::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[18];
}

void cnn::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void cnn::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void cnn::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[5];
}

void cnn::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[6];
}

void cnn::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[7];
}

void cnn::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp0_stage0_00001() {
    ap_block_pp0_stage0_00001 = (esl_seteq<1,1,1>(ap_const_logic_0, norm_img_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11895.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1));
}

void cnn::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, norm_img_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11895.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1));
}

void cnn::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_0, norm_img_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11895.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1));
}

void cnn::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state13_pp1_stage0_iter0() {
    ap_block_state13_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state14_pp1_stage0_iter1() {
    ap_block_state14_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state15_pp1_stage0_iter2() {
    ap_block_state15_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state16_pp1_stage0_iter3() {
    ap_block_state16_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state3() {
    ap_block_state3 = (esl_seteq<1,1,1>(icmp_ln11_fu_8545_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read()));
}

void cnn::thread_ap_block_state5_pp0_stage0_iter0() {
    ap_block_state5_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state6_pp0_stage0_iter1() {
    ap_block_state6_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_logic_0, norm_img_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11895.read()));
}

void cnn::thread_ap_condition_pp0_exit_iter0_state5() {
    if (esl_seteq<1,1,1>(icmp_ln24_fu_8557_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state5 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state5 = ap_const_logic_0;
    }
}

void cnn::thread_ap_condition_pp1_exit_iter0_state13() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_10631_p2.read())) {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_0;
    }
}

void cnn::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
         esl_seteq<1,1,1>(grp_dense_layer_fu_5236_ap_done.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void cnn::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void cnn::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void cnn::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void cnn::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void cnn::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void cnn::thread_ap_phi_mux_col_0_i51_phi_fu_5216_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11989_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        ap_phi_mux_col_0_i51_phi_fu_5216_p4 = col_1_reg_13123.read();
    } else {
        ap_phi_mux_col_0_i51_phi_fu_5216_p4 = col_0_i51_reg_5212.read();
    }
}

void cnn::thread_ap_phi_mux_f_0_phi_fu_5182_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11989.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_0_phi_fu_5182_p4 = select_ln23_2_reg_12006.read();
    } else {
        ap_phi_mux_f_0_phi_fu_5182_p4 = f_0_reg_5178.read();
    }
}

void cnn::thread_ap_phi_mux_row_0_i49_phi_fu_5204_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11989_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        ap_phi_mux_row_0_i49_phi_fu_5204_p4 = select_ln91_1_reg_13058.read();
    } else {
        ap_phi_mux_row_0_i49_phi_fu_5204_p4 = row_0_i49_reg_5200.read();
    }
}

void cnn::thread_ap_phi_mux_row_0_i_phi_fu_5102_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11895.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        ap_phi_mux_row_0_i_phi_fu_5102_p4 = select_ln24_2_reg_11909.read();
    } else {
        ap_phi_mux_row_0_i_phi_fu_5102_p4 = row_0_i_reg_5098.read();
    }
}

void cnn::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
         esl_seteq<1,1,1>(grp_dense_layer_fu_5236_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_1_51_load() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11895.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        ap_sig_allocacmp_linebuf_1_51_load = linebuf_1_52.read();
    } else {
        ap_sig_allocacmp_linebuf_1_51_load = linebuf_1_51.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_20_load() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11989_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        ap_sig_allocacmp_linebuf_20_load = linebuf_21.read();
    } else {
        ap_sig_allocacmp_linebuf_20_load = linebuf_20.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_44_load() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11989_pp1_iter2_reg.read()))) {
        ap_sig_allocacmp_linebuf_44_load = linebuf_45.read();
    } else {
        ap_sig_allocacmp_linebuf_44_load = linebuf_44.read();
    }
}

void cnn::thread_bitcast_ln5_1_fu_10306_p1() {
    bitcast_ln5_1_fu_10306_p1 = grp_fu_6010_p2.read();
}

void cnn::thread_bitcast_ln5_2_fu_10357_p1() {
    bitcast_ln5_2_fu_10357_p1 = grp_fu_6016_p2.read();
}

void cnn::thread_bitcast_ln5_3_fu_10408_p1() {
    bitcast_ln5_3_fu_10408_p1 = grp_fu_6022_p2.read();
}

void cnn::thread_bitcast_ln5_4_fu_10459_p1() {
    bitcast_ln5_4_fu_10459_p1 = grp_fu_6028_p2.read();
}

void cnn::thread_bitcast_ln5_5_fu_10510_p1() {
    bitcast_ln5_5_fu_10510_p1 = grp_fu_6034_p2.read();
}

void cnn::thread_bitcast_ln5_fu_10255_p1() {
    bitcast_ln5_fu_10255_p1 = grp_fu_6004_p2.read();
}

void cnn::thread_c_fu_8551_p2() {
    c_fu_8551_p2 = (!c_0_i_reg_5076.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(c_0_i_reg_5076.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_col_1_fu_11167_p2() {
    col_1_fu_11167_p2 = (!select_ln91_fu_10868_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln91_fu_10868_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_col_fu_9205_p2() {
    col_fu_9205_p2 = (!select_ln24_fu_8581_p3.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(select_ln24_fu_8581_p3.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_conv2_biases_address0() {
    conv2_biases_address0 =  (sc_lv<4>) (zext_ln83_fu_11862_p1.read());
}

void cnn::thread_conv2_biases_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv2_biases_ce0 = ap_const_logic_1;
    } else {
        conv2_biases_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_0_0_address0() {
    conv2_weights_0_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_0_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_0_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_0_1_address0() {
    conv2_weights_0_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_0_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_0_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_0_2_address0() {
    conv2_weights_0_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_0_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_0_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_0_3_address0() {
    conv2_weights_0_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_0_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_0_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_0_4_address0() {
    conv2_weights_0_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_0_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_0_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_1_0_address0() {
    conv2_weights_0_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_0_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_0_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_1_1_address0() {
    conv2_weights_0_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_0_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_0_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_1_2_address0() {
    conv2_weights_0_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_1_3_address0() {
    conv2_weights_0_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_1_4_address0() {
    conv2_weights_0_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_0_address0() {
    conv2_weights_0_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_1_address0() {
    conv2_weights_0_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_2_address0() {
    conv2_weights_0_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_3_address0() {
    conv2_weights_0_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_4_address0() {
    conv2_weights_0_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_0_address0() {
    conv2_weights_0_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_1_address0() {
    conv2_weights_0_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_0_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_2_address0() {
    conv2_weights_0_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_3_address0() {
    conv2_weights_0_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_4_address0() {
    conv2_weights_0_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_0_address0() {
    conv2_weights_0_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_1_address0() {
    conv2_weights_0_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_2_address0() {
    conv2_weights_0_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_3_address0() {
    conv2_weights_0_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_4_address0() {
    conv2_weights_0_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_0_0_address0() {
    conv2_weights_1_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_1_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_1_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_0_1_address0() {
    conv2_weights_1_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_1_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_1_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_0_2_address0() {
    conv2_weights_1_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_1_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_1_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_0_3_address0() {
    conv2_weights_1_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_1_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_1_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_0_4_address0() {
    conv2_weights_1_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_1_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_1_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_1_0_address0() {
    conv2_weights_1_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_1_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_1_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_1_1_address0() {
    conv2_weights_1_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_1_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_1_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_1_2_address0() {
    conv2_weights_1_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_1_3_address0() {
    conv2_weights_1_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_1_4_address0() {
    conv2_weights_1_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_0_address0() {
    conv2_weights_1_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_1_address0() {
    conv2_weights_1_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_2_address0() {
    conv2_weights_1_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_3_address0() {
    conv2_weights_1_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_4_address0() {
    conv2_weights_1_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_0_address0() {
    conv2_weights_1_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_1_address0() {
    conv2_weights_1_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_1_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_2_address0() {
    conv2_weights_1_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_3_address0() {
    conv2_weights_1_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_4_address0() {
    conv2_weights_1_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_0_address0() {
    conv2_weights_1_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_1_address0() {
    conv2_weights_1_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_2_address0() {
    conv2_weights_1_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_3_address0() {
    conv2_weights_1_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_4_address0() {
    conv2_weights_1_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_0_0_address0() {
    conv2_weights_2_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_2_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_2_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_0_1_address0() {
    conv2_weights_2_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_2_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_2_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_0_2_address0() {
    conv2_weights_2_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_2_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_2_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_0_3_address0() {
    conv2_weights_2_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_2_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_2_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_0_4_address0() {
    conv2_weights_2_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_2_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_2_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_1_0_address0() {
    conv2_weights_2_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_2_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_2_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_1_1_address0() {
    conv2_weights_2_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_2_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_2_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_1_2_address0() {
    conv2_weights_2_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_1_3_address0() {
    conv2_weights_2_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_1_4_address0() {
    conv2_weights_2_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_0_address0() {
    conv2_weights_2_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_1_address0() {
    conv2_weights_2_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_2_address0() {
    conv2_weights_2_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_3_address0() {
    conv2_weights_2_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_4_address0() {
    conv2_weights_2_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_0_address0() {
    conv2_weights_2_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_1_address0() {
    conv2_weights_2_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_2_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_2_address0() {
    conv2_weights_2_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_3_address0() {
    conv2_weights_2_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_4_address0() {
    conv2_weights_2_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_0_address0() {
    conv2_weights_2_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_1_address0() {
    conv2_weights_2_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_2_address0() {
    conv2_weights_2_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_3_address0() {
    conv2_weights_2_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_4_address0() {
    conv2_weights_2_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_0_0_address0() {
    conv2_weights_3_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_3_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_3_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_0_1_address0() {
    conv2_weights_3_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_3_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_3_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_0_2_address0() {
    conv2_weights_3_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_3_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_3_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_0_3_address0() {
    conv2_weights_3_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_3_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_3_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_0_4_address0() {
    conv2_weights_3_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_3_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_3_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_1_0_address0() {
    conv2_weights_3_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_3_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_3_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_1_1_address0() {
    conv2_weights_3_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_3_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_3_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_1_2_address0() {
    conv2_weights_3_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_1_3_address0() {
    conv2_weights_3_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_1_4_address0() {
    conv2_weights_3_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_0_address0() {
    conv2_weights_3_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_1_address0() {
    conv2_weights_3_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_2_address0() {
    conv2_weights_3_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_3_address0() {
    conv2_weights_3_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_4_address0() {
    conv2_weights_3_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_0_address0() {
    conv2_weights_3_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_1_address0() {
    conv2_weights_3_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_3_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_2_address0() {
    conv2_weights_3_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_3_address0() {
    conv2_weights_3_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_4_address0() {
    conv2_weights_3_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_0_address0() {
    conv2_weights_3_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_1_address0() {
    conv2_weights_3_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_2_address0() {
    conv2_weights_3_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_3_address0() {
    conv2_weights_3_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_4_address0() {
    conv2_weights_3_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_0_0_address0() {
    conv2_weights_4_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_4_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_4_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_0_1_address0() {
    conv2_weights_4_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_4_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_4_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_0_2_address0() {
    conv2_weights_4_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_4_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_4_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_0_3_address0() {
    conv2_weights_4_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_4_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_4_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_0_4_address0() {
    conv2_weights_4_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_4_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_4_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_1_0_address0() {
    conv2_weights_4_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_4_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_4_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_1_1_address0() {
    conv2_weights_4_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_4_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_4_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_1_2_address0() {
    conv2_weights_4_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_1_3_address0() {
    conv2_weights_4_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_1_4_address0() {
    conv2_weights_4_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_0_address0() {
    conv2_weights_4_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_1_address0() {
    conv2_weights_4_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_2_address0() {
    conv2_weights_4_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_3_address0() {
    conv2_weights_4_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_4_address0() {
    conv2_weights_4_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_0_address0() {
    conv2_weights_4_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_1_address0() {
    conv2_weights_4_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_4_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_2_address0() {
    conv2_weights_4_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_3_address0() {
    conv2_weights_4_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_4_address0() {
    conv2_weights_4_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_0_address0() {
    conv2_weights_4_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_1_address0() {
    conv2_weights_4_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_2_address0() {
    conv2_weights_4_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_3_address0() {
    conv2_weights_4_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_4_address0() {
    conv2_weights_4_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_0_0_address0() {
    conv2_weights_5_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_5_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_5_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_0_1_address0() {
    conv2_weights_5_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_5_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_5_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_0_2_address0() {
    conv2_weights_5_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_5_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_5_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_0_3_address0() {
    conv2_weights_5_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_5_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_5_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_0_4_address0() {
    conv2_weights_5_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_5_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_5_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_1_0_address0() {
    conv2_weights_5_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_5_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_5_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_1_1_address0() {
    conv2_weights_5_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_5_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_5_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_1_2_address0() {
    conv2_weights_5_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_1_3_address0() {
    conv2_weights_5_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_1_4_address0() {
    conv2_weights_5_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_0_address0() {
    conv2_weights_5_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_1_address0() {
    conv2_weights_5_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_2_address0() {
    conv2_weights_5_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_3_address0() {
    conv2_weights_5_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_4_address0() {
    conv2_weights_5_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_0_address0() {
    conv2_weights_5_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_1_address0() {
    conv2_weights_5_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_5_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_2_address0() {
    conv2_weights_5_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_3_address0() {
    conv2_weights_5_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_4_address0() {
    conv2_weights_5_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_0_address0() {
    conv2_weights_5_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_1_address0() {
    conv2_weights_5_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_2_address0() {
    conv2_weights_5_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_3_address0() {
    conv2_weights_5_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_4_address0() {
    conv2_weights_5_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_0_0_address0() {
    conv2_weights_6_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_6_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_6_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_0_1_address0() {
    conv2_weights_6_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_6_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_6_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_0_2_address0() {
    conv2_weights_6_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_6_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_6_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_0_3_address0() {
    conv2_weights_6_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_6_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_6_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_0_4_address0() {
    conv2_weights_6_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_6_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_6_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_1_0_address0() {
    conv2_weights_6_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_6_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_6_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_1_1_address0() {
    conv2_weights_6_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_6_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_6_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_1_2_address0() {
    conv2_weights_6_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_1_3_address0() {
    conv2_weights_6_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_1_4_address0() {
    conv2_weights_6_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_0_address0() {
    conv2_weights_6_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_1_address0() {
    conv2_weights_6_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_2_address0() {
    conv2_weights_6_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_3_address0() {
    conv2_weights_6_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_4_address0() {
    conv2_weights_6_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_0_address0() {
    conv2_weights_6_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_1_address0() {
    conv2_weights_6_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_6_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_2_address0() {
    conv2_weights_6_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_3_address0() {
    conv2_weights_6_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_4_address0() {
    conv2_weights_6_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_0_address0() {
    conv2_weights_6_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_1_address0() {
    conv2_weights_6_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_2_address0() {
    conv2_weights_6_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_3_address0() {
    conv2_weights_6_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_4_address0() {
    conv2_weights_6_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_0_0_address0() {
    conv2_weights_7_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_7_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_7_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_0_1_address0() {
    conv2_weights_7_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_7_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_7_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_0_2_address0() {
    conv2_weights_7_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_7_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_7_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_0_3_address0() {
    conv2_weights_7_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_7_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_7_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_0_4_address0() {
    conv2_weights_7_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_7_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_7_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_1_0_address0() {
    conv2_weights_7_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_7_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_7_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_1_1_address0() {
    conv2_weights_7_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_7_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_7_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_1_2_address0() {
    conv2_weights_7_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_1_3_address0() {
    conv2_weights_7_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_1_4_address0() {
    conv2_weights_7_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_0_address0() {
    conv2_weights_7_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_1_address0() {
    conv2_weights_7_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_2_address0() {
    conv2_weights_7_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_3_address0() {
    conv2_weights_7_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_4_address0() {
    conv2_weights_7_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_0_address0() {
    conv2_weights_7_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_1_address0() {
    conv2_weights_7_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_7_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_2_address0() {
    conv2_weights_7_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_3_address0() {
    conv2_weights_7_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_4_address0() {
    conv2_weights_7_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_0_address0() {
    conv2_weights_7_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_1_address0() {
    conv2_weights_7_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_2_address0() {
    conv2_weights_7_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_3_address0() {
    conv2_weights_7_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_4_address0() {
    conv2_weights_7_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_0_0_address0() {
    conv2_weights_8_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_8_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_8_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_0_1_address0() {
    conv2_weights_8_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_8_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_8_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_0_2_address0() {
    conv2_weights_8_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_8_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_8_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_0_3_address0() {
    conv2_weights_8_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_8_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_8_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_0_4_address0() {
    conv2_weights_8_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_8_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_8_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_1_0_address0() {
    conv2_weights_8_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_8_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_8_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_1_1_address0() {
    conv2_weights_8_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_8_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_8_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_1_2_address0() {
    conv2_weights_8_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_1_3_address0() {
    conv2_weights_8_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_1_4_address0() {
    conv2_weights_8_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_0_address0() {
    conv2_weights_8_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_1_address0() {
    conv2_weights_8_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_2_address0() {
    conv2_weights_8_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_3_address0() {
    conv2_weights_8_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_4_address0() {
    conv2_weights_8_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_0_address0() {
    conv2_weights_8_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_1_address0() {
    conv2_weights_8_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_8_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_2_address0() {
    conv2_weights_8_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_3_address0() {
    conv2_weights_8_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_4_address0() {
    conv2_weights_8_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_0_address0() {
    conv2_weights_8_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_1_address0() {
    conv2_weights_8_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_2_address0() {
    conv2_weights_8_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_3_address0() {
    conv2_weights_8_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_4_address0() {
    conv2_weights_8_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_0_0_address0() {
    conv2_weights_9_0_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_9_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_9_0_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_0_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_0_1_address0() {
    conv2_weights_9_0_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_9_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_9_0_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_0_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_0_2_address0() {
    conv2_weights_9_0_2_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_9_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_9_0_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_0_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_0_3_address0() {
    conv2_weights_9_0_3_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_9_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_9_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_0_4_address0() {
    conv2_weights_9_0_4_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_9_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_9_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_1_0_address0() {
    conv2_weights_9_1_0_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_9_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_9_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_1_1_address0() {
    conv2_weights_9_1_1_address0 =  (sc_lv<3>) (zext_ln23_fu_10663_p1.read());
}

void cnn::thread_conv2_weights_9_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()))) {
        conv2_weights_9_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_1_2_address0() {
    conv2_weights_9_1_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_1_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_1_3_address0() {
    conv2_weights_9_1_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_1_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_1_4_address0() {
    conv2_weights_9_1_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_0_address0() {
    conv2_weights_9_2_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_1_address0() {
    conv2_weights_9_2_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_2_address0() {
    conv2_weights_9_2_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_3_address0() {
    conv2_weights_9_2_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_4_address0() {
    conv2_weights_9_2_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_0_address0() {
    conv2_weights_9_3_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_1_address0() {
    conv2_weights_9_3_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013.read());
}

void cnn::thread_conv2_weights_9_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_2_address0() {
    conv2_weights_9_3_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_3_address0() {
    conv2_weights_9_3_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_4_address0() {
    conv2_weights_9_3_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_0_address0() {
    conv2_weights_9_4_0_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_1_address0() {
    conv2_weights_9_4_1_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_2_address0() {
    conv2_weights_9_4_2_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_3_address0() {
    conv2_weights_9_4_3_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_4_address0() {
    conv2_weights_9_4_4_address0 =  (sc_lv<3>) (zext_ln23_reg_12013_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_f_2_fu_10643_p2() {
    f_2_fu_10643_p2 = (!ap_const_lv3_1.is_01() || !ap_phi_mux_f_0_phi_fu_5182_p4.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(ap_phi_mux_f_0_phi_fu_5182_p4.read()));
}

void cnn::thread_f_3_fu_11856_p2() {
    f_3_fu_11856_p2 = (!f_0_i68_reg_5224.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(f_0_i68_reg_5224.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_f_fu_10567_p2() {
    f_fu_10567_p2 = (!f_0_i47_reg_5120.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(f_0_i47_reg_5120.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_features_conv1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_0_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_0_address0 = grp_max_pool_fu_5268_feature_0_address0.read();
    } else {
        features_conv1_0_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_0_ce0 = grp_max_pool_fu_5268_feature_0_ce0.read();
    } else {
        features_conv1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_0_d0() {
    features_conv1_0_d0 = (!and_ln5_fu_10291_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_fu_10291_p2.read()[0].to_bool())? grp_fu_6004_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11945.read(), ap_const_lv1_1))) {
        features_conv1_0_we0 = ap_const_logic_1;
    } else {
        features_conv1_0_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_1_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_1_address0 = grp_max_pool_fu_5268_feature_1_address0.read();
    } else {
        features_conv1_1_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_1_ce0 = grp_max_pool_fu_5268_feature_1_ce0.read();
    } else {
        features_conv1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_1_d0() {
    features_conv1_1_d0 = (!and_ln5_1_fu_10342_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_1_fu_10342_p2.read()[0].to_bool())? grp_fu_6010_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11945.read(), ap_const_lv1_1))) {
        features_conv1_1_we0 = ap_const_logic_1;
    } else {
        features_conv1_1_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_2_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_2_address0 = grp_max_pool_fu_5268_feature_2_address0.read();
    } else {
        features_conv1_2_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_2_ce0 = grp_max_pool_fu_5268_feature_2_ce0.read();
    } else {
        features_conv1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_2_d0() {
    features_conv1_2_d0 = (!and_ln5_2_fu_10393_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_2_fu_10393_p2.read()[0].to_bool())? grp_fu_6016_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11945.read(), ap_const_lv1_1))) {
        features_conv1_2_we0 = ap_const_logic_1;
    } else {
        features_conv1_2_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_3_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_3_address0 = grp_max_pool_fu_5268_feature_3_address0.read();
    } else {
        features_conv1_3_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_3_ce0 = grp_max_pool_fu_5268_feature_3_ce0.read();
    } else {
        features_conv1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_3_d0() {
    features_conv1_3_d0 = (!and_ln5_3_fu_10444_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_3_fu_10444_p2.read()[0].to_bool())? grp_fu_6022_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11945.read(), ap_const_lv1_1))) {
        features_conv1_3_we0 = ap_const_logic_1;
    } else {
        features_conv1_3_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_4_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_4_address0 = grp_max_pool_fu_5268_feature_4_address0.read();
    } else {
        features_conv1_4_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_4_ce0 = grp_max_pool_fu_5268_feature_4_ce0.read();
    } else {
        features_conv1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_4_d0() {
    features_conv1_4_d0 = (!and_ln5_4_fu_10495_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_4_fu_10495_p2.read()[0].to_bool())? grp_fu_6028_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11945.read(), ap_const_lv1_1))) {
        features_conv1_4_we0 = ap_const_logic_1;
    } else {
        features_conv1_4_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_5_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10245_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_5_address0 = grp_max_pool_fu_5268_feature_5_address0.read();
    } else {
        features_conv1_5_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_5_ce0 = grp_max_pool_fu_5268_feature_5_ce0.read();
    } else {
        features_conv1_5_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_5_d0() {
    features_conv1_5_d0 = (!and_ln5_5_fu_10546_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_5_fu_10546_p2.read()[0].to_bool())? grp_fu_6034_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11945.read(), ap_const_lv1_1))) {
        features_conv1_5_we0 = ap_const_logic_1;
    } else {
        features_conv1_5_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_0_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_0_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_0_address0 = grp_max_pool2_fu_5248_feature_0_address0.read();
    } else {
        features_conv2_0_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_0_ce0 = grp_max_pool2_fu_5248_feature_0_ce0.read();
    } else {
        features_conv2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_0_ce1 = ap_const_logic_1;
    } else {
        features_conv2_0_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_0))) {
        features_conv2_0_we0 = ap_const_logic_1;
    } else {
        features_conv2_0_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_0_we1 = ap_const_logic_1;
    } else {
        features_conv2_0_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_1_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_1_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_1_address0 = grp_max_pool2_fu_5248_feature_1_address0.read();
    } else {
        features_conv2_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_1_ce0 = grp_max_pool2_fu_5248_feature_1_ce0.read();
    } else {
        features_conv2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_1_ce1 = ap_const_logic_1;
    } else {
        features_conv2_1_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_1))) {
        features_conv2_1_we0 = ap_const_logic_1;
    } else {
        features_conv2_1_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_1_we1 = ap_const_logic_1;
    } else {
        features_conv2_1_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_2_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_2_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_2_address0 = grp_max_pool2_fu_5248_feature_2_address0.read();
    } else {
        features_conv2_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_2_ce0 = grp_max_pool2_fu_5248_feature_2_ce0.read();
    } else {
        features_conv2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_2_ce1 = ap_const_logic_1;
    } else {
        features_conv2_2_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_2))) {
        features_conv2_2_we0 = ap_const_logic_1;
    } else {
        features_conv2_2_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_2_we1 = ap_const_logic_1;
    } else {
        features_conv2_2_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_3_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_3_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_3_address0 = grp_max_pool2_fu_5248_feature_3_address0.read();
    } else {
        features_conv2_3_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_3_ce0 = grp_max_pool2_fu_5248_feature_3_ce0.read();
    } else {
        features_conv2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_3_ce1 = ap_const_logic_1;
    } else {
        features_conv2_3_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_3))) {
        features_conv2_3_we0 = ap_const_logic_1;
    } else {
        features_conv2_3_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_3_we1 = ap_const_logic_1;
    } else {
        features_conv2_3_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_4_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_4_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_4_address0 = grp_max_pool2_fu_5248_feature_4_address0.read();
    } else {
        features_conv2_4_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_4_ce0 = grp_max_pool2_fu_5248_feature_4_ce0.read();
    } else {
        features_conv2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_4_ce1 = ap_const_logic_1;
    } else {
        features_conv2_4_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_4))) {
        features_conv2_4_we0 = ap_const_logic_1;
    } else {
        features_conv2_4_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_4_we1 = ap_const_logic_1;
    } else {
        features_conv2_4_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_5_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_5_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_5_address0 = grp_max_pool2_fu_5248_feature_5_address0.read();
    } else {
        features_conv2_5_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_5_ce0 = grp_max_pool2_fu_5248_feature_5_ce0.read();
    } else {
        features_conv2_5_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_5_ce1 = ap_const_logic_1;
    } else {
        features_conv2_5_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_5))) {
        features_conv2_5_we0 = ap_const_logic_1;
    } else {
        features_conv2_5_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_5_we1 = ap_const_logic_1;
    } else {
        features_conv2_5_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_6_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_6_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_6_address0 = grp_max_pool2_fu_5248_feature_6_address0.read();
    } else {
        features_conv2_6_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_6_ce0 = grp_max_pool2_fu_5248_feature_6_ce0.read();
    } else {
        features_conv2_6_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_6_ce1 = ap_const_logic_1;
    } else {
        features_conv2_6_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_6))) {
        features_conv2_6_we0 = ap_const_logic_1;
    } else {
        features_conv2_6_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_6_we1 = ap_const_logic_1;
    } else {
        features_conv2_6_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_7_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_7_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_7_address0 = grp_max_pool2_fu_5248_feature_7_address0.read();
    } else {
        features_conv2_7_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_7_ce0 = grp_max_pool2_fu_5248_feature_7_ce0.read();
    } else {
        features_conv2_7_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_7_ce1 = ap_const_logic_1;
    } else {
        features_conv2_7_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_7))) {
        features_conv2_7_we0 = ap_const_logic_1;
    } else {
        features_conv2_7_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_7_we1 = ap_const_logic_1;
    } else {
        features_conv2_7_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_8_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_8_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_8_address0 = grp_max_pool2_fu_5248_feature_8_address0.read();
    } else {
        features_conv2_8_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_8_ce0 = grp_max_pool2_fu_5248_feature_8_ce0.read();
    } else {
        features_conv2_8_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_8_ce1 = ap_const_logic_1;
    } else {
        features_conv2_8_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_8))) {
        features_conv2_8_we0 = ap_const_logic_1;
    } else {
        features_conv2_8_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_8_we1 = ap_const_logic_1;
    } else {
        features_conv2_8_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        features_conv2_9_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11620_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_9_address0 =  (sc_lv<6>) (zext_ln20_fu_10599_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_9_address0 = grp_max_pool2_fu_5248_feature_9_address0.read();
    } else {
        features_conv2_9_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        features_conv2_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        features_conv2_9_ce0 = grp_max_pool2_fu_5248_feature_9_ce0.read();
    } else {
        features_conv2_9_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_9_ce1 = ap_const_logic_1;
    } else {
        features_conv2_9_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         ((((((esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_F) || 
               esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_E)) || 
              esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_D)) || 
             esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_C)) || 
            esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_B)) || 
           esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_A)) || 
          esl_seteq<1,4,4>(phi_ln20_reg_5132.read(), ap_const_lv4_9)))) {
        features_conv2_9_we0 = ap_const_logic_1;
    } else {
        features_conv2_9_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13119_pp1_iter2_reg.read()))) {
        features_conv2_9_we1 = ap_const_logic_1;
    } else {
        features_conv2_9_we1 = ap_const_logic_0;
    }
}

void cnn::thread_flat_array_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        flat_array_address0 = grp_flattening_layer_fu_5288_flat_array_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        flat_array_address0 = grp_dense_layer_fu_5236_flat_array_address0.read();
    } else {
        flat_array_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void cnn::thread_flat_array_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        flat_array_ce0 = grp_flattening_layer_fu_5288_flat_array_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        flat_array_ce0 = grp_dense_layer_fu_5236_flat_array_ce0.read();
    } else {
        flat_array_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_flat_array_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        flat_array_we0 = grp_flattening_layer_fu_5288_flat_array_we0.read();
    } else {
        flat_array_we0 = ap_const_logic_0;
    }
}

void cnn::thread_grp_dense_layer_fu_5236_ap_start() {
    grp_dense_layer_fu_5236_ap_start = grp_dense_layer_fu_5236_ap_start_reg.read();
}

void cnn::thread_grp_flattening_layer_fu_5288_ap_start() {
    grp_flattening_layer_fu_5288_ap_start = grp_flattening_layer_fu_5288_ap_start_reg.read();
}

void cnn::thread_grp_fu_5296_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5296_p1 = grp_fu_6740_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5296_p1 = grp_fu_6716_p2.read();
    } else {
        grp_fu_5296_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5300_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5300_p1 = grp_fu_6746_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5300_p1 = grp_fu_6722_p2.read();
    } else {
        grp_fu_5300_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5304_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5304_p1 = grp_fu_6752_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5304_p1 = grp_fu_6728_p2.read();
    } else {
        grp_fu_5304_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5308_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5308_p1 = grp_fu_6758_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5308_p1 = grp_fu_6734_p2.read();
    } else {
        grp_fu_5308_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5312_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5312_p1 = grp_fu_6764_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5312_p1 = grp_fu_6740_p2.read();
    } else {
        grp_fu_5312_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5316_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5316_p1 = grp_fu_6770_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5316_p1 = grp_fu_6746_p2.read();
    } else {
        grp_fu_5316_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5320_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5320_p0 = grp_fu_6716_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5320_p0 = grp_fu_5296_p2.read();
    } else {
        grp_fu_5320_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5320_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5320_p1 = grp_fu_6776_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5320_p1 = grp_fu_6752_p2.read();
    } else {
        grp_fu_5320_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5325_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5325_p0 = grp_fu_6722_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5325_p0 = grp_fu_5300_p2.read();
    } else {
        grp_fu_5325_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5325_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5325_p1 = grp_fu_6782_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5325_p1 = grp_fu_6758_p2.read();
    } else {
        grp_fu_5325_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5330_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5330_p0 = grp_fu_6728_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5330_p0 = grp_fu_5304_p2.read();
    } else {
        grp_fu_5330_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5330_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5330_p1 = grp_fu_6788_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5330_p1 = grp_fu_6764_p2.read();
    } else {
        grp_fu_5330_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5335_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5335_p0 = grp_fu_6734_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5335_p0 = grp_fu_5308_p2.read();
    } else {
        grp_fu_5335_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5335_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5335_p1 = grp_fu_6794_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5335_p1 = grp_fu_6770_p2.read();
    } else {
        grp_fu_5335_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5340_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5340_p0 = grp_fu_5296_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5340_p0 = grp_fu_5312_p2.read();
    } else {
        grp_fu_5340_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5340_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5340_p1 = grp_fu_6800_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5340_p1 = grp_fu_6776_p2.read();
    } else {
        grp_fu_5340_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5345_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5345_p0 = grp_fu_5300_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5345_p0 = grp_fu_5316_p2.read();
    } else {
        grp_fu_5345_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5345_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5345_p1 = grp_fu_6806_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5345_p1 = grp_fu_6782_p2.read();
    } else {
        grp_fu_5345_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5350_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5350_p0 = grp_fu_5304_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5350_p0 = grp_fu_5320_p2.read();
    } else {
        grp_fu_5350_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5350_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5350_p1 = grp_fu_6812_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5350_p1 = grp_fu_6788_p2.read();
    } else {
        grp_fu_5350_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5355_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5355_p0 = grp_fu_5308_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5355_p0 = grp_fu_5325_p2.read();
    } else {
        grp_fu_5355_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5355_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5355_p1 = grp_fu_6818_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5355_p1 = grp_fu_6794_p2.read();
    } else {
        grp_fu_5355_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5360_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5360_p0 = grp_fu_5312_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5360_p0 = grp_fu_5330_p2.read();
    } else {
        grp_fu_5360_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5360_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5360_p1 = grp_fu_6824_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5360_p1 = grp_fu_6800_p2.read();
    } else {
        grp_fu_5360_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5365_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5365_p0 = grp_fu_5316_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5365_p0 = grp_fu_5335_p2.read();
    } else {
        grp_fu_5365_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5365_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5365_p1 = grp_fu_6830_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5365_p1 = grp_fu_6806_p2.read();
    } else {
        grp_fu_5365_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5370_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5370_p0 = grp_fu_5320_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5370_p0 = grp_fu_5340_p2.read();
    } else {
        grp_fu_5370_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5370_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5370_p1 = grp_fu_6836_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5370_p1 = grp_fu_6812_p2.read();
    } else {
        grp_fu_5370_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5375_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5375_p0 = grp_fu_5325_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5375_p0 = grp_fu_5345_p2.read();
    } else {
        grp_fu_5375_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5375_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5375_p1 = grp_fu_6842_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5375_p1 = grp_fu_6818_p2.read();
    } else {
        grp_fu_5375_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5380_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5380_p0 = grp_fu_5330_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5380_p0 = grp_fu_5350_p2.read();
    } else {
        grp_fu_5380_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5380_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5380_p1 = grp_fu_6848_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5380_p1 = grp_fu_6824_p2.read();
    } else {
        grp_fu_5380_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5385_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5385_p0 = grp_fu_5335_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5385_p0 = grp_fu_5355_p2.read();
    } else {
        grp_fu_5385_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5385_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5385_p1 = grp_fu_6854_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5385_p1 = grp_fu_6830_p2.read();
    } else {
        grp_fu_5385_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5390_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5390_p0 = grp_fu_5340_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5390_p0 = grp_fu_5360_p2.read();
    } else {
        grp_fu_5390_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5390_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5390_p1 = grp_fu_6860_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5390_p1 = grp_fu_6836_p2.read();
    } else {
        grp_fu_5390_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5395_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5395_p0 = grp_fu_5345_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5395_p0 = grp_fu_5365_p2.read();
    } else {
        grp_fu_5395_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5395_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5395_p1 = grp_fu_6866_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5395_p1 = grp_fu_6842_p2.read();
    } else {
        grp_fu_5395_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5400_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5400_p0 = grp_fu_5350_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5400_p0 = grp_fu_5370_p2.read();
    } else {
        grp_fu_5400_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5400_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5400_p1 = grp_fu_6872_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5400_p1 = grp_fu_6848_p2.read();
    } else {
        grp_fu_5400_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5405_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5405_p0 = grp_fu_5355_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5405_p0 = grp_fu_5375_p2.read();
    } else {
        grp_fu_5405_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5405_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5405_p1 = grp_fu_6878_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5405_p1 = grp_fu_6854_p2.read();
    } else {
        grp_fu_5405_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5410_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5410_p0 = grp_fu_5360_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5410_p0 = grp_fu_5380_p2.read();
    } else {
        grp_fu_5410_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5410_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5410_p1 = grp_fu_6884_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5410_p1 = grp_fu_6860_p2.read();
    } else {
        grp_fu_5410_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5415_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5415_p0 = grp_fu_5365_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5415_p0 = grp_fu_5385_p2.read();
    } else {
        grp_fu_5415_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5415_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5415_p1 = grp_fu_6890_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5415_p1 = grp_fu_6866_p2.read();
    } else {
        grp_fu_5415_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5420_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5420_p0 = grp_fu_5370_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5420_p0 = grp_fu_5390_p2.read();
    } else {
        grp_fu_5420_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5420_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5420_p1 = grp_fu_6896_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5420_p1 = grp_fu_6872_p2.read();
    } else {
        grp_fu_5420_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5425_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5425_p0 = grp_fu_5375_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5425_p0 = grp_fu_5395_p2.read();
    } else {
        grp_fu_5425_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5425_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5425_p1 = grp_fu_6902_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5425_p1 = grp_fu_6878_p2.read();
    } else {
        grp_fu_5425_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5430_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5430_p0 = grp_fu_5380_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5430_p0 = grp_fu_5400_p2.read();
    } else {
        grp_fu_5430_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5430_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5430_p1 = grp_fu_6908_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5430_p1 = grp_fu_6884_p2.read();
    } else {
        grp_fu_5430_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5435_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5435_p0 = grp_fu_5385_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5435_p0 = grp_fu_5405_p2.read();
    } else {
        grp_fu_5435_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5435_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5435_p1 = grp_fu_6914_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5435_p1 = grp_fu_6890_p2.read();
    } else {
        grp_fu_5435_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5440_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5440_p0 = grp_fu_5390_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5440_p0 = tmp_4_1_s_reg_11915.read();
    } else {
        grp_fu_5440_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5440_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5440_p1 = grp_fu_6920_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5440_p1 = grp_fu_6896_p2.read();
    } else {
        grp_fu_5440_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5444_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5444_p0 = grp_fu_5395_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5444_p0 = tmp_4_1_23_1_reg_11920.read();
    } else {
        grp_fu_5444_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5444_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5444_p1 = grp_fu_6926_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5444_p1 = grp_fu_6902_p2.read();
    } else {
        grp_fu_5444_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5448_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5448_p0 = grp_fu_5400_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5448_p0 = tmp_4_1_23_2_reg_11925.read();
    } else {
        grp_fu_5448_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5448_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5448_p1 = grp_fu_6932_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5448_p1 = grp_fu_6908_p2.read();
    } else {
        grp_fu_5448_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5452_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5452_p0 = grp_fu_5405_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5452_p0 = tmp_4_1_23_3_reg_11930.read();
    } else {
        grp_fu_5452_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5452_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5452_p1 = grp_fu_6938_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5452_p1 = grp_fu_6914_p2.read();
    } else {
        grp_fu_5452_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5456_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5456_p0 = grp_fu_5410_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5456_p0 = tmp_4_1_23_4_reg_11935.read();
    } else {
        grp_fu_5456_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5456_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5456_p1 = grp_fu_6944_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5456_p1 = grp_fu_6920_p2.read();
    } else {
        grp_fu_5456_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5460_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5460_p0 = grp_fu_5415_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5460_p0 = tmp_4_1_23_5_reg_11940.read();
    } else {
        grp_fu_5460_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5460_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5460_p1 = grp_fu_6950_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5460_p1 = grp_fu_6926_p2.read();
    } else {
        grp_fu_5460_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5464_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5464_p0 = grp_fu_5420_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5464_p0 = grp_fu_5440_p2.read();
    } else {
        grp_fu_5464_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5464_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5464_p1 = grp_fu_6956_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5464_p1 = grp_fu_6932_p2.read();
    } else {
        grp_fu_5464_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5469_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5469_p0 = grp_fu_5425_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5469_p0 = grp_fu_5444_p2.read();
    } else {
        grp_fu_5469_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5469_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5469_p1 = grp_fu_6962_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5469_p1 = grp_fu_6938_p2.read();
    } else {
        grp_fu_5469_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5474_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5474_p0 = grp_fu_5430_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5474_p0 = grp_fu_5448_p2.read();
    } else {
        grp_fu_5474_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5474_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5474_p1 = grp_fu_6968_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5474_p1 = grp_fu_6944_p2.read();
    } else {
        grp_fu_5474_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5479_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5479_p0 = grp_fu_5435_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5479_p0 = grp_fu_5452_p2.read();
    } else {
        grp_fu_5479_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5479_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5479_p1 = grp_fu_6974_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5479_p1 = grp_fu_6950_p2.read();
    } else {
        grp_fu_5479_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5484_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5484_p0 = grp_fu_5440_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5484_p0 = grp_fu_5456_p2.read();
    } else {
        grp_fu_5484_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5484_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5484_p1 = grp_fu_6980_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5484_p1 = grp_fu_6956_p2.read();
    } else {
        grp_fu_5484_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5489_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5489_p0 = grp_fu_5444_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5489_p0 = grp_fu_5460_p2.read();
    } else {
        grp_fu_5489_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5489_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5489_p1 = grp_fu_6986_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5489_p1 = grp_fu_6962_p2.read();
    } else {
        grp_fu_5489_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5494_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5494_p0 = grp_fu_5448_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5494_p0 = grp_fu_5464_p2.read();
    } else {
        grp_fu_5494_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5494_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5494_p1 = grp_fu_6992_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5494_p1 = grp_fu_6968_p2.read();
    } else {
        grp_fu_5494_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5499_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5499_p0 = grp_fu_5452_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5499_p0 = grp_fu_5469_p2.read();
    } else {
        grp_fu_5499_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5499_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5499_p1 = grp_fu_6998_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5499_p1 = grp_fu_6974_p2.read();
    } else {
        grp_fu_5499_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5504_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5504_p0 = grp_fu_5456_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5504_p0 = grp_fu_5474_p2.read();
    } else {
        grp_fu_5504_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5504_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5504_p1 = grp_fu_7004_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5504_p1 = grp_fu_6980_p2.read();
    } else {
        grp_fu_5504_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5509_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5509_p0 = grp_fu_5460_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5509_p0 = grp_fu_5479_p2.read();
    } else {
        grp_fu_5509_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5509_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5509_p1 = grp_fu_7010_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5509_p1 = grp_fu_6986_p2.read();
    } else {
        grp_fu_5509_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5514_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5514_p0 = grp_fu_5464_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5514_p0 = grp_fu_5484_p2.read();
    } else {
        grp_fu_5514_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5514_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5514_p1 = grp_fu_7016_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5514_p1 = grp_fu_6992_p2.read();
    } else {
        grp_fu_5514_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5519_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5519_p0 = grp_fu_5469_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5519_p0 = grp_fu_5489_p2.read();
    } else {
        grp_fu_5519_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5519_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5519_p1 = grp_fu_7022_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5519_p1 = grp_fu_6998_p2.read();
    } else {
        grp_fu_5519_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5524_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5524_p0 = grp_fu_5474_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5524_p0 = grp_fu_5494_p2.read();
    } else {
        grp_fu_5524_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5524_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5524_p1 = grp_fu_7028_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5524_p1 = grp_fu_7004_p2.read();
    } else {
        grp_fu_5524_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5529_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5529_p0 = grp_fu_5479_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5529_p0 = grp_fu_5499_p2.read();
    } else {
        grp_fu_5529_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5529_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5529_p1 = grp_fu_7034_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5529_p1 = grp_fu_7010_p2.read();
    } else {
        grp_fu_5529_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5534_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5534_p0 = grp_fu_5484_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5534_p0 = grp_fu_5504_p2.read();
    } else {
        grp_fu_5534_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5534_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5534_p1 = grp_fu_7040_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5534_p1 = grp_fu_7016_p2.read();
    } else {
        grp_fu_5534_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5539_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5539_p0 = grp_fu_5489_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5539_p0 = grp_fu_5509_p2.read();
    } else {
        grp_fu_5539_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5539_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5539_p1 = grp_fu_7046_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5539_p1 = grp_fu_7022_p2.read();
    } else {
        grp_fu_5539_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5544_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5544_p0 = grp_fu_5494_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5544_p0 = grp_fu_5514_p2.read();
    } else {
        grp_fu_5544_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5544_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5544_p1 = grp_fu_7052_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5544_p1 = grp_fu_7028_p2.read();
    } else {
        grp_fu_5544_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5549_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5549_p0 = grp_fu_5499_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5549_p0 = grp_fu_5519_p2.read();
    } else {
        grp_fu_5549_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5549_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5549_p1 = grp_fu_7058_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5549_p1 = grp_fu_7034_p2.read();
    } else {
        grp_fu_5549_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5554_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5554_p0 = grp_fu_5504_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5554_p0 = grp_fu_5524_p2.read();
    } else {
        grp_fu_5554_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5554_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5554_p1 = grp_fu_7064_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5554_p1 = grp_fu_7040_p2.read();
    } else {
        grp_fu_5554_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5559_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5559_p0 = grp_fu_5509_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5559_p0 = grp_fu_5529_p2.read();
    } else {
        grp_fu_5559_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5559_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5559_p1 = grp_fu_7070_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5559_p1 = grp_fu_7046_p2.read();
    } else {
        grp_fu_5559_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5564_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5564_p0 = grp_fu_5514_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5564_p0 = grp_fu_5534_p2.read();
    } else {
        grp_fu_5564_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5564_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5564_p1 = grp_fu_7076_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5564_p1 = grp_fu_7052_p2.read();
    } else {
        grp_fu_5564_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5569_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5569_p0 = grp_fu_5519_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5569_p0 = grp_fu_5539_p2.read();
    } else {
        grp_fu_5569_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5569_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5569_p1 = grp_fu_7082_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5569_p1 = grp_fu_7058_p2.read();
    } else {
        grp_fu_5569_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5574_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5574_p0 = grp_fu_5524_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5574_p0 = grp_fu_5544_p2.read();
    } else {
        grp_fu_5574_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5574_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5574_p1 = grp_fu_7088_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5574_p1 = grp_fu_7064_p2.read();
    } else {
        grp_fu_5574_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5579_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5579_p0 = grp_fu_5529_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5579_p0 = grp_fu_5549_p2.read();
    } else {
        grp_fu_5579_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5579_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5579_p1 = grp_fu_7094_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5579_p1 = grp_fu_7070_p2.read();
    } else {
        grp_fu_5579_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5584_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5584_p0 = tmp_8_1_8_reg_13069.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5584_p0 = grp_fu_5554_p2.read();
    } else {
        grp_fu_5584_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5584_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5584_p1 = grp_fu_7100_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5584_p1 = grp_fu_7076_p2.read();
    } else {
        grp_fu_5584_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5589_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5589_p0 = tmp_8_1_8_1_reg_13074.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5589_p0 = grp_fu_5559_p2.read();
    } else {
        grp_fu_5589_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5589_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5589_p1 = grp_fu_7106_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5589_p1 = grp_fu_7082_p2.read();
    } else {
        grp_fu_5589_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5594_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5594_p0 = tmp_8_1_8_2_reg_13079.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5594_p0 = grp_fu_5564_p2.read();
    } else {
        grp_fu_5594_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5594_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5594_p1 = grp_fu_7112_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5594_p1 = grp_fu_7088_p2.read();
    } else {
        grp_fu_5594_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5599_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5599_p0 = tmp_8_1_8_3_reg_13084.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5599_p0 = grp_fu_5569_p2.read();
    } else {
        grp_fu_5599_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5599_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5599_p1 = grp_fu_7118_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5599_p1 = grp_fu_7094_p2.read();
    } else {
        grp_fu_5599_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5604_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5604_p0 = tmp_8_1_8_4_reg_13089.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5604_p0 = grp_fu_5574_p2.read();
    } else {
        grp_fu_5604_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5604_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5604_p1 = grp_fu_7124_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5604_p1 = grp_fu_7100_p2.read();
    } else {
        grp_fu_5604_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5609_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5609_p0 = tmp_8_1_8_5_reg_13094.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5609_p0 = grp_fu_5579_p2.read();
    } else {
        grp_fu_5609_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5609_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5609_p1 = grp_fu_7130_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5609_p1 = grp_fu_7106_p2.read();
    } else {
        grp_fu_5609_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5614_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5614_p0 = tmp_8_1_8_6_reg_13099.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5614_p0 = grp_fu_5584_p2.read();
    } else {
        grp_fu_5614_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5614_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5614_p1 = grp_fu_7136_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5614_p1 = grp_fu_7112_p2.read();
    } else {
        grp_fu_5614_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5619_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5619_p0 = tmp_8_1_8_7_reg_13104.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5619_p0 = grp_fu_5589_p2.read();
    } else {
        grp_fu_5619_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5619_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5619_p1 = grp_fu_7142_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5619_p1 = grp_fu_7118_p2.read();
    } else {
        grp_fu_5619_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5624_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5624_p0 = tmp_8_1_8_8_reg_13109.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5624_p0 = grp_fu_5594_p2.read();
    } else {
        grp_fu_5624_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5624_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5624_p1 = grp_fu_7148_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5624_p1 = grp_fu_7124_p2.read();
    } else {
        grp_fu_5624_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5629_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5629_p0 = tmp_8_1_8_9_reg_13114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5629_p0 = grp_fu_5599_p2.read();
    } else {
        grp_fu_5629_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5629_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5629_p1 = grp_fu_7154_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5629_p1 = grp_fu_7130_p2.read();
    } else {
        grp_fu_5629_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5634_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5634_p0 = grp_fu_5584_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5634_p0 = grp_fu_5604_p2.read();
    } else {
        grp_fu_5634_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5634_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5634_p1 = grp_fu_7160_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5634_p1 = grp_fu_7136_p2.read();
    } else {
        grp_fu_5634_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5639_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5639_p0 = grp_fu_5589_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5639_p0 = grp_fu_5609_p2.read();
    } else {
        grp_fu_5639_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5639_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5639_p1 = grp_fu_7166_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5639_p1 = grp_fu_7142_p2.read();
    } else {
        grp_fu_5639_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5644_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5644_p0 = grp_fu_5594_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5644_p0 = grp_fu_5614_p2.read();
    } else {
        grp_fu_5644_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5644_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5644_p1 = grp_fu_7172_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5644_p1 = grp_fu_7148_p2.read();
    } else {
        grp_fu_5644_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5649_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5649_p0 = grp_fu_5599_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5649_p0 = grp_fu_5619_p2.read();
    } else {
        grp_fu_5649_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5649_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5649_p1 = grp_fu_7178_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5649_p1 = grp_fu_7154_p2.read();
    } else {
        grp_fu_5649_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5654_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5654_p0 = grp_fu_5604_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5654_p0 = grp_fu_5624_p2.read();
    } else {
        grp_fu_5654_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5654_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5654_p1 = grp_fu_7184_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5654_p1 = grp_fu_7160_p2.read();
    } else {
        grp_fu_5654_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5659_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5659_p0 = grp_fu_5609_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5659_p0 = grp_fu_5629_p2.read();
    } else {
        grp_fu_5659_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5659_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5659_p1 = grp_fu_7190_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5659_p1 = grp_fu_7166_p2.read();
    } else {
        grp_fu_5659_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5664_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5664_p0 = grp_fu_5614_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5664_p0 = grp_fu_5634_p2.read();
    } else {
        grp_fu_5664_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5664_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5664_p1 = grp_fu_7196_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5664_p1 = grp_fu_7172_p2.read();
    } else {
        grp_fu_5664_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5669_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5669_p0 = grp_fu_5619_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5669_p0 = grp_fu_5639_p2.read();
    } else {
        grp_fu_5669_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5669_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5669_p1 = grp_fu_7202_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5669_p1 = grp_fu_7178_p2.read();
    } else {
        grp_fu_5669_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5674_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5674_p0 = grp_fu_5624_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5674_p0 = grp_fu_5644_p2.read();
    } else {
        grp_fu_5674_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5674_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5674_p1 = grp_fu_7208_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5674_p1 = grp_fu_7184_p2.read();
    } else {
        grp_fu_5674_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5679_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5679_p0 = grp_fu_5629_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5679_p0 = grp_fu_5649_p2.read();
    } else {
        grp_fu_5679_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5679_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5679_p1 = grp_fu_7214_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5679_p1 = grp_fu_7190_p2.read();
    } else {
        grp_fu_5679_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5684_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5684_p0 = grp_fu_5634_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5684_p0 = grp_fu_5654_p2.read();
    } else {
        grp_fu_5684_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5684_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5684_p1 = grp_fu_7220_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5684_p1 = grp_fu_7196_p2.read();
    } else {
        grp_fu_5684_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5689_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5689_p0 = grp_fu_5639_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5689_p0 = grp_fu_5659_p2.read();
    } else {
        grp_fu_5689_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5689_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5689_p1 = grp_fu_7226_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5689_p1 = grp_fu_7202_p2.read();
    } else {
        grp_fu_5689_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5694_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5694_p0 = grp_fu_5644_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5694_p0 = grp_fu_5664_p2.read();
    } else {
        grp_fu_5694_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5694_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5694_p1 = grp_fu_7232_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5694_p1 = grp_fu_7208_p2.read();
    } else {
        grp_fu_5694_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5699_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5699_p0 = grp_fu_5649_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5699_p0 = grp_fu_5669_p2.read();
    } else {
        grp_fu_5699_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5699_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5699_p1 = grp_fu_7238_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5699_p1 = grp_fu_7214_p2.read();
    } else {
        grp_fu_5699_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5704_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5704_p0 = grp_fu_5654_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5704_p0 = grp_fu_5674_p2.read();
    } else {
        grp_fu_5704_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5704_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5704_p1 = grp_fu_7244_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5704_p1 = grp_fu_7220_p2.read();
    } else {
        grp_fu_5704_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5709_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5709_p0 = grp_fu_5659_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5709_p0 = grp_fu_5679_p2.read();
    } else {
        grp_fu_5709_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5709_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5709_p1 = grp_fu_7250_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5709_p1 = grp_fu_7226_p2.read();
    } else {
        grp_fu_5709_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5714_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5714_p0 = grp_fu_5664_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5714_p0 = grp_fu_5684_p2.read();
    } else {
        grp_fu_5714_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5714_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5714_p1 = grp_fu_7256_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5714_p1 = grp_fu_7232_p2.read();
    } else {
        grp_fu_5714_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5719_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5719_p0 = grp_fu_5669_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5719_p0 = grp_fu_5689_p2.read();
    } else {
        grp_fu_5719_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5719_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5719_p1 = grp_fu_7262_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5719_p1 = grp_fu_7238_p2.read();
    } else {
        grp_fu_5719_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5724_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5724_p0 = grp_fu_5674_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5724_p0 = grp_fu_5694_p2.read();
    } else {
        grp_fu_5724_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5724_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5724_p1 = grp_fu_7268_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5724_p1 = grp_fu_7244_p2.read();
    } else {
        grp_fu_5724_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5729_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5729_p0 = grp_fu_5679_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5729_p0 = grp_fu_5699_p2.read();
    } else {
        grp_fu_5729_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5729_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5729_p1 = grp_fu_7274_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5729_p1 = grp_fu_7250_p2.read();
    } else {
        grp_fu_5729_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5734_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5734_p0 = grp_fu_5684_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5734_p0 = grp_fu_5704_p2.read();
    } else {
        grp_fu_5734_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5734_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5734_p1 = grp_fu_7280_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5734_p1 = grp_fu_7256_p2.read();
    } else {
        grp_fu_5734_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5739_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5739_p0 = grp_fu_5689_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5739_p0 = grp_fu_5709_p2.read();
    } else {
        grp_fu_5739_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5739_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5739_p1 = grp_fu_7286_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5739_p1 = grp_fu_7262_p2.read();
    } else {
        grp_fu_5739_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5744_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5744_p0 = grp_fu_5694_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5744_p0 = grp_fu_5714_p2.read();
    } else {
        grp_fu_5744_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5744_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5744_p1 = grp_fu_7292_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5744_p1 = grp_fu_7268_p2.read();
    } else {
        grp_fu_5744_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5749_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5749_p0 = grp_fu_5699_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5749_p0 = grp_fu_5719_p2.read();
    } else {
        grp_fu_5749_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5749_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5749_p1 = grp_fu_7298_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5749_p1 = grp_fu_7274_p2.read();
    } else {
        grp_fu_5749_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5754_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5754_p0 = grp_fu_5704_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5754_p0 = grp_fu_5724_p2.read();
    } else {
        grp_fu_5754_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5754_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5754_p1 = grp_fu_7304_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5754_p1 = grp_fu_7280_p2.read();
    } else {
        grp_fu_5754_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5759_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5759_p0 = grp_fu_5709_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5759_p0 = grp_fu_5729_p2.read();
    } else {
        grp_fu_5759_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5759_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5759_p1 = grp_fu_7310_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5759_p1 = grp_fu_7286_p2.read();
    } else {
        grp_fu_5759_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5764_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5764_p0 = grp_fu_5714_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5764_p0 = grp_fu_5734_p2.read();
    } else {
        grp_fu_5764_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5764_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5764_p1 = grp_fu_7316_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5764_p1 = grp_fu_7292_p2.read();
    } else {
        grp_fu_5764_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5769_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5769_p0 = grp_fu_5719_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5769_p0 = grp_fu_5739_p2.read();
    } else {
        grp_fu_5769_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5769_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5769_p1 = grp_fu_7322_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5769_p1 = grp_fu_7298_p2.read();
    } else {
        grp_fu_5769_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5774_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5774_p0 = grp_fu_5724_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5774_p0 = grp_fu_5744_p2.read();
    } else {
        grp_fu_5774_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5774_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5774_p1 = grp_fu_7328_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5774_p1 = grp_fu_7304_p2.read();
    } else {
        grp_fu_5774_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5779_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5779_p0 = grp_fu_5729_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5779_p0 = grp_fu_5749_p2.read();
    } else {
        grp_fu_5779_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5779_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5779_p1 = grp_fu_7334_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5779_p1 = grp_fu_7310_p2.read();
    } else {
        grp_fu_5779_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5784_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5784_p0 = grp_fu_5734_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5784_p0 = grp_fu_5754_p2.read();
    } else {
        grp_fu_5784_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5784_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5784_p1 = grp_fu_7340_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5784_p1 = grp_fu_7316_p2.read();
    } else {
        grp_fu_5784_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5789_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5789_p0 = grp_fu_5739_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5789_p0 = grp_fu_5759_p2.read();
    } else {
        grp_fu_5789_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5789_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5789_p1 = grp_fu_7346_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5789_p1 = grp_fu_7322_p2.read();
    } else {
        grp_fu_5789_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5794_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5794_p0 = grp_fu_5744_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5794_p0 = grp_fu_5764_p2.read();
    } else {
        grp_fu_5794_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5794_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5794_p1 = grp_fu_7352_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5794_p1 = grp_fu_7328_p2.read();
    } else {
        grp_fu_5794_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5799_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5799_p0 = grp_fu_5749_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5799_p0 = grp_fu_5769_p2.read();
    } else {
        grp_fu_5799_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5799_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5799_p1 = grp_fu_7358_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5799_p1 = grp_fu_7334_p2.read();
    } else {
        grp_fu_5799_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5804_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5804_p0 = grp_fu_5754_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5804_p0 = grp_fu_5774_p2.read();
    } else {
        grp_fu_5804_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5804_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5804_p1 = grp_fu_7364_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5804_p1 = grp_fu_7340_p2.read();
    } else {
        grp_fu_5804_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5809_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5809_p0 = grp_fu_5759_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5809_p0 = grp_fu_5779_p2.read();
    } else {
        grp_fu_5809_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5809_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5809_p1 = grp_fu_7370_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5809_p1 = grp_fu_7346_p2.read();
    } else {
        grp_fu_5809_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5814_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5814_p0 = grp_fu_5764_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5814_p0 = grp_fu_5784_p2.read();
    } else {
        grp_fu_5814_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5814_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5814_p1 = grp_fu_7376_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5814_p1 = grp_fu_7352_p2.read();
    } else {
        grp_fu_5814_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5819_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5819_p0 = grp_fu_5769_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5819_p0 = grp_fu_5789_p2.read();
    } else {
        grp_fu_5819_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5819_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5819_p1 = grp_fu_7382_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5819_p1 = grp_fu_7358_p2.read();
    } else {
        grp_fu_5819_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5824_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5824_p0 = grp_fu_5774_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5824_p0 = grp_fu_5794_p2.read();
    } else {
        grp_fu_5824_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5824_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5824_p1 = grp_fu_7388_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5824_p1 = grp_fu_7364_p2.read();
    } else {
        grp_fu_5824_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5829_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5829_p0 = grp_fu_5779_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5829_p0 = grp_fu_5799_p2.read();
    } else {
        grp_fu_5829_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5829_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5829_p1 = grp_fu_7394_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5829_p1 = grp_fu_7370_p2.read();
    } else {
        grp_fu_5829_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5834_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5834_p0 = grp_fu_5784_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5834_p0 = grp_fu_5804_p2.read();
    } else {
        grp_fu_5834_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5834_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5834_p1 = grp_fu_7400_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5834_p1 = grp_fu_7376_p2.read();
    } else {
        grp_fu_5834_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5839_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5839_p0 = grp_fu_5789_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5839_p0 = grp_fu_5809_p2.read();
    } else {
        grp_fu_5839_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5839_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5839_p1 = grp_fu_7406_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5839_p1 = grp_fu_7382_p2.read();
    } else {
        grp_fu_5839_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5844_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5844_p0 = grp_fu_5794_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5844_p0 = grp_fu_5814_p2.read();
    } else {
        grp_fu_5844_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5844_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5844_p1 = grp_fu_7412_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5844_p1 = grp_fu_7388_p2.read();
    } else {
        grp_fu_5844_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5849_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5849_p0 = grp_fu_5799_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5849_p0 = grp_fu_5819_p2.read();
    } else {
        grp_fu_5849_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5849_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5849_p1 = grp_fu_7418_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5849_p1 = grp_fu_7394_p2.read();
    } else {
        grp_fu_5849_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5854_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5854_p0 = grp_fu_5804_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5854_p0 = grp_fu_5824_p2.read();
    } else {
        grp_fu_5854_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5854_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5854_p1 = grp_fu_7424_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5854_p1 = grp_fu_7400_p2.read();
    } else {
        grp_fu_5854_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5859_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5859_p0 = grp_fu_5809_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5859_p0 = grp_fu_5829_p2.read();
    } else {
        grp_fu_5859_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5859_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5859_p1 = grp_fu_7430_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5859_p1 = grp_fu_7406_p2.read();
    } else {
        grp_fu_5859_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5864_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5864_p0 = grp_fu_5814_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5864_p0 = grp_fu_5834_p2.read();
    } else {
        grp_fu_5864_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5864_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5864_p1 = grp_fu_7436_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5864_p1 = grp_fu_7412_p2.read();
    } else {
        grp_fu_5864_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5869_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5869_p0 = grp_fu_5819_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5869_p0 = grp_fu_5839_p2.read();
    } else {
        grp_fu_5869_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5869_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5869_p1 = grp_fu_7442_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5869_p1 = grp_fu_7418_p2.read();
    } else {
        grp_fu_5869_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5874_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5874_p0 = grp_fu_5824_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5874_p0 = grp_fu_5844_p2.read();
    } else {
        grp_fu_5874_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5874_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5874_p1 = grp_fu_7448_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5874_p1 = grp_fu_7424_p2.read();
    } else {
        grp_fu_5874_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5879_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5879_p0 = grp_fu_5829_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5879_p0 = grp_fu_5849_p2.read();
    } else {
        grp_fu_5879_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5879_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5879_p1 = grp_fu_7454_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5879_p1 = grp_fu_7430_p2.read();
    } else {
        grp_fu_5879_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5884_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5884_p0 = grp_fu_5834_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5884_p0 = grp_fu_5854_p2.read();
    } else {
        grp_fu_5884_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5884_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5884_p1 = grp_fu_7460_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5884_p1 = grp_fu_7436_p2.read();
    } else {
        grp_fu_5884_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5889_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5889_p0 = grp_fu_5839_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5889_p0 = grp_fu_5859_p2.read();
    } else {
        grp_fu_5889_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5889_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5889_p1 = grp_fu_7466_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5889_p1 = grp_fu_7442_p2.read();
    } else {
        grp_fu_5889_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5894_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5894_p0 = grp_fu_5844_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5894_p0 = grp_fu_5864_p2.read();
    } else {
        grp_fu_5894_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5894_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5894_p1 = grp_fu_7472_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5894_p1 = grp_fu_7448_p2.read();
    } else {
        grp_fu_5894_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5899_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5899_p0 = grp_fu_5849_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5899_p0 = grp_fu_5869_p2.read();
    } else {
        grp_fu_5899_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5899_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5899_p1 = grp_fu_7478_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5899_p1 = grp_fu_7454_p2.read();
    } else {
        grp_fu_5899_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5904_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5904_p0 = grp_fu_5854_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5904_p0 = grp_fu_5874_p2.read();
    } else {
        grp_fu_5904_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5904_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5904_p1 = grp_fu_7484_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5904_p1 = grp_fu_7460_p2.read();
    } else {
        grp_fu_5904_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5909_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5909_p0 = grp_fu_5859_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5909_p0 = grp_fu_5879_p2.read();
    } else {
        grp_fu_5909_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5909_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5909_p1 = grp_fu_7490_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5909_p1 = grp_fu_7466_p2.read();
    } else {
        grp_fu_5909_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5914_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5914_p0 = grp_fu_5864_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5914_p0 = grp_fu_5884_p2.read();
    } else {
        grp_fu_5914_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5914_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5914_p1 = grp_fu_7496_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5914_p1 = grp_fu_7472_p2.read();
    } else {
        grp_fu_5914_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5919_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5919_p0 = grp_fu_5869_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5919_p0 = grp_fu_5889_p2.read();
    } else {
        grp_fu_5919_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5919_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5919_p1 = grp_fu_7502_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5919_p1 = grp_fu_7478_p2.read();
    } else {
        grp_fu_5919_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5924_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5924_p0 = grp_fu_5874_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5924_p0 = grp_fu_5894_p2.read();
    } else {
        grp_fu_5924_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5924_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5924_p1 = grp_fu_7508_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5924_p1 = grp_fu_7484_p2.read();
    } else {
        grp_fu_5924_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5929_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5929_p0 = grp_fu_5879_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5929_p0 = grp_fu_5899_p2.read();
    } else {
        grp_fu_5929_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5929_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5929_p1 = grp_fu_7514_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5929_p1 = grp_fu_7490_p2.read();
    } else {
        grp_fu_5929_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5934_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5934_p0 = grp_fu_5884_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5934_p0 = grp_fu_5904_p2.read();
    } else {
        grp_fu_5934_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5934_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5934_p1 = grp_fu_7520_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5934_p1 = grp_fu_7496_p2.read();
    } else {
        grp_fu_5934_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5939_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5939_p0 = grp_fu_5889_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5939_p0 = grp_fu_5909_p2.read();
    } else {
        grp_fu_5939_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5939_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5939_p1 = grp_fu_7526_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5939_p1 = grp_fu_7502_p2.read();
    } else {
        grp_fu_5939_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5944_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5944_p0 = grp_fu_5894_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5944_p0 = grp_fu_5914_p2.read();
    } else {
        grp_fu_5944_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5944_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5944_p1 = grp_fu_7532_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5944_p1 = grp_fu_7508_p2.read();
    } else {
        grp_fu_5944_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5949_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5949_p0 = grp_fu_5899_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5949_p0 = grp_fu_5919_p2.read();
    } else {
        grp_fu_5949_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5949_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5949_p1 = grp_fu_7538_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5949_p1 = grp_fu_7514_p2.read();
    } else {
        grp_fu_5949_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5954_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5954_p0 = grp_fu_5904_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5954_p0 = grp_fu_5924_p2.read();
    } else {
        grp_fu_5954_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5954_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5954_p1 = grp_fu_7544_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5954_p1 = grp_fu_7520_p2.read();
    } else {
        grp_fu_5954_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5959_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5959_p0 = grp_fu_5909_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5959_p0 = grp_fu_5929_p2.read();
    } else {
        grp_fu_5959_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5959_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5959_p1 = grp_fu_7551_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5959_p1 = grp_fu_7526_p2.read();
    } else {
        grp_fu_5959_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5964_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5964_p0 = grp_fu_5914_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5964_p0 = grp_fu_5934_p2.read();
    } else {
        grp_fu_5964_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5964_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5964_p1 = grp_fu_7558_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5964_p1 = grp_fu_7532_p2.read();
    } else {
        grp_fu_5964_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5969_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5969_p0 = grp_fu_5919_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5969_p0 = grp_fu_5939_p2.read();
    } else {
        grp_fu_5969_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5969_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5969_p1 = grp_fu_7565_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5969_p1 = grp_fu_7538_p2.read();
    } else {
        grp_fu_5969_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5974_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5974_p0 = grp_fu_5924_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5974_p0 = grp_fu_5944_p2.read();
    } else {
        grp_fu_5974_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5974_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5974_p1 = grp_fu_7572_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5974_p1 = grp_fu_7544_p2.read();
    } else {
        grp_fu_5974_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5979_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5979_p0 = grp_fu_5929_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5979_p0 = grp_fu_5949_p2.read();
    } else {
        grp_fu_5979_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5979_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5979_p1 = grp_fu_7579_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5979_p1 = grp_fu_7551_p2.read();
    } else {
        grp_fu_5979_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5984_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5984_p0 = grp_fu_5934_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5984_p0 = grp_fu_5954_p2.read();
    } else {
        grp_fu_5984_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5984_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5984_p1 = tmp_6_3_7_fu_7880_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5984_p1 = grp_fu_7558_p2.read();
    } else {
        grp_fu_5984_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5989_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5989_p0 = grp_fu_5939_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5989_p0 = grp_fu_5959_p2.read();
    } else {
        grp_fu_5989_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5989_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5989_p1 = tmp_6_3_7_1_fu_7886_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5989_p1 = grp_fu_7565_p2.read();
    } else {
        grp_fu_5989_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5994_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5994_p0 = grp_fu_5944_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5994_p0 = grp_fu_5964_p2.read();
    } else {
        grp_fu_5994_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5994_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5994_p1 = tmp_6_3_7_2_fu_7892_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5994_p1 = grp_fu_7572_p2.read();
    } else {
        grp_fu_5994_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5999_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5999_p0 = grp_fu_5949_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5999_p0 = grp_fu_5969_p2.read();
    } else {
        grp_fu_5999_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5999_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_5999_p1 = tmp_6_3_7_3_fu_7898_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5999_p1 = grp_fu_7579_p2.read();
    } else {
        grp_fu_5999_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6004_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6004_p0 = grp_fu_5954_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6004_p0 = grp_fu_5974_p2.read();
    } else {
        grp_fu_6004_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6004_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6004_p1 = tmp_6_3_7_4_fu_7904_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6004_p1 = ap_const_lv32_BF0DBB74;
    } else {
        grp_fu_6004_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6010_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6010_p0 = grp_fu_5959_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6010_p0 = grp_fu_5979_p2.read();
    } else {
        grp_fu_6010_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6010_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6010_p1 = tmp_6_3_7_5_fu_7910_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6010_p1 = ap_const_lv32_BDA8D161;
    } else {
        grp_fu_6010_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6016_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6016_p0 = grp_fu_5964_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6016_p0 = grp_fu_5984_p2.read();
    } else {
        grp_fu_6016_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6016_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6016_p1 = tmp_6_3_7_6_fu_7916_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6016_p1 = ap_const_lv32_BD1C2B57;
    } else {
        grp_fu_6016_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6022_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6022_p0 = grp_fu_5969_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6022_p0 = grp_fu_5989_p2.read();
    } else {
        grp_fu_6022_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6022_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6022_p1 = tmp_6_3_7_7_fu_7922_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6022_p1 = ap_const_lv32_BD73D794;
    } else {
        grp_fu_6022_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6028_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6028_p0 = grp_fu_5974_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6028_p0 = grp_fu_5994_p2.read();
    } else {
        grp_fu_6028_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6028_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6028_p1 = tmp_6_3_7_8_fu_7928_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6028_p1 = ap_const_lv32_BDBF019F;
    } else {
        grp_fu_6028_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6034_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6034_p0 = grp_fu_5979_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6034_p0 = grp_fu_5999_p2.read();
    } else {
        grp_fu_6034_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6034_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_6034_p1 = tmp_6_3_7_9_fu_7934_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6034_p1 = ap_const_lv32_BDFEC6F5;
    } else {
        grp_fu_6034_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6680_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6680_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6680_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6680_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6680_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6680_p1 = conv2_weights_0_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6680_p1 = ap_const_lv32_3E09F9D1;
    } else {
        grp_fu_6680_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6686_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6686_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6686_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6686_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6686_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6686_p1 = conv2_weights_1_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6686_p1 = ap_const_lv32_BCC361EF;
    } else {
        grp_fu_6686_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6692_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6692_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6692_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6692_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6692_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6692_p1 = conv2_weights_2_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6692_p1 = ap_const_lv32_BCB8C7EC;
    } else {
        grp_fu_6692_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6698_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6698_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6698_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6698_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6698_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6698_p1 = conv2_weights_3_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6698_p1 = ap_const_lv32_3C73FB6D;
    } else {
        grp_fu_6698_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6704_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6704_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6704_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6704_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6704_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6704_p1 = conv2_weights_4_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6704_p1 = ap_const_lv32_BF09989D;
    } else {
        grp_fu_6704_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6710_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6710_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6710_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6710_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6710_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6710_p1 = conv2_weights_5_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6710_p1 = ap_const_lv32_BE14A219;
    } else {
        grp_fu_6710_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6716_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6716_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6716_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6716_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6716_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6716_p1 = conv2_weights_6_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6716_p1 = ap_const_lv32_3F2ACFFE;
    } else {
        grp_fu_6716_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6722_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6722_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6722_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6722_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6722_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6722_p1 = conv2_weights_7_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6722_p1 = ap_const_lv32_BCFF4468;
    } else {
        grp_fu_6722_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6728_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6728_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6728_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6728_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6728_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6728_p1 = conv2_weights_8_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6728_p1 = ap_const_lv32_3D95A3B4;
    } else {
        grp_fu_6728_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6734_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6734_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6734_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6734_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6734_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6734_p1 = conv2_weights_9_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6734_p1 = ap_const_lv32_BC44EAD7;
    } else {
        grp_fu_6734_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6740_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6740_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6740_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6740_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6740_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6740_p1 = conv2_weights_0_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6740_p1 = ap_const_lv32_BF0D760E;
    } else {
        grp_fu_6740_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6746_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6746_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6746_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6746_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6746_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6746_p1 = conv2_weights_1_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6746_p1 = ap_const_lv32_BDC17026;
    } else {
        grp_fu_6746_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6752_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6752_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6752_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6752_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6752_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6752_p1 = conv2_weights_2_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6752_p1 = ap_const_lv32_3E912C13;
    } else {
        grp_fu_6752_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6758_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6758_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6758_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6758_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6758_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6758_p1 = conv2_weights_3_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6758_p1 = ap_const_lv32_3E9E3D0A;
    } else {
        grp_fu_6758_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6764_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6764_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6764_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6764_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6764_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6764_p1 = conv2_weights_4_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6764_p1 = ap_const_lv32_BEF4A4F4;
    } else {
        grp_fu_6764_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6770_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6770_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6770_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6770_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6770_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6770_p1 = conv2_weights_5_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6770_p1 = ap_const_lv32_3DDAAA02;
    } else {
        grp_fu_6770_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6776_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6776_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6776_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6776_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6776_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6776_p1 = conv2_weights_6_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6776_p1 = ap_const_lv32_BEFE323B;
    } else {
        grp_fu_6776_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6782_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6782_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6782_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6782_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6782_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6782_p1 = conv2_weights_7_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6782_p1 = ap_const_lv32_BE53BF13;
    } else {
        grp_fu_6782_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6788_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6788_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6788_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6788_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6788_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6788_p1 = conv2_weights_8_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6788_p1 = ap_const_lv32_BE99528E;
    } else {
        grp_fu_6788_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6794_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6794_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6794_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6794_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

}

