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
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state5.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(icmp_ln10_fu_8513_p2.read(), ap_const_lv1_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state5.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state5.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(icmp_ln10_fu_8513_p2.read(), ap_const_lv1_1))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state13.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                    esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_2_fu_10605_p2.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state13.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state13.read() ^ ap_const_logic_1);
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
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter5 = ap_enable_reg_pp1_iter4.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                    esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_2_fu_10605_p2.read()))) {
            ap_enable_reg_pp1_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln10_fu_8513_p2.read()))) {
        c_0_i_reg_5076 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(norm_img_V_full_n.read(), ap_const_logic_1))) {
        c_0_i_reg_5076 = c_reg_11825.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_2_fu_10605_p2.read()))) {
        col_0_i51_reg_5212 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929_pp1_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        col_0_i51_reg_5212 = col_1_reg_13403.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln10_fu_8513_p2.read(), ap_const_lv1_1))) {
        col_0_i_reg_5109 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_8537_p2.read()))) {
        col_0_i_reg_5109 = col_fu_9805_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        f_0_i47_reg_5120 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
                esl_seteq<1,1,1>(grp_max_pool_fu_5268_ap_done.read(), ap_const_logic_1))) {
        f_0_i47_reg_5120 = f_reg_11897.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        f_0_i68_reg_5224 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && 
                esl_seteq<1,1,1>(grp_max_pool2_fu_5248_ap_done.read(), ap_const_logic_1))) {
        f_0_i68_reg_5224 = f_3_reg_13726.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_2_fu_10605_p2.read()))) {
        f_0_reg_5178 = ap_const_lv3_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        f_0_reg_5178 = select_ln23_2_reg_11946.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dense_layer_fu_5236_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
            grp_dense_layer_fu_5236_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dense_layer_fu_5236_ap_ready.read())) {
            grp_dense_layer_fu_5236_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_flattening_layer_fu_5288_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_fu_11790_p2.read()))) {
            grp_flattening_layer_fu_5288_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_flattening_layer_fu_5288_ap_ready.read())) {
            grp_flattening_layer_fu_5288_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_max_pool2_fu_5248_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
            grp_max_pool2_fu_5248_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_max_pool2_fu_5248_ap_ready.read())) {
            grp_max_pool2_fu_5248_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_max_pool_fu_5268_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln67_fu_10541_p2.read()))) {
            grp_max_pool_fu_5268_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_max_pool_fu_5268_ap_ready.read())) {
            grp_max_pool_fu_5268_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_2_fu_10605_p2.read()))) {
        indvar_flatten11_reg_5189 = ap_const_lv8_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_fu_10611_p2.read()))) {
        indvar_flatten11_reg_5189 = select_ln87_fu_10743_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_2_fu_10605_p2.read()))) {
        indvar_flatten281_reg_5167 = ap_const_lv10_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_fu_10611_p2.read()))) {
        indvar_flatten281_reg_5167 = add_ln22_fu_10617_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln10_fu_8513_p2.read(), ap_const_lv1_1))) {
        indvar_flatten_reg_5087 = ap_const_lv10_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_8537_p2.read()))) {
        indvar_flatten_reg_5087 = add_ln24_1_fu_8543_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_1_fu_10599_p2.read()))) {
        phi_ln20_1_reg_5144 = add_ln20_1_reg_11907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        phi_ln20_1_reg_5144 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_fu_10593_p2.read()))) {
        phi_ln20_2_reg_5156 = add_ln20_2_fu_10565_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        phi_ln20_2_reg_5156 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_10541_p2.read()))) {
        phi_ln20_reg_5132 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
                esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_2_fu_10605_p2.read()))) {
        phi_ln20_reg_5132 = add_ln20_reg_11902.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         !(esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read())) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_1))) {
        r_0_i_reg_5065 = r_reg_11817.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        r_0_i_reg_5065 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && 
         esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_2_fu_10605_p2.read()))) {
        row_0_i49_reg_5200 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929_pp1_iter3_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        row_0_i49_reg_5200 = select_ln91_1_reg_13338.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln10_fu_8513_p2.read(), ap_const_lv1_1))) {
        row_0_i_reg_5098 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        row_0_i_reg_5098 = select_ln24_2_reg_11849.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        add_ln20_1_reg_11907 = add_ln20_1_fu_10559_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        add_ln20_reg_11902 = add_ln20_fu_10553_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929_pp1_iter2_reg.read()))) {
        and_ln115_reg_13399 = and_ln115_fu_11331_p2.read();
        select_ln91_3_reg_13344 = select_ln91_3_fu_11117_p3.read();
        select_ln91_reg_13332 = select_ln91_fu_11058_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) {
        and_ln115_reg_13399_pp1_iter4_reg = and_ln115_reg_13399.read();
        icmp_ln22_reg_11929_pp1_iter2_reg = icmp_ln22_reg_11929_pp1_iter1_reg.read();
        icmp_ln22_reg_11929_pp1_iter3_reg = icmp_ln22_reg_11929_pp1_iter2_reg.read();
        icmp_ln22_reg_11929_pp1_iter4_reg = icmp_ln22_reg_11929_pp1_iter3_reg.read();
        icmp_ln87_reg_11938_pp1_iter2_reg = icmp_ln87_reg_11938_pp1_iter1_reg.read();
        select_ln23_2_reg_11946_pp1_iter2_reg = select_ln23_2_reg_11946_pp1_iter1_reg.read();
        select_ln23_2_reg_11946_pp1_iter3_reg = select_ln23_2_reg_11946_pp1_iter2_reg.read();
        zext_ln23_reg_11953_pp1_iter2_reg = zext_ln23_reg_11953_pp1_iter1_reg.read();
        zext_ln23_reg_11953_pp1_iter3_reg = zext_ln23_reg_11953_pp1_iter2_reg.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_8537_p2.read()))) {
        and_ln52_reg_11885 = and_ln52_fu_9799_p2.read();
        select_ln24_reg_11844 = select_ln24_fu_8561_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && !(esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read())))) {
        c_reg_11825 = c_fu_8531_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929_pp1_iter2_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        col_1_reg_13403 = col_1_fu_11337_p2.read();
        linebuf_22 = linebuf_23.read();
        linebuf_23 = linebuf_24.read();
        linebuf_24 = linebuf_25.read();
        linebuf_25 = linebuf_26.read();
        linebuf_26 = linebuf_27.read();
        linebuf_27 = linebuf_28.read();
        linebuf_28 = linebuf_29.read();
        linebuf_29 = linebuf_30.read();
        linebuf_30 = linebuf_31.read();
        linebuf_31 = linebuf_32.read();
        linebuf_32 = linebuf_33.read();
        linebuf_33 = linebuf_34.read();
        linebuf_34 = ap_sig_allocacmp_linebuf_35_load.read();
        select_ln91_1_reg_13338 = select_ln91_1_fu_11066_p3.read();
        tmp_8_2_11_1_reg_13354 = grp_fu_5939_p2.read();
        tmp_8_2_11_2_reg_13359 = grp_fu_5944_p2.read();
        tmp_8_2_11_3_reg_13364 = grp_fu_5949_p2.read();
        tmp_8_2_11_4_reg_13369 = grp_fu_5954_p2.read();
        tmp_8_2_11_5_reg_13374 = grp_fu_5959_p2.read();
        tmp_8_2_11_6_reg_13379 = grp_fu_5964_p2.read();
        tmp_8_2_11_7_reg_13384 = grp_fu_5969_p2.read();
        tmp_8_2_11_8_reg_13389 = grp_fu_5974_p2.read();
        tmp_8_2_11_9_reg_13394 = grp_fu_5979_p2.read();
        tmp_8_2_1_reg_13349 = grp_fu_5934_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        conv2_biases_load_reg_13736 = conv2_biases_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        f_3_reg_13726 = f_3_fu_11796_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        f_reg_11897 = f_fu_10547_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, and_ln115_reg_13399.read()))) {
        features_conv2_0_ad_1_reg_13663 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_1_ad_1_reg_13669 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_2_ad_1_reg_13675 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_3_ad_1_reg_13681 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_4_ad_1_reg_13687 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_5_ad_1_reg_13693 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_6_ad_1_reg_13699 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_7_ad_1_reg_13705 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_8_ad_1_reg_13711 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
        features_conv2_9_ad_1_reg_13717 =  (sc_lv<6>) (zext_ln122_1_fu_11710_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln22_reg_11929 = icmp_ln22_fu_10611_p2.read();
        icmp_ln22_reg_11929_pp1_iter1_reg = icmp_ln22_reg_11929.read();
        icmp_ln87_reg_11938_pp1_iter1_reg = icmp_ln87_reg_11938.read();
        select_ln23_2_reg_11946_pp1_iter1_reg = select_ln23_2_reg_11946.read();
        zext_ln23_reg_11953_pp1_iter1_reg = zext_ln23_reg_11953.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln24_reg_11835 = icmp_ln24_fu_8537_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_fu_10611_p2.read()))) {
        icmp_ln87_reg_11938 = icmp_ln87_fu_10629_p2.read();
        zext_ln23_reg_11953 = zext_ln23_fu_10643_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
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
        linebuf_21 = ap_sig_allocacmp_linebuf_22_load.read();
        linebuf_9 = linebuf_10.read();
        tmp_8_1_10_1_reg_12987 = grp_fu_5645_p2.read();
        tmp_8_1_10_2_reg_12992 = grp_fu_5650_p2.read();
        tmp_8_1_10_3_reg_12997 = grp_fu_5655_p2.read();
        tmp_8_1_10_4_reg_13002 = grp_fu_5660_p2.read();
        tmp_8_1_10_5_reg_13007 = grp_fu_5665_p2.read();
        tmp_8_1_10_6_reg_13012 = grp_fu_5670_p2.read();
        tmp_8_1_10_7_reg_13017 = grp_fu_5675_p2.read();
        tmp_8_1_10_8_reg_13022 = grp_fu_5680_p2.read();
        tmp_8_1_10_9_reg_13027 = grp_fu_5685_p2.read();
        tmp_8_1_s_reg_12982 = grp_fu_5640_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_8537_p2.read()))) {
        linebuf_1_100 = linebuf_1_101.read();
        linebuf_1_101 = linebuf_1_102.read();
        linebuf_1_102 = linebuf_1_103.read();
        linebuf_1_103 = linebuf_1_104.read();
        linebuf_1_104 = linebuf_1_105.read();
        linebuf_1_105 = linebuf_1_106.read();
        linebuf_1_106 = ap_sig_allocacmp_linebuf_1_107_load.read();
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
        linebuf_1_78 = linebuf_1_79.read();
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
        select_ln24_2_reg_11849 = select_ln24_2_fu_8609_p3.read();
        tmp_4_3_23_1_reg_11860 = grp_fu_5715_p2.read();
        tmp_4_3_23_2_reg_11865 = grp_fu_5720_p2.read();
        tmp_4_3_23_3_reg_11870 = grp_fu_5725_p2.read();
        tmp_4_3_23_4_reg_11875 = grp_fu_5730_p2.read();
        tmp_4_3_23_5_reg_11880 = grp_fu_5735_p2.read();
        tmp_4_3_s_reg_11855 = grp_fu_5710_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
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
        linebuf_1_138 = norm_img_V_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929_pp1_iter3_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
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
        linebuf_45 = linebuf_46.read();
        linebuf_46 = linebuf_47.read();
        linebuf_47 = linebuf_48.read();
        linebuf_48 = linebuf_49.read();
        linebuf_49 = linebuf_50.read();
        linebuf_50 = linebuf_51.read();
        linebuf_51 = linebuf_52.read();
        linebuf_52 = linebuf_53.read();
        linebuf_53 = linebuf_54.read();
        linebuf_54 = ap_sig_allocacmp_linebuf_55_load.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929_pp1_iter4_reg.read()))) {
        linebuf_55 = linebuf_56.read();
        linebuf_56 = linebuf_57.read();
        linebuf_57 = linebuf_58.read();
        linebuf_58 = pool_features1_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        linebuf_7 = linebuf_8.read();
        linebuf_8 = ap_sig_allocacmp_linebuf_9_load.read();
        tmp_8_0_9_1_reg_12637 = grp_fu_5345_p2.read();
        tmp_8_0_9_2_reg_12642 = grp_fu_5350_p2.read();
        tmp_8_0_9_3_reg_12647 = grp_fu_5355_p2.read();
        tmp_8_0_9_4_reg_12652 = grp_fu_5360_p2.read();
        tmp_8_0_9_5_reg_12657 = grp_fu_5365_p2.read();
        tmp_8_0_9_6_reg_12662 = grp_fu_5370_p2.read();
        tmp_8_0_9_7_reg_12667 = grp_fu_5375_p2.read();
        tmp_8_0_9_8_reg_12672 = grp_fu_5380_p2.read();
        tmp_8_0_9_9_reg_12677 = grp_fu_5385_p2.read();
        tmp_8_0_9_reg_12632 = grp_fu_5340_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        r_reg_11817 = r_fu_8519_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_fu_10611_p2.read()))) {
        select_ln23_2_reg_11946 = select_ln23_2_fu_10635_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln22_reg_11929_pp1_iter3_reg.read()))) {
        tmp_8_4_7_1_reg_13618 = tmp_8_4_7_1_fu_6355_p2.read();
        tmp_8_4_7_2_reg_13623 = tmp_8_4_7_2_fu_6360_p2.read();
        tmp_8_4_7_3_reg_13628 = tmp_8_4_7_3_fu_6365_p2.read();
        tmp_8_4_7_4_reg_13633 = tmp_8_4_7_4_fu_6370_p2.read();
        tmp_8_4_7_5_reg_13638 = tmp_8_4_7_5_fu_6375_p2.read();
        tmp_8_4_7_6_reg_13643 = tmp_8_4_7_6_fu_6380_p2.read();
        tmp_8_4_7_7_reg_13648 = tmp_8_4_7_7_fu_6385_p2.read();
        tmp_8_4_7_8_reg_13653 = tmp_8_4_7_8_fu_6390_p2.read();
        tmp_8_4_7_9_reg_13658 = tmp_8_4_7_9_fu_6395_p2.read();
        tmp_8_4_7_reg_13613 = tmp_8_4_7_fu_6350_p2.read();
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln10_fu_8513_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && !(esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read())) && esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && !(esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(norm_img_V_full_n.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            if (!(esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln24_fu_8537_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln24_fu_8537_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln67_fu_10541_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(grp_max_pool_fu_5268_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 1024 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln20_2_fu_10605_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(icmp_ln20_1_fu_10599_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_2_fu_10605_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(icmp_ln20_fu_10593_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_1_fu_10599_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state11;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 2048 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_10611_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter5.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln22_fu_10611_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state19;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 8192 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln81_fu_11790_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state23;
            } else {
                ap_NS_fsm = ap_ST_fsm_state21;
            }
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 32768 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) && esl_seteq<1,1,1>(grp_max_pool2_fu_5248_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state20;
            } else {
                ap_NS_fsm = ap_ST_fsm_state22;
            }
            break;
        case 65536 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && esl_seteq<1,1,1>(grp_flattening_layer_fu_5288_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state24;
            } else {
                ap_NS_fsm = ap_ST_fsm_state23;
            }
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 262144 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(grp_dense_layer_fu_5236_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state25;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<19>) ("XXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

