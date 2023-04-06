#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_add_ln124_1_fu_11788_p2() {
    add_ln124_1_fu_11788_p2 = (!select_ln93_reg_13420.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln93_reg_13420.read()) + sc_biguint<4>(ap_const_lv4_C));
}

void cnn::thread_add_ln124_2_fu_11117_p2() {
    add_ln124_2_fu_11117_p2 = (!ap_const_lv4_C.is_01() || !ap_phi_mux_row_0_i54_phi_fu_5240_p4.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_C) + sc_biguint<4>(ap_phi_mux_row_0_i54_phi_fu_5240_p4.read()));
}

void cnn::thread_add_ln124_3_fu_11797_p2() {
    add_ln124_3_fu_11797_p2 = (!sext_ln89_fu_11540_p1.read().is_01() || !zext_ln124_fu_11793_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln89_fu_11540_p1.read()) + sc_biguint<8>(zext_ln124_fu_11793_p1.read()));
}

void cnn::thread_add_ln124_fu_11111_p2() {
    add_ln124_fu_11111_p2 = (!ap_const_lv4_D.is_01() || !select_ln57_fu_11014_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_D) + sc_biguint<4>(select_ln57_fu_11014_p3.read()));
}

void cnn::thread_add_ln17_2_fu_8595_p2() {
    add_ln17_2_fu_8595_p2 = (!phi_ln17_1_reg_5090.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(phi_ln17_1_reg_5090.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_add_ln17_3_fu_8605_p2() {
    add_ln17_3_fu_8605_p2 = (!sub_ln17_reg_12015.read().is_01() || !zext_ln17_2_fu_8601_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln17_reg_12015.read()) + sc_biguint<11>(zext_ln17_2_fu_8601_p1.read()));
}

void cnn::thread_add_ln17_fu_8559_p2() {
    add_ln17_fu_8559_p2 = (!phi_ln17_reg_5078.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(phi_ln17_reg_5078.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_add_ln26_1_fu_8701_p2() {
    add_ln26_1_fu_8701_p2 = (!indvar_flatten_reg_5123.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten_reg_5123.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void cnn::thread_add_ln26_fu_9707_p2() {
    add_ln26_fu_9707_p2 = (!zext_ln26_fu_9704_p1.read().is_01() || !ap_const_lv6_3C.is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln26_fu_9704_p1.read()) + sc_bigint<6>(ap_const_lv6_3C));
}

void cnn::thread_add_ln30_fu_8809_p2() {
    add_ln30_fu_8809_p2 = (!sub_ln30_fu_8759_p2.read().is_01() || !zext_ln30_2_fu_8805_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln30_fu_8759_p2.read()) + sc_biguint<11>(zext_ln30_2_fu_8805_p1.read()));
}

void cnn::thread_add_ln45_fu_8685_p2() {
    add_ln45_fu_8685_p2 = (!sub_ln45_reg_12040.read().is_01() || !zext_ln45_2_fu_8681_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln45_reg_12040.read()) + sc_biguint<11>(zext_ln45_2_fu_8681_p1.read()));
}

void cnn::thread_add_ln53_1_fu_10762_p2() {
    add_ln53_1_fu_10762_p2 = (!phi_ln53_1_reg_5180.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(phi_ln53_1_reg_5180.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_add_ln53_2_fu_10768_p2() {
    add_ln53_2_fu_10768_p2 = (!phi_ln53_2_reg_5192.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(phi_ln53_2_reg_5192.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_add_ln53_fu_10756_p2() {
    add_ln53_fu_10756_p2 = (!phi_ln53_reg_5168.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(phi_ln53_reg_5168.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_add_ln55_fu_10820_p2() {
    add_ln55_fu_10820_p2 = (!indvar_flatten281_reg_5203.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten281_reg_5203.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void cnn::thread_add_ln61_1_fu_10422_p2() {
    add_ln61_1_fu_10422_p2 = (!sub_ln61_fu_9733_p2.read().is_01() || !zext_ln61_fu_10418_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln61_fu_9733_p2.read()) + sc_biguint<11>(zext_ln61_fu_10418_p1.read()));
}

void cnn::thread_add_ln61_fu_10413_p2() {
    add_ln61_fu_10413_p2 = (!ap_const_lv5_1C.is_01() || !select_ln26_reg_12077.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_1C) + sc_biguint<5>(select_ln26_reg_12077.read()));
}

void cnn::thread_add_ln89_fu_10940_p2() {
    add_ln89_fu_10940_p2 = (!indvar_flatten11_reg_5225.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten11_reg_5225.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void cnn::thread_add_ln93_1_fu_11547_p2() {
    add_ln93_1_fu_11547_p2 = (!zext_ln93_3_fu_11544_p1.read().is_01() || !sub_ln93_1_fu_11527_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln93_3_fu_11544_p1.read()) + sc_biguint<11>(sub_ln93_1_fu_11527_p2.read()));
}

void cnn::thread_add_ln93_fu_11497_p2() {
    add_ln93_fu_11497_p2 = (!zext_ln93_2_fu_11494_p1.read().is_01() || !sub_ln93_fu_11488_p2.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln93_2_fu_11494_p1.read()) + sc_biguint<64>(sub_ln93_fu_11488_p2.read()));
}

void cnn::thread_and_ln117_fu_11454_p2() {
    and_ln117_fu_11454_p2 = (select_ln93_2_fu_11103_p3.read() & icmp_ln117_2_fu_11448_p2.read());
}

void cnn::thread_and_ln54_fu_9692_p2() {
    and_ln54_fu_9692_p2 = (select_ln26_2_fu_8797_p3.read() & icmp_ln54_2_fu_9686_p2.read());
}

void cnn::thread_and_ln57_1_fu_11054_p2() {
    and_ln57_1_fu_11054_p2 = (icmp_ln90_fu_11048_p2.read() & xor_ln57_fu_11021_p2.read());
}

void cnn::thread_and_ln57_fu_11042_p2() {
    and_ln57_fu_11042_p2 = (icmp_ln117_fu_11036_p2.read() & xor_ln57_fu_11021_p2.read());
}

void cnn::thread_and_ln7_1_fu_10525_p2() {
    and_ln7_1_fu_10525_p2 = (or_ln7_1_fu_10519_p2.read() & tmp_4_fu_8529_p2.read());
}

void cnn::thread_and_ln7_2_fu_10576_p2() {
    and_ln7_2_fu_10576_p2 = (or_ln7_2_fu_10570_p2.read() & tmp_6_fu_8535_p2.read());
}

void cnn::thread_and_ln7_3_fu_10627_p2() {
    and_ln7_3_fu_10627_p2 = (or_ln7_3_fu_10621_p2.read() & tmp_10_fu_8541_p2.read());
}

void cnn::thread_and_ln7_4_fu_10678_p2() {
    and_ln7_4_fu_10678_p2 = (or_ln7_4_fu_10672_p2.read() & tmp_12_fu_8547_p2.read());
}

void cnn::thread_and_ln7_5_fu_10729_p2() {
    and_ln7_5_fu_10729_p2 = (or_ln7_5_fu_10723_p2.read() & tmp_14_fu_8553_p2.read());
}

void cnn::thread_and_ln7_fu_10474_p2() {
    and_ln7_fu_10474_p2 = (or_ln7_fu_10468_p2.read() & tmp_1_fu_8523_p2.read());
}

void cnn::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[7];
}

void cnn::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[14];
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

void cnn::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[11];
}

void cnn::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[12];
}

void cnn::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[13];
}

void cnn::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void cnn::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[15];
}

void cnn::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[16];
}

void cnn::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[17];
}

void cnn::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[18];
}

void cnn::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[19];
}

void cnn::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[20];
}

void cnn::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[21];
}

void cnn::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void cnn::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void cnn::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void cnn::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void cnn::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void cnn::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp0_stage0_00001() {
    ap_block_pp0_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
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

void cnn::thread_ap_block_state16_pp1_stage0_iter0() {
    ap_block_state16_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state17_pp1_stage0_iter1() {
    ap_block_state17_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state18_pp1_stage0_iter2() {
    ap_block_state18_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state19_pp1_stage0_iter3() {
    ap_block_state19_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state20_pp1_stage0_iter4() {
    ap_block_state20_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state8_pp0_stage0_iter0() {
    ap_block_state8_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_block_state9_pp0_stage0_iter1() {
    ap_block_state9_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void cnn::thread_ap_condition_pp0_exit_iter0_state8() {
    if (esl_seteq<1,1,1>(icmp_ln26_fu_8695_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state8 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state8 = ap_const_logic_0;
    }
}

void cnn::thread_ap_condition_pp1_exit_iter0_state16() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln55_fu_10814_p2.read())) {
        ap_condition_pp1_exit_iter0_state16 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state16 = ap_const_logic_0;
    }
}

void cnn::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(grp_dense_layer_fu_5272_ap_done.read(), ap_const_logic_1))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void cnn::thread_ap_phi_mux_col_0_i56_phi_fu_5252_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ap_phi_mux_col_0_i56_phi_fu_5252_p4 = col_1_reg_13491.read();
    } else {
        ap_phi_mux_col_0_i56_phi_fu_5252_p4 = col_0_i56_reg_5248.read();
    }
}

void cnn::thread_ap_phi_mux_f_0_phi_fu_5218_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_f_0_phi_fu_5218_p4 = select_ln57_2_reg_12184.read();
    } else {
        ap_phi_mux_f_0_phi_fu_5218_p4 = f_0_reg_5214.read();
    }
}

void cnn::thread_ap_phi_mux_row_0_i54_phi_fu_5240_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ap_phi_mux_row_0_i54_phi_fu_5240_p4 = select_ln93_1_reg_13426.read();
    } else {
        ap_phi_mux_row_0_i54_phi_fu_5240_p4 = row_0_i54_reg_5236.read();
    }
}

void cnn::thread_ap_phi_mux_row_0_i_phi_fu_5138_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_reg_12068.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        ap_phi_mux_row_0_i_phi_fu_5138_p4 = select_ln26_1_reg_12082.read();
    } else {
        ap_phi_mux_row_0_i_phi_fu_5138_p4 = row_0_i_reg_5134.read();
    }
}

void cnn::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(grp_dense_layer_fu_5272_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_1_79_load() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_reg_12068.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        ap_sig_allocacmp_linebuf_1_79_load = linebuf_1_80.read();
    } else {
        ap_sig_allocacmp_linebuf_1_79_load = linebuf_1_79.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_31_load() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter2_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ap_sig_allocacmp_linebuf_31_load = linebuf_32.read();
    } else {
        ap_sig_allocacmp_linebuf_31_load = linebuf_31.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_46_load() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter3_reg.read()))) {
        ap_sig_allocacmp_linebuf_46_load = linebuf_47.read();
    } else {
        ap_sig_allocacmp_linebuf_46_load = linebuf_46.read();
    }
}

void cnn::thread_ap_sig_allocacmp_linebuf_9_load() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_sig_allocacmp_linebuf_9_load = linebuf_10.read();
    } else {
        ap_sig_allocacmp_linebuf_9_load = linebuf_9.read();
    }
}

void cnn::thread_bitcast_ln7_1_fu_10489_p1() {
    bitcast_ln7_1_fu_10489_p1 = grp_fu_6046_p2.read();
}

void cnn::thread_bitcast_ln7_2_fu_10540_p1() {
    bitcast_ln7_2_fu_10540_p1 = grp_fu_6052_p2.read();
}

void cnn::thread_bitcast_ln7_3_fu_10591_p1() {
    bitcast_ln7_3_fu_10591_p1 = grp_fu_6058_p2.read();
}

void cnn::thread_bitcast_ln7_4_fu_10642_p1() {
    bitcast_ln7_4_fu_10642_p1 = grp_fu_6064_p2.read();
}

void cnn::thread_bitcast_ln7_5_fu_10693_p1() {
    bitcast_ln7_5_fu_10693_p1 = grp_fu_6070_p2.read();
}

void cnn::thread_bitcast_ln7_fu_10438_p1() {
    bitcast_ln7_fu_10438_p1 = grp_fu_6040_p2.read();
}

void cnn::thread_c_fu_8675_p2() {
    c_fu_8675_p2 = (!c_0_i_reg_5112.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(c_0_i_reg_5112.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_col_1_fu_11460_p2() {
    col_1_fu_11460_p2 = (!select_ln93_fu_11071_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(select_ln93_fu_11071_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_col_fu_9698_p2() {
    col_fu_9698_p2 = (!select_ln26_fu_8719_p3.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(select_ln26_fu_8719_p3.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_conv2_biases_address0() {
    conv2_biases_address0 =  (sc_lv<4>) (zext_ln128_fu_12005_p1.read());
}

void cnn::thread_conv2_biases_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        conv2_biases_ce0 = ap_const_logic_1;
    } else {
        conv2_biases_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_0_0_address0() {
    conv2_weights_0_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_0_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_0_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_0_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_0_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_0_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_0_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_0_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_0_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_0_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_0_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_0_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_0_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_0_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_0_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_0_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_1_address0() {
    conv2_weights_0_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_0_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_0_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_3_2_address0() {
    conv2_weights_0_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_0_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_0_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_0_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_0_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_2_address0() {
    conv2_weights_0_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_3_address0() {
    conv2_weights_0_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_0_4_4_address0() {
    conv2_weights_0_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_0_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_0_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_0_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_0_0_address0() {
    conv2_weights_1_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_1_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_1_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_1_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_1_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_1_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_1_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_1_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_1_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_1_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_1_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_1_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_1_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_1_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_1_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_1_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_1_address0() {
    conv2_weights_1_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_1_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_1_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_3_2_address0() {
    conv2_weights_1_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_1_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_1_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_1_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_1_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_2_address0() {
    conv2_weights_1_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_3_address0() {
    conv2_weights_1_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_1_4_4_address0() {
    conv2_weights_1_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_1_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_1_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_1_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_0_0_address0() {
    conv2_weights_2_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_2_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_2_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_2_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_2_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_2_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_2_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_2_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_2_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_2_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_2_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_2_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_2_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_2_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_2_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_2_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_1_address0() {
    conv2_weights_2_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_2_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_2_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_3_2_address0() {
    conv2_weights_2_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_2_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_2_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_2_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_2_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_2_address0() {
    conv2_weights_2_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_3_address0() {
    conv2_weights_2_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_2_4_4_address0() {
    conv2_weights_2_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_2_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_2_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_2_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_0_0_address0() {
    conv2_weights_3_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_3_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_3_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_3_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_3_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_3_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_3_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_3_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_3_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_3_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_3_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_3_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_3_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_3_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_3_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_3_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_1_address0() {
    conv2_weights_3_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_3_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_3_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_3_2_address0() {
    conv2_weights_3_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_3_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_3_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_3_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_3_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_2_address0() {
    conv2_weights_3_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_3_address0() {
    conv2_weights_3_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_3_4_4_address0() {
    conv2_weights_3_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_3_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_3_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_3_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_0_0_address0() {
    conv2_weights_4_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_4_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_4_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_4_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_4_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_4_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_4_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_4_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_4_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_4_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_4_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_4_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_4_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_4_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_4_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_4_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_1_address0() {
    conv2_weights_4_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_4_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_4_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_3_2_address0() {
    conv2_weights_4_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_4_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_4_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_4_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_4_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_2_address0() {
    conv2_weights_4_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_3_address0() {
    conv2_weights_4_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_4_4_4_address0() {
    conv2_weights_4_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_4_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_4_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_4_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_0_0_address0() {
    conv2_weights_5_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_5_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_5_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_5_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_5_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_5_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_5_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_5_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_5_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_5_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_5_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_5_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_5_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_5_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_5_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_5_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_1_address0() {
    conv2_weights_5_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_5_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_5_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_3_2_address0() {
    conv2_weights_5_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_5_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_5_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_5_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_5_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_2_address0() {
    conv2_weights_5_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_3_address0() {
    conv2_weights_5_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_5_4_4_address0() {
    conv2_weights_5_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_5_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_5_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_5_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_0_0_address0() {
    conv2_weights_6_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_6_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_6_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_6_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_6_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_6_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_6_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_6_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_6_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_6_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_6_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_6_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_6_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_6_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_6_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_6_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_1_address0() {
    conv2_weights_6_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_6_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_6_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_3_2_address0() {
    conv2_weights_6_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_6_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_6_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_6_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_6_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_2_address0() {
    conv2_weights_6_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_3_address0() {
    conv2_weights_6_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_6_4_4_address0() {
    conv2_weights_6_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_6_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_6_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_6_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_0_0_address0() {
    conv2_weights_7_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_7_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_7_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_7_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_7_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_7_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_7_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_7_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_7_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_7_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_7_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_7_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_7_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_7_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_7_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_7_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_1_address0() {
    conv2_weights_7_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_7_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_7_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_3_2_address0() {
    conv2_weights_7_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_7_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_7_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_7_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_7_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_2_address0() {
    conv2_weights_7_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_3_address0() {
    conv2_weights_7_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_7_4_4_address0() {
    conv2_weights_7_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_7_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_7_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_7_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_0_0_address0() {
    conv2_weights_8_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_8_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_8_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_8_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_8_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_8_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_8_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_8_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_8_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_8_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_8_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_8_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_8_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_8_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_8_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_8_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_1_address0() {
    conv2_weights_8_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_8_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_8_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_3_2_address0() {
    conv2_weights_8_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_8_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_8_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_8_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_8_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_2_address0() {
    conv2_weights_8_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_3_address0() {
    conv2_weights_8_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_8_4_4_address0() {
    conv2_weights_8_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_8_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_8_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_8_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_0_0_address0() {
    conv2_weights_9_0_0_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_9_0_1_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_9_0_2_address0 =  (sc_lv<3>) (zext_ln57_fu_10846_p1.read());
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
    conv2_weights_9_0_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_9_0_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_9_1_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_9_1_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_9_1_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_9_1_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_9_1_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_9_2_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191.read());
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
    conv2_weights_9_2_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_9_2_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_9_2_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_9_2_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_9_3_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_3_0_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_1_address0() {
    conv2_weights_9_3_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
}

void cnn::thread_conv2_weights_9_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        conv2_weights_9_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_3_2_address0() {
    conv2_weights_9_3_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_9_3_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter1_reg.read());
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
    conv2_weights_9_3_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_9_4_0_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
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
    conv2_weights_9_4_1_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_2_address0() {
    conv2_weights_9_4_2_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_3_address0() {
    conv2_weights_9_4_3_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_9_4_4_address0() {
    conv2_weights_9_4_4_address0 =  (sc_lv<3>) (zext_ln57_reg_12191_pp1_iter2_reg.read());
}

void cnn::thread_conv2_weights_9_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        conv2_weights_9_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_9_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_f_2_fu_10826_p2() {
    f_2_fu_10826_p2 = (!ap_const_lv3_1.is_01() || !ap_phi_mux_f_0_phi_fu_5218_p4.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(ap_phi_mux_f_0_phi_fu_5218_p4.read()));
}

void cnn::thread_f_3_fu_11999_p2() {
    f_3_fu_11999_p2 = (!f_0_i81_reg_5260.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(f_0_i81_reg_5260.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_f_fu_10750_p2() {
    f_fu_10750_p2 = (!f_0_i52_reg_5156.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(f_0_i52_reg_5156.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_features_conv1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_0_address0 =  (sc_lv<10>) (sext_ln61_1_fu_10428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_0_address0 = grp_max_pool_fu_5304_feature_0_address0.read();
    } else {
        features_conv1_0_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        features_conv1_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_0_ce0 = grp_max_pool_fu_5304_feature_0_ce0.read();
    } else {
        features_conv1_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_0_d0() {
    features_conv1_0_d0 = (!and_ln7_fu_10474_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln7_fu_10474_p2.read()[0].to_bool())? grp_fu_6040_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(and_ln54_reg_12123.read(), ap_const_lv1_1))) {
        features_conv1_0_we0 = ap_const_logic_1;
    } else {
        features_conv1_0_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_1_address0 =  (sc_lv<10>) (sext_ln61_1_fu_10428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_1_address0 = grp_max_pool_fu_5304_feature_1_address0.read();
    } else {
        features_conv1_1_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        features_conv1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_1_ce0 = grp_max_pool_fu_5304_feature_1_ce0.read();
    } else {
        features_conv1_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_1_d0() {
    features_conv1_1_d0 = (!and_ln7_1_fu_10525_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln7_1_fu_10525_p2.read()[0].to_bool())? grp_fu_6046_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(and_ln54_reg_12123.read(), ap_const_lv1_1))) {
        features_conv1_1_we0 = ap_const_logic_1;
    } else {
        features_conv1_1_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_2_address0 =  (sc_lv<10>) (sext_ln61_1_fu_10428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_2_address0 = grp_max_pool_fu_5304_feature_2_address0.read();
    } else {
        features_conv1_2_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        features_conv1_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_2_ce0 = grp_max_pool_fu_5304_feature_2_ce0.read();
    } else {
        features_conv1_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_2_d0() {
    features_conv1_2_d0 = (!and_ln7_2_fu_10576_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln7_2_fu_10576_p2.read()[0].to_bool())? grp_fu_6052_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(and_ln54_reg_12123.read(), ap_const_lv1_1))) {
        features_conv1_2_we0 = ap_const_logic_1;
    } else {
        features_conv1_2_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_3_address0 =  (sc_lv<10>) (sext_ln61_1_fu_10428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_3_address0 = grp_max_pool_fu_5304_feature_3_address0.read();
    } else {
        features_conv1_3_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        features_conv1_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_3_ce0 = grp_max_pool_fu_5304_feature_3_ce0.read();
    } else {
        features_conv1_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_3_d0() {
    features_conv1_3_d0 = (!and_ln7_3_fu_10627_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln7_3_fu_10627_p2.read()[0].to_bool())? grp_fu_6058_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(and_ln54_reg_12123.read(), ap_const_lv1_1))) {
        features_conv1_3_we0 = ap_const_logic_1;
    } else {
        features_conv1_3_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_4_address0 =  (sc_lv<10>) (sext_ln61_1_fu_10428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_4_address0 = grp_max_pool_fu_5304_feature_4_address0.read();
    } else {
        features_conv1_4_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        features_conv1_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_4_ce0 = grp_max_pool_fu_5304_feature_4_ce0.read();
    } else {
        features_conv1_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_4_d0() {
    features_conv1_4_d0 = (!and_ln7_4_fu_10678_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln7_4_fu_10678_p2.read()[0].to_bool())? grp_fu_6064_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(and_ln54_reg_12123.read(), ap_const_lv1_1))) {
        features_conv1_4_we0 = ap_const_logic_1;
    } else {
        features_conv1_4_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        features_conv1_5_address0 =  (sc_lv<10>) (sext_ln61_1_fu_10428_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_5_address0 = grp_max_pool_fu_5304_feature_5_address0.read();
    } else {
        features_conv1_5_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1))) {
        features_conv1_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        features_conv1_5_ce0 = grp_max_pool_fu_5304_feature_5_ce0.read();
    } else {
        features_conv1_5_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_5_d0() {
    features_conv1_5_d0 = (!and_ln7_5_fu_10729_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln7_5_fu_10729_p2.read()[0].to_bool())? grp_fu_6070_p2.read(): ap_const_lv32_0);
}

void cnn::thread_features_conv1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(and_ln54_reg_12123.read(), ap_const_lv1_1))) {
        features_conv1_5_we0 = ap_const_logic_1;
    } else {
        features_conv1_5_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_0_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_0_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_0_address0 = grp_max_pool2_fu_5284_feature_0_address0.read();
    } else {
        features_conv2_0_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_0_ce0 = grp_max_pool2_fu_5284_feature_0_ce0.read();
    } else {
        features_conv2_0_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_0_ce1 = ap_const_logic_1;
    } else {
        features_conv2_0_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_0))) {
        features_conv2_0_we0 = ap_const_logic_1;
    } else {
        features_conv2_0_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_0_we1 = ap_const_logic_1;
    } else {
        features_conv2_0_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_1_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_1_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_1_address0 = grp_max_pool2_fu_5284_feature_1_address0.read();
    } else {
        features_conv2_1_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_1_ce0 = grp_max_pool2_fu_5284_feature_1_ce0.read();
    } else {
        features_conv2_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_1_ce1 = ap_const_logic_1;
    } else {
        features_conv2_1_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_1))) {
        features_conv2_1_we0 = ap_const_logic_1;
    } else {
        features_conv2_1_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_1_we1 = ap_const_logic_1;
    } else {
        features_conv2_1_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_2_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_2_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_2_address0 = grp_max_pool2_fu_5284_feature_2_address0.read();
    } else {
        features_conv2_2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_2_ce0 = grp_max_pool2_fu_5284_feature_2_ce0.read();
    } else {
        features_conv2_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_2_ce1 = ap_const_logic_1;
    } else {
        features_conv2_2_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_2))) {
        features_conv2_2_we0 = ap_const_logic_1;
    } else {
        features_conv2_2_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_2_we1 = ap_const_logic_1;
    } else {
        features_conv2_2_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_3_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_3_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_3_address0 = grp_max_pool2_fu_5284_feature_3_address0.read();
    } else {
        features_conv2_3_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_3_ce0 = grp_max_pool2_fu_5284_feature_3_ce0.read();
    } else {
        features_conv2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_3_ce1 = ap_const_logic_1;
    } else {
        features_conv2_3_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_3))) {
        features_conv2_3_we0 = ap_const_logic_1;
    } else {
        features_conv2_3_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_3_we1 = ap_const_logic_1;
    } else {
        features_conv2_3_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_4_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_4_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_4_address0 = grp_max_pool2_fu_5284_feature_4_address0.read();
    } else {
        features_conv2_4_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_4_ce0 = grp_max_pool2_fu_5284_feature_4_ce0.read();
    } else {
        features_conv2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_4_ce1 = ap_const_logic_1;
    } else {
        features_conv2_4_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_4))) {
        features_conv2_4_we0 = ap_const_logic_1;
    } else {
        features_conv2_4_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_4_we1 = ap_const_logic_1;
    } else {
        features_conv2_4_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_5_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_5_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_5_address0 = grp_max_pool2_fu_5284_feature_5_address0.read();
    } else {
        features_conv2_5_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_5_ce0 = grp_max_pool2_fu_5284_feature_5_ce0.read();
    } else {
        features_conv2_5_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_5_ce1 = ap_const_logic_1;
    } else {
        features_conv2_5_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_5))) {
        features_conv2_5_we0 = ap_const_logic_1;
    } else {
        features_conv2_5_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_5_we1 = ap_const_logic_1;
    } else {
        features_conv2_5_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_6_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_6_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_6_address0 = grp_max_pool2_fu_5284_feature_6_address0.read();
    } else {
        features_conv2_6_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_6_ce0 = grp_max_pool2_fu_5284_feature_6_ce0.read();
    } else {
        features_conv2_6_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_6_ce1 = ap_const_logic_1;
    } else {
        features_conv2_6_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_6))) {
        features_conv2_6_we0 = ap_const_logic_1;
    } else {
        features_conv2_6_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_6_we1 = ap_const_logic_1;
    } else {
        features_conv2_6_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_7_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_7_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_7_address0 = grp_max_pool2_fu_5284_feature_7_address0.read();
    } else {
        features_conv2_7_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_7_ce0 = grp_max_pool2_fu_5284_feature_7_ce0.read();
    } else {
        features_conv2_7_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_7_ce1 = ap_const_logic_1;
    } else {
        features_conv2_7_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_7))) {
        features_conv2_7_we0 = ap_const_logic_1;
    } else {
        features_conv2_7_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_7_we1 = ap_const_logic_1;
    } else {
        features_conv2_7_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_8_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_8_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_8_address0 = grp_max_pool2_fu_5284_feature_8_address0.read();
    } else {
        features_conv2_8_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_8_ce0 = grp_max_pool2_fu_5284_feature_8_ce0.read();
    } else {
        features_conv2_8_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_8_ce1 = ap_const_logic_1;
    } else {
        features_conv2_8_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_8))) {
        features_conv2_8_we0 = ap_const_logic_1;
    } else {
        features_conv2_8_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_8_we1 = ap_const_logic_1;
    } else {
        features_conv2_8_we1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        features_conv2_9_address0 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        features_conv2_9_address0 =  (sc_lv<6>) (zext_ln53_fu_10782_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_9_address0 = grp_max_pool2_fu_5284_feature_9_address0.read();
    } else {
        features_conv2_9_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read())))) {
        features_conv2_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        features_conv2_9_ce0 = grp_max_pool2_fu_5284_feature_9_ce0.read();
    } else {
        features_conv2_9_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        features_conv2_9_ce1 = ap_const_logic_1;
    } else {
        features_conv2_9_ce1 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         ((((((esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_F) || 
               esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_E)) || 
              esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_D)) || 
             esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_C)) || 
            esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_B)) || 
           esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_A)) || 
          esl_seteq<1,4,4>(phi_ln53_reg_5168.read(), ap_const_lv4_9)))) {
        features_conv2_9_we0 = ap_const_logic_1;
    } else {
        features_conv2_9_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487_pp1_iter3_reg.read()))) {
        features_conv2_9_we1 = ap_const_logic_1;
    } else {
        features_conv2_9_we1 = ap_const_logic_0;
    }
}

void cnn::thread_flat_array_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        flat_array_address0 = grp_flattening_layer_fu_5324_flat_array_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        flat_array_address0 = grp_dense_layer_fu_5272_flat_array_address0.read();
    } else {
        flat_array_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void cnn::thread_flat_array_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        flat_array_ce0 = grp_flattening_layer_fu_5324_flat_array_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        flat_array_ce0 = grp_dense_layer_fu_5272_flat_array_ce0.read();
    } else {
        flat_array_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_flat_array_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        flat_array_we0 = grp_flattening_layer_fu_5324_flat_array_we0.read();
    } else {
        flat_array_we0 = ap_const_logic_0;
    }
}

void cnn::thread_grp_dense_layer_fu_5272_ap_start() {
    grp_dense_layer_fu_5272_ap_start = grp_dense_layer_fu_5272_ap_start_reg.read();
}

void cnn::thread_grp_flattening_layer_fu_5324_ap_start() {
    grp_flattening_layer_fu_5324_ap_start = grp_flattening_layer_fu_5324_ap_start_reg.read();
}

void cnn::thread_grp_fu_5332_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5332_p1 = grp_fu_6766_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5332_p1 = grp_fu_6742_p2.read();
    } else {
        grp_fu_5332_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5336_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5336_p1 = grp_fu_6772_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5336_p1 = grp_fu_6748_p2.read();
    } else {
        grp_fu_5336_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5340_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5340_p1 = grp_fu_6778_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5340_p1 = grp_fu_6754_p2.read();
    } else {
        grp_fu_5340_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5344_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5344_p1 = grp_fu_6784_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5344_p1 = grp_fu_6760_p2.read();
    } else {
        grp_fu_5344_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5348_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5348_p1 = grp_fu_6790_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5348_p1 = grp_fu_6766_p2.read();
    } else {
        grp_fu_5348_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5352_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5352_p1 = grp_fu_6796_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5352_p1 = grp_fu_6772_p2.read();
    } else {
        grp_fu_5352_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5356_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5356_p0 = grp_fu_6742_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5356_p0 = grp_fu_5332_p2.read();
    } else {
        grp_fu_5356_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5356_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5356_p1 = grp_fu_6802_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5356_p1 = grp_fu_6778_p2.read();
    } else {
        grp_fu_5356_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5361_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5361_p0 = grp_fu_6748_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5361_p0 = grp_fu_5336_p2.read();
    } else {
        grp_fu_5361_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5361_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5361_p1 = grp_fu_6808_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5361_p1 = grp_fu_6784_p2.read();
    } else {
        grp_fu_5361_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5366_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5366_p0 = grp_fu_6754_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5366_p0 = grp_fu_5340_p2.read();
    } else {
        grp_fu_5366_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5366_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5366_p1 = grp_fu_6814_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5366_p1 = grp_fu_6790_p2.read();
    } else {
        grp_fu_5366_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5371_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5371_p0 = grp_fu_6760_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5371_p0 = grp_fu_5344_p2.read();
    } else {
        grp_fu_5371_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5371_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5371_p1 = grp_fu_6820_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5371_p1 = grp_fu_6796_p2.read();
    } else {
        grp_fu_5371_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5376_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5376_p0 = grp_fu_5332_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5376_p0 = grp_fu_5348_p2.read();
    } else {
        grp_fu_5376_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5376_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5376_p1 = grp_fu_6826_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5376_p1 = grp_fu_6802_p2.read();
    } else {
        grp_fu_5376_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5381_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5381_p0 = grp_fu_5336_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5381_p0 = grp_fu_5352_p2.read();
    } else {
        grp_fu_5381_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5381_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5381_p1 = grp_fu_6832_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5381_p1 = grp_fu_6808_p2.read();
    } else {
        grp_fu_5381_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5386_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5386_p0 = grp_fu_5340_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5386_p0 = grp_fu_5356_p2.read();
    } else {
        grp_fu_5386_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5386_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5386_p1 = grp_fu_6838_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5386_p1 = grp_fu_6814_p2.read();
    } else {
        grp_fu_5386_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5391_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5391_p0 = grp_fu_5344_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5391_p0 = grp_fu_5361_p2.read();
    } else {
        grp_fu_5391_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5391_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5391_p1 = grp_fu_6844_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5391_p1 = grp_fu_6820_p2.read();
    } else {
        grp_fu_5391_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5396_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5396_p0 = grp_fu_5348_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5396_p0 = grp_fu_5366_p2.read();
    } else {
        grp_fu_5396_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5396_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5396_p1 = grp_fu_6850_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5396_p1 = grp_fu_6826_p2.read();
    } else {
        grp_fu_5396_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5401_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5401_p0 = grp_fu_5352_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5401_p0 = grp_fu_5371_p2.read();
    } else {
        grp_fu_5401_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5401_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5401_p1 = grp_fu_6856_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5401_p1 = grp_fu_6832_p2.read();
    } else {
        grp_fu_5401_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5406_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5406_p0 = grp_fu_5356_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5406_p0 = grp_fu_5376_p2.read();
    } else {
        grp_fu_5406_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5406_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5406_p1 = grp_fu_6862_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5406_p1 = grp_fu_6838_p2.read();
    } else {
        grp_fu_5406_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5411_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5411_p0 = grp_fu_5361_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5411_p0 = grp_fu_5381_p2.read();
    } else {
        grp_fu_5411_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5411_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5411_p1 = grp_fu_6868_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5411_p1 = grp_fu_6844_p2.read();
    } else {
        grp_fu_5411_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5416_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5416_p0 = grp_fu_5366_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5416_p0 = grp_fu_5386_p2.read();
    } else {
        grp_fu_5416_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5416_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5416_p1 = grp_fu_6874_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5416_p1 = grp_fu_6850_p2.read();
    } else {
        grp_fu_5416_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5421_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5421_p0 = grp_fu_5371_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5421_p0 = grp_fu_5391_p2.read();
    } else {
        grp_fu_5421_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5421_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5421_p1 = grp_fu_6880_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5421_p1 = grp_fu_6856_p2.read();
    } else {
        grp_fu_5421_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5426_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5426_p0 = tmp_5_0_9_reg_12970.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5426_p0 = grp_fu_5396_p2.read();
    } else {
        grp_fu_5426_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5426_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5426_p1 = grp_fu_6886_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5426_p1 = grp_fu_6862_p2.read();
    } else {
        grp_fu_5426_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5431_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5431_p0 = tmp_5_0_9_1_reg_12975.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5431_p0 = grp_fu_5401_p2.read();
    } else {
        grp_fu_5431_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5431_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5431_p1 = grp_fu_6892_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5431_p1 = grp_fu_6868_p2.read();
    } else {
        grp_fu_5431_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5436_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5436_p0 = tmp_5_0_9_2_reg_12980.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5436_p0 = grp_fu_5406_p2.read();
    } else {
        grp_fu_5436_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5436_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5436_p1 = grp_fu_6898_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5436_p1 = grp_fu_6874_p2.read();
    } else {
        grp_fu_5436_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5441_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5441_p0 = tmp_5_0_9_3_reg_12985.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5441_p0 = grp_fu_5411_p2.read();
    } else {
        grp_fu_5441_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5441_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5441_p1 = grp_fu_6904_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5441_p1 = grp_fu_6880_p2.read();
    } else {
        grp_fu_5441_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5446_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5446_p0 = tmp_5_0_9_4_reg_12990.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5446_p0 = grp_fu_5416_p2.read();
    } else {
        grp_fu_5446_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5446_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5446_p1 = grp_fu_6910_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5446_p1 = grp_fu_6886_p2.read();
    } else {
        grp_fu_5446_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5451_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5451_p0 = tmp_5_0_9_5_reg_12995.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5451_p0 = grp_fu_5421_p2.read();
    } else {
        grp_fu_5451_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5451_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5451_p1 = grp_fu_6916_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5451_p1 = grp_fu_6892_p2.read();
    } else {
        grp_fu_5451_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5456_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5456_p0 = tmp_5_0_9_6_reg_13000.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5456_p0 = grp_fu_5426_p2.read();
    } else {
        grp_fu_5456_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5456_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5456_p1 = grp_fu_6922_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5456_p1 = grp_fu_6898_p2.read();
    } else {
        grp_fu_5456_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5461_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5461_p0 = tmp_5_0_9_7_reg_13005.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5461_p0 = grp_fu_5431_p2.read();
    } else {
        grp_fu_5461_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5461_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5461_p1 = grp_fu_6928_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5461_p1 = grp_fu_6904_p2.read();
    } else {
        grp_fu_5461_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5466_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5466_p0 = tmp_5_0_9_8_reg_13010.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5466_p0 = grp_fu_5436_p2.read();
    } else {
        grp_fu_5466_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5466_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5466_p1 = grp_fu_6934_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5466_p1 = grp_fu_6910_p2.read();
    } else {
        grp_fu_5466_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5471_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5471_p0 = tmp_5_0_9_9_reg_13015.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5471_p0 = grp_fu_5441_p2.read();
    } else {
        grp_fu_5471_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5471_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5471_p1 = grp_fu_6940_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5471_p1 = grp_fu_6916_p2.read();
    } else {
        grp_fu_5471_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5476_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5476_p0 = grp_fu_5426_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5476_p0 = grp_fu_5446_p2.read();
    } else {
        grp_fu_5476_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5476_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5476_p1 = grp_fu_6946_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5476_p1 = grp_fu_6922_p2.read();
    } else {
        grp_fu_5476_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5481_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5481_p0 = grp_fu_5431_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5481_p0 = grp_fu_5451_p2.read();
    } else {
        grp_fu_5481_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5481_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5481_p1 = grp_fu_6952_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5481_p1 = grp_fu_6928_p2.read();
    } else {
        grp_fu_5481_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5486_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5486_p0 = grp_fu_5436_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5486_p0 = grp_fu_5456_p2.read();
    } else {
        grp_fu_5486_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5486_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5486_p1 = grp_fu_6958_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5486_p1 = grp_fu_6934_p2.read();
    } else {
        grp_fu_5486_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5491_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5491_p0 = grp_fu_5441_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5491_p0 = grp_fu_5461_p2.read();
    } else {
        grp_fu_5491_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5491_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5491_p1 = grp_fu_6964_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5491_p1 = grp_fu_6940_p2.read();
    } else {
        grp_fu_5491_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5496_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5496_p0 = grp_fu_5446_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5496_p0 = grp_fu_5466_p2.read();
    } else {
        grp_fu_5496_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5496_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5496_p1 = grp_fu_6970_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5496_p1 = grp_fu_6946_p2.read();
    } else {
        grp_fu_5496_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5501_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5501_p0 = grp_fu_5451_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5501_p0 = grp_fu_5471_p2.read();
    } else {
        grp_fu_5501_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5501_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5501_p1 = grp_fu_6976_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5501_p1 = grp_fu_6952_p2.read();
    } else {
        grp_fu_5501_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5506_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5506_p0 = grp_fu_5456_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5506_p0 = grp_fu_5476_p2.read();
    } else {
        grp_fu_5506_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5506_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5506_p1 = grp_fu_6982_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5506_p1 = grp_fu_6958_p2.read();
    } else {
        grp_fu_5506_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5511_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5511_p0 = grp_fu_5461_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5511_p0 = grp_fu_5481_p2.read();
    } else {
        grp_fu_5511_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5511_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5511_p1 = grp_fu_6988_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5511_p1 = grp_fu_6964_p2.read();
    } else {
        grp_fu_5511_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5516_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5516_p0 = grp_fu_5466_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5516_p0 = grp_fu_5486_p2.read();
    } else {
        grp_fu_5516_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5516_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5516_p1 = grp_fu_6994_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5516_p1 = grp_fu_6970_p2.read();
    } else {
        grp_fu_5516_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5521_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5521_p0 = grp_fu_5471_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5521_p0 = grp_fu_5491_p2.read();
    } else {
        grp_fu_5521_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5521_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5521_p1 = grp_fu_7000_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5521_p1 = grp_fu_6976_p2.read();
    } else {
        grp_fu_5521_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5526_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5526_p0 = grp_fu_5476_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5526_p0 = grp_fu_5496_p2.read();
    } else {
        grp_fu_5526_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5526_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5526_p1 = grp_fu_7006_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5526_p1 = grp_fu_6982_p2.read();
    } else {
        grp_fu_5526_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5531_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5531_p0 = grp_fu_5481_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5531_p0 = grp_fu_5501_p2.read();
    } else {
        grp_fu_5531_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5531_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5531_p1 = grp_fu_7012_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5531_p1 = grp_fu_6988_p2.read();
    } else {
        grp_fu_5531_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5536_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5536_p0 = grp_fu_5486_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5536_p0 = grp_fu_5506_p2.read();
    } else {
        grp_fu_5536_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5536_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5536_p1 = grp_fu_7018_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5536_p1 = grp_fu_6994_p2.read();
    } else {
        grp_fu_5536_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5541_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5541_p0 = grp_fu_5491_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5541_p0 = grp_fu_5511_p2.read();
    } else {
        grp_fu_5541_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5541_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5541_p1 = grp_fu_7024_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5541_p1 = grp_fu_7000_p2.read();
    } else {
        grp_fu_5541_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5546_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5546_p0 = grp_fu_5496_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5546_p0 = grp_fu_5516_p2.read();
    } else {
        grp_fu_5546_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5546_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5546_p1 = grp_fu_7030_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5546_p1 = grp_fu_7006_p2.read();
    } else {
        grp_fu_5546_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5551_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5551_p0 = grp_fu_5501_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5551_p0 = grp_fu_5521_p2.read();
    } else {
        grp_fu_5551_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5551_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5551_p1 = grp_fu_7036_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5551_p1 = grp_fu_7012_p2.read();
    } else {
        grp_fu_5551_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5556_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5556_p0 = grp_fu_5506_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5556_p0 = grp_fu_5526_p2.read();
    } else {
        grp_fu_5556_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5556_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5556_p1 = grp_fu_7042_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5556_p1 = grp_fu_7018_p2.read();
    } else {
        grp_fu_5556_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5561_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5561_p0 = grp_fu_5511_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5561_p0 = grp_fu_5531_p2.read();
    } else {
        grp_fu_5561_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5561_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5561_p1 = grp_fu_7048_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5561_p1 = grp_fu_7024_p2.read();
    } else {
        grp_fu_5561_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5566_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5566_p0 = grp_fu_5516_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5566_p0 = grp_fu_5536_p2.read();
    } else {
        grp_fu_5566_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5566_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5566_p1 = grp_fu_7054_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5566_p1 = grp_fu_7030_p2.read();
    } else {
        grp_fu_5566_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5571_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5571_p0 = grp_fu_5521_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5571_p0 = grp_fu_5541_p2.read();
    } else {
        grp_fu_5571_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5571_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5571_p1 = grp_fu_7060_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5571_p1 = grp_fu_7036_p2.read();
    } else {
        grp_fu_5571_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5576_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5576_p0 = grp_fu_5526_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5576_p0 = grp_fu_5546_p2.read();
    } else {
        grp_fu_5576_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5576_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5576_p1 = grp_fu_7066_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5576_p1 = grp_fu_7042_p2.read();
    } else {
        grp_fu_5576_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5581_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5581_p0 = grp_fu_5531_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5581_p0 = grp_fu_5551_p2.read();
    } else {
        grp_fu_5581_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5581_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5581_p1 = grp_fu_7072_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5581_p1 = grp_fu_7048_p2.read();
    } else {
        grp_fu_5581_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5586_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5586_p0 = grp_fu_5536_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5586_p0 = grp_fu_5556_p2.read();
    } else {
        grp_fu_5586_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5586_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5586_p1 = grp_fu_7078_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5586_p1 = grp_fu_7054_p2.read();
    } else {
        grp_fu_5586_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5591_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5591_p0 = grp_fu_5541_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5591_p0 = grp_fu_5561_p2.read();
    } else {
        grp_fu_5591_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5591_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5591_p1 = grp_fu_7084_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5591_p1 = grp_fu_7060_p2.read();
    } else {
        grp_fu_5591_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5596_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5596_p0 = grp_fu_5546_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5596_p0 = grp_fu_5566_p2.read();
    } else {
        grp_fu_5596_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5596_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5596_p1 = grp_fu_7090_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5596_p1 = grp_fu_7066_p2.read();
    } else {
        grp_fu_5596_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5601_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5601_p0 = grp_fu_5551_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5601_p0 = grp_fu_5571_p2.read();
    } else {
        grp_fu_5601_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5601_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5601_p1 = grp_fu_7096_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5601_p1 = grp_fu_7072_p2.read();
    } else {
        grp_fu_5601_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5606_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5606_p0 = grp_fu_5556_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5606_p0 = grp_fu_5576_p2.read();
    } else {
        grp_fu_5606_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5606_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5606_p1 = grp_fu_7102_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5606_p1 = grp_fu_7078_p2.read();
    } else {
        grp_fu_5606_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5611_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5611_p0 = grp_fu_5561_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5611_p0 = grp_fu_5581_p2.read();
    } else {
        grp_fu_5611_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5611_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5611_p1 = grp_fu_7108_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5611_p1 = grp_fu_7084_p2.read();
    } else {
        grp_fu_5611_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5616_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5616_p0 = grp_fu_5566_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5616_p0 = grp_fu_5586_p2.read();
    } else {
        grp_fu_5616_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5616_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5616_p1 = grp_fu_7114_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5616_p1 = grp_fu_7090_p2.read();
    } else {
        grp_fu_5616_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5621_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5621_p0 = grp_fu_5571_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5621_p0 = grp_fu_5591_p2.read();
    } else {
        grp_fu_5621_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5621_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5621_p1 = grp_fu_7120_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_5621_p1 = grp_fu_7096_p2.read();
    } else {
        grp_fu_5621_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5626_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5626_p0 = grp_fu_5576_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5626_p0 = tmp_1_2_s_reg_12093.read();
    } else {
        grp_fu_5626_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5626_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5626_p1 = grp_fu_7126_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5626_p1 = grp_fu_7102_p2.read();
    } else {
        grp_fu_5626_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5630_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5630_p0 = grp_fu_5581_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5630_p0 = tmp_1_2_23_1_reg_12098.read();
    } else {
        grp_fu_5630_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5630_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5630_p1 = grp_fu_7132_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5630_p1 = grp_fu_7108_p2.read();
    } else {
        grp_fu_5630_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5634_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5634_p0 = grp_fu_5586_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5634_p0 = tmp_1_2_23_2_reg_12103.read();
    } else {
        grp_fu_5634_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5634_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5634_p1 = grp_fu_7138_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5634_p1 = grp_fu_7114_p2.read();
    } else {
        grp_fu_5634_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5638_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5638_p0 = grp_fu_5591_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5638_p0 = tmp_1_2_23_3_reg_12108.read();
    } else {
        grp_fu_5638_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5638_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5638_p1 = grp_fu_7144_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5638_p1 = grp_fu_7120_p2.read();
    } else {
        grp_fu_5638_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5642_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5642_p0 = grp_fu_5596_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5642_p0 = tmp_1_2_23_4_reg_12113.read();
    } else {
        grp_fu_5642_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5642_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5642_p1 = grp_fu_7150_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5642_p1 = grp_fu_7126_p2.read();
    } else {
        grp_fu_5642_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5646_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5646_p0 = grp_fu_5601_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5646_p0 = tmp_1_2_23_5_reg_12118.read();
    } else {
        grp_fu_5646_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5646_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5646_p1 = grp_fu_7156_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5646_p1 = grp_fu_7132_p2.read();
    } else {
        grp_fu_5646_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5650_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5650_p0 = grp_fu_5606_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5650_p0 = grp_fu_5626_p2.read();
    } else {
        grp_fu_5650_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5650_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5650_p1 = grp_fu_7162_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5650_p1 = grp_fu_7138_p2.read();
    } else {
        grp_fu_5650_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5655_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5655_p0 = grp_fu_5611_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5655_p0 = grp_fu_5630_p2.read();
    } else {
        grp_fu_5655_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5655_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5655_p1 = grp_fu_7168_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5655_p1 = grp_fu_7144_p2.read();
    } else {
        grp_fu_5655_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5660_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5660_p0 = grp_fu_5616_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5660_p0 = grp_fu_5634_p2.read();
    } else {
        grp_fu_5660_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5660_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5660_p1 = grp_fu_7174_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5660_p1 = grp_fu_7150_p2.read();
    } else {
        grp_fu_5660_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5665_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5665_p0 = grp_fu_5621_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5665_p0 = grp_fu_5638_p2.read();
    } else {
        grp_fu_5665_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5665_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5665_p1 = grp_fu_7180_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5665_p1 = grp_fu_7156_p2.read();
    } else {
        grp_fu_5665_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5670_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5670_p0 = grp_fu_5626_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5670_p0 = grp_fu_5642_p2.read();
    } else {
        grp_fu_5670_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5670_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5670_p1 = grp_fu_7186_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5670_p1 = grp_fu_7162_p2.read();
    } else {
        grp_fu_5670_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5675_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5675_p0 = grp_fu_5630_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5675_p0 = grp_fu_5646_p2.read();
    } else {
        grp_fu_5675_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5675_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5675_p1 = grp_fu_7192_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5675_p1 = grp_fu_7168_p2.read();
    } else {
        grp_fu_5675_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5680_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5680_p0 = grp_fu_5634_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5680_p0 = grp_fu_5650_p2.read();
    } else {
        grp_fu_5680_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5680_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5680_p1 = grp_fu_7198_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5680_p1 = grp_fu_7174_p2.read();
    } else {
        grp_fu_5680_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5685_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5685_p0 = grp_fu_5638_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5685_p0 = grp_fu_5655_p2.read();
    } else {
        grp_fu_5685_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5685_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5685_p1 = grp_fu_7204_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5685_p1 = grp_fu_7180_p2.read();
    } else {
        grp_fu_5685_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5690_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5690_p0 = grp_fu_5642_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5690_p0 = grp_fu_5660_p2.read();
    } else {
        grp_fu_5690_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5690_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5690_p1 = grp_fu_7210_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5690_p1 = grp_fu_7186_p2.read();
    } else {
        grp_fu_5690_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5695_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5695_p0 = grp_fu_5646_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5695_p0 = grp_fu_5665_p2.read();
    } else {
        grp_fu_5695_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5695_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5695_p1 = grp_fu_7216_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5695_p1 = grp_fu_7192_p2.read();
    } else {
        grp_fu_5695_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5700_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5700_p0 = grp_fu_5650_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5700_p0 = grp_fu_5670_p2.read();
    } else {
        grp_fu_5700_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5700_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5700_p1 = grp_fu_7222_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5700_p1 = grp_fu_7198_p2.read();
    } else {
        grp_fu_5700_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5705_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5705_p0 = grp_fu_5655_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5705_p0 = grp_fu_5675_p2.read();
    } else {
        grp_fu_5705_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5705_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5705_p1 = grp_fu_7228_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5705_p1 = grp_fu_7204_p2.read();
    } else {
        grp_fu_5705_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5710_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5710_p0 = grp_fu_5660_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5710_p0 = grp_fu_5680_p2.read();
    } else {
        grp_fu_5710_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5710_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5710_p1 = grp_fu_7234_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5710_p1 = grp_fu_7210_p2.read();
    } else {
        grp_fu_5710_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5715_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5715_p0 = grp_fu_5665_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5715_p0 = grp_fu_5685_p2.read();
    } else {
        grp_fu_5715_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5715_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5715_p1 = grp_fu_7240_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5715_p1 = grp_fu_7216_p2.read();
    } else {
        grp_fu_5715_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5720_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5720_p0 = grp_fu_5670_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5720_p0 = grp_fu_5690_p2.read();
    } else {
        grp_fu_5720_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5720_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5720_p1 = grp_fu_7246_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5720_p1 = grp_fu_7222_p2.read();
    } else {
        grp_fu_5720_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5725_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5725_p0 = grp_fu_5675_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5725_p0 = grp_fu_5695_p2.read();
    } else {
        grp_fu_5725_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5725_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5725_p1 = grp_fu_7252_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5725_p1 = grp_fu_7228_p2.read();
    } else {
        grp_fu_5725_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5730_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5730_p0 = grp_fu_5680_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5730_p0 = grp_fu_5700_p2.read();
    } else {
        grp_fu_5730_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5730_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5730_p1 = grp_fu_7258_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5730_p1 = grp_fu_7234_p2.read();
    } else {
        grp_fu_5730_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5735_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5735_p0 = grp_fu_5685_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5735_p0 = grp_fu_5705_p2.read();
    } else {
        grp_fu_5735_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5735_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5735_p1 = grp_fu_7264_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5735_p1 = grp_fu_7240_p2.read();
    } else {
        grp_fu_5735_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5740_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5740_p0 = grp_fu_5690_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5740_p0 = grp_fu_5710_p2.read();
    } else {
        grp_fu_5740_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5740_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5740_p1 = grp_fu_7270_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5740_p1 = grp_fu_7246_p2.read();
    } else {
        grp_fu_5740_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5745_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5745_p0 = grp_fu_5695_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5745_p0 = grp_fu_5715_p2.read();
    } else {
        grp_fu_5745_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5745_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5745_p1 = grp_fu_7276_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5745_p1 = grp_fu_7252_p2.read();
    } else {
        grp_fu_5745_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5750_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5750_p0 = grp_fu_5700_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5750_p0 = grp_fu_5720_p2.read();
    } else {
        grp_fu_5750_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5750_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5750_p1 = grp_fu_7282_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5750_p1 = grp_fu_7258_p2.read();
    } else {
        grp_fu_5750_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5755_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5755_p0 = grp_fu_5705_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5755_p0 = grp_fu_5725_p2.read();
    } else {
        grp_fu_5755_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5755_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5755_p1 = grp_fu_7288_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5755_p1 = grp_fu_7264_p2.read();
    } else {
        grp_fu_5755_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5760_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5760_p0 = grp_fu_5710_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5760_p0 = grp_fu_5730_p2.read();
    } else {
        grp_fu_5760_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5760_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5760_p1 = grp_fu_7294_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5760_p1 = grp_fu_7270_p2.read();
    } else {
        grp_fu_5760_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5765_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5765_p0 = grp_fu_5715_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5765_p0 = grp_fu_5735_p2.read();
    } else {
        grp_fu_5765_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5765_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5765_p1 = grp_fu_7300_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5765_p1 = grp_fu_7276_p2.read();
    } else {
        grp_fu_5765_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5770_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5770_p0 = grp_fu_5720_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5770_p0 = grp_fu_5740_p2.read();
    } else {
        grp_fu_5770_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5770_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5770_p1 = grp_fu_7306_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5770_p1 = grp_fu_7282_p2.read();
    } else {
        grp_fu_5770_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5775_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5775_p0 = grp_fu_5725_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5775_p0 = grp_fu_5745_p2.read();
    } else {
        grp_fu_5775_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5775_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5775_p1 = grp_fu_7312_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5775_p1 = grp_fu_7288_p2.read();
    } else {
        grp_fu_5775_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5780_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5780_p0 = grp_fu_5730_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5780_p0 = grp_fu_5750_p2.read();
    } else {
        grp_fu_5780_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5780_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5780_p1 = grp_fu_7318_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5780_p1 = grp_fu_7294_p2.read();
    } else {
        grp_fu_5780_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5785_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5785_p0 = grp_fu_5735_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5785_p0 = grp_fu_5755_p2.read();
    } else {
        grp_fu_5785_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5785_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5785_p1 = grp_fu_7324_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5785_p1 = grp_fu_7300_p2.read();
    } else {
        grp_fu_5785_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5790_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5790_p0 = grp_fu_5740_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5790_p0 = grp_fu_5760_p2.read();
    } else {
        grp_fu_5790_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5790_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5790_p1 = grp_fu_7330_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5790_p1 = grp_fu_7306_p2.read();
    } else {
        grp_fu_5790_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5795_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5795_p0 = grp_fu_5745_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5795_p0 = grp_fu_5765_p2.read();
    } else {
        grp_fu_5795_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5795_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5795_p1 = grp_fu_7336_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5795_p1 = grp_fu_7312_p2.read();
    } else {
        grp_fu_5795_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5800_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5800_p0 = grp_fu_5750_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5800_p0 = grp_fu_5770_p2.read();
    } else {
        grp_fu_5800_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5800_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5800_p1 = grp_fu_7342_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5800_p1 = grp_fu_7318_p2.read();
    } else {
        grp_fu_5800_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5805_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5805_p0 = grp_fu_5755_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5805_p0 = grp_fu_5775_p2.read();
    } else {
        grp_fu_5805_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5805_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5805_p1 = grp_fu_7348_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5805_p1 = grp_fu_7324_p2.read();
    } else {
        grp_fu_5805_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5810_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5810_p0 = grp_fu_5760_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5810_p0 = grp_fu_5780_p2.read();
    } else {
        grp_fu_5810_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5810_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5810_p1 = grp_fu_7354_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5810_p1 = grp_fu_7330_p2.read();
    } else {
        grp_fu_5810_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5815_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5815_p0 = grp_fu_5765_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5815_p0 = grp_fu_5785_p2.read();
    } else {
        grp_fu_5815_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5815_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5815_p1 = grp_fu_7360_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5815_p1 = grp_fu_7336_p2.read();
    } else {
        grp_fu_5815_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5820_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5820_p0 = tmp_5_2_7_reg_13437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5820_p0 = grp_fu_5790_p2.read();
    } else {
        grp_fu_5820_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5820_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5820_p1 = grp_fu_7366_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5820_p1 = grp_fu_7342_p2.read();
    } else {
        grp_fu_5820_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5825_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5825_p0 = tmp_5_2_7_1_reg_13442.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5825_p0 = grp_fu_5795_p2.read();
    } else {
        grp_fu_5825_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5825_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5825_p1 = grp_fu_7372_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5825_p1 = grp_fu_7348_p2.read();
    } else {
        grp_fu_5825_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5830_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5830_p0 = tmp_5_2_7_2_reg_13447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5830_p0 = grp_fu_5800_p2.read();
    } else {
        grp_fu_5830_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5830_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5830_p1 = grp_fu_7378_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5830_p1 = grp_fu_7354_p2.read();
    } else {
        grp_fu_5830_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5835_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5835_p0 = tmp_5_2_7_3_reg_13452.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5835_p0 = grp_fu_5805_p2.read();
    } else {
        grp_fu_5835_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5835_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5835_p1 = grp_fu_7384_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5835_p1 = grp_fu_7360_p2.read();
    } else {
        grp_fu_5835_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5840_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5840_p0 = tmp_5_2_7_4_reg_13457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5840_p0 = grp_fu_5810_p2.read();
    } else {
        grp_fu_5840_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5840_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5840_p1 = grp_fu_7390_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5840_p1 = grp_fu_7366_p2.read();
    } else {
        grp_fu_5840_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5845_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5845_p0 = tmp_5_2_7_5_reg_13462.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5845_p0 = grp_fu_5815_p2.read();
    } else {
        grp_fu_5845_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5845_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5845_p1 = grp_fu_7396_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5845_p1 = grp_fu_7372_p2.read();
    } else {
        grp_fu_5845_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5850_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5850_p0 = tmp_5_2_7_6_reg_13467.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5850_p0 = grp_fu_5820_p2.read();
    } else {
        grp_fu_5850_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5850_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5850_p1 = grp_fu_7402_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5850_p1 = grp_fu_7378_p2.read();
    } else {
        grp_fu_5850_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5855_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5855_p0 = tmp_5_2_7_7_reg_13472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5855_p0 = grp_fu_5825_p2.read();
    } else {
        grp_fu_5855_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5855_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5855_p1 = grp_fu_7408_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5855_p1 = grp_fu_7384_p2.read();
    } else {
        grp_fu_5855_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5860_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5860_p0 = tmp_5_2_7_8_reg_13477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5860_p0 = grp_fu_5830_p2.read();
    } else {
        grp_fu_5860_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5860_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5860_p1 = grp_fu_7414_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5860_p1 = grp_fu_7390_p2.read();
    } else {
        grp_fu_5860_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5865_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5865_p0 = tmp_5_2_7_9_reg_13482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5865_p0 = grp_fu_5835_p2.read();
    } else {
        grp_fu_5865_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5865_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5865_p1 = grp_fu_7420_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5865_p1 = grp_fu_7396_p2.read();
    } else {
        grp_fu_5865_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5870_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5870_p0 = grp_fu_5820_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5870_p0 = grp_fu_5840_p2.read();
    } else {
        grp_fu_5870_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5870_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5870_p1 = grp_fu_7426_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5870_p1 = grp_fu_7402_p2.read();
    } else {
        grp_fu_5870_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5875_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5875_p0 = grp_fu_5825_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5875_p0 = grp_fu_5845_p2.read();
    } else {
        grp_fu_5875_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5875_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5875_p1 = grp_fu_7432_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5875_p1 = grp_fu_7408_p2.read();
    } else {
        grp_fu_5875_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5880_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5880_p0 = grp_fu_5830_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5880_p0 = grp_fu_5850_p2.read();
    } else {
        grp_fu_5880_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5880_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5880_p1 = grp_fu_7438_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5880_p1 = grp_fu_7414_p2.read();
    } else {
        grp_fu_5880_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5885_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5885_p0 = grp_fu_5835_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5885_p0 = grp_fu_5855_p2.read();
    } else {
        grp_fu_5885_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5885_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5885_p1 = grp_fu_7444_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5885_p1 = grp_fu_7420_p2.read();
    } else {
        grp_fu_5885_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5890_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5890_p0 = grp_fu_5840_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5890_p0 = grp_fu_5860_p2.read();
    } else {
        grp_fu_5890_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5890_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5890_p1 = grp_fu_7450_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5890_p1 = grp_fu_7426_p2.read();
    } else {
        grp_fu_5890_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5895_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5895_p0 = grp_fu_5845_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5895_p0 = grp_fu_5865_p2.read();
    } else {
        grp_fu_5895_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5895_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5895_p1 = grp_fu_7456_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5895_p1 = grp_fu_7432_p2.read();
    } else {
        grp_fu_5895_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5900_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5900_p0 = grp_fu_5850_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5900_p0 = grp_fu_5870_p2.read();
    } else {
        grp_fu_5900_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5900_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5900_p1 = grp_fu_7462_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5900_p1 = grp_fu_7438_p2.read();
    } else {
        grp_fu_5900_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5905_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5905_p0 = grp_fu_5855_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5905_p0 = grp_fu_5875_p2.read();
    } else {
        grp_fu_5905_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5905_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5905_p1 = grp_fu_7468_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5905_p1 = grp_fu_7444_p2.read();
    } else {
        grp_fu_5905_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5910_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5910_p0 = grp_fu_5860_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5910_p0 = grp_fu_5880_p2.read();
    } else {
        grp_fu_5910_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5910_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5910_p1 = grp_fu_7474_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5910_p1 = grp_fu_7450_p2.read();
    } else {
        grp_fu_5910_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5915_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5915_p0 = grp_fu_5865_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5915_p0 = grp_fu_5885_p2.read();
    } else {
        grp_fu_5915_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5915_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5915_p1 = grp_fu_7480_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5915_p1 = grp_fu_7456_p2.read();
    } else {
        grp_fu_5915_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5920_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5920_p0 = grp_fu_5870_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5920_p0 = grp_fu_5890_p2.read();
    } else {
        grp_fu_5920_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5920_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5920_p1 = grp_fu_7486_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5920_p1 = grp_fu_7462_p2.read();
    } else {
        grp_fu_5920_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5925_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5925_p0 = grp_fu_5875_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5925_p0 = grp_fu_5895_p2.read();
    } else {
        grp_fu_5925_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5925_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5925_p1 = grp_fu_7492_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5925_p1 = grp_fu_7468_p2.read();
    } else {
        grp_fu_5925_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5930_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5930_p0 = grp_fu_5880_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5930_p0 = grp_fu_5900_p2.read();
    } else {
        grp_fu_5930_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5930_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5930_p1 = grp_fu_7498_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5930_p1 = grp_fu_7474_p2.read();
    } else {
        grp_fu_5930_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5935_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5935_p0 = grp_fu_5885_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5935_p0 = grp_fu_5905_p2.read();
    } else {
        grp_fu_5935_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5935_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5935_p1 = grp_fu_7504_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5935_p1 = grp_fu_7480_p2.read();
    } else {
        grp_fu_5935_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5940_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5940_p0 = grp_fu_5890_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5940_p0 = grp_fu_5910_p2.read();
    } else {
        grp_fu_5940_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5940_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5940_p1 = grp_fu_7510_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5940_p1 = grp_fu_7486_p2.read();
    } else {
        grp_fu_5940_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5945_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5945_p0 = grp_fu_5895_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5945_p0 = grp_fu_5915_p2.read();
    } else {
        grp_fu_5945_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5945_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5945_p1 = grp_fu_7516_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5945_p1 = grp_fu_7492_p2.read();
    } else {
        grp_fu_5945_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5950_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5950_p0 = grp_fu_5900_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5950_p0 = grp_fu_5920_p2.read();
    } else {
        grp_fu_5950_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5950_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5950_p1 = grp_fu_7522_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5950_p1 = grp_fu_7498_p2.read();
    } else {
        grp_fu_5950_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5955_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5955_p0 = grp_fu_5905_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5955_p0 = grp_fu_5925_p2.read();
    } else {
        grp_fu_5955_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5955_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5955_p1 = grp_fu_7528_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5955_p1 = grp_fu_7504_p2.read();
    } else {
        grp_fu_5955_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5960_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5960_p0 = grp_fu_5910_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5960_p0 = grp_fu_5930_p2.read();
    } else {
        grp_fu_5960_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5960_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5960_p1 = grp_fu_7534_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5960_p1 = grp_fu_7510_p2.read();
    } else {
        grp_fu_5960_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5965_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5965_p0 = grp_fu_5915_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5965_p0 = grp_fu_5935_p2.read();
    } else {
        grp_fu_5965_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5965_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5965_p1 = grp_fu_7540_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5965_p1 = grp_fu_7516_p2.read();
    } else {
        grp_fu_5965_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5970_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5970_p0 = grp_fu_5920_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5970_p0 = grp_fu_5940_p2.read();
    } else {
        grp_fu_5970_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5970_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5970_p1 = grp_fu_7546_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5970_p1 = grp_fu_7522_p2.read();
    } else {
        grp_fu_5970_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5975_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5975_p0 = grp_fu_5925_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5975_p0 = grp_fu_5945_p2.read();
    } else {
        grp_fu_5975_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5975_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5975_p1 = grp_fu_7552_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5975_p1 = grp_fu_7528_p2.read();
    } else {
        grp_fu_5975_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5980_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5980_p0 = grp_fu_5930_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5980_p0 = grp_fu_5950_p2.read();
    } else {
        grp_fu_5980_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5980_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5980_p1 = grp_fu_7558_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5980_p1 = grp_fu_7534_p2.read();
    } else {
        grp_fu_5980_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5985_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5985_p0 = grp_fu_5935_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5985_p0 = grp_fu_5955_p2.read();
    } else {
        grp_fu_5985_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5985_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5985_p1 = grp_fu_7564_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5985_p1 = grp_fu_7540_p2.read();
    } else {
        grp_fu_5985_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5990_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5990_p0 = grp_fu_5940_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5990_p0 = grp_fu_5960_p2.read();
    } else {
        grp_fu_5990_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5990_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5990_p1 = grp_fu_7570_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5990_p1 = grp_fu_7546_p2.read();
    } else {
        grp_fu_5990_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5995_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5995_p0 = grp_fu_5945_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5995_p0 = grp_fu_5965_p2.read();
    } else {
        grp_fu_5995_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5995_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_5995_p1 = grp_fu_7577_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_5995_p1 = grp_fu_7552_p2.read();
    } else {
        grp_fu_5995_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6000_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6000_p0 = grp_fu_5950_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6000_p0 = grp_fu_5970_p2.read();
    } else {
        grp_fu_6000_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6000_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6000_p1 = grp_fu_7584_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6000_p1 = grp_fu_7558_p2.read();
    } else {
        grp_fu_6000_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6005_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6005_p0 = grp_fu_5955_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6005_p0 = grp_fu_5975_p2.read();
    } else {
        grp_fu_6005_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6005_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6005_p1 = grp_fu_7591_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6005_p1 = grp_fu_7564_p2.read();
    } else {
        grp_fu_6005_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6010_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6010_p0 = grp_fu_5960_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6010_p0 = grp_fu_5980_p2.read();
    } else {
        grp_fu_6010_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6010_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6010_p1 = grp_fu_7598_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6010_p1 = grp_fu_7570_p2.read();
    } else {
        grp_fu_6010_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6015_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6015_p0 = grp_fu_5965_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6015_p0 = grp_fu_5985_p2.read();
    } else {
        grp_fu_6015_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6015_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6015_p1 = grp_fu_7605_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6015_p1 = grp_fu_7577_p2.read();
    } else {
        grp_fu_6015_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6020_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6020_p0 = grp_fu_5970_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6020_p0 = grp_fu_5990_p2.read();
    } else {
        grp_fu_6020_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6020_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6020_p1 = tmp_3_3_7_fu_7906_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6020_p1 = grp_fu_7584_p2.read();
    } else {
        grp_fu_6020_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6025_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6025_p0 = grp_fu_5975_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6025_p0 = grp_fu_5995_p2.read();
    } else {
        grp_fu_6025_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6025_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6025_p1 = tmp_3_3_7_1_fu_7912_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6025_p1 = grp_fu_7591_p2.read();
    } else {
        grp_fu_6025_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6030_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6030_p0 = grp_fu_5980_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6030_p0 = grp_fu_6000_p2.read();
    } else {
        grp_fu_6030_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6030_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6030_p1 = tmp_3_3_7_2_fu_7918_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6030_p1 = grp_fu_7598_p2.read();
    } else {
        grp_fu_6030_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6035_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6035_p0 = grp_fu_5985_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6035_p0 = grp_fu_6005_p2.read();
    } else {
        grp_fu_6035_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6035_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6035_p1 = tmp_3_3_7_3_fu_7924_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6035_p1 = grp_fu_7605_p2.read();
    } else {
        grp_fu_6035_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6040_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6040_p0 = grp_fu_5990_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6040_p0 = grp_fu_6010_p2.read();
    } else {
        grp_fu_6040_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6040_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6040_p1 = tmp_3_3_7_4_fu_7930_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6040_p1 = ap_const_lv32_BF0DBB74;
    } else {
        grp_fu_6040_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6046_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6046_p0 = grp_fu_5995_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6046_p0 = grp_fu_6015_p2.read();
    } else {
        grp_fu_6046_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6046_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6046_p1 = tmp_3_3_7_5_fu_7936_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6046_p1 = ap_const_lv32_BDA8D161;
    } else {
        grp_fu_6046_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6052_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6052_p0 = grp_fu_6000_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6052_p0 = grp_fu_6020_p2.read();
    } else {
        grp_fu_6052_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6052_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6052_p1 = tmp_3_3_7_6_fu_7942_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6052_p1 = ap_const_lv32_BD1C2B57;
    } else {
        grp_fu_6052_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6058_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6058_p0 = grp_fu_6005_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6058_p0 = grp_fu_6025_p2.read();
    } else {
        grp_fu_6058_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6058_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6058_p1 = tmp_3_3_7_7_fu_7948_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6058_p1 = ap_const_lv32_BD73D794;
    } else {
        grp_fu_6058_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6064_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6064_p0 = grp_fu_6010_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6064_p0 = grp_fu_6030_p2.read();
    } else {
        grp_fu_6064_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6064_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6064_p1 = tmp_3_3_7_8_fu_7954_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6064_p1 = ap_const_lv32_BDBF019F;
    } else {
        grp_fu_6064_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6070_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6070_p0 = grp_fu_6015_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6070_p0 = grp_fu_6035_p2.read();
    } else {
        grp_fu_6070_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6070_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        grp_fu_6070_p1 = tmp_3_3_7_9_fu_7960_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6070_p1 = ap_const_lv32_BDFEC6F5;
    } else {
        grp_fu_6070_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6706_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6706_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6706_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6706_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6706_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6706_p1 = conv2_weights_0_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6706_p1 = ap_const_lv32_3E09F9D1;
    } else {
        grp_fu_6706_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6712_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6712_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6712_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6712_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6712_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6712_p1 = conv2_weights_1_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6712_p1 = ap_const_lv32_BCC361EF;
    } else {
        grp_fu_6712_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6718_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6718_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6718_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6718_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6718_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6718_p1 = conv2_weights_2_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6718_p1 = ap_const_lv32_BCB8C7EC;
    } else {
        grp_fu_6718_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6724_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6724_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6724_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6724_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6724_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6724_p1 = conv2_weights_3_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6724_p1 = ap_const_lv32_3C73FB6D;
    } else {
        grp_fu_6724_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6730_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6730_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6730_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6730_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6730_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6730_p1 = conv2_weights_4_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6730_p1 = ap_const_lv32_BF09989D;
    } else {
        grp_fu_6730_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6736_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6736_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6736_p0 = linebuf_1_23.read();
    } else {
        grp_fu_6736_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6736_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6736_p1 = conv2_weights_5_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6736_p1 = ap_const_lv32_BE14A219;
    } else {
        grp_fu_6736_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6742_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6742_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6742_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6742_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6742_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6742_p1 = conv2_weights_6_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6742_p1 = ap_const_lv32_3F2ACFFE;
    } else {
        grp_fu_6742_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6748_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6748_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6748_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6748_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6748_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6748_p1 = conv2_weights_7_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6748_p1 = ap_const_lv32_BCFF4468;
    } else {
        grp_fu_6748_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6754_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6754_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6754_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6754_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6754_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6754_p1 = conv2_weights_8_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6754_p1 = ap_const_lv32_3D95A3B4;
    } else {
        grp_fu_6754_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6760_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6760_p0 = linebuf_7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6760_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6760_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6760_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6760_p1 = conv2_weights_9_0_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6760_p1 = ap_const_lv32_BC44EAD7;
    } else {
        grp_fu_6760_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6766_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6766_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6766_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6766_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6766_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6766_p1 = conv2_weights_0_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6766_p1 = ap_const_lv32_BF0D760E;
    } else {
        grp_fu_6766_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6772_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6772_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6772_p0 = linebuf_1_24.read();
    } else {
        grp_fu_6772_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6772_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6772_p1 = conv2_weights_1_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6772_p1 = ap_const_lv32_BDC17026;
    } else {
        grp_fu_6772_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6778_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6778_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6778_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6778_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6778_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6778_p1 = conv2_weights_2_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6778_p1 = ap_const_lv32_3E912C13;
    } else {
        grp_fu_6778_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6784_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6784_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6784_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6784_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6784_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6784_p1 = conv2_weights_3_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6784_p1 = ap_const_lv32_3E9E3D0A;
    } else {
        grp_fu_6784_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6790_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6790_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6790_p0 = linebuf_1_25.read();
    } else {
        grp_fu_6790_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6790_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6790_p1 = conv2_weights_4_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6790_p1 = ap_const_lv32_BEF4A4F4;
    } else {
        grp_fu_6790_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

}

