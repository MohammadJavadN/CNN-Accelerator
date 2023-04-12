#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_add_ln122_1_fu_11695_p2() {
    add_ln122_1_fu_11695_p2 = (!select_ln91_reg_13332.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln91_reg_13332.read()) + sc_biguint<4>(ap_const_lv4_C));
}

void cnn::thread_add_ln122_2_fu_11104_p2() {
    add_ln122_2_fu_11104_p2 = (!ap_const_lv4_C.is_01() || !ap_phi_mux_row_0_i49_phi_fu_5204_p4.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_C) + sc_biguint<4>(ap_phi_mux_row_0_i49_phi_fu_5204_p4.read()));
}

void cnn::thread_add_ln122_3_fu_11704_p2() {
    add_ln122_3_fu_11704_p2 = (!sext_ln87_fu_11417_p1.read().is_01() || !zext_ln122_fu_11700_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln87_fu_11417_p1.read()) + sc_biguint<8>(zext_ln122_fu_11700_p1.read()));
}

void cnn::thread_add_ln122_fu_11098_p2() {
    add_ln122_fu_11098_p2 = (!ap_const_lv4_D.is_01() || !select_ln22_fu_11001_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_D) + sc_biguint<4>(select_ln22_fu_11001_p3.read()));
}

void cnn::thread_add_ln20_1_fu_10559_p2() {
    add_ln20_1_fu_10559_p2 = (!phi_ln20_1_reg_5144.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(phi_ln20_1_reg_5144.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_add_ln20_2_fu_10565_p2() {
    add_ln20_2_fu_10565_p2 = (!phi_ln20_2_reg_5156.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(phi_ln20_2_reg_5156.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_add_ln20_fu_10553_p2() {
    add_ln20_fu_10553_p2 = (!phi_ln20_reg_5132.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln20_reg_5132.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_add_ln21_fu_10617_p2() {
    add_ln21_fu_10617_p2 = (!indvar_flatten281_reg_5167.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten281_reg_5167.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void cnn::thread_add_ln24_1_fu_8543_p2() {
    add_ln24_1_fu_8543_p2 = (!indvar_flatten_reg_5087.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten_reg_5087.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void cnn::thread_add_ln24_fu_9814_p2() {
    add_ln24_fu_9814_p2 = (!zext_ln24_fu_9811_p1.read().is_01() || !ap_const_lv6_3C.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln24_fu_9811_p1.read()) + sc_bigint<6>(ap_const_lv6_3C));
}

void cnn::thread_add_ln59_1_fu_10219_p2() {
    add_ln59_1_fu_10219_p2 = (!sub_ln59_fu_9840_p2.read().is_01() || !zext_ln59_fu_10215_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln59_fu_9840_p2.read()) + sc_biguint<11>(zext_ln59_fu_10215_p1.read()));
}

void cnn::thread_add_ln59_fu_10210_p2() {
    add_ln59_fu_10210_p2 = (!ap_const_lv5_1C.is_01() || !select_ln24_reg_11844.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1C) + sc_biguint<5>(select_ln24_reg_11844.read()));
}

void cnn::thread_add_ln87_fu_10737_p2() {
    add_ln87_fu_10737_p2 = (!indvar_flatten11_reg_5189.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten11_reg_5189.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void cnn::thread_add_ln91_1_fu_11424_p2() {
    add_ln91_1_fu_11424_p2 = (!zext_ln91_3_fu_11421_p1.read().is_01() || !sub_ln91_1_fu_11404_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln91_3_fu_11421_p1.read()) + sc_biguint<11>(sub_ln91_1_fu_11404_p2.read()));
}

void cnn::thread_add_ln91_fu_11374_p2() {
    add_ln91_fu_11374_p2 = (!zext_ln91_2_fu_11371_p1.read().is_01() || !sub_ln91_fu_11365_p2.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln91_2_fu_11371_p1.read()) + sc_biguint<64>(sub_ln91_fu_11365_p2.read()));
}

void cnn::thread_and_ln115_fu_11331_p2() {
    and_ln115_fu_11331_p2 = (select_ln91_2_fu_11090_p3.read() & icmp_ln115_2_fu_11325_p2.read());
}

void cnn::thread_and_ln22_2_fu_11041_p2() {
    and_ln22_2_fu_11041_p2 = (icmp_ln88_fu_11035_p2.read() & xor_ln22_fu_11008_p2.read());
}

void cnn::thread_and_ln22_fu_11029_p2() {
    and_ln22_fu_11029_p2 = (icmp_ln115_fu_11023_p2.read() & xor_ln22_fu_11008_p2.read());
}

void cnn::thread_and_ln52_fu_9799_p2() {
    and_ln52_fu_9799_p2 = (select_ln24_1_fu_8601_p3.read() & icmp_ln52_2_fu_9793_p2.read());
}

void cnn::thread_and_ln5_1_fu_10322_p2() {
    and_ln5_1_fu_10322_p2 = (or_ln5_1_fu_10316_p2.read() & tmp_9_fu_8483_p2.read());
}

void cnn::thread_and_ln5_2_fu_10373_p2() {
    and_ln5_2_fu_10373_p2 = (or_ln5_2_fu_10367_p2.read() & tmp_11_fu_8489_p2.read());
}

void cnn::thread_and_ln5_3_fu_10424_p2() {
    and_ln5_3_fu_10424_p2 = (or_ln5_3_fu_10418_p2.read() & tmp_13_fu_8495_p2.read());
}

void cnn::thread_and_ln5_4_fu_10475_p2() {
    and_ln5_4_fu_10475_p2 = (or_ln5_4_fu_10469_p2.read() & tmp_15_fu_8501_p2.read());
}

void cnn::thread_and_ln5_5_fu_10526_p2() {
    and_ln5_5_fu_10526_p2 = (or_ln5_5_fu_10520_p2.read() & tmp_17_fu_8507_p2.read());
}

void cnn::thread_and_ln5_fu_10271_p2() {
    and_ln5_fu_10271_p2 = (or_ln5_fu_10265_p2.read() & tmp_6_fu_8477_p2.read());
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

void cnn::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[12];
}

void cnn::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void cnn::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[13];
}

void cnn::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[14];
}

void cnn::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[15];
}

void cnn::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[16];
}

void cnn::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[17];
}

void cnn::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[18];
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
    ap_block_pp0_stage0_00001 = (esl_seteq<1,1,1>(ap_const_logic_0, norm_img_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void cnn::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, norm_img_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
}

void cnn::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_0, norm_img_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()));
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

void cnn::thread_ap_block_state17_pp1_stage0_iter4() {
    ap_block_state17_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state18_pp1_stage0_iter5() {
    ap_block_state18_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state3() {
    ap_block_state3 = (esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read()));
}

void cnn::thread_ap_block_state5_pp0_stage0_iter0() {
    ap_block_state5_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state6_pp0_stage0_iter1() {
    ap_block_state6_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_logic_0, norm_img_V_empty_n.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()));
}

void cnn::thread_ap_condition_pp0_exit_iter0_state5() {
    if (esl_seteq<1,1,1>(icmp_ln24_fu_8537_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state5 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state5 = ap_const_logic_0;
    }
}

void cnn::thread_ap_condition_pp1_exit_iter0_state13() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln21_fu_10611_p2.read())) {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_0;
    }
}

void cnn::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter5.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void cnn::thread_ap_phi_mux_col_0_i51_phi_fu_5216_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_reg_11929_pp1_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        ap_phi_mux_col_0_i51_phi_fu_5216_p4 = col_1_reg_13403.read();
    } else {
        ap_phi_mux_col_0_i51_phi_fu_5216_p4 = col_0_i51_reg_5212.read();
    }
}

void cnn::thread_ap_phi_mux_f_0_phi_fu_5182_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_reg_11929.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_0_phi_fu_5182_p4 = select_ln22_2_reg_11946.read();
    } else {
        ap_phi_mux_f_0_phi_fu_5182_p4 = f_0_reg_5178.read();
    }
}

void cnn::thread_ap_phi_mux_row_0_i49_phi_fu_5204_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_reg_11929_pp1_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        ap_phi_mux_row_0_i49_phi_fu_5204_p4 = select_ln91_1_reg_13338.read();
    } else {
        ap_phi_mux_row_0_i49_phi_fu_5204_p4 = row_0_i49_reg_5200.read();
    }
}

void cnn::thread_ap_phi_mux_row_0_i_phi_fu_5102_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        ap_phi_mux_row_0_i_phi_fu_5102_p4 = select_ln24_2_reg_11849.read();
    } else {
        ap_phi_mux_row_0_i_phi_fu_5102_p4 = row_0_i_reg_5098.read();
    }
}

void cnn::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
         esl_seteq<1,1,1>(grp_dense_layer_fu_5236_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_1_107_load() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        ap_sig_allocacmp_linebuf_1_107_load = linebuf_1_108.read();
    } else {
        ap_sig_allocacmp_linebuf_1_107_load = linebuf_1_107.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_22_load() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_reg_11929_pp1_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_sig_allocacmp_linebuf_22_load = linebuf_23.read();
    } else {
        ap_sig_allocacmp_linebuf_22_load = linebuf_22.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_35_load() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_reg_11929_pp1_iter3_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        ap_sig_allocacmp_linebuf_35_load = linebuf_36.read();
    } else {
        ap_sig_allocacmp_linebuf_35_load = linebuf_35.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_55_load() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_reg_11929_pp1_iter4_reg.read()))) {
        ap_sig_allocacmp_linebuf_55_load = linebuf_56.read();
    } else {
        ap_sig_allocacmp_linebuf_55_load = linebuf_55.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_9_load() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln21_reg_11929_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_sig_allocacmp_linebuf_9_load = linebuf_10.read();
    } else {
        ap_sig_allocacmp_linebuf_9_load = linebuf_9.read();
    }
}

void cnn::thread_bitcast_ln5_1_fu_10286_p1() {
    bitcast_ln5_1_fu_10286_p1 = grp_fu_6010_p2.read();
}

void cnn::thread_bitcast_ln5_2_fu_10337_p1() {
    bitcast_ln5_2_fu_10337_p1 = grp_fu_6016_p2.read();
}

void cnn::thread_bitcast_ln5_3_fu_10388_p1() {
    bitcast_ln5_3_fu_10388_p1 = grp_fu_6022_p2.read();
}

void cnn::thread_bitcast_ln5_4_fu_10439_p1() {
    bitcast_ln5_4_fu_10439_p1 = grp_fu_6028_p2.read();
}

void cnn::thread_bitcast_ln5_5_fu_10490_p1() {
    bitcast_ln5_5_fu_10490_p1 = grp_fu_6034_p2.read();
}

void cnn::thread_bitcast_ln5_fu_10235_p1() {
    bitcast_ln5_fu_10235_p1 = grp_fu_6004_p2.read();
}

void cnn::thread_c_fu_8531_p2() {
    c_fu_8531_p2 = (!c_0_i_reg_5076.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(c_0_i_reg_5076.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_col_1_fu_11337_p2() {
    col_1_fu_11337_p2 = (!select_ln91_fu_11058_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln91_fu_11058_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_col_fu_9805_p2() {
    col_fu_9805_p2 = (!select_ln24_fu_8561_p3.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(select_ln24_fu_8561_p3.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_conv2_biases_address0() {
    conv2_biases_address0 =  (sc_lv<4>) (zext_ln83_fu_11802_p1.read());
}

void cnn::thread_conv2_biases_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        conv2_biases_ce0 = ap_const_logic_1;
    } else {
        conv2_biases_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_0_0_address0() {
    conv2_weights_0_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_0_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_0_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_0_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_0_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_0_4_address0() {
    conv2_weights_0_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_0_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_1_0_address0() {
    conv2_weights_0_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_0_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_1_1_address0() {
    conv2_weights_0_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_0_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_0_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_1_2_address0() {
    conv2_weights_0_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_0_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_0_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_0_address0() {
    conv2_weights_0_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_1_address0() {
    conv2_weights_0_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_2_address0() {
    conv2_weights_0_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_3_address0() {
    conv2_weights_0_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_2_4_address0() {
    conv2_weights_0_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_0_address0() {
    conv2_weights_0_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_1_address0() {
    conv2_weights_0_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_2_address0() {
    conv2_weights_0_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_3_address0() {
    conv2_weights_0_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_4_address0() {
    conv2_weights_0_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_0_address0() {
    conv2_weights_0_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_1_address0() {
    conv2_weights_0_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_0_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_0_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_2_address0() {
    conv2_weights_0_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_0_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_0_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_3_address0() {
    conv2_weights_0_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_0_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_0_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_4_address0() {
    conv2_weights_0_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_0_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_0_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_0_0_address0() {
    conv2_weights_1_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_1_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_1_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_1_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_1_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_0_4_address0() {
    conv2_weights_1_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_1_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_1_0_address0() {
    conv2_weights_1_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_1_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_1_1_address0() {
    conv2_weights_1_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_1_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_1_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_1_2_address0() {
    conv2_weights_1_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_1_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_1_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_0_address0() {
    conv2_weights_1_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_1_address0() {
    conv2_weights_1_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_2_address0() {
    conv2_weights_1_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_3_address0() {
    conv2_weights_1_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_2_4_address0() {
    conv2_weights_1_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_0_address0() {
    conv2_weights_1_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_1_address0() {
    conv2_weights_1_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_2_address0() {
    conv2_weights_1_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_3_address0() {
    conv2_weights_1_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_4_address0() {
    conv2_weights_1_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_0_address0() {
    conv2_weights_1_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_1_address0() {
    conv2_weights_1_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_1_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_1_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_2_address0() {
    conv2_weights_1_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_1_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_1_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_3_address0() {
    conv2_weights_1_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_1_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_1_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_4_address0() {
    conv2_weights_1_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_1_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_1_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_0_0_address0() {
    conv2_weights_2_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_2_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_2_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_2_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_2_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_0_4_address0() {
    conv2_weights_2_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_2_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_1_0_address0() {
    conv2_weights_2_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_2_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_1_1_address0() {
    conv2_weights_2_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_2_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_2_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_1_2_address0() {
    conv2_weights_2_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_2_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_2_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_0_address0() {
    conv2_weights_2_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_1_address0() {
    conv2_weights_2_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_2_address0() {
    conv2_weights_2_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_3_address0() {
    conv2_weights_2_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_2_4_address0() {
    conv2_weights_2_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_0_address0() {
    conv2_weights_2_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_1_address0() {
    conv2_weights_2_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_2_address0() {
    conv2_weights_2_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_3_address0() {
    conv2_weights_2_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_4_address0() {
    conv2_weights_2_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_0_address0() {
    conv2_weights_2_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_1_address0() {
    conv2_weights_2_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_2_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_2_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_2_address0() {
    conv2_weights_2_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_2_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_2_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_3_address0() {
    conv2_weights_2_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_2_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_2_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_4_address0() {
    conv2_weights_2_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_2_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_2_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_0_0_address0() {
    conv2_weights_3_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_3_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_3_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_3_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_3_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_0_4_address0() {
    conv2_weights_3_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_3_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_1_0_address0() {
    conv2_weights_3_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_3_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_1_1_address0() {
    conv2_weights_3_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_3_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_3_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_1_2_address0() {
    conv2_weights_3_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_3_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_3_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_0_address0() {
    conv2_weights_3_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_1_address0() {
    conv2_weights_3_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_2_address0() {
    conv2_weights_3_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_3_address0() {
    conv2_weights_3_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_2_4_address0() {
    conv2_weights_3_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_0_address0() {
    conv2_weights_3_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_1_address0() {
    conv2_weights_3_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_2_address0() {
    conv2_weights_3_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_3_address0() {
    conv2_weights_3_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_4_address0() {
    conv2_weights_3_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_0_address0() {
    conv2_weights_3_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_1_address0() {
    conv2_weights_3_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_3_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_3_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_2_address0() {
    conv2_weights_3_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_3_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_3_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_3_address0() {
    conv2_weights_3_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_3_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_3_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_4_address0() {
    conv2_weights_3_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_3_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_3_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_0_0_address0() {
    conv2_weights_4_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_4_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_4_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_4_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_4_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_0_4_address0() {
    conv2_weights_4_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_4_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_1_0_address0() {
    conv2_weights_4_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_4_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_1_1_address0() {
    conv2_weights_4_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_4_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_4_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_1_2_address0() {
    conv2_weights_4_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_4_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_4_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_0_address0() {
    conv2_weights_4_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_1_address0() {
    conv2_weights_4_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_2_address0() {
    conv2_weights_4_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_3_address0() {
    conv2_weights_4_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_2_4_address0() {
    conv2_weights_4_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_0_address0() {
    conv2_weights_4_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_1_address0() {
    conv2_weights_4_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_2_address0() {
    conv2_weights_4_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_3_address0() {
    conv2_weights_4_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_4_address0() {
    conv2_weights_4_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_0_address0() {
    conv2_weights_4_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_1_address0() {
    conv2_weights_4_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_4_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_4_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_2_address0() {
    conv2_weights_4_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_4_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_4_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_3_address0() {
    conv2_weights_4_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_4_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_4_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_4_address0() {
    conv2_weights_4_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_4_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_4_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_0_0_address0() {
    conv2_weights_5_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_5_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_5_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_5_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_5_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_0_4_address0() {
    conv2_weights_5_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_5_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_1_0_address0() {
    conv2_weights_5_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_5_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_1_1_address0() {
    conv2_weights_5_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_5_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_5_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_1_2_address0() {
    conv2_weights_5_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_5_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_5_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_0_address0() {
    conv2_weights_5_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_1_address0() {
    conv2_weights_5_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_2_address0() {
    conv2_weights_5_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_3_address0() {
    conv2_weights_5_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_2_4_address0() {
    conv2_weights_5_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_0_address0() {
    conv2_weights_5_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_1_address0() {
    conv2_weights_5_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_2_address0() {
    conv2_weights_5_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_3_address0() {
    conv2_weights_5_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_4_address0() {
    conv2_weights_5_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_0_address0() {
    conv2_weights_5_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_1_address0() {
    conv2_weights_5_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_5_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_5_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_2_address0() {
    conv2_weights_5_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_5_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_5_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_3_address0() {
    conv2_weights_5_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_5_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_5_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_4_address0() {
    conv2_weights_5_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_5_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_5_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_0_0_address0() {
    conv2_weights_6_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_6_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_6_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_6_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_6_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_0_4_address0() {
    conv2_weights_6_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_6_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_1_0_address0() {
    conv2_weights_6_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_6_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_1_1_address0() {
    conv2_weights_6_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_6_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_6_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_1_2_address0() {
    conv2_weights_6_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_6_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_6_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_0_address0() {
    conv2_weights_6_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_1_address0() {
    conv2_weights_6_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_2_address0() {
    conv2_weights_6_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_3_address0() {
    conv2_weights_6_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_2_4_address0() {
    conv2_weights_6_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_0_address0() {
    conv2_weights_6_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_1_address0() {
    conv2_weights_6_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_2_address0() {
    conv2_weights_6_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_3_address0() {
    conv2_weights_6_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_4_address0() {
    conv2_weights_6_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_0_address0() {
    conv2_weights_6_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_1_address0() {
    conv2_weights_6_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_6_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_6_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_2_address0() {
    conv2_weights_6_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_6_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_6_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_3_address0() {
    conv2_weights_6_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_6_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_6_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_4_address0() {
    conv2_weights_6_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_6_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_6_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_0_0_address0() {
    conv2_weights_7_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_7_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_7_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_7_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_7_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_0_4_address0() {
    conv2_weights_7_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_7_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_1_0_address0() {
    conv2_weights_7_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_7_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_1_1_address0() {
    conv2_weights_7_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_7_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_7_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_1_2_address0() {
    conv2_weights_7_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_7_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_7_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_0_address0() {
    conv2_weights_7_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_1_address0() {
    conv2_weights_7_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_2_address0() {
    conv2_weights_7_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_3_address0() {
    conv2_weights_7_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_2_4_address0() {
    conv2_weights_7_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_0_address0() {
    conv2_weights_7_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_1_address0() {
    conv2_weights_7_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_2_address0() {
    conv2_weights_7_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_3_address0() {
    conv2_weights_7_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_4_address0() {
    conv2_weights_7_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_0_address0() {
    conv2_weights_7_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_1_address0() {
    conv2_weights_7_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_7_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_7_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_2_address0() {
    conv2_weights_7_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_7_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_7_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_3_address0() {
    conv2_weights_7_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_7_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_7_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_4_address0() {
    conv2_weights_7_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_7_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_7_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_0_0_address0() {
    conv2_weights_8_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_8_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_8_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_8_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_8_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_0_4_address0() {
    conv2_weights_8_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_8_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_1_0_address0() {
    conv2_weights_8_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_8_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_1_1_address0() {
    conv2_weights_8_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_8_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_8_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_1_2_address0() {
    conv2_weights_8_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_8_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_8_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_0_address0() {
    conv2_weights_8_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_1_address0() {
    conv2_weights_8_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_2_address0() {
    conv2_weights_8_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_3_address0() {
    conv2_weights_8_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_2_4_address0() {
    conv2_weights_8_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_0_address0() {
    conv2_weights_8_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_1_address0() {
    conv2_weights_8_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_2_address0() {
    conv2_weights_8_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_3_address0() {
    conv2_weights_8_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_4_address0() {
    conv2_weights_8_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_0_address0() {
    conv2_weights_8_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_1_address0() {
    conv2_weights_8_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_8_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_8_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_2_address0() {
    conv2_weights_8_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_8_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_8_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_3_address0() {
    conv2_weights_8_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_8_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_8_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_4_address0() {
    conv2_weights_8_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_8_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_8_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_0_0_address0() {
    conv2_weights_9_0_0_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_9_0_1_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_9_0_2_address0 =  (sc_lv<3>) (zext_ln22_fu_10643_p1.read());
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
    conv2_weights_9_0_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_9_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_0_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_0_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_0_4_address0() {
    conv2_weights_9_0_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_9_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_0_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_0_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_1_0_address0() {
    conv2_weights_9_1_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_9_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_1_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_1_1_address0() {
    conv2_weights_9_1_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
}

void cnn::thread_conv2_weights_9_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        conv2_weights_9_1_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_1_2_address0() {
    conv2_weights_9_1_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_9_1_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953.read());
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
    conv2_weights_9_1_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_1_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_0_address0() {
    conv2_weights_9_2_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_2_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_1_address0() {
    conv2_weights_9_2_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_2_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_2_address0() {
    conv2_weights_9_2_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_2_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_3_address0() {
    conv2_weights_9_2_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_2_4_address0() {
    conv2_weights_9_2_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_0_address0() {
    conv2_weights_9_3_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_1_address0() {
    conv2_weights_9_3_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_2_address0() {
    conv2_weights_9_3_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_3_address0() {
    conv2_weights_9_3_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_4_address0() {
    conv2_weights_9_3_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_0_address0() {
    conv2_weights_9_4_0_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_4_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_1_address0() {
    conv2_weights_9_4_1_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_9_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_9_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_2_address0() {
    conv2_weights_9_4_2_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_9_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_9_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_3_address0() {
    conv2_weights_9_4_3_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_9_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_9_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_4_address0() {
    conv2_weights_9_4_4_address0 =  (sc_lv<3>) (zext_ln22_reg_11953_pp1_iter3_reg.read());
}

void cnn::thread_conv2_weights_9_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        conv2_weights_9_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_f_2_fu_10623_p2() {
    f_2_fu_10623_p2 = (!ap_const_lv3_1.is_01() || !ap_phi_mux_f_0_phi_fu_5182_p4.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(ap_phi_mux_f_0_phi_fu_5182_p4.read()));
}

void cnn::thread_f_3_fu_11796_p2() {
    f_3_fu_11796_p2 = (!f_0_i68_reg_5224.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(f_0_i68_reg_5224.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_f_fu_10547_p2() {
    f_fu_10547_p2 = (!f_0_i47_reg_5120.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(f_0_i47_reg_5120.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_features_conv1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        features_conv1_0_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_0_address0 = grp_max_pool_fu_5268_feature_0_address0.read();
    } else {
        features_conv1_0_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_0_ce0 = grp_max_pool_fu_5268_feature_0_ce0.read();
    } else {
        features_conv1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_0_d0() {
    features_conv1_0_d0 = (!and_ln5_fu_10271_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_fu_10271_p2.read()[0].to_bool())? grp_fu_6004_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11885.read(), ap_const_lv1_1))) {
        features_conv1_0_we0 = ap_const_logic_1;
    } else {
        features_conv1_0_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        features_conv1_1_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_1_address0 = grp_max_pool_fu_5268_feature_1_address0.read();
    } else {
        features_conv1_1_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_1_ce0 = grp_max_pool_fu_5268_feature_1_ce0.read();
    } else {
        features_conv1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_1_d0() {
    features_conv1_1_d0 = (!and_ln5_1_fu_10322_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_1_fu_10322_p2.read()[0].to_bool())? grp_fu_6010_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11885.read(), ap_const_lv1_1))) {
        features_conv1_1_we0 = ap_const_logic_1;
    } else {
        features_conv1_1_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        features_conv1_2_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_2_address0 = grp_max_pool_fu_5268_feature_2_address0.read();
    } else {
        features_conv1_2_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_2_ce0 = grp_max_pool_fu_5268_feature_2_ce0.read();
    } else {
        features_conv1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_2_d0() {
    features_conv1_2_d0 = (!and_ln5_2_fu_10373_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_2_fu_10373_p2.read()[0].to_bool())? grp_fu_6016_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11885.read(), ap_const_lv1_1))) {
        features_conv1_2_we0 = ap_const_logic_1;
    } else {
        features_conv1_2_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        features_conv1_3_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_3_address0 = grp_max_pool_fu_5268_feature_3_address0.read();
    } else {
        features_conv1_3_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_3_ce0 = grp_max_pool_fu_5268_feature_3_ce0.read();
    } else {
        features_conv1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_3_d0() {
    features_conv1_3_d0 = (!and_ln5_3_fu_10424_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_3_fu_10424_p2.read()[0].to_bool())? grp_fu_6022_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11885.read(), ap_const_lv1_1))) {
        features_conv1_3_we0 = ap_const_logic_1;
    } else {
        features_conv1_3_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        features_conv1_4_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_4_address0 = grp_max_pool_fu_5268_feature_4_address0.read();
    } else {
        features_conv1_4_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_4_ce0 = grp_max_pool_fu_5268_feature_4_ce0.read();
    } else {
        features_conv1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_4_d0() {
    features_conv1_4_d0 = (!and_ln5_4_fu_10475_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_4_fu_10475_p2.read()[0].to_bool())? grp_fu_6028_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11885.read(), ap_const_lv1_1))) {
        features_conv1_4_we0 = ap_const_logic_1;
    } else {
        features_conv1_4_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        features_conv1_5_address0 =  (sc_lv<10>) (sext_ln59_1_fu_10225_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_5_address0 = grp_max_pool_fu_5268_feature_5_address0.read();
    } else {
        features_conv1_5_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        features_conv1_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        features_conv1_5_ce0 = grp_max_pool_fu_5268_feature_5_ce0.read();
    } else {
        features_conv1_5_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_5_d0() {
    features_conv1_5_d0 = (!and_ln5_5_fu_10526_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln5_5_fu_10526_p2.read()[0].to_bool())? grp_fu_6034_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(and_ln52_reg_11885.read(), ap_const_lv1_1))) {
        features_conv1_5_we0 = ap_const_logic_1;
    } else {
        features_conv1_5_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_0_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_0_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_0_address0 = grp_max_pool2_fu_5248_feature_0_address0.read();
    } else {
        features_conv2_0_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_0_ce0 = grp_max_pool2_fu_5248_feature_0_ce0.read();
    } else {
        features_conv2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_0_we1 = ap_const_logic_1;
    } else {
        features_conv2_0_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_1_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_1_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_1_address0 = grp_max_pool2_fu_5248_feature_1_address0.read();
    } else {
        features_conv2_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_1_ce0 = grp_max_pool2_fu_5248_feature_1_ce0.read();
    } else {
        features_conv2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_1_we1 = ap_const_logic_1;
    } else {
        features_conv2_1_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_2_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_2_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_2_address0 = grp_max_pool2_fu_5248_feature_2_address0.read();
    } else {
        features_conv2_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_2_ce0 = grp_max_pool2_fu_5248_feature_2_ce0.read();
    } else {
        features_conv2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_2_we1 = ap_const_logic_1;
    } else {
        features_conv2_2_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_3_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_3_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_3_address0 = grp_max_pool2_fu_5248_feature_3_address0.read();
    } else {
        features_conv2_3_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_3_ce0 = grp_max_pool2_fu_5248_feature_3_ce0.read();
    } else {
        features_conv2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_3_we1 = ap_const_logic_1;
    } else {
        features_conv2_3_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_4_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_4_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_4_address0 = grp_max_pool2_fu_5248_feature_4_address0.read();
    } else {
        features_conv2_4_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_4_ce0 = grp_max_pool2_fu_5248_feature_4_ce0.read();
    } else {
        features_conv2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_4_we1 = ap_const_logic_1;
    } else {
        features_conv2_4_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_5_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_5_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_5_address0 = grp_max_pool2_fu_5248_feature_5_address0.read();
    } else {
        features_conv2_5_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_5_ce0 = grp_max_pool2_fu_5248_feature_5_ce0.read();
    } else {
        features_conv2_5_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_5_we1 = ap_const_logic_1;
    } else {
        features_conv2_5_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_6_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_6_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_6_address0 = grp_max_pool2_fu_5248_feature_6_address0.read();
    } else {
        features_conv2_6_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_6_ce0 = grp_max_pool2_fu_5248_feature_6_ce0.read();
    } else {
        features_conv2_6_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_6_we1 = ap_const_logic_1;
    } else {
        features_conv2_6_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_7_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_7_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_7_address0 = grp_max_pool2_fu_5248_feature_7_address0.read();
    } else {
        features_conv2_7_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_7_ce0 = grp_max_pool2_fu_5248_feature_7_ce0.read();
    } else {
        features_conv2_7_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_7_we1 = ap_const_logic_1;
    } else {
        features_conv2_7_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_8_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_8_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_8_address0 = grp_max_pool2_fu_5248_feature_8_address0.read();
    } else {
        features_conv2_8_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_8_ce0 = grp_max_pool2_fu_5248_feature_8_ce0.read();
    } else {
        features_conv2_8_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_8_we1 = ap_const_logic_1;
    } else {
        features_conv2_8_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_9_address0 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv2_9_address0 =  (sc_lv<6>) (zext_ln20_fu_10579_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_9_address0 = grp_max_pool2_fu_5248_feature_9_address0.read();
    } else {
        features_conv2_9_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read())))) {
        features_conv2_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        features_conv2_9_ce0 = grp_max_pool2_fu_5248_feature_9_ce0.read();
    } else {
        features_conv2_9_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399_pp1_iter4_reg.read()))) {
        features_conv2_9_we1 = ap_const_logic_1;
    } else {
        features_conv2_9_we1 = ap_const_logic_0;
    }
}

void cnn::thread_flat_array_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        flat_array_address0 = grp_flattening_layer_fu_5288_flat_array_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        flat_array_address0 = grp_dense_layer_fu_5236_flat_array_address0.read();
    } else {
        flat_array_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void cnn::thread_flat_array_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        flat_array_ce0 = grp_flattening_layer_fu_5288_flat_array_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        flat_array_ce0 = grp_dense_layer_fu_5236_flat_array_ce0.read();
    } else {
        flat_array_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_flat_array_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
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
        grp_fu_5296_p1 = grp_fu_6720_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5296_p1 = grp_fu_6696_p2.read();
    } else {
        grp_fu_5296_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5300_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5300_p1 = grp_fu_6726_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5300_p1 = grp_fu_6702_p2.read();
    } else {
        grp_fu_5300_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5304_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5304_p1 = grp_fu_6732_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5304_p1 = grp_fu_6708_p2.read();
    } else {
        grp_fu_5304_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5308_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5308_p1 = grp_fu_6738_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5308_p1 = grp_fu_6714_p2.read();
    } else {
        grp_fu_5308_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5312_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5312_p1 = grp_fu_6744_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5312_p1 = grp_fu_6720_p2.read();
    } else {
        grp_fu_5312_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5316_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5316_p1 = grp_fu_6750_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5316_p1 = grp_fu_6726_p2.read();
    } else {
        grp_fu_5316_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5320_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5320_p0 = grp_fu_6696_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5320_p0 = grp_fu_5296_p2.read();
    } else {
        grp_fu_5320_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5320_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5320_p1 = grp_fu_6756_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5320_p1 = grp_fu_6732_p2.read();
    } else {
        grp_fu_5320_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5325_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5325_p0 = grp_fu_6702_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5325_p0 = grp_fu_5300_p2.read();
    } else {
        grp_fu_5325_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5325_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5325_p1 = grp_fu_6762_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5325_p1 = grp_fu_6738_p2.read();
    } else {
        grp_fu_5325_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5330_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5330_p0 = grp_fu_6708_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5330_p0 = grp_fu_5304_p2.read();
    } else {
        grp_fu_5330_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5330_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5330_p1 = grp_fu_6768_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5330_p1 = grp_fu_6744_p2.read();
    } else {
        grp_fu_5330_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5335_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5335_p0 = grp_fu_6714_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5335_p0 = grp_fu_5308_p2.read();
    } else {
        grp_fu_5335_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5335_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5335_p1 = grp_fu_6774_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5335_p1 = grp_fu_6750_p2.read();
    } else {
        grp_fu_5335_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5340_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5340_p0 = grp_fu_5296_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5340_p0 = grp_fu_5312_p2.read();
    } else {
        grp_fu_5340_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5340_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5340_p1 = grp_fu_6780_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5340_p1 = grp_fu_6756_p2.read();
    } else {
        grp_fu_5340_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5345_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5345_p0 = grp_fu_5300_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5345_p0 = grp_fu_5316_p2.read();
    } else {
        grp_fu_5345_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5345_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5345_p1 = grp_fu_6786_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5345_p1 = grp_fu_6762_p2.read();
    } else {
        grp_fu_5345_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5350_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5350_p0 = grp_fu_5304_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5350_p0 = grp_fu_5320_p2.read();
    } else {
        grp_fu_5350_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5350_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5350_p1 = grp_fu_6792_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5350_p1 = grp_fu_6768_p2.read();
    } else {
        grp_fu_5350_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5355_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5355_p0 = grp_fu_5308_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5355_p0 = grp_fu_5325_p2.read();
    } else {
        grp_fu_5355_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5355_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5355_p1 = grp_fu_6798_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5355_p1 = grp_fu_6774_p2.read();
    } else {
        grp_fu_5355_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5360_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5360_p0 = grp_fu_5312_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5360_p0 = grp_fu_5330_p2.read();
    } else {
        grp_fu_5360_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5360_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5360_p1 = grp_fu_6804_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5360_p1 = grp_fu_6780_p2.read();
    } else {
        grp_fu_5360_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5365_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5365_p0 = grp_fu_5316_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5365_p0 = grp_fu_5335_p2.read();
    } else {
        grp_fu_5365_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5365_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5365_p1 = grp_fu_6810_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5365_p1 = grp_fu_6786_p2.read();
    } else {
        grp_fu_5365_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5370_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5370_p0 = grp_fu_5320_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5370_p0 = grp_fu_5340_p2.read();
    } else {
        grp_fu_5370_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5370_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5370_p1 = grp_fu_6816_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5370_p1 = grp_fu_6792_p2.read();
    } else {
        grp_fu_5370_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5375_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5375_p0 = grp_fu_5325_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5375_p0 = grp_fu_5345_p2.read();
    } else {
        grp_fu_5375_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5375_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5375_p1 = grp_fu_6822_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5375_p1 = grp_fu_6798_p2.read();
    } else {
        grp_fu_5375_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5380_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5380_p0 = grp_fu_5330_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5380_p0 = grp_fu_5350_p2.read();
    } else {
        grp_fu_5380_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5380_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5380_p1 = grp_fu_6828_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5380_p1 = grp_fu_6804_p2.read();
    } else {
        grp_fu_5380_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5385_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5385_p0 = grp_fu_5335_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5385_p0 = grp_fu_5355_p2.read();
    } else {
        grp_fu_5385_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5385_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5385_p1 = grp_fu_6834_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5385_p1 = grp_fu_6810_p2.read();
    } else {
        grp_fu_5385_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5390_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5390_p0 = tmp_8_0_9_reg_12632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5390_p0 = grp_fu_5360_p2.read();
    } else {
        grp_fu_5390_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5390_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5390_p1 = grp_fu_6840_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5390_p1 = grp_fu_6816_p2.read();
    } else {
        grp_fu_5390_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5395_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5395_p0 = tmp_8_0_9_1_reg_12637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5395_p0 = grp_fu_5365_p2.read();
    } else {
        grp_fu_5395_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5395_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5395_p1 = grp_fu_6846_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5395_p1 = grp_fu_6822_p2.read();
    } else {
        grp_fu_5395_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5400_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5400_p0 = tmp_8_0_9_2_reg_12642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5400_p0 = grp_fu_5370_p2.read();
    } else {
        grp_fu_5400_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5400_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5400_p1 = grp_fu_6852_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5400_p1 = grp_fu_6828_p2.read();
    } else {
        grp_fu_5400_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5405_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5405_p0 = tmp_8_0_9_3_reg_12647.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5405_p0 = grp_fu_5375_p2.read();
    } else {
        grp_fu_5405_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5405_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5405_p1 = grp_fu_6858_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5405_p1 = grp_fu_6834_p2.read();
    } else {
        grp_fu_5405_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5410_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5410_p0 = tmp_8_0_9_4_reg_12652.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5410_p0 = grp_fu_5380_p2.read();
    } else {
        grp_fu_5410_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5410_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5410_p1 = grp_fu_6864_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5410_p1 = grp_fu_6840_p2.read();
    } else {
        grp_fu_5410_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5415_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5415_p0 = tmp_8_0_9_5_reg_12657.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5415_p0 = grp_fu_5385_p2.read();
    } else {
        grp_fu_5415_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5415_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5415_p1 = grp_fu_6870_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5415_p1 = grp_fu_6846_p2.read();
    } else {
        grp_fu_5415_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5420_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5420_p0 = tmp_8_0_9_6_reg_12662.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5420_p0 = grp_fu_5390_p2.read();
    } else {
        grp_fu_5420_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5420_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5420_p1 = grp_fu_6876_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5420_p1 = grp_fu_6852_p2.read();
    } else {
        grp_fu_5420_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5425_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5425_p0 = tmp_8_0_9_7_reg_12667.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5425_p0 = grp_fu_5395_p2.read();
    } else {
        grp_fu_5425_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5425_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5425_p1 = grp_fu_6882_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5425_p1 = grp_fu_6858_p2.read();
    } else {
        grp_fu_5425_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5430_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5430_p0 = tmp_8_0_9_8_reg_12672.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5430_p0 = grp_fu_5400_p2.read();
    } else {
        grp_fu_5430_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5430_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5430_p1 = grp_fu_6888_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5430_p1 = grp_fu_6864_p2.read();
    } else {
        grp_fu_5430_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5435_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5435_p0 = tmp_8_0_9_9_reg_12677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5435_p0 = grp_fu_5405_p2.read();
    } else {
        grp_fu_5435_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5435_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5435_p1 = grp_fu_6894_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5435_p1 = grp_fu_6870_p2.read();
    } else {
        grp_fu_5435_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5440_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5440_p0 = grp_fu_5390_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5440_p0 = grp_fu_5410_p2.read();
    } else {
        grp_fu_5440_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5440_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5440_p1 = grp_fu_6900_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5440_p1 = grp_fu_6876_p2.read();
    } else {
        grp_fu_5440_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5445_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5445_p0 = grp_fu_5395_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5445_p0 = grp_fu_5415_p2.read();
    } else {
        grp_fu_5445_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5445_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5445_p1 = grp_fu_6906_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5445_p1 = grp_fu_6882_p2.read();
    } else {
        grp_fu_5445_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5450_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5450_p0 = grp_fu_5400_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5450_p0 = grp_fu_5420_p2.read();
    } else {
        grp_fu_5450_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5450_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5450_p1 = grp_fu_6912_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5450_p1 = grp_fu_6888_p2.read();
    } else {
        grp_fu_5450_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5455_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5455_p0 = grp_fu_5405_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5455_p0 = grp_fu_5425_p2.read();
    } else {
        grp_fu_5455_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5455_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5455_p1 = grp_fu_6918_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5455_p1 = grp_fu_6894_p2.read();
    } else {
        grp_fu_5455_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5460_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5460_p0 = grp_fu_5410_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5460_p0 = grp_fu_5430_p2.read();
    } else {
        grp_fu_5460_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5460_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5460_p1 = grp_fu_6924_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5460_p1 = grp_fu_6900_p2.read();
    } else {
        grp_fu_5460_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5465_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5465_p0 = grp_fu_5415_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5465_p0 = grp_fu_5435_p2.read();
    } else {
        grp_fu_5465_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5465_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5465_p1 = grp_fu_6930_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5465_p1 = grp_fu_6906_p2.read();
    } else {
        grp_fu_5465_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5470_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5470_p0 = grp_fu_5420_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5470_p0 = grp_fu_5440_p2.read();
    } else {
        grp_fu_5470_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5470_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5470_p1 = grp_fu_6936_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5470_p1 = grp_fu_6912_p2.read();
    } else {
        grp_fu_5470_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5475_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5475_p0 = grp_fu_5425_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5475_p0 = grp_fu_5445_p2.read();
    } else {
        grp_fu_5475_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5475_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5475_p1 = grp_fu_6942_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5475_p1 = grp_fu_6918_p2.read();
    } else {
        grp_fu_5475_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5480_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5480_p0 = grp_fu_5430_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5480_p0 = grp_fu_5450_p2.read();
    } else {
        grp_fu_5480_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5480_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5480_p1 = grp_fu_6948_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5480_p1 = grp_fu_6924_p2.read();
    } else {
        grp_fu_5480_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5485_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5485_p0 = grp_fu_5435_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5485_p0 = grp_fu_5455_p2.read();
    } else {
        grp_fu_5485_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5485_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5485_p1 = grp_fu_6954_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5485_p1 = grp_fu_6930_p2.read();
    } else {
        grp_fu_5485_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5490_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5490_p0 = grp_fu_5440_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5490_p0 = grp_fu_5460_p2.read();
    } else {
        grp_fu_5490_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5490_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5490_p1 = grp_fu_6960_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5490_p1 = grp_fu_6936_p2.read();
    } else {
        grp_fu_5490_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5495_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5495_p0 = grp_fu_5445_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5495_p0 = grp_fu_5465_p2.read();
    } else {
        grp_fu_5495_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5495_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5495_p1 = grp_fu_6966_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5495_p1 = grp_fu_6942_p2.read();
    } else {
        grp_fu_5495_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5500_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5500_p0 = grp_fu_5450_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5500_p0 = grp_fu_5470_p2.read();
    } else {
        grp_fu_5500_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5500_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5500_p1 = grp_fu_6972_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5500_p1 = grp_fu_6948_p2.read();
    } else {
        grp_fu_5500_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5505_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5505_p0 = grp_fu_5455_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5505_p0 = grp_fu_5475_p2.read();
    } else {
        grp_fu_5505_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5505_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5505_p1 = grp_fu_6978_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5505_p1 = grp_fu_6954_p2.read();
    } else {
        grp_fu_5505_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5510_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5510_p0 = grp_fu_5460_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5510_p0 = grp_fu_5480_p2.read();
    } else {
        grp_fu_5510_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5510_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5510_p1 = grp_fu_6984_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5510_p1 = grp_fu_6960_p2.read();
    } else {
        grp_fu_5510_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5515_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5515_p0 = grp_fu_5465_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5515_p0 = grp_fu_5485_p2.read();
    } else {
        grp_fu_5515_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5515_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5515_p1 = grp_fu_6990_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5515_p1 = grp_fu_6966_p2.read();
    } else {
        grp_fu_5515_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5520_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5520_p0 = grp_fu_5470_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5520_p0 = grp_fu_5490_p2.read();
    } else {
        grp_fu_5520_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5520_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5520_p1 = grp_fu_6996_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5520_p1 = grp_fu_6972_p2.read();
    } else {
        grp_fu_5520_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5525_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5525_p0 = grp_fu_5475_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5525_p0 = grp_fu_5495_p2.read();
    } else {
        grp_fu_5525_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5525_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5525_p1 = grp_fu_7002_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5525_p1 = grp_fu_6978_p2.read();
    } else {
        grp_fu_5525_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5530_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5530_p0 = grp_fu_5480_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5530_p0 = grp_fu_5500_p2.read();
    } else {
        grp_fu_5530_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5530_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5530_p1 = grp_fu_7008_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5530_p1 = grp_fu_6984_p2.read();
    } else {
        grp_fu_5530_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5535_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5535_p0 = grp_fu_5485_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5535_p0 = grp_fu_5505_p2.read();
    } else {
        grp_fu_5535_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5535_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5535_p1 = grp_fu_7014_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5535_p1 = grp_fu_6990_p2.read();
    } else {
        grp_fu_5535_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5540_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5540_p0 = grp_fu_5490_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5540_p0 = grp_fu_5510_p2.read();
    } else {
        grp_fu_5540_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5540_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5540_p1 = grp_fu_7020_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5540_p1 = grp_fu_6996_p2.read();
    } else {
        grp_fu_5540_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5545_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5545_p0 = grp_fu_5495_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5545_p0 = grp_fu_5515_p2.read();
    } else {
        grp_fu_5545_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5545_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5545_p1 = grp_fu_7026_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5545_p1 = grp_fu_7002_p2.read();
    } else {
        grp_fu_5545_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5550_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5550_p0 = grp_fu_5500_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5550_p0 = grp_fu_5520_p2.read();
    } else {
        grp_fu_5550_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5550_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5550_p1 = grp_fu_7032_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5550_p1 = grp_fu_7008_p2.read();
    } else {
        grp_fu_5550_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5555_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5555_p0 = grp_fu_5505_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5555_p0 = grp_fu_5525_p2.read();
    } else {
        grp_fu_5555_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5555_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5555_p1 = grp_fu_7038_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5555_p1 = grp_fu_7014_p2.read();
    } else {
        grp_fu_5555_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5560_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5560_p0 = grp_fu_5510_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5560_p0 = grp_fu_5530_p2.read();
    } else {
        grp_fu_5560_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5560_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5560_p1 = grp_fu_7044_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5560_p1 = grp_fu_7020_p2.read();
    } else {
        grp_fu_5560_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5565_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5565_p0 = grp_fu_5515_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5565_p0 = grp_fu_5535_p2.read();
    } else {
        grp_fu_5565_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5565_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5565_p1 = grp_fu_7050_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5565_p1 = grp_fu_7026_p2.read();
    } else {
        grp_fu_5565_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5570_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5570_p0 = grp_fu_5520_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5570_p0 = grp_fu_5540_p2.read();
    } else {
        grp_fu_5570_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5570_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5570_p1 = grp_fu_7056_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5570_p1 = grp_fu_7032_p2.read();
    } else {
        grp_fu_5570_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5575_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5575_p0 = grp_fu_5525_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5575_p0 = grp_fu_5545_p2.read();
    } else {
        grp_fu_5575_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5575_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5575_p1 = grp_fu_7062_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5575_p1 = grp_fu_7038_p2.read();
    } else {
        grp_fu_5575_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5580_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5580_p0 = grp_fu_5530_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5580_p0 = grp_fu_5550_p2.read();
    } else {
        grp_fu_5580_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5580_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5580_p1 = grp_fu_7068_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5580_p1 = grp_fu_7044_p2.read();
    } else {
        grp_fu_5580_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5585_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5585_p0 = grp_fu_5535_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5585_p0 = grp_fu_5555_p2.read();
    } else {
        grp_fu_5585_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5585_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5585_p1 = grp_fu_7074_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5585_p1 = grp_fu_7050_p2.read();
    } else {
        grp_fu_5585_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5590_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5590_p0 = grp_fu_5540_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5590_p0 = grp_fu_5560_p2.read();
    } else {
        grp_fu_5590_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5590_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5590_p1 = grp_fu_7080_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5590_p1 = grp_fu_7056_p2.read();
    } else {
        grp_fu_5590_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5595_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5595_p0 = grp_fu_5545_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5595_p0 = grp_fu_5565_p2.read();
    } else {
        grp_fu_5595_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5595_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5595_p1 = grp_fu_7086_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5595_p1 = grp_fu_7062_p2.read();
    } else {
        grp_fu_5595_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5600_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5600_p0 = grp_fu_5550_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5600_p0 = grp_fu_5570_p2.read();
    } else {
        grp_fu_5600_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5600_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5600_p1 = grp_fu_7092_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5600_p1 = grp_fu_7068_p2.read();
    } else {
        grp_fu_5600_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5605_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5605_p0 = grp_fu_5555_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5605_p0 = grp_fu_5575_p2.read();
    } else {
        grp_fu_5605_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5605_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5605_p1 = grp_fu_7098_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5605_p1 = grp_fu_7074_p2.read();
    } else {
        grp_fu_5605_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5610_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5610_p0 = grp_fu_5560_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5610_p0 = grp_fu_5580_p2.read();
    } else {
        grp_fu_5610_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5610_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5610_p1 = grp_fu_7104_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5610_p1 = grp_fu_7080_p2.read();
    } else {
        grp_fu_5610_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5615_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5615_p0 = grp_fu_5565_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5615_p0 = grp_fu_5585_p2.read();
    } else {
        grp_fu_5615_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5615_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5615_p1 = grp_fu_7110_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5615_p1 = grp_fu_7086_p2.read();
    } else {
        grp_fu_5615_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5620_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5620_p0 = grp_fu_5570_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5620_p0 = grp_fu_5590_p2.read();
    } else {
        grp_fu_5620_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5620_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5620_p1 = grp_fu_7116_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5620_p1 = grp_fu_7092_p2.read();
    } else {
        grp_fu_5620_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5625_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5625_p0 = grp_fu_5575_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5625_p0 = grp_fu_5595_p2.read();
    } else {
        grp_fu_5625_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5625_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5625_p1 = grp_fu_7122_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5625_p1 = grp_fu_7098_p2.read();
    } else {
        grp_fu_5625_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5630_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5630_p0 = grp_fu_5580_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5630_p0 = grp_fu_5600_p2.read();
    } else {
        grp_fu_5630_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5630_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5630_p1 = grp_fu_7128_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5630_p1 = grp_fu_7104_p2.read();
    } else {
        grp_fu_5630_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5635_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5635_p0 = grp_fu_5585_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5635_p0 = grp_fu_5605_p2.read();
    } else {
        grp_fu_5635_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5635_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5635_p1 = grp_fu_7134_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5635_p1 = grp_fu_7110_p2.read();
    } else {
        grp_fu_5635_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5640_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5640_p0 = grp_fu_5590_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5640_p0 = grp_fu_5610_p2.read();
    } else {
        grp_fu_5640_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5640_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5640_p1 = grp_fu_7140_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5640_p1 = grp_fu_7116_p2.read();
    } else {
        grp_fu_5640_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5645_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5645_p0 = grp_fu_5595_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5645_p0 = grp_fu_5615_p2.read();
    } else {
        grp_fu_5645_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5645_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5645_p1 = grp_fu_7146_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5645_p1 = grp_fu_7122_p2.read();
    } else {
        grp_fu_5645_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5650_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5650_p0 = grp_fu_5600_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5650_p0 = grp_fu_5620_p2.read();
    } else {
        grp_fu_5650_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5650_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5650_p1 = grp_fu_7152_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5650_p1 = grp_fu_7128_p2.read();
    } else {
        grp_fu_5650_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5655_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5655_p0 = grp_fu_5605_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5655_p0 = grp_fu_5625_p2.read();
    } else {
        grp_fu_5655_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5655_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5655_p1 = grp_fu_7158_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5655_p1 = grp_fu_7134_p2.read();
    } else {
        grp_fu_5655_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5660_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5660_p0 = grp_fu_5610_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5660_p0 = grp_fu_5630_p2.read();
    } else {
        grp_fu_5660_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5660_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5660_p1 = grp_fu_7164_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5660_p1 = grp_fu_7140_p2.read();
    } else {
        grp_fu_5660_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5665_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5665_p0 = grp_fu_5615_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5665_p0 = grp_fu_5635_p2.read();
    } else {
        grp_fu_5665_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5665_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5665_p1 = grp_fu_7170_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5665_p1 = grp_fu_7146_p2.read();
    } else {
        grp_fu_5665_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5670_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5670_p0 = grp_fu_5620_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5670_p0 = grp_fu_5640_p2.read();
    } else {
        grp_fu_5670_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5670_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5670_p1 = grp_fu_7176_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5670_p1 = grp_fu_7152_p2.read();
    } else {
        grp_fu_5670_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5675_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5675_p0 = grp_fu_5625_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5675_p0 = grp_fu_5645_p2.read();
    } else {
        grp_fu_5675_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5675_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5675_p1 = grp_fu_7182_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5675_p1 = grp_fu_7158_p2.read();
    } else {
        grp_fu_5675_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5680_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5680_p0 = grp_fu_5630_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5680_p0 = grp_fu_5650_p2.read();
    } else {
        grp_fu_5680_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5680_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5680_p1 = grp_fu_7188_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5680_p1 = grp_fu_7164_p2.read();
    } else {
        grp_fu_5680_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5685_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5685_p0 = grp_fu_5635_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5685_p0 = grp_fu_5655_p2.read();
    } else {
        grp_fu_5685_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5685_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5685_p1 = grp_fu_7194_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5685_p1 = grp_fu_7170_p2.read();
    } else {
        grp_fu_5685_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5690_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5690_p0 = tmp_8_1_s_reg_12982.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5690_p0 = grp_fu_5660_p2.read();
    } else {
        grp_fu_5690_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5690_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5690_p1 = grp_fu_7200_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5690_p1 = grp_fu_7176_p2.read();
    } else {
        grp_fu_5690_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5695_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5695_p0 = tmp_8_1_10_1_reg_12987.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5695_p0 = grp_fu_5665_p2.read();
    } else {
        grp_fu_5695_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5695_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5695_p1 = grp_fu_7206_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5695_p1 = grp_fu_7182_p2.read();
    } else {
        grp_fu_5695_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5700_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5700_p0 = tmp_8_1_10_2_reg_12992.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5700_p0 = grp_fu_5670_p2.read();
    } else {
        grp_fu_5700_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5700_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5700_p1 = grp_fu_7212_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5700_p1 = grp_fu_7188_p2.read();
    } else {
        grp_fu_5700_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5705_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5705_p0 = tmp_8_1_10_3_reg_12997.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5705_p0 = grp_fu_5675_p2.read();
    } else {
        grp_fu_5705_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5705_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5705_p1 = grp_fu_7218_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5705_p1 = grp_fu_7194_p2.read();
    } else {
        grp_fu_5705_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5710_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5710_p0 = tmp_8_1_10_4_reg_13002.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5710_p0 = grp_fu_5680_p2.read();
    } else {
        grp_fu_5710_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5710_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5710_p1 = grp_fu_7224_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5710_p1 = grp_fu_7200_p2.read();
    } else {
        grp_fu_5710_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5715_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5715_p0 = tmp_8_1_10_5_reg_13007.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5715_p0 = grp_fu_5685_p2.read();
    } else {
        grp_fu_5715_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5715_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5715_p1 = grp_fu_7230_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5715_p1 = grp_fu_7206_p2.read();
    } else {
        grp_fu_5715_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5720_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5720_p0 = tmp_8_1_10_6_reg_13012.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5720_p0 = grp_fu_5690_p2.read();
    } else {
        grp_fu_5720_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5720_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5720_p1 = grp_fu_7236_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5720_p1 = grp_fu_7212_p2.read();
    } else {
        grp_fu_5720_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5725_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5725_p0 = tmp_8_1_10_7_reg_13017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5725_p0 = grp_fu_5695_p2.read();
    } else {
        grp_fu_5725_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5725_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5725_p1 = grp_fu_7242_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5725_p1 = grp_fu_7218_p2.read();
    } else {
        grp_fu_5725_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5730_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5730_p0 = tmp_8_1_10_8_reg_13022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5730_p0 = grp_fu_5700_p2.read();
    } else {
        grp_fu_5730_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5730_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5730_p1 = grp_fu_7248_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5730_p1 = grp_fu_7224_p2.read();
    } else {
        grp_fu_5730_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5735_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5735_p0 = tmp_8_1_10_9_reg_13027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5735_p0 = grp_fu_5705_p2.read();
    } else {
        grp_fu_5735_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5735_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5735_p1 = grp_fu_7254_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5735_p1 = grp_fu_7230_p2.read();
    } else {
        grp_fu_5735_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5740_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5740_p0 = grp_fu_5690_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5740_p0 = tmp_4_3_s_reg_11855.read();
    } else {
        grp_fu_5740_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5740_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5740_p1 = grp_fu_7260_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5740_p1 = grp_fu_7236_p2.read();
    } else {
        grp_fu_5740_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5744_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5744_p0 = grp_fu_5695_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5744_p0 = tmp_4_3_23_1_reg_11860.read();
    } else {
        grp_fu_5744_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5744_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5744_p1 = grp_fu_7266_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5744_p1 = grp_fu_7242_p2.read();
    } else {
        grp_fu_5744_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5748_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5748_p0 = grp_fu_5700_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5748_p0 = tmp_4_3_23_2_reg_11865.read();
    } else {
        grp_fu_5748_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5748_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5748_p1 = grp_fu_7272_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5748_p1 = grp_fu_7248_p2.read();
    } else {
        grp_fu_5748_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5752_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5752_p0 = grp_fu_5705_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5752_p0 = tmp_4_3_23_3_reg_11870.read();
    } else {
        grp_fu_5752_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5752_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5752_p1 = grp_fu_7278_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5752_p1 = grp_fu_7254_p2.read();
    } else {
        grp_fu_5752_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5756_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5756_p0 = grp_fu_5710_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5756_p0 = tmp_4_3_23_4_reg_11875.read();
    } else {
        grp_fu_5756_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5756_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5756_p1 = grp_fu_7284_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5756_p1 = grp_fu_7260_p2.read();
    } else {
        grp_fu_5756_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5760_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5760_p0 = grp_fu_5715_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5760_p0 = tmp_4_3_23_5_reg_11880.read();
    } else {
        grp_fu_5760_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5760_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5760_p1 = grp_fu_7290_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5760_p1 = grp_fu_7266_p2.read();
    } else {
        grp_fu_5760_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5764_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5764_p0 = grp_fu_5720_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5764_p0 = grp_fu_5740_p2.read();
    } else {
        grp_fu_5764_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5764_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5764_p1 = grp_fu_7296_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5764_p1 = grp_fu_7272_p2.read();
    } else {
        grp_fu_5764_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5769_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5769_p0 = grp_fu_5725_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5769_p0 = grp_fu_5744_p2.read();
    } else {
        grp_fu_5769_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5769_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5769_p1 = grp_fu_7302_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5769_p1 = grp_fu_7278_p2.read();
    } else {
        grp_fu_5769_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5774_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5774_p0 = grp_fu_5730_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5774_p0 = grp_fu_5748_p2.read();
    } else {
        grp_fu_5774_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5774_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5774_p1 = grp_fu_7308_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5774_p1 = grp_fu_7284_p2.read();
    } else {
        grp_fu_5774_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5779_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5779_p0 = grp_fu_5735_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5779_p0 = grp_fu_5752_p2.read();
    } else {
        grp_fu_5779_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5779_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5779_p1 = grp_fu_7314_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5779_p1 = grp_fu_7290_p2.read();
    } else {
        grp_fu_5779_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5784_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5784_p0 = grp_fu_5740_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5784_p0 = grp_fu_5756_p2.read();
    } else {
        grp_fu_5784_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5784_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5784_p1 = grp_fu_7320_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5784_p1 = grp_fu_7296_p2.read();
    } else {
        grp_fu_5784_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5789_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5789_p0 = grp_fu_5744_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5789_p0 = grp_fu_5760_p2.read();
    } else {
        grp_fu_5789_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5789_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5789_p1 = grp_fu_7326_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5789_p1 = grp_fu_7302_p2.read();
    } else {
        grp_fu_5789_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5794_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5794_p0 = grp_fu_5748_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5794_p0 = grp_fu_5764_p2.read();
    } else {
        grp_fu_5794_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5794_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5794_p1 = grp_fu_7332_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5794_p1 = grp_fu_7308_p2.read();
    } else {
        grp_fu_5794_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5799_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5799_p0 = grp_fu_5752_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5799_p0 = grp_fu_5769_p2.read();
    } else {
        grp_fu_5799_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5799_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5799_p1 = grp_fu_7338_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5799_p1 = grp_fu_7314_p2.read();
    } else {
        grp_fu_5799_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5804_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5804_p0 = grp_fu_5756_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5804_p0 = grp_fu_5774_p2.read();
    } else {
        grp_fu_5804_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5804_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5804_p1 = grp_fu_7344_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5804_p1 = grp_fu_7320_p2.read();
    } else {
        grp_fu_5804_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5809_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5809_p0 = grp_fu_5760_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5809_p0 = grp_fu_5779_p2.read();
    } else {
        grp_fu_5809_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5809_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5809_p1 = grp_fu_7350_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5809_p1 = grp_fu_7326_p2.read();
    } else {
        grp_fu_5809_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5814_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5814_p0 = grp_fu_5764_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5814_p0 = grp_fu_5784_p2.read();
    } else {
        grp_fu_5814_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5814_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5814_p1 = grp_fu_7356_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5814_p1 = grp_fu_7332_p2.read();
    } else {
        grp_fu_5814_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5819_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5819_p0 = grp_fu_5769_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5819_p0 = grp_fu_5789_p2.read();
    } else {
        grp_fu_5819_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5819_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5819_p1 = grp_fu_7362_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5819_p1 = grp_fu_7338_p2.read();
    } else {
        grp_fu_5819_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5824_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5824_p0 = grp_fu_5774_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5824_p0 = grp_fu_5794_p2.read();
    } else {
        grp_fu_5824_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5824_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5824_p1 = grp_fu_7368_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5824_p1 = grp_fu_7344_p2.read();
    } else {
        grp_fu_5824_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5829_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5829_p0 = grp_fu_5779_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5829_p0 = grp_fu_5799_p2.read();
    } else {
        grp_fu_5829_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5829_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5829_p1 = grp_fu_7374_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5829_p1 = grp_fu_7350_p2.read();
    } else {
        grp_fu_5829_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5834_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5834_p0 = grp_fu_5784_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5834_p0 = grp_fu_5804_p2.read();
    } else {
        grp_fu_5834_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5834_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5834_p1 = grp_fu_7380_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5834_p1 = grp_fu_7356_p2.read();
    } else {
        grp_fu_5834_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5839_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5839_p0 = grp_fu_5789_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5839_p0 = grp_fu_5809_p2.read();
    } else {
        grp_fu_5839_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5839_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5839_p1 = grp_fu_7386_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5839_p1 = grp_fu_7362_p2.read();
    } else {
        grp_fu_5839_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5844_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5844_p0 = grp_fu_5794_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5844_p0 = grp_fu_5814_p2.read();
    } else {
        grp_fu_5844_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5844_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5844_p1 = grp_fu_7392_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5844_p1 = grp_fu_7368_p2.read();
    } else {
        grp_fu_5844_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5849_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5849_p0 = grp_fu_5799_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5849_p0 = grp_fu_5819_p2.read();
    } else {
        grp_fu_5849_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5849_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5849_p1 = grp_fu_7398_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5849_p1 = grp_fu_7374_p2.read();
    } else {
        grp_fu_5849_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5854_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5854_p0 = grp_fu_5804_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5854_p0 = grp_fu_5824_p2.read();
    } else {
        grp_fu_5854_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5854_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5854_p1 = grp_fu_7404_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5854_p1 = grp_fu_7380_p2.read();
    } else {
        grp_fu_5854_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5859_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5859_p0 = grp_fu_5809_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5859_p0 = grp_fu_5829_p2.read();
    } else {
        grp_fu_5859_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5859_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5859_p1 = grp_fu_7410_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5859_p1 = grp_fu_7386_p2.read();
    } else {
        grp_fu_5859_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5864_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5864_p0 = grp_fu_5814_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5864_p0 = grp_fu_5834_p2.read();
    } else {
        grp_fu_5864_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5864_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5864_p1 = grp_fu_7416_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5864_p1 = grp_fu_7392_p2.read();
    } else {
        grp_fu_5864_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5869_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5869_p0 = grp_fu_5819_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5869_p0 = grp_fu_5839_p2.read();
    } else {
        grp_fu_5869_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5869_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5869_p1 = grp_fu_7422_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5869_p1 = grp_fu_7398_p2.read();
    } else {
        grp_fu_5869_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5874_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5874_p0 = grp_fu_5824_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5874_p0 = grp_fu_5844_p2.read();
    } else {
        grp_fu_5874_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5874_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5874_p1 = grp_fu_7428_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5874_p1 = grp_fu_7404_p2.read();
    } else {
        grp_fu_5874_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5879_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5879_p0 = grp_fu_5829_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5879_p0 = grp_fu_5849_p2.read();
    } else {
        grp_fu_5879_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5879_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5879_p1 = grp_fu_7434_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5879_p1 = grp_fu_7410_p2.read();
    } else {
        grp_fu_5879_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5884_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5884_p0 = grp_fu_5834_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5884_p0 = grp_fu_5854_p2.read();
    } else {
        grp_fu_5884_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5884_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5884_p1 = grp_fu_7440_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5884_p1 = grp_fu_7416_p2.read();
    } else {
        grp_fu_5884_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5889_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5889_p0 = grp_fu_5839_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5889_p0 = grp_fu_5859_p2.read();
    } else {
        grp_fu_5889_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5889_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5889_p1 = grp_fu_7446_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5889_p1 = grp_fu_7422_p2.read();
    } else {
        grp_fu_5889_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5894_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5894_p0 = grp_fu_5844_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5894_p0 = grp_fu_5864_p2.read();
    } else {
        grp_fu_5894_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5894_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5894_p1 = grp_fu_7452_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5894_p1 = grp_fu_7428_p2.read();
    } else {
        grp_fu_5894_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5899_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5899_p0 = grp_fu_5849_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5899_p0 = grp_fu_5869_p2.read();
    } else {
        grp_fu_5899_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5899_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5899_p1 = grp_fu_7458_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5899_p1 = grp_fu_7434_p2.read();
    } else {
        grp_fu_5899_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5904_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5904_p0 = grp_fu_5854_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5904_p0 = grp_fu_5874_p2.read();
    } else {
        grp_fu_5904_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5904_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5904_p1 = grp_fu_7464_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5904_p1 = grp_fu_7440_p2.read();
    } else {
        grp_fu_5904_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5909_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5909_p0 = grp_fu_5859_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5909_p0 = grp_fu_5879_p2.read();
    } else {
        grp_fu_5909_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5909_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5909_p1 = grp_fu_7470_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5909_p1 = grp_fu_7446_p2.read();
    } else {
        grp_fu_5909_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5914_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5914_p0 = grp_fu_5864_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5914_p0 = grp_fu_5884_p2.read();
    } else {
        grp_fu_5914_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5914_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5914_p1 = grp_fu_7476_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5914_p1 = grp_fu_7452_p2.read();
    } else {
        grp_fu_5914_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5919_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5919_p0 = grp_fu_5869_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5919_p0 = grp_fu_5889_p2.read();
    } else {
        grp_fu_5919_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5919_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5919_p1 = grp_fu_7482_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5919_p1 = grp_fu_7458_p2.read();
    } else {
        grp_fu_5919_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5924_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5924_p0 = grp_fu_5874_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5924_p0 = grp_fu_5894_p2.read();
    } else {
        grp_fu_5924_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5924_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5924_p1 = grp_fu_7488_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5924_p1 = grp_fu_7464_p2.read();
    } else {
        grp_fu_5924_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5929_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5929_p0 = grp_fu_5879_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5929_p0 = grp_fu_5899_p2.read();
    } else {
        grp_fu_5929_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5929_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5929_p1 = grp_fu_7494_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5929_p1 = grp_fu_7470_p2.read();
    } else {
        grp_fu_5929_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5934_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5934_p0 = grp_fu_5884_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5934_p0 = grp_fu_5904_p2.read();
    } else {
        grp_fu_5934_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5934_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5934_p1 = grp_fu_7500_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5934_p1 = grp_fu_7476_p2.read();
    } else {
        grp_fu_5934_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5939_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5939_p0 = grp_fu_5889_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5939_p0 = grp_fu_5909_p2.read();
    } else {
        grp_fu_5939_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5939_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5939_p1 = grp_fu_7506_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5939_p1 = grp_fu_7482_p2.read();
    } else {
        grp_fu_5939_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5944_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5944_p0 = grp_fu_5894_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5944_p0 = grp_fu_5914_p2.read();
    } else {
        grp_fu_5944_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5944_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5944_p1 = grp_fu_7512_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5944_p1 = grp_fu_7488_p2.read();
    } else {
        grp_fu_5944_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5949_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5949_p0 = grp_fu_5899_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5949_p0 = grp_fu_5919_p2.read();
    } else {
        grp_fu_5949_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5949_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5949_p1 = grp_fu_7518_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5949_p1 = grp_fu_7494_p2.read();
    } else {
        grp_fu_5949_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5954_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5954_p0 = grp_fu_5904_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5954_p0 = grp_fu_5924_p2.read();
    } else {
        grp_fu_5954_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5954_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5954_p1 = grp_fu_7524_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5954_p1 = grp_fu_7500_p2.read();
    } else {
        grp_fu_5954_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5959_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5959_p0 = grp_fu_5909_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5959_p0 = grp_fu_5929_p2.read();
    } else {
        grp_fu_5959_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5959_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5959_p1 = grp_fu_7531_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5959_p1 = grp_fu_7506_p2.read();
    } else {
        grp_fu_5959_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5964_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5964_p0 = grp_fu_5914_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5964_p0 = grp_fu_5934_p2.read();
    } else {
        grp_fu_5964_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5964_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5964_p1 = grp_fu_7538_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5964_p1 = grp_fu_7512_p2.read();
    } else {
        grp_fu_5964_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5969_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5969_p0 = grp_fu_5919_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5969_p0 = grp_fu_5939_p2.read();
    } else {
        grp_fu_5969_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5969_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5969_p1 = grp_fu_7545_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5969_p1 = grp_fu_7518_p2.read();
    } else {
        grp_fu_5969_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5974_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5974_p0 = grp_fu_5924_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5974_p0 = grp_fu_5944_p2.read();
    } else {
        grp_fu_5974_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5974_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5974_p1 = grp_fu_7552_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5974_p1 = grp_fu_7524_p2.read();
    } else {
        grp_fu_5974_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5979_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5979_p0 = grp_fu_5929_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5979_p0 = grp_fu_5949_p2.read();
    } else {
        grp_fu_5979_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5979_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5979_p1 = grp_fu_7559_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5979_p1 = grp_fu_7531_p2.read();
    } else {
        grp_fu_5979_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5984_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_5984_p0 = tmp_8_2_1_reg_13349.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5984_p0 = grp_fu_5954_p2.read();
    } else {
        grp_fu_5984_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5984_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_5984_p1 = tmp_6_3_7_fu_7860_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5984_p1 = grp_fu_7538_p2.read();
    } else {
        grp_fu_5984_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5989_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_5989_p0 = tmp_8_2_11_1_reg_13354.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5989_p0 = grp_fu_5959_p2.read();
    } else {
        grp_fu_5989_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5989_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_5989_p1 = tmp_6_3_7_1_fu_7866_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5989_p1 = grp_fu_7545_p2.read();
    } else {
        grp_fu_5989_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5994_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_5994_p0 = tmp_8_2_11_2_reg_13359.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5994_p0 = grp_fu_5964_p2.read();
    } else {
        grp_fu_5994_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5994_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_5994_p1 = tmp_6_3_7_2_fu_7872_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5994_p1 = grp_fu_7552_p2.read();
    } else {
        grp_fu_5994_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5999_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_5999_p0 = tmp_8_2_11_3_reg_13364.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5999_p0 = grp_fu_5969_p2.read();
    } else {
        grp_fu_5999_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5999_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_5999_p1 = tmp_6_3_7_3_fu_7878_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5999_p1 = grp_fu_7559_p2.read();
    } else {
        grp_fu_5999_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6004_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6004_p0 = tmp_8_2_11_4_reg_13369.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6004_p0 = grp_fu_5974_p2.read();
    } else {
        grp_fu_6004_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6004_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6004_p1 = tmp_6_3_7_4_fu_7884_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6004_p1 = ap_const_lv32_BF0DBB74;
    } else {
        grp_fu_6004_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6010_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6010_p0 = tmp_8_2_11_5_reg_13374.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6010_p0 = grp_fu_5979_p2.read();
    } else {
        grp_fu_6010_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6010_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6010_p1 = tmp_6_3_7_5_fu_7890_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6010_p1 = ap_const_lv32_BDA8D161;
    } else {
        grp_fu_6010_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6016_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6016_p0 = tmp_8_2_11_6_reg_13379.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6016_p0 = grp_fu_5984_p2.read();
    } else {
        grp_fu_6016_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6016_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6016_p1 = tmp_6_3_7_6_fu_7896_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6016_p1 = ap_const_lv32_BD1C2B57;
    } else {
        grp_fu_6016_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6022_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6022_p0 = tmp_8_2_11_7_reg_13384.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6022_p0 = grp_fu_5989_p2.read();
    } else {
        grp_fu_6022_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6022_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6022_p1 = tmp_6_3_7_7_fu_7902_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6022_p1 = ap_const_lv32_BD73D794;
    } else {
        grp_fu_6022_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6028_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6028_p0 = tmp_8_2_11_8_reg_13389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6028_p0 = grp_fu_5994_p2.read();
    } else {
        grp_fu_6028_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6028_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6028_p1 = tmp_6_3_7_8_fu_7908_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6028_p1 = ap_const_lv32_BDBF019F;
    } else {
        grp_fu_6028_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6034_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6034_p0 = tmp_8_2_11_9_reg_13394.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6034_p0 = grp_fu_5999_p2.read();
    } else {
        grp_fu_6034_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6034_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        grp_fu_6034_p1 = tmp_6_3_7_9_fu_7914_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6034_p1 = ap_const_lv32_BDFEC6F5;
    } else {
        grp_fu_6034_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6660_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6660_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6660_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6660_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6660_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6660_p1 = conv2_weights_0_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6660_p1 = ap_const_lv32_3E09F9D1;
    } else {
        grp_fu_6660_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6666_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6666_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6666_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6666_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6666_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6666_p1 = conv2_weights_1_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6666_p1 = ap_const_lv32_BCC361EF;
    } else {
        grp_fu_6666_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6672_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6672_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6672_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6672_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6672_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6672_p1 = conv2_weights_2_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6672_p1 = ap_const_lv32_BCB8C7EC;
    } else {
        grp_fu_6672_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6678_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6678_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6678_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6678_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6678_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6678_p1 = conv2_weights_3_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6678_p1 = ap_const_lv32_3C73FB6D;
    } else {
        grp_fu_6678_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6684_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6684_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6684_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6684_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6684_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6684_p1 = conv2_weights_4_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6684_p1 = ap_const_lv32_BF09989D;
    } else {
        grp_fu_6684_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6690_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6690_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6690_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6690_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6690_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6690_p1 = conv2_weights_5_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6690_p1 = ap_const_lv32_BE14A219;
    } else {
        grp_fu_6690_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6696_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6696_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6696_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6696_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6696_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6696_p1 = conv2_weights_6_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6696_p1 = ap_const_lv32_3F2ACFFE;
    } else {
        grp_fu_6696_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6702_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6702_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6702_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6702_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6702_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6702_p1 = conv2_weights_7_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6702_p1 = ap_const_lv32_BCFF4468;
    } else {
        grp_fu_6702_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6708_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6708_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6708_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6708_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6708_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6708_p1 = conv2_weights_8_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6708_p1 = ap_const_lv32_3D95A3B4;
    } else {
        grp_fu_6708_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6714_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6714_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6714_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6714_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6714_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6714_p1 = conv2_weights_9_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6714_p1 = ap_const_lv32_BC44EAD7;
    } else {
        grp_fu_6714_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6720_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6720_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6720_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6720_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6720_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6720_p1 = conv2_weights_0_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6720_p1 = ap_const_lv32_BF0D760E;
    } else {
        grp_fu_6720_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6726_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6726_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6726_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6726_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6726_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6726_p1 = conv2_weights_1_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6726_p1 = ap_const_lv32_BDC17026;
    } else {
        grp_fu_6726_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6732_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6732_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6732_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6732_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6732_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6732_p1 = conv2_weights_2_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6732_p1 = ap_const_lv32_3E912C13;
    } else {
        grp_fu_6732_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6738_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6738_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6738_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6738_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6738_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6738_p1 = conv2_weights_3_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6738_p1 = ap_const_lv32_3E9E3D0A;
    } else {
        grp_fu_6738_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6744_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6744_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6744_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6744_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6744_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6744_p1 = conv2_weights_4_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6744_p1 = ap_const_lv32_BEF4A4F4;
    } else {
        grp_fu_6744_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6750_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6750_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6750_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6750_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6750_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6750_p1 = conv2_weights_5_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6750_p1 = ap_const_lv32_3DDAAA02;
    } else {
        grp_fu_6750_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6756_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6756_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6756_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6756_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6756_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6756_p1 = conv2_weights_6_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6756_p1 = ap_const_lv32_BEFE323B;
    } else {
        grp_fu_6756_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6762_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6762_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6762_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6762_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

}

