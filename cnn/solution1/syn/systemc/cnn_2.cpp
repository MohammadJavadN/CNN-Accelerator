#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state8.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                    esl_seteq<1,1,1>(icmp_ln41_fu_8627_p2.read(), ap_const_lv1_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state8.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state8.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                    esl_seteq<1,1,1>(icmp_ln41_fu_8627_p2.read(), ap_const_lv1_1))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state16.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                    esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_2_fu_10808_p2.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state16.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state16.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter3 = ap_enable_reg_pp1_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter4 = ap_enable_reg_pp1_iter3.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                    esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_2_fu_10808_p2.read()))) {
            ap_enable_reg_pp1_iter4 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln41_fu_8627_p2.read(), ap_const_lv1_0))) {
        c_0_i_reg_5112 = ap_const_lv5_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        c_0_i_reg_5112 = c_reg_12048.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_2_fu_10808_p2.read()))) {
        col_0_i56_reg_5248 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        col_0_i56_reg_5248 = col_1_reg_13491.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln41_fu_8627_p2.read(), ap_const_lv1_1))) {
        col_0_i_reg_5145 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_fu_8695_p2.read()))) {
        col_0_i_reg_5145 = col_fu_9698_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        f_0_i52_reg_5156 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(grp_max_pool_fu_5304_ap_done.read(), ap_const_logic_1))) {
        f_0_i52_reg_5156 = f_reg_12135.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        f_0_i81_reg_5260 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
                esl_seteq<1,1,1>(grp_max_pool2_fu_5284_ap_done.read(), ap_const_logic_1))) {
        f_0_i81_reg_5260 = f_3_reg_13914.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_2_fu_10808_p2.read()))) {
        f_0_reg_5214 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        f_0_reg_5214 = select_ln57_2_reg_12184.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dense_layer_fu_5272_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
            grp_dense_layer_fu_5272_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dense_layer_fu_5272_ap_ready.read())) {
            grp_dense_layer_fu_5272_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_flattening_layer_fu_5324_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln126_fu_11993_p2.read()))) {
            grp_flattening_layer_fu_5324_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_flattening_layer_fu_5324_ap_ready.read())) {
            grp_flattening_layer_fu_5324_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_max_pool2_fu_5284_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
            grp_max_pool2_fu_5284_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_max_pool2_fu_5284_ap_ready.read())) {
            grp_max_pool2_fu_5284_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_max_pool_fu_5304_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln112_fu_10744_p2.read()))) {
            grp_max_pool_fu_5304_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_max_pool_fu_5304_ap_ready.read())) {
            grp_max_pool_fu_5304_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_2_fu_10808_p2.read()))) {
        indvar_flatten11_reg_5225 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_fu_10814_p2.read()))) {
        indvar_flatten11_reg_5225 = select_ln89_fu_10946_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_2_fu_10808_p2.read()))) {
        indvar_flatten281_reg_5203 = ap_const_lv10_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_fu_10814_p2.read()))) {
        indvar_flatten281_reg_5203 = add_ln55_fu_10820_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln41_fu_8627_p2.read(), ap_const_lv1_1))) {
        indvar_flatten_reg_5123 = ap_const_lv10_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_fu_8695_p2.read()))) {
        indvar_flatten_reg_5123 = add_ln26_1_fu_8701_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln17_fu_8615_p2.read()))) {
        phi_ln17_1_reg_5090 = add_ln17_2_fu_8595_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        phi_ln17_1_reg_5090 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln17_fu_8615_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln17_1_fu_8621_p2.read()))) {
        phi_ln17_reg_5078 = add_ln17_reg_12010.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_ln17_reg_5078 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_1_fu_10802_p2.read()))) {
        phi_ln53_1_reg_5180 = add_ln53_1_reg_12145.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        phi_ln53_1_reg_5180 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_fu_10796_p2.read()))) {
        phi_ln53_2_reg_5192 = add_ln53_2_fu_10768_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        phi_ln53_2_reg_5192 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln112_fu_10744_p2.read()))) {
        phi_ln53_reg_5168 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_2_fu_10808_p2.read()))) {
        phi_ln53_reg_5168 = add_ln53_reg_12140.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln17_fu_8615_p2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln17_1_fu_8621_p2.read()))) {
        r_0_i_reg_5101 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(icmp_ln42_fu_8669_p2.read(), ap_const_lv1_1))) {
        r_0_i_reg_5101 = r_reg_12035.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_2_fu_10808_p2.read()))) {
        row_0_i54_reg_5236 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter2_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        row_0_i54_reg_5236 = select_ln93_1_reg_13426.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln41_fu_8627_p2.read(), ap_const_lv1_1))) {
        row_0_i_reg_5134 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_reg_12068.read()))) {
        row_0_i_reg_5134 = select_ln26_1_reg_12082.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln17_reg_12010 = add_ln17_fu_8559_p2.read();
        sub_ln17_reg_12015 = sub_ln17_fu_8589_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        add_ln53_1_reg_12145 = add_ln53_1_fu_10762_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        add_ln53_reg_12140 = add_ln53_fu_10756_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter1_reg.read()))) {
        and_ln117_reg_13487 = and_ln117_fu_11454_p2.read();
        select_ln93_3_reg_13432 = select_ln93_3_fu_11130_p3.read();
        select_ln93_reg_13420 = select_ln93_fu_11071_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) {
        and_ln117_reg_13487_pp1_iter3_reg = and_ln117_reg_13487.read();
        icmp_ln55_reg_12167_pp1_iter2_reg = icmp_ln55_reg_12167_pp1_iter1_reg.read();
        icmp_ln55_reg_12167_pp1_iter3_reg = icmp_ln55_reg_12167_pp1_iter2_reg.read();
        select_ln57_2_reg_12184_pp1_iter2_reg = select_ln57_2_reg_12184_pp1_iter1_reg.read();
        zext_ln57_reg_12191_pp1_iter2_reg = zext_ln57_reg_12191_pp1_iter1_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_fu_8695_p2.read()))) {
        and_ln54_reg_12123 = and_ln54_fu_9692_p2.read();
        select_ln26_reg_12077 = select_ln26_fu_8719_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        c_reg_12048 = c_fu_8675_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        col_1_reg_13491 = col_1_fu_11460_p2.read();
        linebuf_10 = linebuf_11.read();
        linebuf_11 = linebuf_12.read();
        linebuf_12 = linebuf_13.read();
        linebuf_13 = linebuf_14.read();
        linebuf_14 = linebuf_15.read();
        linebuf_15 = linebuf_16.read();
        linebuf_16 = linebuf_17.read();
        linebuf_17 = linebuf_18.read();
        linebuf_18 = linebuf_19.read();
        linebuf_19 = linebuf_20.read();
        linebuf_20 = linebuf_21.read();
        linebuf_21 = linebuf_22.read();
        linebuf_22 = linebuf_23.read();
        linebuf_23 = linebuf_24.read();
        linebuf_24 = linebuf_25.read();
        linebuf_25 = linebuf_26.read();
        linebuf_26 = linebuf_27.read();
        linebuf_27 = linebuf_28.read();
        linebuf_28 = linebuf_29.read();
        linebuf_29 = linebuf_30.read();
        linebuf_30 = ap_sig_allocacmp_linebuf_31_load.read();
        linebuf_9 = linebuf_10.read();
        select_ln93_1_reg_13426 = select_ln93_1_fu_11079_p3.read();
        tmp_5_2_7_1_reg_13442 = grp_fu_5775_p2.read();
        tmp_5_2_7_2_reg_13447 = grp_fu_5780_p2.read();
        tmp_5_2_7_3_reg_13452 = grp_fu_5785_p2.read();
        tmp_5_2_7_4_reg_13457 = grp_fu_5790_p2.read();
        tmp_5_2_7_5_reg_13462 = grp_fu_5795_p2.read();
        tmp_5_2_7_6_reg_13467 = grp_fu_5800_p2.read();
        tmp_5_2_7_7_reg_13472 = grp_fu_5805_p2.read();
        tmp_5_2_7_8_reg_13477 = grp_fu_5810_p2.read();
        tmp_5_2_7_9_reg_13482 = grp_fu_5815_p2.read();
        tmp_5_2_7_reg_13437 = grp_fu_5770_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        conv2_biases_load_reg_13924 = conv2_biases_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        f_3_reg_13914 = f_3_fu_11999_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        f_reg_12135 = f_fu_10750_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln117_reg_13487.read()))) {
        features_conv2_0_ad_1_reg_13851 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_1_ad_1_reg_13857 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_2_ad_1_reg_13863 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_3_ad_1_reg_13869 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_4_ad_1_reg_13875 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_5_ad_1_reg_13881 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_6_ad_1_reg_13887 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_7_ad_1_reg_13893 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_8_ad_1_reg_13899 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
        features_conv2_9_ad_1_reg_13905 =  (sc_lv<6>) (zext_ln124_1_fu_11803_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln26_reg_12068 = icmp_ln26_fu_8695_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln55_reg_12167 = icmp_ln55_fu_10814_p2.read();
        icmp_ln55_reg_12167_pp1_iter1_reg = icmp_ln55_reg_12167.read();
        icmp_ln89_reg_12176_pp1_iter1_reg = icmp_ln89_reg_12176.read();
        select_ln57_2_reg_12184_pp1_iter1_reg = select_ln57_2_reg_12184.read();
        zext_ln57_reg_12191_pp1_iter1_reg = zext_ln57_reg_12191.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_fu_10814_p2.read()))) {
        icmp_ln89_reg_12176 = icmp_ln89_fu_10832_p2.read();
        zext_ln57_reg_12191 = zext_ln57_fu_10846_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_reg_12068.read()))) {
        linebuf_1_100 = linebuf_1_101.read();
        linebuf_1_101 = linebuf_1_102.read();
        linebuf_1_102 = linebuf_1_103.read();
        linebuf_1_103 = linebuf_1_104.read();
        linebuf_1_104 = linebuf_1_105.read();
        linebuf_1_105 = linebuf_1_106.read();
        linebuf_1_106 = linebuf_1_107.read();
        linebuf_1_107 = linebuf_1_108.read();
        linebuf_1_108 = linebuf_1_109.read();
        linebuf_1_109 = linebuf_1_110.read();
        linebuf_1_110 = linebuf_1_111.read();
        linebuf_1_111 = linebuf_1_112.read();
        linebuf_1_112 = linebuf_1_113.read();
        linebuf_1_113 = linebuf_1_114.read();
        linebuf_1_114 = linebuf_1_115.read();
        linebuf_1_115 = linebuf_1_116.read();
        linebuf_1_116 = linebuf_1_117.read();
        linebuf_1_117 = linebuf_1_118.read();
        linebuf_1_118 = linebuf_1_119.read();
        linebuf_1_119 = linebuf_1_120.read();
        linebuf_1_120 = linebuf_1_121.read();
        linebuf_1_121 = linebuf_1_122.read();
        linebuf_1_122 = linebuf_1_123.read();
        linebuf_1_123 = linebuf_1_124.read();
        linebuf_1_124 = linebuf_1_125.read();
        linebuf_1_125 = linebuf_1_126.read();
        linebuf_1_126 = linebuf_1_127.read();
        linebuf_1_127 = linebuf_1_128.read();
        linebuf_1_128 = linebuf_1_129.read();
        linebuf_1_129 = linebuf_1_130.read();
        linebuf_1_130 = linebuf_1_131.read();
        linebuf_1_131 = linebuf_1_132.read();
        linebuf_1_132 = linebuf_1_133.read();
        linebuf_1_133 = linebuf_1_134.read();
        linebuf_1_134 = linebuf_1_135.read();
        linebuf_1_135 = linebuf_1_136.read();
        linebuf_1_136 = linebuf_1_137.read();
        linebuf_1_137 = linebuf_1_138.read();
        linebuf_1_138 = norm_img_q0.read();
        linebuf_1_79 = linebuf_1_80.read();
        linebuf_1_80 = linebuf_1_81.read();
        linebuf_1_81 = linebuf_1_82.read();
        linebuf_1_82 = linebuf_1_83.read();
        linebuf_1_83 = linebuf_1_84.read();
        linebuf_1_84 = linebuf_1_85.read();
        linebuf_1_85 = linebuf_1_86.read();
        linebuf_1_86 = linebuf_1_87.read();
        linebuf_1_87 = linebuf_1_88.read();
        linebuf_1_88 = linebuf_1_89.read();
        linebuf_1_89 = linebuf_1_90.read();
        linebuf_1_90 = linebuf_1_91.read();
        linebuf_1_91 = linebuf_1_92.read();
        linebuf_1_92 = linebuf_1_93.read();
        linebuf_1_93 = linebuf_1_94.read();
        linebuf_1_94 = linebuf_1_95.read();
        linebuf_1_95 = linebuf_1_96.read();
        linebuf_1_96 = linebuf_1_97.read();
        linebuf_1_97 = linebuf_1_98.read();
        linebuf_1_98 = linebuf_1_99.read();
        linebuf_1_99 = linebuf_1_100.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_fu_8695_p2.read()))) {
        linebuf_1_23 = linebuf_1_24.read();
        linebuf_1_24 = linebuf_1_25.read();
        linebuf_1_25 = linebuf_1_26.read();
        linebuf_1_26 = linebuf_1_27.read();
        linebuf_1_27 = linebuf_1_28.read();
        linebuf_1_28 = linebuf_1_29.read();
        linebuf_1_29 = linebuf_1_30.read();
        linebuf_1_30 = linebuf_1_31.read();
        linebuf_1_31 = linebuf_1_32.read();
        linebuf_1_32 = linebuf_1_33.read();
        linebuf_1_33 = linebuf_1_34.read();
        linebuf_1_34 = linebuf_1_35.read();
        linebuf_1_35 = linebuf_1_36.read();
        linebuf_1_36 = linebuf_1_37.read();
        linebuf_1_37 = linebuf_1_38.read();
        linebuf_1_38 = linebuf_1_39.read();
        linebuf_1_39 = linebuf_1_40.read();
        linebuf_1_40 = linebuf_1_41.read();
        linebuf_1_41 = linebuf_1_42.read();
        linebuf_1_42 = linebuf_1_43.read();
        linebuf_1_43 = linebuf_1_44.read();
        linebuf_1_44 = linebuf_1_45.read();
        linebuf_1_45 = linebuf_1_46.read();
        linebuf_1_46 = linebuf_1_47.read();
        linebuf_1_47 = linebuf_1_48.read();
        linebuf_1_48 = linebuf_1_49.read();
        linebuf_1_49 = linebuf_1_50.read();
        linebuf_1_50 = linebuf_1_51.read();
        linebuf_1_51 = linebuf_1_52.read();
        linebuf_1_52 = linebuf_1_53.read();
        linebuf_1_53 = linebuf_1_54.read();
        linebuf_1_54 = linebuf_1_55.read();
        linebuf_1_55 = linebuf_1_56.read();
        linebuf_1_56 = linebuf_1_57.read();
        linebuf_1_57 = linebuf_1_58.read();
        linebuf_1_58 = linebuf_1_59.read();
        linebuf_1_59 = linebuf_1_60.read();
        linebuf_1_60 = linebuf_1_61.read();
        linebuf_1_61 = linebuf_1_62.read();
        linebuf_1_62 = linebuf_1_63.read();
        linebuf_1_63 = linebuf_1_64.read();
        linebuf_1_64 = linebuf_1_65.read();
        linebuf_1_65 = linebuf_1_66.read();
        linebuf_1_66 = linebuf_1_67.read();
        linebuf_1_67 = linebuf_1_68.read();
        linebuf_1_68 = linebuf_1_69.read();
        linebuf_1_69 = linebuf_1_70.read();
        linebuf_1_70 = linebuf_1_71.read();
        linebuf_1_71 = linebuf_1_72.read();
        linebuf_1_72 = linebuf_1_73.read();
        linebuf_1_73 = linebuf_1_74.read();
        linebuf_1_74 = linebuf_1_75.read();
        linebuf_1_75 = linebuf_1_76.read();
        linebuf_1_76 = linebuf_1_77.read();
        linebuf_1_77 = linebuf_1_78.read();
        linebuf_1_78 = ap_sig_allocacmp_linebuf_1_79_load.read();
        select_ln26_1_reg_12082 = select_ln26_1_fu_8727_p3.read();
        tmp_1_2_23_1_reg_12098 = grp_fu_5601_p2.read();
        tmp_1_2_23_2_reg_12103 = grp_fu_5606_p2.read();
        tmp_1_2_23_3_reg_12108 = grp_fu_5611_p2.read();
        tmp_1_2_23_4_reg_12113 = grp_fu_5616_p2.read();
        tmp_1_2_23_5_reg_12118 = grp_fu_5621_p2.read();
        tmp_1_2_s_reg_12093 = grp_fu_5596_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        linebuf_31 = linebuf_32.read();
        linebuf_32 = linebuf_33.read();
        linebuf_33 = linebuf_34.read();
        linebuf_34 = linebuf_35.read();
        linebuf_35 = linebuf_36.read();
        linebuf_36 = linebuf_37.read();
        linebuf_37 = linebuf_38.read();
        linebuf_38 = linebuf_39.read();
        linebuf_39 = linebuf_40.read();
        linebuf_40 = linebuf_41.read();
        linebuf_41 = linebuf_42.read();
        linebuf_42 = linebuf_43.read();
        linebuf_43 = linebuf_44.read();
        linebuf_44 = linebuf_45.read();
        linebuf_45 = ap_sig_allocacmp_linebuf_46_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter3_reg.read()))) {
        linebuf_46 = linebuf_47.read();
        linebuf_47 = linebuf_48.read();
        linebuf_48 = linebuf_49.read();
        linebuf_49 = linebuf_50.read();
        linebuf_50 = linebuf_51.read();
        linebuf_51 = linebuf_52.read();
        linebuf_52 = linebuf_53.read();
        linebuf_53 = linebuf_54.read();
        linebuf_54 = linebuf_55.read();
        linebuf_55 = linebuf_56.read();
        linebuf_56 = linebuf_57.read();
        linebuf_57 = linebuf_58.read();
        linebuf_58 = pool_features1_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        linebuf_7 = linebuf_8.read();
        linebuf_8 = ap_sig_allocacmp_linebuf_9_load.read();
        tmp_5_0_9_1_reg_12975 = grp_fu_5381_p2.read();
        tmp_5_0_9_2_reg_12980 = grp_fu_5386_p2.read();
        tmp_5_0_9_3_reg_12985 = grp_fu_5391_p2.read();
        tmp_5_0_9_4_reg_12990 = grp_fu_5396_p2.read();
        tmp_5_0_9_5_reg_12995 = grp_fu_5401_p2.read();
        tmp_5_0_9_6_reg_13000 = grp_fu_5406_p2.read();
        tmp_5_0_9_7_reg_13005 = grp_fu_5411_p2.read();
        tmp_5_0_9_8_reg_13010 = grp_fu_5416_p2.read();
        tmp_5_0_9_9_reg_13015 = grp_fu_5421_p2.read();
        tmp_5_0_9_reg_12970 = grp_fu_5376_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        r_reg_12035 = r_fu_8633_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_fu_10814_p2.read()))) {
        select_ln57_2_reg_12184 = select_ln57_2_fu_10838_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln42_fu_8669_p2.read()))) {
        sext_ln45_reg_12053 = sext_ln45_fu_8690_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln41_fu_8627_p2.read(), ap_const_lv1_0))) {
        sub_ln45_reg_12040 = sub_ln45_fu_8663_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln55_reg_12167_pp1_iter2_reg.read()))) {
        tmp_5_3_10_1_reg_13806 = tmp_5_3_10_1_fu_6301_p2.read();
        tmp_5_3_10_2_reg_13811 = tmp_5_3_10_2_fu_6306_p2.read();
        tmp_5_3_10_3_reg_13816 = tmp_5_3_10_3_fu_6311_p2.read();
        tmp_5_3_10_4_reg_13821 = tmp_5_3_10_4_fu_6316_p2.read();
        tmp_5_3_10_5_reg_13826 = tmp_5_3_10_5_fu_6321_p2.read();
        tmp_5_3_10_6_reg_13831 = tmp_5_3_10_6_fu_6326_p2.read();
        tmp_5_3_10_7_reg_13836 = tmp_5_3_10_7_fu_6331_p2.read();
        tmp_5_3_10_8_reg_13841 = tmp_5_3_10_8_fu_6336_p2.read();
        tmp_5_3_10_9_reg_13846 = tmp_5_3_10_9_fu_6341_p2.read();
        tmp_5_3_s_reg_13801 = tmp_5_3_s_fu_6296_p2.read();
    }
}

void cnn::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln17_fu_8615_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln17_1_fu_8621_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln17_fu_8615_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln17_1_fu_8621_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln41_fu_8627_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(icmp_ln42_fu_8669_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 128 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln26_fu_8695_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln26_fu_8695_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 512 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln112_fu_10744_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 1024 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(grp_max_pool_fu_5304_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state11;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 8192 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln53_2_fu_10808_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(icmp_ln53_1_fu_10802_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_2_fu_10808_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(icmp_ln53_fu_10796_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln53_1_fu_10802_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else {
                ap_NS_fsm = ap_ST_fsm_state15;
            }
            break;
        case 16384 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter3.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln55_fu_10814_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter3.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln55_fu_10814_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state21;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 65536 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln126_fu_11993_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state25;
            } else {
                ap_NS_fsm = ap_ST_fsm_state23;
            }
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 262144 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && esl_seteq<1,1,1>(grp_max_pool2_fu_5284_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state22;
            } else {
                ap_NS_fsm = ap_ST_fsm_state24;
            }
            break;
        case 524288 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(grp_flattening_layer_fu_5324_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state26;
            } else {
                ap_NS_fsm = ap_ST_fsm_state25;
            }
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 2097152 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && esl_seteq<1,1,1>(grp_dense_layer_fu_5272_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<22>) ("XXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

