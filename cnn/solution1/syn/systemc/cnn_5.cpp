#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_conv2_weights_V_9_2_3_address0() {
    conv2_weights_V_9_2_3_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_2_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_2_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_2_4_address0() {
    conv2_weights_V_9_2_4_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_2_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_2_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_2_s_address0() {
    conv2_weights_V_9_2_s_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_2_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_2_s_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_2_s_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_3_1_address0() {
    conv2_weights_V_9_3_1_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_3_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_3_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_3_2_address0() {
    conv2_weights_V_9_3_2_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_3_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_3_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_3_3_address0() {
    conv2_weights_V_9_3_3_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_3_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_3_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_3_4_address0() {
    conv2_weights_V_9_3_4_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_3_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_3_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_3_s_address0() {
    conv2_weights_V_9_3_s_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_3_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_3_s_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_3_s_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_4_1_address0() {
    conv2_weights_V_9_4_1_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_4_1_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_4_1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_4_2_address0() {
    conv2_weights_V_9_4_2_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_4_2_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_4_2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_4_3_address0() {
    conv2_weights_V_9_4_3_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_4_3_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_4_3_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_4_4_address0() {
    conv2_weights_V_9_4_4_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_4_4_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_4_4_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_conv2_weights_V_9_4_s_address0() {
    conv2_weights_V_9_4_s_address0 =  (sc_lv<3>) (zext_ln21_fu_37329_p1.read());
}

void cnn::thread_conv2_weights_V_9_4_s_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        conv2_weights_V_9_4_s_ce0 = ap_const_logic_1;
    } else {
        conv2_weights_V_9_4_s_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_f_2_fu_37301_p2() {
    f_2_fu_37301_p2 = (!ap_const_lv3_1.is_01() || !ap_phi_mux_f_0_phi_fu_4971_p4.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(ap_phi_mux_f_0_phi_fu_4971_p4.read()));
}

void cnn::thread_f_3_fu_45908_p0() {
    f_3_fu_45908_p0 =  (sc_lv<4>) (reg_5011.read());
}

void cnn::thread_f_3_fu_45908_p2() {
    f_3_fu_45908_p2 = (!f_3_fu_45908_p0.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(f_3_fu_45908_p0.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void cnn::thread_f_fu_37283_p0() {
    f_fu_37283_p0 =  (sc_lv<3>) (reg_4944.read());
}

void cnn::thread_f_fu_37283_p2() {
    f_fu_37283_p2 = (!f_fu_37283_p0.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(f_fu_37283_p0.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void cnn::thread_features_conv1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        features_conv1_0_V_address0 =  (sc_lv<10>) (sext_ln203_1_fu_36991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_0_V_address0 = grp_max_pool_fu_30491_feature_0_V_address0.read();
    } else {
        features_conv1_0_V_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        features_conv1_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_0_V_ce0 = grp_max_pool_fu_30491_feature_0_V_ce0.read();
    } else {
        features_conv1_0_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_0_V_d0() {
    features_conv1_0_V_d0 = (!icmp_ln1494_fu_37022_p2.read()[0].is_01())? sc_lv<14>(): ((icmp_ln1494_fu_37022_p2.read()[0].to_bool())? add_ln1494_fu_37016_p2.read(): ap_const_lv14_0);
}

void cnn::thread_features_conv1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln39_fu_36969_p2.read()))) {
        features_conv1_0_V_we0 = ap_const_logic_1;
    } else {
        features_conv1_0_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        features_conv1_1_V_address0 =  (sc_lv<10>) (sext_ln203_1_fu_36991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_1_V_address0 = grp_max_pool_fu_30491_feature_1_V_address0.read();
    } else {
        features_conv1_1_V_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        features_conv1_1_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_1_V_ce0 = grp_max_pool_fu_30491_feature_1_V_ce0.read();
    } else {
        features_conv1_1_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_1_V_d0() {
    features_conv1_1_V_d0 = (!icmp_ln1494_2_fu_37059_p2.read()[0].is_01())? sc_lv<14>(): ((icmp_ln1494_2_fu_37059_p2.read()[0].to_bool())? add_ln1494_1_fu_37053_p2.read(): ap_const_lv14_0);
}

void cnn::thread_features_conv1_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln39_fu_36969_p2.read()))) {
        features_conv1_1_V_we0 = ap_const_logic_1;
    } else {
        features_conv1_1_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        features_conv1_2_V_address0 =  (sc_lv<10>) (sext_ln203_1_fu_36991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_2_V_address0 = grp_max_pool_fu_30491_feature_2_V_address0.read();
    } else {
        features_conv1_2_V_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        features_conv1_2_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_2_V_ce0 = grp_max_pool_fu_30491_feature_2_V_ce0.read();
    } else {
        features_conv1_2_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_2_V_d0() {
    features_conv1_2_V_d0 = (!icmp_ln1494_3_fu_37096_p2.read()[0].is_01())? sc_lv<14>(): ((icmp_ln1494_3_fu_37096_p2.read()[0].to_bool())? add_ln1494_2_fu_37090_p2.read(): ap_const_lv14_0);
}

void cnn::thread_features_conv1_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln39_fu_36969_p2.read()))) {
        features_conv1_2_V_we0 = ap_const_logic_1;
    } else {
        features_conv1_2_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        features_conv1_3_V_address0 =  (sc_lv<10>) (sext_ln203_1_fu_36991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_3_V_address0 = grp_max_pool_fu_30491_feature_3_V_address0.read();
    } else {
        features_conv1_3_V_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        features_conv1_3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_3_V_ce0 = grp_max_pool_fu_30491_feature_3_V_ce0.read();
    } else {
        features_conv1_3_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_3_V_d0() {
    features_conv1_3_V_d0 = (!icmp_ln1494_4_fu_37133_p2.read()[0].is_01())? sc_lv<14>(): ((icmp_ln1494_4_fu_37133_p2.read()[0].to_bool())? add_ln1494_3_fu_37127_p2.read(): ap_const_lv14_0);
}

void cnn::thread_features_conv1_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln39_fu_36969_p2.read()))) {
        features_conv1_3_V_we0 = ap_const_logic_1;
    } else {
        features_conv1_3_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        features_conv1_4_V_address0 =  (sc_lv<10>) (sext_ln203_1_reg_46335.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_4_V_address0 = grp_max_pool_fu_30491_feature_4_V_address0.read();
    } else {
        features_conv1_4_V_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        features_conv1_4_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_4_V_ce0 = grp_max_pool_fu_30491_feature_4_V_ce0.read();
    } else {
        features_conv1_4_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_4_V_d0() {
    features_conv1_4_V_d0 = (!icmp_ln1494_5_fu_37257_p2.read()[0].is_01())? sc_lv<14>(): ((icmp_ln1494_5_fu_37257_p2.read()[0].to_bool())? add_ln1494_4_fu_37251_p2.read(): ap_const_lv14_0);
}

void cnn::thread_features_conv1_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln39_reg_46331.read()))) {
        features_conv1_4_V_we0 = ap_const_logic_1;
    } else {
        features_conv1_4_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        features_conv1_5_V_address0 =  (sc_lv<10>) (sext_ln203_1_fu_36991_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_5_V_address0 = grp_max_pool_fu_30491_feature_5_V_address0.read();
    } else {
        features_conv1_5_V_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_features_conv1_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        features_conv1_5_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        features_conv1_5_V_ce0 = grp_max_pool_fu_30491_feature_5_V_ce0.read();
    } else {
        features_conv1_5_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv1_5_V_d0() {
    features_conv1_5_V_d0 = (!icmp_ln1494_6_fu_37170_p2.read()[0].is_01())? sc_lv<14>(): ((icmp_ln1494_6_fu_37170_p2.read()[0].to_bool())? add_ln1494_5_fu_37164_p2.read(): ap_const_lv14_0);
}

void cnn::thread_features_conv1_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln39_fu_36969_p2.read()))) {
        features_conv1_5_V_we0 = ap_const_logic_1;
    } else {
        features_conv1_5_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_0_V_address0 = features_conv2_0_V_s_reg_47650_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_0_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_0_V_address0 = grp_makeItZero_fu_30529_A_0_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_0_V_address0 = grp_max_pool2_fu_30504_feature_0_V_address0.read();
    } else {
        features_conv2_0_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_0_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_0_V_ce0 = grp_makeItZero_fu_30529_A_0_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_0_V_ce0 = grp_max_pool2_fu_30504_feature_0_V_ce0.read();
    } else {
        features_conv2_0_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_0_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_0_V_d0 = add_ln703_6_reg_49132.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_0_V_d0 = grp_makeItZero_fu_30529_A_0_V_d0.read();
    } else {
        features_conv2_0_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_0_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_0_V_we0 = grp_makeItZero_fu_30529_A_0_V_we0.read();
    } else {
        features_conv2_0_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_1_V_address0 = features_conv2_1_V_s_reg_47655_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_1_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_1_V_address0 = grp_makeItZero_fu_30529_A_1_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_1_V_address0 = grp_max_pool2_fu_30504_feature_1_V_address0.read();
    } else {
        features_conv2_1_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_1_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_1_V_ce0 = grp_makeItZero_fu_30529_A_1_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_1_V_ce0 = grp_max_pool2_fu_30504_feature_1_V_ce0.read();
    } else {
        features_conv2_1_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_1_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_1_V_d0 = add_ln703_7_reg_49137.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_1_V_d0 = grp_makeItZero_fu_30529_A_1_V_d0.read();
    } else {
        features_conv2_1_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_1_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_1_V_we0 = grp_makeItZero_fu_30529_A_1_V_we0.read();
    } else {
        features_conv2_1_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_2_V_address0 = features_conv2_2_V_s_reg_47660_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_2_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_2_V_address0 = grp_makeItZero_fu_30529_A_2_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_2_V_address0 = grp_max_pool2_fu_30504_feature_2_V_address0.read();
    } else {
        features_conv2_2_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_2_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_2_V_ce0 = grp_makeItZero_fu_30529_A_2_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_2_V_ce0 = grp_max_pool2_fu_30504_feature_2_V_ce0.read();
    } else {
        features_conv2_2_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_2_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_2_V_d0 = add_ln703_8_reg_49142.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_2_V_d0 = grp_makeItZero_fu_30529_A_2_V_d0.read();
    } else {
        features_conv2_2_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_2_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_2_V_we0 = grp_makeItZero_fu_30529_A_2_V_we0.read();
    } else {
        features_conv2_2_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_3_V_address0 = features_conv2_3_V_s_reg_47665_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_3_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_3_V_address0 = grp_makeItZero_fu_30529_A_3_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_3_V_address0 = grp_max_pool2_fu_30504_feature_3_V_address0.read();
    } else {
        features_conv2_3_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_3_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_3_V_ce0 = grp_makeItZero_fu_30529_A_3_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_3_V_ce0 = grp_max_pool2_fu_30504_feature_3_V_ce0.read();
    } else {
        features_conv2_3_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_3_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_3_V_d0 = add_ln703_9_reg_49147.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_3_V_d0 = grp_makeItZero_fu_30529_A_3_V_d0.read();
    } else {
        features_conv2_3_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_3_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_3_V_we0 = grp_makeItZero_fu_30529_A_3_V_we0.read();
    } else {
        features_conv2_3_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_4_V_address0 = features_conv2_4_V_s_reg_47670_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_4_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_4_V_address0 = grp_makeItZero_fu_30529_A_4_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_4_V_address0 = grp_max_pool2_fu_30504_feature_4_V_address0.read();
    } else {
        features_conv2_4_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_4_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_4_V_ce0 = grp_makeItZero_fu_30529_A_4_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_4_V_ce0 = grp_max_pool2_fu_30504_feature_4_V_ce0.read();
    } else {
        features_conv2_4_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_4_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_4_V_d0 = add_ln703_10_reg_49152.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_4_V_d0 = grp_makeItZero_fu_30529_A_4_V_d0.read();
    } else {
        features_conv2_4_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_4_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_4_V_we0 = grp_makeItZero_fu_30529_A_4_V_we0.read();
    } else {
        features_conv2_4_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_5_V_address0 = features_conv2_5_V_s_reg_47675_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_5_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_5_V_address0 = grp_makeItZero_fu_30529_A_5_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_5_V_address0 = grp_max_pool2_fu_30504_feature_5_V_address0.read();
    } else {
        features_conv2_5_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_5_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_5_V_ce0 = grp_makeItZero_fu_30529_A_5_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_5_V_ce0 = grp_max_pool2_fu_30504_feature_5_V_ce0.read();
    } else {
        features_conv2_5_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_5_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_5_V_d0 = add_ln703_11_reg_49157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_5_V_d0 = grp_makeItZero_fu_30529_A_5_V_d0.read();
    } else {
        features_conv2_5_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_5_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_5_V_we0 = grp_makeItZero_fu_30529_A_5_V_we0.read();
    } else {
        features_conv2_5_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_6_V_address0 = features_conv2_6_V_s_reg_47680_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_6_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_6_V_address0 = grp_makeItZero_fu_30529_A_6_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_6_V_address0 = grp_max_pool2_fu_30504_feature_6_V_address0.read();
    } else {
        features_conv2_6_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_6_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_6_V_ce0 = grp_makeItZero_fu_30529_A_6_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_6_V_ce0 = grp_max_pool2_fu_30504_feature_6_V_ce0.read();
    } else {
        features_conv2_6_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_6_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_6_V_d0 = add_ln703_12_reg_49162.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_6_V_d0 = grp_makeItZero_fu_30529_A_6_V_d0.read();
    } else {
        features_conv2_6_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_6_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_6_V_we0 = grp_makeItZero_fu_30529_A_6_V_we0.read();
    } else {
        features_conv2_6_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_7_V_address0 = features_conv2_7_V_s_reg_47685_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_7_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_7_V_address0 = grp_makeItZero_fu_30529_A_7_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_7_V_address0 = grp_max_pool2_fu_30504_feature_7_V_address0.read();
    } else {
        features_conv2_7_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_7_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_7_V_ce0 = grp_makeItZero_fu_30529_A_7_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_7_V_ce0 = grp_max_pool2_fu_30504_feature_7_V_ce0.read();
    } else {
        features_conv2_7_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_7_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_7_V_d0 = add_ln703_13_reg_49167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_7_V_d0 = grp_makeItZero_fu_30529_A_7_V_d0.read();
    } else {
        features_conv2_7_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_7_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_7_V_we0 = grp_makeItZero_fu_30529_A_7_V_we0.read();
    } else {
        features_conv2_7_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_8_V_address0 = features_conv2_8_V_s_reg_47690_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_8_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_8_V_address0 = grp_makeItZero_fu_30529_A_8_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_8_V_address0 = grp_max_pool2_fu_30504_feature_8_V_address0.read();
    } else {
        features_conv2_8_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_8_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_8_V_ce0 = grp_makeItZero_fu_30529_A_8_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_8_V_ce0 = grp_max_pool2_fu_30504_feature_8_V_ce0.read();
    } else {
        features_conv2_8_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_8_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_8_V_d0 = add_ln703_14_reg_49172.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_8_V_d0 = grp_makeItZero_fu_30529_A_8_V_d0.read();
    } else {
        features_conv2_8_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_8_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_8_V_we0 = grp_makeItZero_fu_30529_A_8_V_we0.read();
    } else {
        features_conv2_8_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_9_V_address0 = features_conv2_9_V_s_reg_47695_pp1_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        features_conv2_9_V_address0 =  (sc_lv<6>) (zext_ln1265_1_fu_37805_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_9_V_address0 = grp_makeItZero_fu_30529_A_9_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_9_V_address0 = grp_max_pool2_fu_30504_feature_9_V_address0.read();
    } else {
        features_conv2_9_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void cnn::thread_features_conv2_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        features_conv2_9_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_9_V_ce0 = grp_makeItZero_fu_30529_A_9_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        features_conv2_9_V_ce0 = grp_max_pool2_fu_30504_feature_9_V_ce0.read();
    } else {
        features_conv2_9_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_features_conv2_9_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        features_conv2_9_V_d0 = add_ln703_15_reg_49177.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_9_V_d0 = grp_makeItZero_fu_30529_A_9_V_d0.read();
    } else {
        features_conv2_9_V_d0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_features_conv2_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, and_ln88_reg_47646_pp1_iter1_reg.read()))) {
        features_conv2_9_V_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        features_conv2_9_V_we0 = grp_makeItZero_fu_30529_A_9_V_we0.read();
    } else {
        features_conv2_9_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_flat_array_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        flat_array_V_address0 = grp_flattening_layer_fu_30523_flat_array_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        flat_array_V_address0 = grp_dense_layer_fu_30480_flat_array_V_address0.read();
    } else {
        flat_array_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void cnn::thread_flat_array_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        flat_array_V_ce0 = grp_flattening_layer_fu_30523_flat_array_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        flat_array_V_ce0 = grp_dense_layer_fu_30480_flat_array_V_ce0.read();
    } else {
        flat_array_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_flat_array_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        flat_array_V_we0 = grp_flattening_layer_fu_30523_flat_array_V_we0.read();
    } else {
        flat_array_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_grp_dense_layer_fu_30480_ap_start() {
    grp_dense_layer_fu_30480_ap_start = grp_dense_layer_fu_30480_ap_start_reg.read();
}

void cnn::thread_grp_dense_layer_fu_30480_prediction_V_V_TREADY() {
    grp_dense_layer_fu_30480_prediction_V_V_TREADY = (prediction_V_V_1_ack_in.read() & ap_CS_fsm_state29.read());
}

void cnn::thread_grp_flattening_layer_fu_30523_ap_start() {
    grp_flattening_layer_fu_30523_ap_start = grp_flattening_layer_fu_30523_ap_start_reg.read();
}

void cnn::thread_grp_fu_5023_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (sext_ln728_14_fu_44371_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (sext_ln1118_110_fu_38116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (ap_const_lv23_62);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (ap_const_lv21_1B);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5023_p0 =  (sc_lv<15>) (ap_const_lv22_25);
    } else {
        grp_fu_5023_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5023_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln21_209_fu_45094_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln1117_26_fu_43754_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln21_141_fu_42556_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln21_106_fu_41252_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln21_70_fu_39932_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln21_42_fu_38640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln21_4_fu_37878_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln1118_106_fu_36434_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln1118_45_fu_32818_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5023_p1 =  (sc_lv<15>) (sext_ln1118_8_fu_30938_p1.read());
    } else {
        grp_fu_5023_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5023_p2() {
    grp_fu_5023_p2 = (!grp_fu_5023_p0.read().is_01() || !grp_fu_5023_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5023_p0.read()) * sc_bigint<15>(grp_fu_5023_p1.read());
}

void cnn::thread_grp_fu_5024_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (sext_ln1118_133_fu_44913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (sext_ln1118_116_fu_39744_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (sext_ln728_8_fu_38431_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (ap_const_lv24_126);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (ap_const_lv24_FFFEDD);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5024_p0 =  (sc_lv<15>) (ap_const_lv24_FFFE4C);
    } else {
        grp_fu_5024_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5024_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln21_191_fu_43858_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln21_158_fu_42624_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln21_124_fu_41324_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln21_89_fu_40008_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln1117_13_fu_38600_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln1117_3_fu_37913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln1192_75_fu_36158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln1118_57_fu_32884_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5024_p1 =  (sc_lv<15>) (sext_ln1118_31_fu_31699_p1.read());
    } else {
        grp_fu_5024_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5024_p2() {
    grp_fu_5024_p2 = (!grp_fu_5024_p0.read().is_01() || !grp_fu_5024_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5024_p0.read()) * sc_bigint<15>(grp_fu_5024_p1.read());
}

void cnn::thread_grp_fu_5025_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5025_p0 =  (sc_lv<15>) (sext_ln1118_133_fu_44913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5025_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5025_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5025_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5025_p0 =  (sc_lv<15>) (sext_ln1118_116_fu_39744_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5025_p0 =  (sc_lv<15>) (sext_ln728_8_fu_38431_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5025_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF65);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_5025_p0 =  (sc_lv<15>) (ap_const_lv24_9E);
    } else {
        grp_fu_5025_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5025_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln21_192_fu_43862_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln21_159_fu_42628_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln21_125_fu_41328_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln21_90_fu_40012_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln1117_14_fu_38604_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln1117_4_fu_37918_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln1118_98_fu_36305_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln1192_39_fu_32810_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5025_p1 =  (sc_lv<15>) (sext_ln1192_28_fu_31732_p1.read());
    } else {
        grp_fu_5025_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5025_p2() {
    grp_fu_5025_p2 = (!grp_fu_5025_p0.read().is_01() || !grp_fu_5025_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5025_p0.read()) * sc_bigint<15>(grp_fu_5025_p1.read());
}

void cnn::thread_grp_fu_5026_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (sext_ln1118_132_fu_44902_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (sext_ln728_12_fu_42307_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (sext_ln1192_88_fu_39753_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (sext_ln728_8_fu_38431_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (ap_const_lv24_C6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (ap_const_lv24_FFFEB3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5026_p0 =  (sc_lv<15>) (ap_const_lv24_9C);
    } else {
        grp_fu_5026_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5026_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (zext_ln21_6_fu_43774_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (sext_ln21_160_fu_42632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (sext_ln1117_21_fu_41224_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (sext_ln21_91_fu_40016_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (sext_ln21_55_fu_38692_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (sext_ln1117_5_fu_37923_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (sext_ln1118_83_fu_33711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (sext_ln1118_42_fu_32782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5026_p1 =  (sc_lv<15>) (sext_ln1192_28_fu_31732_p1.read());
    } else {
        grp_fu_5026_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5026_p2() {
    grp_fu_5026_p2 = (!grp_fu_5026_p0.read().is_01() || !grp_fu_5026_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5026_p0.read()) * sc_bigint<15>(grp_fu_5026_p1.read());
}

void cnn::thread_grp_fu_5027_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (sext_ln1118_133_fu_44913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (sext_ln1192_88_fu_39753_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (sext_ln1118_111_fu_38420_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (ap_const_lv23_7FFFAC);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (ap_const_lv23_53);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5027_p0 =  (sc_lv<15>) (ap_const_lv24_FFFEE5);
    } else {
        grp_fu_5027_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5027_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln21_193_fu_43866_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln21_161_fu_42636_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln21_126_fu_41332_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln21_92_fu_40020_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln21_56_fu_38696_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln21_28_fu_38008_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln1118_100_fu_36317_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln1118_49_fu_32840_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5027_p1 =  (sc_lv<15>) (sext_ln1118_10_fu_30948_p1.read());
    } else {
        grp_fu_5027_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5027_p2() {
    grp_fu_5027_p2 = (!grp_fu_5027_p0.read().is_01() || !grp_fu_5027_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5027_p0.read()) * sc_bigint<15>(grp_fu_5027_p1.read());
}

void cnn::thread_grp_fu_5028_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (sext_ln1118_133_fu_44913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (sext_ln1118_116_fu_39744_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (sext_ln1118_111_fu_38420_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF76);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (ap_const_lv22_3B);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5028_p0 =  (sc_lv<15>) (ap_const_lv24_FFFEBC);
    } else {
        grp_fu_5028_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5028_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln21_189_fu_43850_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln21_154_fu_42608_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln21_120_fu_41308_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln21_85_fu_39992_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln1117_12_fu_38588_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln21_24_fu_37988_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln1192_75_fu_36158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln1118_56_fu_32879_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5028_p1 =  (sc_lv<15>) (sext_ln1192_14_fu_31651_p1.read());
    } else {
        grp_fu_5028_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5028_p2() {
    grp_fu_5028_p2 = (!grp_fu_5028_p0.read().is_01() || !grp_fu_5028_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5028_p0.read()) * sc_bigint<15>(grp_fu_5028_p1.read());
}

void cnn::thread_grp_fu_5029_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (sext_ln1118_110_fu_38116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (ap_const_lv20_FFFF5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF61);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5029_p0 =  (sc_lv<15>) (ap_const_lv24_C3);
    } else {
        grp_fu_5029_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5029_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln21_174_fu_43790_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln21_139_fu_42548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln21_104_fu_41244_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln21_68_fu_39924_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln21_40_fu_38632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln21_2_fu_37868_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln1118_103_fu_36426_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln1118_48_fu_32833_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5029_p1 =  (sc_lv<15>) (sext_ln1118_27_fu_31679_p1.read());
    } else {
        grp_fu_5029_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5029_p2() {
    grp_fu_5029_p2 = (!grp_fu_5029_p0.read().is_01() || !grp_fu_5029_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5029_p0.read()) * sc_bigint<15>(grp_fu_5029_p1.read());
}

void cnn::thread_grp_fu_5030_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (sext_ln1118_126_fu_43330_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (sext_ln1118_115_fu_39471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (ap_const_lv23_54);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (ap_const_lv24_111);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5030_p0 =  (sc_lv<15>) (ap_const_lv23_7FFF96);
    } else {
        grp_fu_5030_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5030_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln21_184_fu_43830_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln1117_25_fu_42524_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln21_115_fu_41288_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln21_80_fu_39972_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln21_51_fu_38676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln21_19_fu_37963_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln1118_79_fu_33696_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln1118_52_fu_32856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5030_p1 =  (sc_lv<15>) (sext_ln1118_12_fu_31116_p1.read());
    } else {
        grp_fu_5030_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5030_p2() {
    grp_fu_5030_p2 = (!grp_fu_5030_p0.read().is_01() || !grp_fu_5030_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5030_p0.read()) * sc_bigint<15>(grp_fu_5030_p1.read());
}

void cnn::thread_grp_fu_5031_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (sext_ln1118_121_fu_41198_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (sext_ln1118_117_fu_39872_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (sext_ln1118_112_fu_38548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF21);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (ap_const_lv24_FFFE79);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5031_p0 =  (sc_lv<15>) (ap_const_lv23_7FFFBD);
    } else {
        grp_fu_5031_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5031_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln21_199_fu_43890_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln21_12_fu_42532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln21_132_fu_41356_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln21_96_fu_40036_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln21_62_fu_38720_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln21_32_fu_38028_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln1192_75_fu_36158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln1118_57_fu_32884_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5031_p1 =  (sc_lv<15>) (sext_ln1118_26_fu_31672_p1.read());
    } else {
        grp_fu_5031_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5031_p2() {
    grp_fu_5031_p2 = (!grp_fu_5031_p0.read().is_01() || !grp_fu_5031_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5031_p0.read()) * sc_bigint<15>(grp_fu_5031_p1.read());
}

void cnn::thread_grp_fu_5032_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (sext_ln728_13_fu_42505_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (sext_ln1118_121_fu_41198_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (sext_ln728_9_fu_39883_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (sext_ln1118_112_fu_38548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (ap_const_lv24_91);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF13);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5032_p0 =  (sc_lv<15>) (ap_const_lv24_148);
    } else {
        grp_fu_5032_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5032_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln21_201_fu_43898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln21_167_fu_42660_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln1117_22_fu_41228_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln21_98_fu_40044_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln1117_16_fu_38612_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln21_33_fu_38033_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln1118_98_fu_36305_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln1192_51_fu_32920_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5032_p1 =  (sc_lv<15>) (sext_ln1192_6_fu_31299_p1.read());
    } else {
        grp_fu_5032_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5032_p2() {
    grp_fu_5032_p2 = (!grp_fu_5032_p0.read().is_01() || !grp_fu_5032_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5032_p0.read()) * sc_bigint<15>(grp_fu_5032_p1.read());
}

void cnn::thread_grp_fu_5033_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (sext_ln1118_127_fu_43337_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (sext_ln1118_115_fu_39471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (ap_const_lv24_121);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (ap_const_lv24_F5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5033_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFCB);
    } else {
        grp_fu_5033_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5033_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln21_186_fu_43838_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln21_151_fu_42596_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln21_117_fu_41296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln21_82_fu_39980_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln21_52_fu_38680_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln21_21_fu_37973_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln1118_98_fu_36305_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln1118_58_fu_32900_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5033_p1 =  (sc_lv<15>) (sext_ln1118_28_fu_31684_p1.read());
    } else {
        grp_fu_5033_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5033_p2() {
    grp_fu_5033_p2 = (!grp_fu_5033_p0.read().is_01() || !grp_fu_5033_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5033_p0.read()) * sc_bigint<15>(grp_fu_5033_p1.read());
}

void cnn::thread_grp_fu_5034_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5034_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5034_p0 =  (sc_lv<15>) (sext_ln1118_133_fu_44913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5034_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5034_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5034_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5034_p0 =  (sc_lv<15>) (sext_ln1192_88_fu_39753_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5034_p0 =  (sc_lv<15>) (sext_ln1118_111_fu_38420_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_5034_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFD3);
    } else {
        grp_fu_5034_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5034_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln21_205_fu_45078_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln21_190_fu_43854_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln21_157_fu_42620_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln21_123_fu_41320_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln21_88_fu_40004_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln21_54_fu_38688_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln21_27_fu_38003_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln1118_43_fu_32788_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5034_p1 =  (sc_lv<15>) (sext_ln1118_16_fu_31293_p1.read());
    } else {
        grp_fu_5034_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5034_p2() {
    grp_fu_5034_p2 = (!grp_fu_5034_p0.read().is_01() || !grp_fu_5034_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5034_p0.read()) * sc_bigint<15>(grp_fu_5034_p1.read());
}

void cnn::thread_grp_fu_5035_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (sext_ln1118_132_fu_44902_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (sext_ln1118_116_fu_39744_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (sext_ln1118_111_fu_38420_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (ap_const_lv24_D3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF26);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5035_p0 =  (sc_lv<15>) (ap_const_lv24_FFFEEC);
    } else {
        grp_fu_5035_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5035_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (sext_ln1117_28_fu_43766_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (sext_ln21_155_fu_42612_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (sext_ln21_121_fu_41312_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (sext_ln21_86_fu_39996_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (zext_ln21_2_fu_38592_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (sext_ln21_25_fu_37993_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (sext_ln1192_75_fu_36158_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (sext_ln1118_42_fu_32782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5035_p1 =  (sc_lv<15>) (sext_ln708_fu_30794_p1.read());
    } else {
        grp_fu_5035_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5035_p2() {
    grp_fu_5035_p2 = (!grp_fu_5035_p0.read().is_01() || !grp_fu_5035_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5035_p0.read()) * sc_bigint<15>(grp_fu_5035_p1.read());
}

void cnn::thread_grp_fu_5036_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (sext_ln1118_135_fu_38127_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (ap_const_lv22_31);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (ap_const_lv24_E6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5036_p0 =  (sc_lv<15>) (ap_const_lv23_7FFF87);
    } else {
        grp_fu_5036_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5036_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln21_14_fu_45074_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln21_176_fu_43798_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln21_142_fu_42560_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln21_107_fu_41256_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln21_71_fu_39936_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln21_43_fu_38644_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln1117_1_fu_37883_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln1118_99_fu_36312_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln1192_31_fu_32530_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5036_p1 =  (sc_lv<15>) (sext_ln1118_33_fu_31712_p1.read());
    } else {
        grp_fu_5036_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5036_p2() {
    grp_fu_5036_p2 = (!grp_fu_5036_p0.read().is_01() || !grp_fu_5036_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5036_p0.read()) * sc_bigint<15>(grp_fu_5036_p1.read());
}

void cnn::thread_grp_fu_5037_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (sext_ln1118_127_fu_43337_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (sext_ln1118_114_fu_39464_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (ap_const_lv23_58);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5037_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF3B);
    } else {
        grp_fu_5037_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5037_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (sext_ln21_208_fu_45090_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (sext_ln21_181_fu_43818_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (sext_ln21_147_fu_42580_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (sext_ln21_110_fu_41268_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (sext_ln21_76_fu_39956_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (zext_ln21_1_fu_38576_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (sext_ln21_7_fu_37903_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (sext_ln1118_55_fu_32874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5037_p1 =  (sc_lv<15>) (sext_ln1118_31_fu_31699_p1.read());
    } else {
        grp_fu_5037_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5037_p2() {
    grp_fu_5037_p2 = (!grp_fu_5037_p0.read().is_01() || !grp_fu_5037_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5037_p0.read()) * sc_bigint<15>(grp_fu_5037_p1.read());
}

void cnn::thread_grp_fu_5038_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (sext_ln1118_110_fu_38116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (ap_const_lv24_105);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (ap_const_lv20_B);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5038_p0 =  (sc_lv<15>) (ap_const_lv21_1D);
    } else {
        grp_fu_5038_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5038_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln21_179_fu_43810_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln21_145_fu_42572_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln21_11_fu_41220_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln21_74_fu_39948_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln21_46_fu_38656_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln21_6_fu_37898_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln1118_57_reg_46070.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln1118_74_fu_33675_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5038_p1 =  (sc_lv<15>) (sext_ln1118_20_fu_31389_p1.read());
    } else {
        grp_fu_5038_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5038_p2() {
    grp_fu_5038_p2 = (!grp_fu_5038_p0.read().is_01() || !grp_fu_5038_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5038_p0.read()) * sc_bigint<15>(grp_fu_5038_p1.read());
}

void cnn::thread_grp_fu_5039_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (sext_ln728_15_fu_44643_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (sext_ln1118_127_fu_43337_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (sext_ln728_10_fu_40739_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (sext_ln1118_115_fu_39471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (ap_const_lv24_93);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (ap_const_lv23_43);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5039_p0 =  (sc_lv<15>) (ap_const_lv23_7FFF9A);
    } else {
        grp_fu_5039_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5039_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln21_212_fu_45106_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln1117_27_fu_43762_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln21_150_fu_42592_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln21_114_fu_41284_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln1117_18_fu_39896_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln21_50_fu_38672_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln21_18_fu_37958_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln1118_72_fu_35442_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln1118_37_fu_32537_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5039_p1 =  (sc_lv<15>) (sext_ln1118_26_fu_31672_p1.read());
    } else {
        grp_fu_5039_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5039_p2() {
    grp_fu_5039_p2 = (!grp_fu_5039_p0.read().is_01() || !grp_fu_5039_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5039_p0.read()) * sc_bigint<15>(grp_fu_5039_p1.read());
}

void cnn::thread_grp_fu_5040_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (sext_ln1118_127_fu_43337_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (sext_ln1118_115_fu_39471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF4D);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (ap_const_lv24_FFFECE);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5040_p0 =  (sc_lv<15>) (ap_const_lv24_155);
    } else {
        grp_fu_5040_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5040_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln21_187_fu_43842_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln21_152_fu_42600_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln21_118_fu_41300_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln21_83_fu_39984_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln21_53_fu_38684_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln21_22_fu_37978_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln1118_68_fu_33648_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln1118_52_fu_32856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5040_p1 =  (sc_lv<15>) (sext_ln1118_10_fu_30948_p1.read());
    } else {
        grp_fu_5040_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5040_p2() {
    grp_fu_5040_p2 = (!grp_fu_5040_p0.read().is_01() || !grp_fu_5040_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5040_p0.read()) * sc_bigint<15>(grp_fu_5040_p1.read());
}

void cnn::thread_grp_fu_5041_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (sext_ln1118_121_fu_41198_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (sext_ln1118_117_fu_39872_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (sext_ln1118_112_fu_38548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (ap_const_lv21_15);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF23);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5041_p0 =  (sc_lv<15>) (ap_const_lv24_FFFED7);
    } else {
        grp_fu_5041_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5041_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln21_207_fu_45086_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln21_203_fu_43906_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln21_169_fu_42668_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln21_135_fu_41368_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln21_99_fu_40048_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln21_63_fu_38724_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln21_35_fu_38043_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln1118_71_fu_33665_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln1118_52_fu_32856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5041_p1 =  (sc_lv<15>) (sext_ln1192_28_fu_31732_p1.read());
    } else {
        grp_fu_5041_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5041_p2() {
    grp_fu_5041_p2 = (!grp_fu_5041_p0.read().is_01() || !grp_fu_5041_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5041_p0.read()) * sc_bigint<15>(grp_fu_5041_p1.read());
}

void cnn::thread_grp_fu_5042_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (sext_ln1118_110_fu_38116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (ap_const_lv24_E5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (ap_const_lv24_11F);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5042_p0 =  (sc_lv<15>) (ap_const_lv24_9E);
    } else {
        grp_fu_5042_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5042_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln21_178_fu_43806_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln21_144_fu_42568_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln21_108_fu_41260_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln21_73_fu_39944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln21_45_fu_38652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln21_5_fu_37893_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln1118_52_reg_46060.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln1118_68_fu_33648_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5042_p1 =  (sc_lv<15>) (sext_ln1118_14_fu_31126_p1.read());
    } else {
        grp_fu_5042_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5042_p2() {
    grp_fu_5042_p2 = (!grp_fu_5042_p0.read().is_01() || !grp_fu_5042_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5042_p0.read()) * sc_bigint<15>(grp_fu_5042_p1.read());
}

void cnn::thread_grp_fu_5043_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (sext_ln1118_110_fu_38116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (ap_const_lv24_135);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (ap_const_lv23_7FFFBA);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5043_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFDD);
    } else {
        grp_fu_5043_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5043_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln21_173_fu_43786_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln21_138_fu_42544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln21_103_fu_41240_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln21_67_fu_39920_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln21_39_fu_38628_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln21_1_fu_37863_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln1118_68_fu_33648_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln1118_44_fu_32795_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5043_p1 =  (sc_lv<15>) (sext_ln1118_34_fu_31727_p1.read());
    } else {
        grp_fu_5043_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5043_p2() {
    grp_fu_5043_p2 = (!grp_fu_5043_p0.read().is_01() || !grp_fu_5043_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5043_p0.read()) * sc_bigint<15>(grp_fu_5043_p1.read());
}

void cnn::thread_grp_fu_5044_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5044_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5044_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5044_p0 =  (sc_lv<15>) (sext_ln728_11_fu_41771_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5044_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5044_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5044_p0 =  (sc_lv<15>) (sext_ln1118_135_fu_38127_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5044_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF71);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_5044_p0 =  (sc_lv<15>) (ap_const_lv22_36);
    } else {
        grp_fu_5044_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5044_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln21_177_fu_43802_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln21_143_fu_42564_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln1117_20_fu_41216_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln21_72_fu_39940_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln21_44_fu_38648_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln1117_2_fu_37888_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln1118_96_fu_36166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln1192_28_reg_45999.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5044_p1 =  (sc_lv<15>) (sext_ln1118_13_fu_31121_p1.read());
    } else {
        grp_fu_5044_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5044_p2() {
    grp_fu_5044_p2 = (!grp_fu_5044_p0.read().is_01() || !grp_fu_5044_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5044_p0.read()) * sc_bigint<15>(grp_fu_5044_p1.read());
}

void cnn::thread_grp_fu_5045_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (sext_ln1118_121_fu_41198_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (sext_ln728_9_fu_39883_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (sext_ln1118_139_fu_38559_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (ap_const_lv24_C9);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (ap_const_lv23_58);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5045_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF44);
    } else {
        grp_fu_5045_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5045_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (sext_ln21_200_fu_43894_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (zext_ln21_5_fu_42536_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (sext_ln21_133_fu_41360_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (sext_ln21_97_fu_40040_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (sext_ln1117_15_fu_38608_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (sext_ln1117_8_fu_37938_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (sext_ln1192_51_reg_46093.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (sext_ln1118_59_fu_32906_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5045_p1 =  (sc_lv<15>) (sext_ln1192_10_fu_31394_p1.read());
    } else {
        grp_fu_5045_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5045_p2() {
    grp_fu_5045_p2 = (!grp_fu_5045_p0.read().is_01() || !grp_fu_5045_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5045_p0.read()) * sc_bigint<15>(grp_fu_5045_p1.read());
}

void cnn::thread_grp_fu_5046_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (sext_ln1118_133_fu_44913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (sext_ln1118_116_fu_39744_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (sext_ln1118_111_fu_38420_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (ap_const_lv24_BD);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (ap_const_lv22_27);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5046_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFCF);
    } else {
        grp_fu_5046_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5046_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln21_188_fu_43846_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln21_153_fu_42604_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln21_119_fu_41304_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln21_84_fu_39988_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln1117_11_fu_38584_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln21_23_fu_37983_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln1118_90_fu_35953_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln1118_43_fu_32788_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5046_p1 =  (sc_lv<15>) (sext_ln1118_8_fu_30938_p1.read());
    } else {
        grp_fu_5046_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5046_p2() {
    grp_fu_5046_p2 = (!grp_fu_5046_p0.read().is_01() || !grp_fu_5046_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5046_p0.read()) * sc_bigint<15>(grp_fu_5046_p1.read());
}

void cnn::thread_grp_fu_5047_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5047_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5047_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5047_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5047_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5047_p0 =  (sc_lv<15>) (sext_ln1118_121_fu_41198_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5047_p0 =  (sc_lv<15>) (sext_ln1118_117_fu_39872_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5047_p0 =  (sc_lv<15>) (sext_ln1118_112_fu_38548_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_5047_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFD2);
    } else {
        grp_fu_5047_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5047_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln21_206_fu_45082_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln21_204_fu_43910_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln21_170_fu_42672_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln21_136_fu_41372_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln21_100_fu_40052_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln21_64_fu_38728_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln21_36_fu_38048_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln1118_65_fu_32931_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5047_p1 =  (sc_lv<15>) (sext_ln1118_32_fu_31706_p1.read());
    } else {
        grp_fu_5047_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5047_p2() {
    grp_fu_5047_p2 = (!grp_fu_5047_p0.read().is_01() || !grp_fu_5047_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5047_p0.read()) * sc_bigint<15>(grp_fu_5047_p1.read());
}

void cnn::thread_grp_fu_5048_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (sext_ln1118_120_fu_41192_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (sext_ln728_9_fu_39883_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (sext_ln1118_112_fu_38548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (ap_const_lv24_8F);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (ap_const_lv23_73);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5048_p0 =  (sc_lv<15>) (ap_const_lv24_12F);
    } else {
        grp_fu_5048_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5048_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln21_202_fu_43902_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln21_168_fu_42664_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln21_134_fu_41364_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln1117_19_fu_39908_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln1117_17_fu_38616_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln21_34_fu_38038_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln1118_105_fu_36430_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln1118_64_fu_32926_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5048_p1 =  (sc_lv<15>) (sext_ln1192_10_fu_31394_p1.read());
    } else {
        grp_fu_5048_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5048_p2() {
    grp_fu_5048_p2 = (!grp_fu_5048_p0.read().is_01() || !grp_fu_5048_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5048_p0.read()) * sc_bigint<15>(grp_fu_5048_p1.read());
}

void cnn::thread_grp_fu_5049_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (sext_ln1118_135_fu_38127_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (ap_const_lv24_89);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF4E);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5049_p0 =  (sc_lv<15>) (ap_const_lv24_1B7);
    } else {
        grp_fu_5049_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5049_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln21_172_fu_43782_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln21_137_fu_42540_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln21_102_fu_41236_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln21_66_fu_39916_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln21_38_fu_38624_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln1117_fu_37858_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln1192_63_fu_33690_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln1192_39_fu_32810_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5049_p1 =  (sc_lv<15>) (sext_ln1118_31_fu_31699_p1.read());
    } else {
        grp_fu_5049_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5049_p2() {
    grp_fu_5049_p2 = (!grp_fu_5049_p0.read().is_01() || !grp_fu_5049_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5049_p0.read()) * sc_bigint<15>(grp_fu_5049_p1.read());
}

void cnn::thread_grp_fu_5050_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (sext_ln1118_121_fu_41198_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (sext_ln1118_117_fu_39872_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (sext_ln1118_139_fu_38559_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFC6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF77);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5050_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFC3);
    } else {
        grp_fu_5050_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5050_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln21_195_fu_43874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln21_163_fu_42644_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln21_128_fu_41340_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln21_93_fu_40024_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln21_58_fu_38704_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln1117_6_fu_37928_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln1118_67_fu_35410_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln1118_48_fu_32833_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5050_p1 =  (sc_lv<15>) (sext_ln1118_32_fu_31706_p1.read());
    } else {
        grp_fu_5050_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5050_p2() {
    grp_fu_5050_p2 = (!grp_fu_5050_p0.read().is_01() || !grp_fu_5050_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5050_p0.read()) * sc_bigint<15>(grp_fu_5050_p1.read());
}

void cnn::thread_grp_fu_5051_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (sext_ln1118_127_fu_43337_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (sext_ln1118_115_fu_39471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (ap_const_lv23_7FFF99);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (ap_const_lv23_5F);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5051_p0 =  (sc_lv<15>) (ap_const_lv23_7FFFB5);
    } else {
        grp_fu_5051_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5051_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln21_13_fu_43758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln21_149_fu_42588_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln21_113_fu_41280_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln21_79_fu_39968_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln21_49_fu_38668_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln21_8_fu_37908_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln1118_73_fu_33670_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln1118_49_fu_32840_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5051_p1 =  (sc_lv<15>) (sext_ln1118_fu_30789_p1.read());
    } else {
        grp_fu_5051_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5051_p2() {
    grp_fu_5051_p2 = (!grp_fu_5051_p0.read().is_01() || !grp_fu_5051_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5051_p0.read()) * sc_bigint<15>(grp_fu_5051_p1.read());
}

void cnn::thread_grp_fu_5052_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (sext_ln1118_163_fu_44908_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (sext_ln1192_88_fu_39753_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (sext_ln1118_111_fu_38420_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (ap_const_lv23_7FFFB4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (ap_const_lv24_D5);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5052_p0 =  (sc_lv<15>) (ap_const_lv24_91);
    } else {
        grp_fu_5052_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5052_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln1117_29_fu_43770_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln21_156_fu_42616_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln21_122_fu_41316_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln21_87_fu_40000_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln21_9_fu_38596_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln21_26_fu_37998_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln1118_84_fu_33717_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln1118_52_fu_32856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5052_p1 =  (sc_lv<15>) (sext_ln1118_14_fu_31126_p1.read());
    } else {
        grp_fu_5052_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5052_p2() {
    grp_fu_5052_p2 = (!grp_fu_5052_p0.read().is_01() || !grp_fu_5052_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5052_p0.read()) * sc_bigint<15>(grp_fu_5052_p1.read());
}

void cnn::thread_grp_fu_5053_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (sext_ln1118_126_fu_43330_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (sext_ln1118_114_fu_39464_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (ap_const_lv24_FFFE88);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (ap_const_lv24_F6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5053_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF54);
    } else {
        grp_fu_5053_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5053_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (sext_ln21_185_fu_43834_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (zext_ln21_4_fu_42528_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (sext_ln21_116_fu_41292_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (sext_ln21_81_fu_39976_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (sext_ln1117_10_fu_38580_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (sext_ln21_20_fu_37968_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (sext_ln1192_63_fu_33690_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (sext_ln1192_39_fu_32810_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5053_p1 =  (sc_lv<15>) (sext_ln1192_6_fu_31299_p1.read());
    } else {
        grp_fu_5053_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5053_p2() {
    grp_fu_5053_p2 = (!grp_fu_5053_p0.read().is_01() || !grp_fu_5053_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5053_p0.read()) * sc_bigint<15>(grp_fu_5053_p1.read());
}

void cnn::thread_grp_fu_5054_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (sext_ln1118_127_fu_43337_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (sext_ln1118_114_fu_39464_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (ap_const_lv24_B4);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (ap_const_lv24_138);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5054_p0 =  (sc_lv<15>) (ap_const_lv24_F7);
    } else {
        grp_fu_5054_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5054_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln21_180_fu_43814_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln21_146_fu_42576_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln21_109_fu_41264_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln21_75_fu_39952_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln1117_9_fu_38572_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln21_15_fu_37943_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln1118_83_fu_33711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln1192_51_fu_32920_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5054_p1 =  (sc_lv<15>) (sext_ln1192_10_fu_31394_p1.read());
    } else {
        grp_fu_5054_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5054_p2() {
    grp_fu_5054_p2 = (!grp_fu_5054_p0.read().is_01() || !grp_fu_5054_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5054_p0.read()) * sc_bigint<15>(grp_fu_5054_p1.read());
}

void cnn::thread_grp_fu_5055_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (sext_ln1118_125_fu_43058_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (sext_ln1118_110_fu_38116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (ap_const_lv24_FFFEB6);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (ap_const_lv22_32);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5055_p0 =  (sc_lv<15>) (ap_const_lv23_7FFFA5);
    } else {
        grp_fu_5055_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5055_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln21_175_fu_43794_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln21_140_fu_42552_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln21_105_fu_41248_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln21_69_fu_39928_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln21_41_fu_38636_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln21_3_fu_37873_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln1118_58_reg_46082.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln1118_85_fu_33722_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5055_p1 =  (sc_lv<15>) (sext_ln1118_19_fu_31384_p1.read());
    } else {
        grp_fu_5055_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5055_p2() {
    grp_fu_5055_p2 = (!grp_fu_5055_p0.read().is_01() || !grp_fu_5055_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5055_p0.read()) * sc_bigint<15>(grp_fu_5055_p1.read());
}

void cnn::thread_grp_fu_5056_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (sext_ln1118_127_fu_43337_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (sext_ln1118_115_fu_39471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (ap_const_lv24_95);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (ap_const_lv24_DA);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5056_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFCA);
    } else {
        grp_fu_5056_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5056_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln21_182_fu_43822_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln21_148_fu_42584_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln21_111_fu_41272_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln21_77_fu_39960_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln21_47_fu_38660_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln21_16_fu_37948_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln1118_90_fu_35953_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln1118_48_fu_32833_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5056_p1 =  (sc_lv<15>) (sext_ln1118_21_fu_31656_p1.read());
    } else {
        grp_fu_5056_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5056_p2() {
    grp_fu_5056_p2 = (!grp_fu_5056_p0.read().is_01() || !grp_fu_5056_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5056_p0.read()) * sc_bigint<15>(grp_fu_5056_p1.read());
}

void cnn::thread_grp_fu_5057_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (sext_ln1118_130_fu_44358_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (sext_ln1118_157_fu_43071_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (sext_ln1192_92_fu_41758_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (sext_ln1118_118_fu_40462_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (sext_ln1118_113_fu_39130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (sext_ln1118_110_fu_38116_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFD1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (ap_const_lv24_FFFE73);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5057_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF66);
    } else {
        grp_fu_5057_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5057_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln21_171_fu_43778_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln1117_23_fu_42516_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln21_101_fu_41232_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln21_65_fu_39912_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln21_37_fu_38620_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln21_fu_37853_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln1118_91_fu_35959_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln1118_58_fu_32900_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5057_p1 =  (sc_lv<15>) (sext_ln1192_6_fu_31299_p1.read());
    } else {
        grp_fu_5057_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5057_p2() {
    grp_fu_5057_p2 = (!grp_fu_5057_p0.read().is_01() || !grp_fu_5057_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5057_p0.read()) * sc_bigint<15>(grp_fu_5057_p1.read());
}

void cnn::thread_grp_fu_5058_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (sext_ln728_16_fu_45504_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (sext_ln1118_133_fu_44913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (sext_ln1118_128_fu_43610_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (sext_ln1118_123_fu_42294_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (sext_ln1192_90_fu_41068_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (sext_ln1192_88_fu_39753_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (sext_ln1118_111_fu_38420_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (ap_const_lv24_124);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5058_p0 =  (sc_lv<15>) (ap_const_lv24_FFFF0B);
    } else {
        grp_fu_5058_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5058_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln1117_30_fu_45070_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln21_194_fu_43870_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln21_162_fu_42640_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln21_127_fu_41336_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln21_10_fu_39900_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln21_57_fu_38700_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln21_29_fu_38013_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln1192_39_fu_32810_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5058_p1 =  (sc_lv<15>) (sext_ln1118_14_fu_31126_p1.read());
    } else {
        grp_fu_5058_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5058_p2() {
    grp_fu_5058_p2 = (!grp_fu_5058_p0.read().is_01() || !grp_fu_5058_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5058_p0.read()) * sc_bigint<15>(grp_fu_5058_p1.read());
}

void cnn::thread_grp_fu_5059_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (sext_ln1118_121_fu_41198_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (sext_ln1118_117_fu_39872_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (sext_ln1118_112_fu_38548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (ap_const_lv24_AA);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFCC);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5059_p0 =  (sc_lv<15>) (ap_const_lv23_7FFFA9);
    } else {
        grp_fu_5059_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5059_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln21_198_fu_43886_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln21_166_fu_42656_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln21_131_fu_41352_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln21_95_fu_40032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln21_61_fu_38716_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln21_31_fu_38023_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln1192_63_reg_46163.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln1118_60_fu_32911_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5059_p1 =  (sc_lv<15>) (sext_ln1118_26_fu_31672_p1.read());
    } else {
        grp_fu_5059_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5059_p2() {
    grp_fu_5059_p2 = (!grp_fu_5059_p0.read().is_01() || !grp_fu_5059_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5059_p0.read()) * sc_bigint<15>(grp_fu_5059_p1.read());
}

void cnn::thread_grp_fu_5060_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5060_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5060_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5060_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5060_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5060_p0 =  (sc_lv<15>) (sext_ln1118_120_fu_41192_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5060_p0 =  (sc_lv<15>) (sext_ln1118_117_fu_39872_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5060_p0 =  (sc_lv<15>) (sext_ln1118_139_fu_38559_p1.read());
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0)))) {
        grp_fu_5060_p0 =  (sc_lv<15>) (ap_const_lv22_26);
    } else {
        grp_fu_5060_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5060_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (sext_ln21_210_fu_45098_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (sext_ln21_196_fu_43878_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (sext_ln21_164_fu_42648_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (sext_ln21_129_fu_41344_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (zext_ln21_3_fu_39904_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (sext_ln21_59_fu_38708_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (sext_ln1117_7_fu_37933_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (sext_ln1118_43_fu_32788_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5060_p1 =  (sc_lv<15>) (sext_ln1118_21_fu_31656_p1.read());
    } else {
        grp_fu_5060_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5060_p2() {
    grp_fu_5060_p2 = (!grp_fu_5060_p0.read().is_01() || !grp_fu_5060_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5060_p0.read()) * sc_bigint<15>(grp_fu_5060_p1.read());
}

void cnn::thread_grp_fu_5061_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5061_p0 =  (sc_lv<15>) (sext_ln1118_131_fu_44630_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5061_p0 =  (sc_lv<15>) (sext_ln1118_126_fu_43330_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5061_p0 =  (sc_lv<15>) (sext_ln1118_122_fu_42030_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5061_p0 =  (sc_lv<15>) (sext_ln1118_119_fu_40726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5061_p0 =  (sc_lv<15>) (sext_ln1118_115_fu_39471_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5061_p0 =  (sc_lv<15>) (sext_ln1192_86_fu_38144_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5061_p0 =  (sc_lv<15>) (ap_const_lv24_C2);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        grp_fu_5061_p0 =  (sc_lv<15>) (ap_const_lv22_3FFFD6);
    } else {
        grp_fu_5061_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5061_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln21_183_fu_43826_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln1117_24_fu_42520_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln21_112_fu_41276_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln21_78_fu_39964_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln21_48_fu_38664_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln21_17_fu_37953_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln1118_107_fu_36438_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln1192_31_fu_32530_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5061_p1 =  (sc_lv<15>) (sext_ln1118_16_fu_31293_p1.read());
    } else {
        grp_fu_5061_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5061_p2() {
    grp_fu_5061_p2 = (!grp_fu_5061_p0.read().is_01() || !grp_fu_5061_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5061_p0.read()) * sc_bigint<15>(grp_fu_5061_p1.read());
}

void cnn::thread_grp_fu_5062_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (sext_ln1192_96_fu_45492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (sext_ln1118_134_fu_45034_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (sext_ln1118_129_fu_43734_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (sext_ln1118_124_fu_42492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (sext_ln1118_121_fu_41198_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (sext_ln1118_117_fu_39872_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (sext_ln1118_112_fu_38548_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (ap_const_lv23_63);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (ap_const_lv24_FFFEEA);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5062_p0 =  (sc_lv<15>) (ap_const_lv20_FFFF3);
    } else {
        grp_fu_5062_p0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5062_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln21_211_fu_45102_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln21_197_fu_43882_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln21_165_fu_42652_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln21_130_fu_41348_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln21_94_fu_40028_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln21_60_fu_38712_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln21_30_fu_38018_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln1118_89_fu_35948_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln1192_31_fu_32530_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_fu_5062_p1 =  (sc_lv<15>) (sext_ln1118_1_fu_30799_p1.read());
    } else {
        grp_fu_5062_p1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_5062_p2() {
    grp_fu_5062_p2 = (!grp_fu_5062_p0.read().is_01() || !grp_fu_5062_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5062_p0.read()) * sc_bigint<15>(grp_fu_5062_p1.read());
}

void cnn::thread_grp_makeItZero_fu_30529_ap_start() {
    grp_makeItZero_fu_30529_ap_start = grp_makeItZero_fu_30529_ap_start_reg.read();
}

void cnn::thread_grp_max_pool2_fu_30504_ap_start() {
    grp_max_pool2_fu_30504_ap_start = grp_max_pool2_fu_30504_ap_start_reg.read();
}

void cnn::thread_grp_max_pool2_fu_30504_feature_V_offset() {
    grp_max_pool2_fu_30504_feature_V_offset =  (sc_lv<4>) (reg_5011.read());
}

void cnn::thread_grp_max_pool_fu_30491_ap_start() {
    grp_max_pool_fu_30491_ap_start = grp_max_pool_fu_30491_ap_start_reg.read();
}

void cnn::thread_grp_max_pool_fu_30491_feature_V_offset() {
    grp_max_pool_fu_30491_feature_V_offset =  (sc_lv<3>) (reg_4944.read());
}

void cnn::thread_icmp_ln1494_2_fu_37059_p2() {
    icmp_ln1494_2_fu_37059_p2 = (!add_ln703_1_fu_37047_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(add_ln703_1_fu_37047_p2.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void cnn::thread_icmp_ln1494_3_fu_37096_p2() {
    icmp_ln1494_3_fu_37096_p2 = (!add_ln703_2_fu_37084_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(add_ln703_2_fu_37084_p2.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void cnn::thread_icmp_ln1494_4_fu_37133_p2() {
    icmp_ln1494_4_fu_37133_p2 = (!add_ln703_3_fu_37121_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(add_ln703_3_fu_37121_p2.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void cnn::thread_icmp_ln1494_5_fu_37257_p2() {
    icmp_ln1494_5_fu_37257_p2 = (!add_ln703_4_fu_37245_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(add_ln703_4_fu_37245_p2.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void cnn::thread_icmp_ln1494_6_fu_37170_p2() {
    icmp_ln1494_6_fu_37170_p2 = (!add_ln703_5_fu_37158_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(add_ln703_5_fu_37158_p2.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void cnn::thread_icmp_ln1494_fu_37022_p2() {
    icmp_ln1494_fu_37022_p2 = (!add_ln703_fu_37010_p2.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): (sc_bigint<15>(add_ln703_fu_37010_p2.read()) > sc_bigint<15>(ap_const_lv15_0));
}

void cnn::thread_icmp_ln20_1_fu_37289_p2() {
    icmp_ln20_1_fu_37289_p2 = (!ap_phi_mux_indvar_flatten281_phi_fu_4960_p4.read().is_01() || !ap_const_lv10_360.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten281_phi_fu_4960_p4.read() == ap_const_lv10_360);
}

void cnn::thread_icmp_ln20_fu_30553_p2() {
    icmp_ln20_fu_30553_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_4913_p4.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_4913_p4.read() == ap_const_lv10_310);
}

void cnn::thread_icmp_ln21_fu_36463_p2() {
    icmp_ln21_fu_36463_p2 = (!col_0_i_reg_4932.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(col_0_i_reg_4932.read() == ap_const_lv5_1C);
}

void cnn::thread_icmp_ln39_1_fu_36503_p2() {
    icmp_ln39_1_fu_36503_p2 = (!tmp_37_fu_36493_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_37_fu_36493_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln39_2_fu_36963_p2() {
    icmp_ln39_2_fu_36963_p2 = (!tmp_180_fu_36953_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_180_fu_36953_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln39_fu_36487_p2() {
    icmp_ln39_fu_36487_p2 = (!tmp_27_fu_36477_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_27_fu_36477_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln63_fu_37307_p2() {
    icmp_ln63_fu_37307_p2 = (!ap_phi_mux_indvar_flatten11_phi_fu_4982_p4.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten11_phi_fu_4982_p4.read() == ap_const_lv8_90);
}

void cnn::thread_icmp_ln64_fu_37611_p2() {
    icmp_ln64_fu_37611_p2 = (!ap_phi_mux_col_0_i665_phi_fu_5004_p4.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_col_0_i665_phi_fu_5004_p4.read() == ap_const_lv4_C);
}

void cnn::thread_icmp_ln67_fu_37277_p0() {
    icmp_ln67_fu_37277_p0 =  (sc_lv<3>) (reg_4944.read());
}

void cnn::thread_icmp_ln67_fu_37277_p2() {
    icmp_ln67_fu_37277_p2 = (!icmp_ln67_fu_37277_p0.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln67_fu_37277_p0.read() == ap_const_lv3_6);
}

void cnn::thread_icmp_ln81_fu_45902_p0() {
    icmp_ln81_fu_45902_p0 =  (sc_lv<4>) (reg_5011.read());
}

void cnn::thread_icmp_ln81_fu_45902_p2() {
    icmp_ln81_fu_45902_p2 = (!icmp_ln81_fu_45902_p0.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(icmp_ln81_fu_45902_p0.read() == ap_const_lv4_A);
}

void cnn::thread_icmp_ln88_1_fu_37653_p2() {
    icmp_ln88_1_fu_37653_p2 = (!tmp_189_fu_37643_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_189_fu_37643_p4.read() != ap_const_lv2_0);
}

void cnn::thread_icmp_ln88_2_fu_37777_p2() {
    icmp_ln88_2_fu_37777_p2 = (!tmp_429_fu_37767_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_429_fu_37767_p4.read() != ap_const_lv2_0);
}

void cnn::thread_icmp_ln88_fu_37599_p2() {
    icmp_ln88_fu_37599_p2 = (!tmp_184_fu_37589_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_184_fu_37589_p4.read() != ap_const_lv2_0);
}

void cnn::thread_img_in_V_V_0_ack_in() {
    img_in_V_V_0_ack_in = img_in_V_V_0_state.read()[1];
}

void cnn::thread_img_in_V_V_0_ack_out() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_reg_45919.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        img_in_V_V_0_ack_out = ap_const_logic_1;
    } else {
        img_in_V_V_0_ack_out = ap_const_logic_0;
    }
}

void cnn::thread_img_in_V_V_0_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, img_in_V_V_0_sel.read())) {
        img_in_V_V_0_data_out = img_in_V_V_0_payload_B.read();
    } else {
        img_in_V_V_0_data_out = img_in_V_V_0_payload_A.read();
    }
}

void cnn::thread_img_in_V_V_0_load_A() {
    img_in_V_V_0_load_A = (img_in_V_V_0_state_cmp_full.read() & ~img_in_V_V_0_sel_wr.read());
}

void cnn::thread_img_in_V_V_0_load_B() {
    img_in_V_V_0_load_B = (img_in_V_V_0_sel_wr.read() & img_in_V_V_0_state_cmp_full.read());
}

void cnn::thread_img_in_V_V_0_sel() {
    img_in_V_V_0_sel = img_in_V_V_0_sel_rd.read();
}

void cnn::thread_img_in_V_V_0_state_cmp_full() {
    img_in_V_V_0_state_cmp_full =  (sc_logic) ((!img_in_V_V_0_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(img_in_V_V_0_state.read() != ap_const_lv2_1))[0];
}

void cnn::thread_img_in_V_V_0_vld_in() {
    img_in_V_V_0_vld_in = img_in_V_V_TVALID.read();
}

void cnn::thread_img_in_V_V_0_vld_out() {
    img_in_V_V_0_vld_out = img_in_V_V_0_state.read()[0];
}

void cnn::thread_img_in_V_V_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln20_reg_45919.read()))) {
        img_in_V_V_TDATA_blk_n = img_in_V_V_0_state.read()[0];
    } else {
        img_in_V_V_TDATA_blk_n = ap_const_logic_1;
    }
}

void cnn::thread_img_in_V_V_TREADY() {
    img_in_V_V_TREADY = img_in_V_V_0_state.read()[1];
}

void cnn::thread_or_ln67_fu_37629_p2() {
    or_ln67_fu_37629_p2 = (and_ln21_1_fu_37617_p2.read() | icmp_ln63_fu_37307_p2.read());
}

void cnn::thread_p_shl2_cast_fu_38072_p3() {
    p_shl2_cast_fu_38072_p3 = esl_concat<7,4>(trunc_ln203_fu_38068_p1.read(), ap_const_lv4_0);
}

void cnn::thread_p_shl3_cast_fu_38084_p3() {
    p_shl3_cast_fu_38084_p3 = esl_concat<9,2>(trunc_ln203_1_fu_38080_p1.read(), ap_const_lv2_0);
}

void cnn::thread_pool_features1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        pool_features1_V_address0 =  (sc_lv<10>) (zext_ln203_11_fu_38107_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        pool_features1_V_address0 = grp_max_pool_fu_30491_pool_feature_V_address0.read();
    } else {
        pool_features1_V_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_pool_features1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0))) {
        pool_features1_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        pool_features1_V_ce0 = grp_max_pool_fu_30491_pool_feature_V_ce0.read();
    } else {
        pool_features1_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_pool_features1_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        pool_features1_V_we0 = grp_max_pool_fu_30491_pool_feature_V_we0.read();
    } else {
        pool_features1_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_pool_features2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        pool_features2_V_address0 = grp_flattening_layer_fu_30523_pool_features_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        pool_features2_V_address0 = grp_max_pool2_fu_30504_pool_feature_V_address0.read();
    } else {
        pool_features2_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void cnn::thread_pool_features2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        pool_features2_V_ce0 = grp_flattening_layer_fu_30523_pool_features_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        pool_features2_V_ce0 = grp_max_pool2_fu_30504_pool_feature_V_ce0.read();
    } else {
        pool_features2_V_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_pool_features2_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        pool_features2_V_we0 = grp_max_pool2_fu_30504_pool_feature_V_we0.read();
    } else {
        pool_features2_V_we0 = ap_const_logic_0;
    }
}

void cnn::thread_prediction_V_V_1_ack_in() {
    prediction_V_V_1_ack_in = prediction_V_V_1_state.read()[1];
}

void cnn::thread_prediction_V_V_1_ack_out() {
    prediction_V_V_1_ack_out = prediction_V_V_TREADY.read();
}

void cnn::thread_prediction_V_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, prediction_V_V_1_sel.read())) {
        prediction_V_V_1_data_out = prediction_V_V_1_payload_B.read();
    } else {
        prediction_V_V_1_data_out = prediction_V_V_1_payload_A.read();
    }
}

void cnn::thread_prediction_V_V_1_load_A() {
    prediction_V_V_1_load_A = (prediction_V_V_1_state_cmp_full.read() & ~prediction_V_V_1_sel_wr.read());
}

void cnn::thread_prediction_V_V_1_load_B() {
    prediction_V_V_1_load_B = (prediction_V_V_1_sel_wr.read() & prediction_V_V_1_state_cmp_full.read());
}

void cnn::thread_prediction_V_V_1_sel() {
    prediction_V_V_1_sel = prediction_V_V_1_sel_rd.read();
}

void cnn::thread_prediction_V_V_1_state_cmp_full() {
    prediction_V_V_1_state_cmp_full =  (sc_logic) ((!prediction_V_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(prediction_V_V_1_state.read() != ap_const_lv2_1))[0];
}

void cnn::thread_prediction_V_V_1_vld_in() {
    prediction_V_V_1_vld_in = grp_dense_layer_fu_30480_prediction_V_V_TVALID.read();
}

void cnn::thread_prediction_V_V_1_vld_out() {
    prediction_V_V_1_vld_out = prediction_V_V_1_state.read()[0];
}

void cnn::thread_prediction_V_V_TDATA() {
    prediction_V_V_TDATA = prediction_V_V_1_data_out.read();
}

void cnn::thread_prediction_V_V_TVALID() {
    prediction_V_V_TVALID = prediction_V_V_1_state.read()[0];
}

void cnn::thread_row_1_fu_37623_p2() {
    row_1_fu_37623_p2 = (!ap_const_lv4_1.is_01() || !select_ln21_fu_37313_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln21_fu_37313_p3.read()));
}

void cnn::thread_row_fu_36457_p2() {
    row_fu_36457_p2 = (!ap_const_lv5_1.is_01() || !row_0_i_reg_4920.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(row_0_i_reg_4920.read()));
}

void cnn::thread_select_ln20_1_fu_36509_p3() {
    select_ln20_1_fu_36509_p3 = (!icmp_ln21_fu_36463_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln21_fu_36463_p2.read()[0].to_bool())? icmp_ln39_fu_36487_p2.read(): icmp_ln39_1_fu_36503_p2.read());
}

void cnn::thread_select_ln20_2_fu_36517_p3() {
    select_ln20_2_fu_36517_p3 = (!icmp_ln21_fu_36463_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln21_fu_36463_p2.read()[0].to_bool())? row_fu_36457_p2.read(): row_0_i_reg_4920.read());
}

void cnn::thread_select_ln20_fu_36469_p3() {
    select_ln20_fu_36469_p3 = (!icmp_ln21_fu_36463_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln21_fu_36463_p2.read()[0].to_bool())? ap_const_lv5_0: col_0_i_reg_4932.read());
}

void cnn::thread_select_ln21_2_fu_37321_p3() {
    select_ln21_2_fu_37321_p3 = (!icmp_ln63_fu_37307_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln63_fu_37307_p2.read()[0].to_bool())? f_2_fu_37301_p2.read(): ap_phi_mux_f_0_phi_fu_4971_p4.read());
}

void cnn::thread_select_ln21_3_fu_37679_p3() {
    select_ln21_3_fu_37679_p3 = (!icmp_ln63_fu_37307_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln63_fu_37307_p2.read()[0].to_bool())? ap_const_lv4_C: add_ln90_2_fu_37673_p2.read());
}

void cnn::thread_select_ln21_fu_37313_p3() {
    select_ln21_fu_37313_p3 = (!icmp_ln63_fu_37307_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln63_fu_37307_p2.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_row_0_i663_phi_fu_4993_p4.read());
}

void cnn::thread_select_ln63_fu_45064_p3() {
    select_ln63_fu_45064_p3 = (!icmp_ln63_reg_46363.read()[0].is_01())? sc_lv<8>(): ((icmp_ln63_reg_46363.read()[0].to_bool())? ap_const_lv8_1: add_ln63_reg_47700.read());
}

void cnn::thread_select_ln67_1_fu_38053_p3() {
    select_ln67_1_fu_38053_p3 = (!and_ln21_1_reg_47630.read()[0].is_01())? sc_lv<4>(): ((and_ln21_1_reg_47630.read()[0].to_bool())? row_1_reg_47635.read(): select_ln21_reg_46368.read());
}

void cnn::thread_select_ln67_2_fu_37659_p3() {
    select_ln67_2_fu_37659_p3 = (!and_ln21_1_fu_37617_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln21_1_fu_37617_p2.read()[0].to_bool())? icmp_ln88_1_fu_37653_p2.read(): and_ln21_fu_37605_p2.read());
}

void cnn::thread_select_ln67_3_fu_37687_p3() {
    select_ln67_3_fu_37687_p3 = (!and_ln21_1_fu_37617_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln21_1_fu_37617_p2.read()[0].to_bool())? add_ln90_fu_37667_p2.read(): select_ln21_3_fu_37679_p3.read());
}

void cnn::thread_select_ln67_fu_37635_p3() {
    select_ln67_fu_37635_p3 = (!or_ln67_fu_37629_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln67_fu_37629_p2.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_col_0_i665_phi_fu_5004_p4.read());
}

void cnn::thread_sext_ln1117_10_fu_38580_p1() {
    sext_ln1117_10_fu_38580_p1 = esl_sext<23,8>(conv2_weights_V_7_1_2_reg_47715.read());
}

void cnn::thread_sext_ln1117_11_fu_38584_p1() {
    sext_ln1117_11_fu_38584_p1 = esl_sext<23,8>(conv2_weights_V_0_1_4_reg_47720.read());
}

void cnn::thread_sext_ln1117_12_fu_38588_p1() {
    sext_ln1117_12_fu_38588_p1 = esl_sext<23,8>(conv2_weights_V_1_1_4_reg_47725.read());
}

void cnn::thread_sext_ln1117_13_fu_38600_p1() {
    sext_ln1117_13_fu_38600_p1 = esl_sext<23,8>(conv2_weights_V_5_1_2_reg_47740.read());
}

void cnn::thread_sext_ln1117_14_fu_38604_p1() {
    sext_ln1117_14_fu_38604_p1 = esl_sext<23,8>(conv2_weights_V_6_1_2_reg_47745.read());
}

void cnn::thread_sext_ln1117_15_fu_38608_p1() {
    sext_ln1117_15_fu_38608_p1 = esl_sext<23,8>(conv2_weights_V_5_1_4_reg_47750.read());
}

void cnn::thread_sext_ln1117_16_fu_38612_p1() {
    sext_ln1117_16_fu_38612_p1 = esl_sext<23,8>(conv2_weights_V_6_1_4_reg_47755.read());
}

void cnn::thread_sext_ln1117_17_fu_38616_p1() {
    sext_ln1117_17_fu_38616_p1 = esl_sext<23,8>(conv2_weights_V_7_1_4_reg_47760.read());
}

void cnn::thread_sext_ln1117_18_fu_39896_p1() {
    sext_ln1117_18_fu_39896_p1 = esl_sext<23,8>(conv2_weights_V_5_1_6_reg_47765.read());
}

void cnn::thread_sext_ln1117_19_fu_39908_p1() {
    sext_ln1117_19_fu_39908_p1 = esl_sext<23,8>(conv2_weights_V_7_2_2_reg_47780.read());
}

void cnn::thread_sext_ln1117_1_fu_37883_p1() {
    sext_ln1117_1_fu_37883_p1 = esl_sext<23,8>(conv2_weights_V_6_0_s_q0.read());
}

void cnn::thread_sext_ln1117_20_fu_41216_p1() {
    sext_ln1117_20_fu_41216_p1 = esl_sext<23,8>(conv2_weights_V_7_2_4_reg_47785.read());
}

void cnn::thread_sext_ln1117_21_fu_41224_p1() {
    sext_ln1117_21_fu_41224_p1 = esl_sext<23,8>(conv2_weights_V_7_2_6_reg_47795.read());
}

void cnn::thread_sext_ln1117_22_fu_41228_p1() {
    sext_ln1117_22_fu_41228_p1 = esl_sext<23,8>(conv2_weights_V_6_3_2_reg_47800.read());
}

void cnn::thread_sext_ln1117_23_fu_42516_p1() {
    sext_ln1117_23_fu_42516_p1 = esl_sext<23,8>(conv2_weights_V_0_3_2_reg_47805.read());
}

void cnn::thread_sext_ln1117_24_fu_42520_p1() {
    sext_ln1117_24_fu_42520_p1 = esl_sext<23,8>(conv2_weights_V_3_3_2_reg_47810.read());
}

void cnn::thread_sext_ln1117_25_fu_42524_p1() {
    sext_ln1117_25_fu_42524_p1 = esl_sext<23,8>(conv2_weights_V_6_3_4_reg_47815.read());
}

void cnn::thread_sext_ln1117_26_fu_43754_p1() {
    sext_ln1117_26_fu_43754_p1 = esl_sext<23,8>(conv2_weights_V_5_4_2_reg_47835.read());
}

void cnn::thread_sext_ln1117_27_fu_43762_p1() {
    sext_ln1117_27_fu_43762_p1 = esl_sext<23,8>(conv2_weights_V_5_4_4_reg_47845.read());
}

void cnn::thread_sext_ln1117_28_fu_43766_p1() {
    sext_ln1117_28_fu_43766_p1 = esl_sext<23,8>(conv2_weights_V_2_4_2_reg_47850.read());
}

void cnn::thread_sext_ln1117_29_fu_43770_p1() {
    sext_ln1117_29_fu_43770_p1 = esl_sext<22,7>(conv2_weights_V_3_4_2_reg_47855.read());
}

void cnn::thread_sext_ln1117_2_fu_37888_p1() {
    sext_ln1117_2_fu_37888_p1 = esl_sext<23,8>(conv2_weights_V_7_0_s_q0.read());
}

void cnn::thread_sext_ln1117_30_fu_45070_p1() {
    sext_ln1117_30_fu_45070_p1 = esl_sext<23,8>(conv2_weights_V_3_4_4_reg_47865.read());
}

void cnn::thread_sext_ln1117_3_fu_37913_p1() {
    sext_ln1117_3_fu_37913_p1 = esl_sext<23,8>(conv2_weights_V_5_0_2_q0.read());
}

void cnn::thread_sext_ln1117_4_fu_37918_p1() {
    sext_ln1117_4_fu_37918_p1 = esl_sext<23,8>(conv2_weights_V_6_0_2_q0.read());
}

void cnn::thread_sext_ln1117_5_fu_37923_p1() {
    sext_ln1117_5_fu_37923_p1 = esl_sext<23,8>(conv2_weights_V_7_0_2_q0.read());
}

void cnn::thread_sext_ln1117_6_fu_37928_p1() {
    sext_ln1117_6_fu_37928_p1 = esl_sext<23,8>(conv2_weights_V_0_0_3_q0.read());
}

void cnn::thread_sext_ln1117_7_fu_37933_p1() {
    sext_ln1117_7_fu_37933_p1 = esl_sext<23,8>(conv2_weights_V_1_0_3_q0.read());
}

void cnn::thread_sext_ln1117_8_fu_37938_p1() {
    sext_ln1117_8_fu_37938_p1 = esl_sext<23,8>(conv2_weights_V_5_0_3_q0.read());
}

void cnn::thread_sext_ln1117_9_fu_38572_p1() {
    sext_ln1117_9_fu_38572_p1 = esl_sext<23,8>(conv2_weights_V_0_1_2_reg_47705.read());
}

void cnn::thread_sext_ln1117_fu_37858_p1() {
    sext_ln1117_fu_37858_p1 = esl_sext<23,8>(conv2_weights_V_1_0_s_q0.read());
}

void cnn::thread_sext_ln1118_100_fu_36317_p0() {
    sext_ln1118_100_fu_36317_p0 = buf_V_138.read();
}

void cnn::thread_sext_ln1118_100_fu_36317_p1() {
    sext_ln1118_100_fu_36317_p1 = esl_sext<23,15>(sext_ln1118_100_fu_36317_p0.read());
}

void cnn::thread_sext_ln1118_101_fu_36330_p1() {
    sext_ln1118_101_fu_36330_p1 = esl_sext<22,21>(shl_ln1118_40_fu_36322_p3.read());
}

void cnn::thread_sext_ln1118_102_fu_36342_p1() {
    sext_ln1118_102_fu_36342_p1 = esl_sext<22,19>(shl_ln1118_41_fu_36334_p3.read());
}

void cnn::thread_sext_ln1118_103_fu_36426_p1() {
    sext_ln1118_103_fu_36426_p1 = esl_sext<20,15>(tmp_V_reg_46098.read());
}

void cnn::thread_sext_ln1118_104_fu_36742_p1() {
    sext_ln1118_104_fu_36742_p1 = esl_sext<19,15>(tmp_V_reg_46098_pp0_iter1_reg.read());
}

void cnn::thread_sext_ln1118_105_fu_36430_p1() {
    sext_ln1118_105_fu_36430_p1 = esl_sext<24,15>(tmp_V_reg_46098.read());
}

void cnn::thread_sext_ln1118_106_fu_36434_p1() {
    sext_ln1118_106_fu_36434_p1 = esl_sext<23,15>(tmp_V_reg_46098.read());
}

void cnn::thread_sext_ln1118_107_fu_36438_p1() {
    sext_ln1118_107_fu_36438_p1 = esl_sext<22,15>(tmp_V_reg_46098.read());
}

void cnn::thread_sext_ln1118_108_fu_36862_p1() {
    sext_ln1118_108_fu_36862_p1 = esl_sext<19,18>(shl_ln1118_42_fu_36855_p3.read());
}

void cnn::thread_sext_ln1118_109_fu_36906_p1() {
    sext_ln1118_109_fu_36906_p1 = esl_sext<23,22>(shl_ln1118_43_fu_36899_p3.read());
}

void cnn::thread_sext_ln1118_10_fu_30948_p0() {
    sext_ln1118_10_fu_30948_p0 = buf_V_24.read();
}

void cnn::thread_sext_ln1118_10_fu_30948_p1() {
    sext_ln1118_10_fu_30948_p1 = esl_sext<24,15>(sext_ln1118_10_fu_30948_p0.read());
}

void cnn::thread_sext_ln1118_110_fu_38116_p0() {
    sext_ln1118_110_fu_38116_p0 = buf_V_1_7.read();
}

void cnn::thread_sext_ln1118_110_fu_38116_p1() {
    sext_ln1118_110_fu_38116_p1 = esl_sext<24,15>(sext_ln1118_110_fu_38116_p0.read());
}

void cnn::thread_sext_ln1118_111_fu_38420_p0() {
    sext_ln1118_111_fu_38420_p0 = buf_V_1_9.read();
}

void cnn::thread_sext_ln1118_111_fu_38420_p1() {
    sext_ln1118_111_fu_38420_p1 = esl_sext<24,15>(sext_ln1118_111_fu_38420_p0.read());
}

void cnn::thread_sext_ln1118_112_fu_38548_p0() {
    sext_ln1118_112_fu_38548_p0 = buf_V_1_10.read();
}

void cnn::thread_sext_ln1118_112_fu_38548_p1() {
    sext_ln1118_112_fu_38548_p1 = esl_sext<24,15>(sext_ln1118_112_fu_38548_p0.read());
}

void cnn::thread_sext_ln1118_113_fu_39130_p0() {
    sext_ln1118_113_fu_39130_p0 = buf_V_1_11.read();
}

void cnn::thread_sext_ln1118_113_fu_39130_p1() {
    sext_ln1118_113_fu_39130_p1 = esl_sext<24,15>(sext_ln1118_113_fu_39130_p0.read());
}

void cnn::thread_sext_ln1118_114_fu_39464_p0() {
    sext_ln1118_114_fu_39464_p0 = buf_V_1_19.read();
}

void cnn::thread_sext_ln1118_114_fu_39464_p1() {
    sext_ln1118_114_fu_39464_p1 = esl_sext<23,15>(sext_ln1118_114_fu_39464_p0.read());
}

void cnn::thread_sext_ln1118_115_fu_39471_p0() {
    sext_ln1118_115_fu_39471_p0 = buf_V_1_19.read();
}

void cnn::thread_sext_ln1118_115_fu_39471_p1() {
    sext_ln1118_115_fu_39471_p1 = esl_sext<24,15>(sext_ln1118_115_fu_39471_p0.read());
}

void cnn::thread_sext_ln1118_116_fu_39744_p0() {
    sext_ln1118_116_fu_39744_p0 = buf_V_1_20.read();
}

void cnn::thread_sext_ln1118_116_fu_39744_p1() {
    sext_ln1118_116_fu_39744_p1 = esl_sext<23,15>(sext_ln1118_116_fu_39744_p0.read());
}

void cnn::thread_sext_ln1118_117_fu_39872_p0() {
    sext_ln1118_117_fu_39872_p0 = buf_V_1_21.read();
}

void cnn::thread_sext_ln1118_117_fu_39872_p1() {
    sext_ln1118_117_fu_39872_p1 = esl_sext<24,15>(sext_ln1118_117_fu_39872_p0.read());
}

void cnn::thread_sext_ln1118_118_fu_40462_p0() {
    sext_ln1118_118_fu_40462_p0 = buf_V_1_22.read();
}

void cnn::thread_sext_ln1118_118_fu_40462_p1() {
    sext_ln1118_118_fu_40462_p1 = esl_sext<24,15>(sext_ln1118_118_fu_40462_p0.read());
}

void cnn::thread_sext_ln1118_119_fu_40726_p0() {
    sext_ln1118_119_fu_40726_p0 = buf_V_1_23.read();
}

void cnn::thread_sext_ln1118_119_fu_40726_p1() {
    sext_ln1118_119_fu_40726_p1 = esl_sext<24,15>(sext_ln1118_119_fu_40726_p0.read());
}

void cnn::thread_sext_ln1118_11_fu_31028_p1() {
    sext_ln1118_11_fu_31028_p1 = esl_sext<19,18>(tmp_32_fu_31020_p3.read());
}

void cnn::thread_sext_ln1118_120_fu_41192_p0() {
    sext_ln1118_120_fu_41192_p0 = buf_V_1_32.read();
}

void cnn::thread_sext_ln1118_120_fu_41192_p1() {
    sext_ln1118_120_fu_41192_p1 = esl_sext<23,15>(sext_ln1118_120_fu_41192_p0.read());
}

void cnn::thread_sext_ln1118_121_fu_41198_p0() {
    sext_ln1118_121_fu_41198_p0 = buf_V_1_32.read();
}

void cnn::thread_sext_ln1118_121_fu_41198_p1() {
    sext_ln1118_121_fu_41198_p1 = esl_sext<24,15>(sext_ln1118_121_fu_41198_p0.read());
}

void cnn::thread_sext_ln1118_122_fu_42030_p0() {
    sext_ln1118_122_fu_42030_p0 = buf_V_1_34.read();
}

void cnn::thread_sext_ln1118_122_fu_42030_p1() {
    sext_ln1118_122_fu_42030_p1 = esl_sext<24,15>(sext_ln1118_122_fu_42030_p0.read());
}

void cnn::thread_sext_ln1118_123_fu_42294_p0() {
    sext_ln1118_123_fu_42294_p0 = buf_V_1_35.read();
}

void cnn::thread_sext_ln1118_123_fu_42294_p1() {
    sext_ln1118_123_fu_42294_p1 = esl_sext<24,15>(sext_ln1118_123_fu_42294_p0.read());
}

void cnn::thread_sext_ln1118_124_fu_42492_p0() {
    sext_ln1118_124_fu_42492_p0 = buf_V_1_43.read();
}

void cnn::thread_sext_ln1118_124_fu_42492_p1() {
    sext_ln1118_124_fu_42492_p1 = esl_sext<24,15>(sext_ln1118_124_fu_42492_p0.read());
}

void cnn::thread_sext_ln1118_125_fu_43058_p0() {
    sext_ln1118_125_fu_43058_p0 = buf_V_1_44.read();
}

void cnn::thread_sext_ln1118_125_fu_43058_p1() {
    sext_ln1118_125_fu_43058_p1 = esl_sext<24,15>(sext_ln1118_125_fu_43058_p0.read());
}

void cnn::thread_sext_ln1118_126_fu_43330_p0() {
    sext_ln1118_126_fu_43330_p0 = buf_V_1_45.read();
}

void cnn::thread_sext_ln1118_126_fu_43330_p1() {
    sext_ln1118_126_fu_43330_p1 = esl_sext<23,15>(sext_ln1118_126_fu_43330_p0.read());
}

void cnn::thread_sext_ln1118_127_fu_43337_p0() {
    sext_ln1118_127_fu_43337_p0 = buf_V_1_45.read();
}

void cnn::thread_sext_ln1118_127_fu_43337_p1() {
    sext_ln1118_127_fu_43337_p1 = esl_sext<24,15>(sext_ln1118_127_fu_43337_p0.read());
}

void cnn::thread_sext_ln1118_128_fu_43610_p0() {
    sext_ln1118_128_fu_43610_p0 = buf_V_1_46.read();
}

void cnn::thread_sext_ln1118_128_fu_43610_p1() {
    sext_ln1118_128_fu_43610_p1 = esl_sext<24,15>(sext_ln1118_128_fu_43610_p0.read());
}

void cnn::thread_sext_ln1118_129_fu_43734_p0() {
    sext_ln1118_129_fu_43734_p0 = buf_V_1_47.read();
}

void cnn::thread_sext_ln1118_129_fu_43734_p1() {
    sext_ln1118_129_fu_43734_p1 = esl_sext<24,15>(sext_ln1118_129_fu_43734_p0.read());
}

void cnn::thread_sext_ln1118_12_fu_31116_p0() {
    sext_ln1118_12_fu_31116_p0 = buf_V_25.read();
}

void cnn::thread_sext_ln1118_12_fu_31116_p1() {
    sext_ln1118_12_fu_31116_p1 = esl_sext<23,15>(sext_ln1118_12_fu_31116_p0.read());
}

void cnn::thread_sext_ln1118_130_fu_44358_p0() {
    sext_ln1118_130_fu_44358_p0 = buf_V_1_55.read();
}

void cnn::thread_sext_ln1118_130_fu_44358_p1() {
    sext_ln1118_130_fu_44358_p1 = esl_sext<24,15>(sext_ln1118_130_fu_44358_p0.read());
}

void cnn::thread_sext_ln1118_131_fu_44630_p0() {
    sext_ln1118_131_fu_44630_p0 = buf_V_1_56.read();
}

void cnn::thread_sext_ln1118_131_fu_44630_p1() {
    sext_ln1118_131_fu_44630_p1 = esl_sext<24,15>(sext_ln1118_131_fu_44630_p0.read());
}

void cnn::thread_sext_ln1118_132_fu_44902_p0() {
    sext_ln1118_132_fu_44902_p0 = buf_V_1_57.read();
}

void cnn::thread_sext_ln1118_132_fu_44902_p1() {
    sext_ln1118_132_fu_44902_p1 = esl_sext<23,15>(sext_ln1118_132_fu_44902_p0.read());
}

void cnn::thread_sext_ln1118_133_fu_44913_p0() {
    sext_ln1118_133_fu_44913_p0 = buf_V_1_57.read();
}

void cnn::thread_sext_ln1118_133_fu_44913_p1() {
    sext_ln1118_133_fu_44913_p1 = esl_sext<24,15>(sext_ln1118_133_fu_44913_p0.read());
}

void cnn::thread_sext_ln1118_134_fu_45034_p0() {
    sext_ln1118_134_fu_45034_p0 = buf_V_1_58.read();
}

void cnn::thread_sext_ln1118_134_fu_45034_p1() {
    sext_ln1118_134_fu_45034_p1 = esl_sext<24,15>(sext_ln1118_134_fu_45034_p0.read());
}

void cnn::thread_sext_ln1118_135_fu_38127_p0() {
    sext_ln1118_135_fu_38127_p0 = buf_V_1_7.read();
}

void cnn::thread_sext_ln1118_135_fu_38127_p1() {
    sext_ln1118_135_fu_38127_p1 = esl_sext<23,15>(sext_ln1118_135_fu_38127_p0.read());
}

void cnn::thread_sext_ln1118_136_fu_38797_p0() {
    sext_ln1118_136_fu_38797_p0 =  (sc_lv<23>) (reg_14349.read());
}

void cnn::thread_sext_ln1118_136_fu_38797_p1() {
    sext_ln1118_136_fu_38797_p1 = esl_sext<24,23>(sext_ln1118_136_fu_38797_p0.read());
}

void cnn::thread_sext_ln1118_137_fu_38814_p0() {
    sext_ln1118_137_fu_38814_p0 =  (sc_lv<23>) (reg_11701.read());
}

void cnn::thread_sext_ln1118_137_fu_38814_p1() {
    sext_ln1118_137_fu_38814_p1 = esl_sext<24,23>(sext_ln1118_137_fu_38814_p0.read());
}

void cnn::thread_sext_ln1118_138_fu_38831_p0() {
    sext_ln1118_138_fu_38831_p0 =  (sc_lv<23>) (reg_11710.read());
}

void cnn::thread_sext_ln1118_138_fu_38831_p1() {
    sext_ln1118_138_fu_38831_p1 = esl_sext<24,23>(sext_ln1118_138_fu_38831_p0.read());
}

void cnn::thread_sext_ln1118_139_fu_38559_p0() {
    sext_ln1118_139_fu_38559_p0 = buf_V_1_10.read();
}

void cnn::thread_sext_ln1118_139_fu_38559_p1() {
    sext_ln1118_139_fu_38559_p1 = esl_sext<23,15>(sext_ln1118_139_fu_38559_p0.read());
}

void cnn::thread_sext_ln1118_13_fu_31121_p0() {
    sext_ln1118_13_fu_31121_p0 = buf_V_25.read();
}

void cnn::thread_sext_ln1118_13_fu_31121_p1() {
    sext_ln1118_13_fu_31121_p1 = esl_sext<22,15>(sext_ln1118_13_fu_31121_p0.read());
}

void cnn::thread_sext_ln1118_140_fu_38874_p0() {
    sext_ln1118_140_fu_38874_p0 =  (sc_lv<23>) (reg_11686.read());
}

void cnn::thread_sext_ln1118_140_fu_38874_p1() {
    sext_ln1118_140_fu_38874_p1 = esl_sext<24,23>(sext_ln1118_140_fu_38874_p0.read());
}

void cnn::thread_sext_ln1118_141_fu_38902_p1() {
    sext_ln1118_141_fu_38902_p1 = esl_sext<24,23>(mul_ln1118_104_reg_15784.read());
}

void cnn::thread_sext_ln1118_142_fu_39002_p1() {
    sext_ln1118_142_fu_39002_p1 = esl_sext<24,23>(reg_11707.read());
}

void cnn::thread_sext_ln1118_143_fu_39482_p0() {
    sext_ln1118_143_fu_39482_p0 =  (sc_lv<23>) (grp_fu_5054_p2.read());
}

void cnn::thread_sext_ln1118_143_fu_39482_p1() {
    sext_ln1118_143_fu_39482_p1 = esl_sext<24,23>(sext_ln1118_143_fu_39482_p0.read());
}

void cnn::thread_sext_ln1118_144_fu_39658_p0() {
    sext_ln1118_144_fu_39658_p0 =  (sc_lv<23>) (grp_fu_5053_p2.read());
}

void cnn::thread_sext_ln1118_144_fu_39658_p1() {
    sext_ln1118_144_fu_39658_p1 = esl_sext<24,23>(sext_ln1118_144_fu_39658_p0.read());
}

void cnn::thread_sext_ln1118_145_fu_40056_p1() {
    sext_ln1118_145_fu_40056_p1 = esl_sext<24,23>(mul_ln1118_109_reg_15779.read());
}

void cnn::thread_sext_ln1118_146_fu_40073_p1() {
    sext_ln1118_146_fu_40073_p1 = esl_sext<24,23>(mul_ln1118_110_reg_17230.read());
}

void cnn::thread_sext_ln1118_147_fu_40133_p1() {
    sext_ln1118_147_fu_40133_p1 = esl_sext<24,23>(mul_ln1118_112_reg_17236.read());
}

void cnn::thread_sext_ln1118_148_fu_40150_p1() {
    sext_ln1118_148_fu_40150_p1 = esl_sext<24,23>(mul_ln1118_113_reg_17245.read());
}

void cnn::thread_sext_ln1118_149_fu_40326_p1() {
    sext_ln1118_149_fu_40326_p1 = esl_sext<24,23>(mul_ln1118_114_reg_17212.read());
}

void cnn::thread_sext_ln1118_14_fu_31126_p0() {
    sext_ln1118_14_fu_31126_p0 = buf_V_25.read();
}

void cnn::thread_sext_ln1118_14_fu_31126_p1() {
    sext_ln1118_14_fu_31126_p1 = esl_sext<24,15>(sext_ln1118_14_fu_31126_p0.read());
}

void cnn::thread_sext_ln1118_150_fu_40354_p1() {
    sext_ln1118_150_fu_40354_p1 = esl_sext<24,23>(mul_ln1118_115_reg_17200.read());
}

void cnn::thread_sext_ln1118_151_fu_40382_p1() {
    sext_ln1118_151_fu_40382_p1 = esl_sext<24,23>(mul_ln1118_116_reg_17242.read());
}

void cnn::thread_sext_ln1118_152_fu_40864_p0() {
    sext_ln1118_152_fu_40864_p0 =  (sc_lv<23>) (grp_fu_5039_p2.read());
}

void cnn::thread_sext_ln1118_152_fu_40864_p1() {
    sext_ln1118_152_fu_40864_p1 = esl_sext<24,23>(sext_ln1118_152_fu_40864_p0.read());
}

void cnn::thread_sext_ln1118_153_fu_41678_p1() {
    sext_ln1118_153_fu_41678_p1 = esl_sext<24,23>(mul_ln1118_119_reg_17209.read());
}

void cnn::thread_sext_ln1118_154_fu_41944_p0() {
    sext_ln1118_154_fu_41944_p0 =  (sc_lv<23>) (grp_fu_5044_p2.read());
}

void cnn::thread_sext_ln1118_154_fu_41944_p1() {
    sext_ln1118_154_fu_41944_p1 = esl_sext<24,23>(sext_ln1118_154_fu_41944_p0.read());
}

void cnn::thread_sext_ln1118_155_fu_42767_p1() {
    sext_ln1118_155_fu_42767_p1 = esl_sext<24,23>(mul_ln1118_121_reg_21336.read());
}

void cnn::thread_sext_ln1118_156_fu_42954_p1() {
    sext_ln1118_156_fu_42954_p1 = esl_sext<24,23>(mul_ln1118_122_reg_21351.read());
}

void cnn::thread_sext_ln1118_157_fu_43071_p0() {
    sext_ln1118_157_fu_43071_p0 = buf_V_1_44.read();
}

void cnn::thread_sext_ln1118_157_fu_43071_p1() {
    sext_ln1118_157_fu_43071_p1 = esl_sext<23,15>(sext_ln1118_157_fu_43071_p0.read());
}

void cnn::thread_sext_ln1118_158_fu_43076_p0() {
    sext_ln1118_158_fu_43076_p0 =  (sc_lv<23>) (grp_fu_5057_p2.read());
}

void cnn::thread_sext_ln1118_158_fu_43076_p1() {
    sext_ln1118_158_fu_43076_p1 = esl_sext<24,23>(sext_ln1118_158_fu_43076_p0.read());
}

void cnn::thread_sext_ln1118_159_fu_43420_p0() {
    sext_ln1118_159_fu_43420_p0 =  (sc_lv<23>) (grp_fu_5061_p2.read());
}

void cnn::thread_sext_ln1118_159_fu_43420_p1() {
    sext_ln1118_159_fu_43420_p1 = esl_sext<24,23>(sext_ln1118_159_fu_43420_p0.read());
}

void cnn::thread_sext_ln1118_15_fu_31752_p1() {
    sext_ln1118_15_fu_31752_p1 = esl_sext<24,23>(tmp_40_fu_31745_p3.read());
}

void cnn::thread_sext_ln1118_160_fu_43496_p0() {
    sext_ln1118_160_fu_43496_p0 =  (sc_lv<23>) (grp_fu_5030_p2.read());
}

void cnn::thread_sext_ln1118_160_fu_43496_p1() {
    sext_ln1118_160_fu_43496_p1 = esl_sext<24,23>(sext_ln1118_160_fu_43496_p0.read());
}

void cnn::thread_sext_ln1118_161_fu_44496_p0() {
    sext_ln1118_161_fu_44496_p0 =  (sc_lv<23>) (grp_fu_5023_p2.read());
}

void cnn::thread_sext_ln1118_161_fu_44496_p1() {
    sext_ln1118_161_fu_44496_p1 = esl_sext<24,23>(sext_ln1118_161_fu_44496_p0.read());
}

void cnn::thread_sext_ln1118_162_fu_44768_p0() {
    sext_ln1118_162_fu_44768_p0 =  (sc_lv<23>) (grp_fu_5039_p2.read());
}

void cnn::thread_sext_ln1118_162_fu_44768_p1() {
    sext_ln1118_162_fu_44768_p1 = esl_sext<24,23>(sext_ln1118_162_fu_44768_p0.read());
}

void cnn::thread_sext_ln1118_163_fu_44908_p0() {
    sext_ln1118_163_fu_44908_p0 = buf_V_1_57.read();
}

void cnn::thread_sext_ln1118_163_fu_44908_p1() {
    sext_ln1118_163_fu_44908_p1 = esl_sext<22,15>(sext_ln1118_163_fu_44908_p0.read());
}

void cnn::thread_sext_ln1118_164_fu_45136_p1() {
    sext_ln1118_164_fu_45136_p1 = esl_sext<24,23>(reg_17218.read());
}

void cnn::thread_sext_ln1118_165_fu_45610_p0() {
    sext_ln1118_165_fu_45610_p0 =  (sc_lv<23>) (grp_fu_5058_p2.read());
}

void cnn::thread_sext_ln1118_165_fu_45610_p1() {
    sext_ln1118_165_fu_45610_p1 = esl_sext<24,23>(sext_ln1118_165_fu_45610_p0.read());
}

void cnn::thread_sext_ln1118_16_fu_31293_p0() {
    sext_ln1118_16_fu_31293_p0 = buf_V_26.read();
}

void cnn::thread_sext_ln1118_16_fu_31293_p1() {
    sext_ln1118_16_fu_31293_p1 = esl_sext<22,15>(sext_ln1118_16_fu_31293_p0.read());
}

void cnn::thread_sext_ln1118_17_fu_31820_p1() {
    sext_ln1118_17_fu_31820_p1 = esl_sext<20,19>(shl_ln1118_5_fu_31813_p3.read());
}

void cnn::thread_sext_ln1118_18_fu_31837_p1() {
    sext_ln1118_18_fu_31837_p1 = esl_sext<20,17>(shl_ln1118_6_fu_31830_p3.read());
}

void cnn::thread_sext_ln1118_19_fu_31384_p0() {
    sext_ln1118_19_fu_31384_p0 = buf_V_27.read();
}

void cnn::thread_sext_ln1118_19_fu_31384_p1() {
    sext_ln1118_19_fu_31384_p1 = esl_sext<23,15>(sext_ln1118_19_fu_31384_p0.read());
}

void cnn::thread_sext_ln1118_1_fu_30799_p0() {
    sext_ln1118_1_fu_30799_p0 = buf_V_23.read();
}

void cnn::thread_sext_ln1118_1_fu_30799_p1() {
    sext_ln1118_1_fu_30799_p1 = esl_sext<20,15>(sext_ln1118_1_fu_30799_p0.read());
}

void cnn::thread_sext_ln1118_20_fu_31389_p0() {
    sext_ln1118_20_fu_31389_p0 = buf_V_27.read();
}

void cnn::thread_sext_ln1118_20_fu_31389_p1() {
    sext_ln1118_20_fu_31389_p1 = esl_sext<21,15>(sext_ln1118_20_fu_31389_p0.read());
}

void cnn::thread_sext_ln1118_21_fu_31656_p0() {
    sext_ln1118_21_fu_31656_p0 = buf_V_51.read();
}

void cnn::thread_sext_ln1118_21_fu_31656_p1() {
    sext_ln1118_21_fu_31656_p1 = esl_sext<22,15>(sext_ln1118_21_fu_31656_p0.read());
}

void cnn::thread_sext_ln1118_22_fu_32044_p1() {
    sext_ln1118_22_fu_32044_p1 = esl_sext<18,15>(buf_V_51_load_reg_45979.read());
}

void cnn::thread_sext_ln1118_23_fu_32054_p1() {
    sext_ln1118_23_fu_32054_p1 = esl_sext<22,21>(shl_ln1118_8_fu_32047_p3.read());
}

void cnn::thread_sext_ln1118_24_fu_32071_p1() {
    sext_ln1118_24_fu_32071_p1 = esl_sext<22,18>(shl_ln1118_9_fu_32064_p3.read());
}

void cnn::thread_sext_ln1118_25_fu_32144_p1() {
    sext_ln1118_25_fu_32144_p1 = esl_sext<18,17>(shl_ln1118_s_fu_32137_p3.read());
}

void cnn::thread_sext_ln1118_26_fu_31672_p0() {
    sext_ln1118_26_fu_31672_p0 = buf_V_52.read();
}

void cnn::thread_sext_ln1118_26_fu_31672_p1() {
    sext_ln1118_26_fu_31672_p1 = esl_sext<23,15>(sext_ln1118_26_fu_31672_p0.read());
}

void cnn::thread_sext_ln1118_27_fu_31679_p0() {
    sext_ln1118_27_fu_31679_p0 = buf_V_52.read();
}

void cnn::thread_sext_ln1118_27_fu_31679_p1() {
    sext_ln1118_27_fu_31679_p1 = esl_sext<24,15>(sext_ln1118_27_fu_31679_p0.read());
}

void cnn::thread_sext_ln1118_28_fu_31684_p0() {
    sext_ln1118_28_fu_31684_p0 = buf_V_52.read();
}

void cnn::thread_sext_ln1118_28_fu_31684_p1() {
    sext_ln1118_28_fu_31684_p1 = esl_sext<22,15>(sext_ln1118_28_fu_31684_p0.read());
}

void cnn::thread_sext_ln1118_29_fu_32399_p1() {
    sext_ln1118_29_fu_32399_p1 = esl_sext<23,22>(shl_ln1118_10_fu_32392_p3.read());
}

void cnn::thread_sext_ln1118_2_fu_30804_p0() {
    sext_ln1118_2_fu_30804_p0 = buf_V_23.read();
}

void cnn::thread_sext_ln1118_2_fu_30804_p1() {
    sext_ln1118_2_fu_30804_p1 = esl_sext<19,15>(sext_ln1118_2_fu_30804_p0.read());
}

void cnn::thread_sext_ln1118_30_fu_32410_p1() {
    sext_ln1118_30_fu_32410_p1 = esl_sext<23,19>(shl_ln1118_11_fu_32403_p3.read());
}

void cnn::thread_sext_ln1118_31_fu_31699_p0() {
    sext_ln1118_31_fu_31699_p0 = buf_V_53.read();
}

void cnn::thread_sext_ln1118_31_fu_31699_p1() {
    sext_ln1118_31_fu_31699_p1 = esl_sext<24,15>(sext_ln1118_31_fu_31699_p0.read());
}

void cnn::thread_sext_ln1118_32_fu_31706_p0() {
    sext_ln1118_32_fu_31706_p0 = buf_V_53.read();
}

void cnn::thread_sext_ln1118_32_fu_31706_p1() {
    sext_ln1118_32_fu_31706_p1 = esl_sext<22,15>(sext_ln1118_32_fu_31706_p0.read());
}

void cnn::thread_sext_ln1118_33_fu_31712_p0() {
    sext_ln1118_33_fu_31712_p0 = buf_V_53.read();
}

void cnn::thread_sext_ln1118_33_fu_31712_p1() {
    sext_ln1118_33_fu_31712_p1 = esl_sext<23,15>(sext_ln1118_33_fu_31712_p0.read());
}

void cnn::thread_sext_ln1118_34_fu_31727_p0() {
    sext_ln1118_34_fu_31727_p0 = buf_V_54.read();
}

void cnn::thread_sext_ln1118_34_fu_31727_p1() {
    sext_ln1118_34_fu_31727_p1 = esl_sext<22,15>(sext_ln1118_34_fu_31727_p0.read());
}

void cnn::thread_sext_ln1118_35_fu_33143_p1() {
    sext_ln1118_35_fu_33143_p1 = esl_sext<22,21>(shl_ln1118_12_fu_33136_p3.read());
}

void cnn::thread_sext_ln1118_36_fu_33154_p1() {
    sext_ln1118_36_fu_33154_p1 = esl_sext<22,19>(shl_ln1118_13_fu_33147_p3.read());
}

void cnn::thread_sext_ln1118_37_fu_32537_p0() {
    sext_ln1118_37_fu_32537_p0 = buf_V_55.read();
}

void cnn::thread_sext_ln1118_37_fu_32537_p1() {
    sext_ln1118_37_fu_32537_p1 = esl_sext<23,15>(sext_ln1118_37_fu_32537_p0.read());
}

void cnn::thread_sext_ln1118_38_fu_33223_p1() {
    sext_ln1118_38_fu_33223_p1 = esl_sext<23,22>(shl_ln1118_14_fu_33216_p3.read());
}

void cnn::thread_sext_ln1118_39_fu_33234_p1() {
    sext_ln1118_39_fu_33234_p1 = esl_sext<23,19>(shl_ln1118_15_fu_33227_p3.read());
}

void cnn::thread_sext_ln1118_3_fu_30816_p1() {
    sext_ln1118_3_fu_30816_p1 = esl_sext<22,21>(shl_ln_fu_30808_p3.read());
}

void cnn::thread_sext_ln1118_40_fu_33279_p1() {
    sext_ln1118_40_fu_33279_p1 = esl_sext<24,23>(shl_ln1118_16_fu_33272_p3.read());
}

void cnn::thread_sext_ln1118_41_fu_33290_p1() {
    sext_ln1118_41_fu_33290_p1 = esl_sext<24,20>(shl_ln1118_17_fu_33283_p3.read());
}

void cnn::thread_sext_ln1118_42_fu_32782_p0() {
    sext_ln1118_42_fu_32782_p0 = buf_V_79.read();
}

void cnn::thread_sext_ln1118_42_fu_32782_p1() {
    sext_ln1118_42_fu_32782_p1 = esl_sext<24,15>(sext_ln1118_42_fu_32782_p0.read());
}

void cnn::thread_sext_ln1118_43_fu_32788_p0() {
    sext_ln1118_43_fu_32788_p0 = buf_V_79.read();
}

void cnn::thread_sext_ln1118_43_fu_32788_p1() {
    sext_ln1118_43_fu_32788_p1 = esl_sext<22,15>(sext_ln1118_43_fu_32788_p0.read());
}

void cnn::thread_sext_ln1118_44_fu_32795_p0() {
    sext_ln1118_44_fu_32795_p0 = buf_V_79.read();
}

void cnn::thread_sext_ln1118_44_fu_32795_p1() {
    sext_ln1118_44_fu_32795_p1 = esl_sext<23,15>(sext_ln1118_44_fu_32795_p0.read());
}

void cnn::thread_sext_ln1118_45_fu_32818_p0() {
    sext_ln1118_45_fu_32818_p0 = buf_V_80.read();
}

void cnn::thread_sext_ln1118_45_fu_32818_p1() {
    sext_ln1118_45_fu_32818_p1 = esl_sext<21,15>(sext_ln1118_45_fu_32818_p0.read());
}

void cnn::thread_sext_ln1118_46_fu_33790_p1() {
    sext_ln1118_46_fu_33790_p1 = esl_sext<21,20>(shl_ln1118_18_fu_33783_p3.read());
}

void cnn::thread_sext_ln1118_47_fu_33807_p1() {
    sext_ln1118_47_fu_33807_p1 = esl_sext<21,16>(shl_ln1118_19_fu_33800_p3.read());
}

void cnn::thread_sext_ln1118_48_fu_32833_p0() {
    sext_ln1118_48_fu_32833_p0 = buf_V_81.read();
}

void cnn::thread_sext_ln1118_48_fu_32833_p1() {
    sext_ln1118_48_fu_32833_p1 = esl_sext<24,15>(sext_ln1118_48_fu_32833_p0.read());
}

void cnn::thread_sext_ln1118_49_fu_32840_p0() {
    sext_ln1118_49_fu_32840_p0 = buf_V_81.read();
}

void cnn::thread_sext_ln1118_49_fu_32840_p1() {
    sext_ln1118_49_fu_32840_p1 = esl_sext<23,15>(sext_ln1118_49_fu_32840_p0.read());
}

void cnn::thread_sext_ln1118_4_fu_30828_p1() {
    sext_ln1118_4_fu_30828_p1 = esl_sext<22,17>(shl_ln1118_1_fu_30820_p3.read());
}

void cnn::thread_sext_ln1118_50_fu_33941_p1() {
    sext_ln1118_50_fu_33941_p1 = esl_sext<24,23>(shl_ln1118_20_fu_33934_p3.read());
}

void cnn::thread_sext_ln1118_51_fu_33952_p1() {
    sext_ln1118_51_fu_33952_p1 = esl_sext<24,18>(shl_ln1118_21_fu_33945_p3.read());
}

void cnn::thread_sext_ln1118_52_fu_32856_p0() {
    sext_ln1118_52_fu_32856_p0 = buf_V_82.read();
}

void cnn::thread_sext_ln1118_52_fu_32856_p1() {
    sext_ln1118_52_fu_32856_p1 = esl_sext<24,15>(sext_ln1118_52_fu_32856_p0.read());
}

void cnn::thread_sext_ln1118_53_fu_34027_p1() {
    sext_ln1118_53_fu_34027_p1 = esl_sext<20,15>(buf_V_82_load_reg_46054.read());
}

void cnn::thread_sext_ln1118_54_fu_34109_p1() {
    sext_ln1118_54_fu_34109_p1 = esl_sext<20,19>(shl_ln1118_22_fu_34102_p3.read());
}

void cnn::thread_sext_ln1118_55_fu_32874_p0() {
    sext_ln1118_55_fu_32874_p0 = buf_V_83.read();
}

void cnn::thread_sext_ln1118_55_fu_32874_p1() {
    sext_ln1118_55_fu_32874_p1 = esl_sext<23,15>(sext_ln1118_55_fu_32874_p0.read());
}

void cnn::thread_sext_ln1118_56_fu_32879_p0() {
    sext_ln1118_56_fu_32879_p0 = buf_V_83.read();
}

void cnn::thread_sext_ln1118_56_fu_32879_p1() {
    sext_ln1118_56_fu_32879_p1 = esl_sext<22,15>(sext_ln1118_56_fu_32879_p0.read());
}

void cnn::thread_sext_ln1118_57_fu_32884_p0() {
    sext_ln1118_57_fu_32884_p0 = buf_V_83.read();
}

void cnn::thread_sext_ln1118_57_fu_32884_p1() {
    sext_ln1118_57_fu_32884_p1 = esl_sext<24,15>(sext_ln1118_57_fu_32884_p0.read());
}

void cnn::thread_sext_ln1118_58_fu_32900_p0() {
    sext_ln1118_58_fu_32900_p0 = buf_V_107.read();
}

void cnn::thread_sext_ln1118_58_fu_32900_p1() {
    sext_ln1118_58_fu_32900_p1 = esl_sext<24,15>(sext_ln1118_58_fu_32900_p0.read());
}

void cnn::thread_sext_ln1118_59_fu_32906_p0() {
    sext_ln1118_59_fu_32906_p0 = buf_V_107.read();
}

void cnn::thread_sext_ln1118_59_fu_32906_p1() {
    sext_ln1118_59_fu_32906_p1 = esl_sext<23,15>(sext_ln1118_59_fu_32906_p0.read());
}

void cnn::thread_sext_ln1118_5_fu_30832_p1() {
    sext_ln1118_5_fu_30832_p1 = esl_sext<20,17>(shl_ln1118_1_fu_30820_p3.read());
}

void cnn::thread_sext_ln1118_60_fu_32911_p0() {
    sext_ln1118_60_fu_32911_p0 = buf_V_107.read();
}

void cnn::thread_sext_ln1118_60_fu_32911_p1() {
    sext_ln1118_60_fu_32911_p1 = esl_sext<22,15>(sext_ln1118_60_fu_32911_p0.read());
}

void cnn::thread_sext_ln1118_61_fu_34617_p1() {
    sext_ln1118_61_fu_34617_p1 = esl_sext<21,20>(shl_ln1118_24_fu_34610_p3.read());
}

void cnn::thread_sext_ln1118_62_fu_34628_p1() {
    sext_ln1118_62_fu_34628_p1 = esl_sext<21,16>(shl_ln1118_25_fu_34621_p3.read());
}

void cnn::thread_sext_ln1118_63_fu_35362_p1() {
    sext_ln1118_63_fu_35362_p1 = esl_sext<21,15>(buf_V_108_load_reg_46087_pp0_iter1_reg.read());
}

void cnn::thread_sext_ln1118_64_fu_32926_p0() {
    sext_ln1118_64_fu_32926_p0 = buf_V_108.read();
}

void cnn::thread_sext_ln1118_64_fu_32926_p1() {
    sext_ln1118_64_fu_32926_p1 = esl_sext<23,15>(sext_ln1118_64_fu_32926_p0.read());
}

void cnn::thread_sext_ln1118_65_fu_32931_p0() {
    sext_ln1118_65_fu_32931_p0 = buf_V_108.read();
}

void cnn::thread_sext_ln1118_65_fu_32931_p1() {
    sext_ln1118_65_fu_32931_p1 = esl_sext<22,15>(sext_ln1118_65_fu_32931_p0.read());
}

void cnn::thread_sext_ln1118_66_fu_35372_p1() {
    sext_ln1118_66_fu_35372_p1 = esl_sext<21,20>(tmp_125_fu_35365_p3.read());
}

void cnn::thread_sext_ln1118_67_fu_35410_p1() {
    sext_ln1118_67_fu_35410_p1 = esl_sext<22,15>(buf_V_109_load_reg_46140.read());
}

void cnn::thread_sext_ln1118_68_fu_33648_p0() {
    sext_ln1118_68_fu_33648_p0 = buf_V_109.read();
}

void cnn::thread_sext_ln1118_68_fu_33648_p1() {
    sext_ln1118_68_fu_33648_p1 = esl_sext<24,15>(sext_ln1118_68_fu_33648_p0.read());
}

void cnn::thread_sext_ln1118_69_fu_34890_p1() {
    sext_ln1118_69_fu_34890_p1 = esl_sext<18,15>(buf_V_109_load_reg_46140.read());
}

void cnn::thread_sext_ln1118_6_fu_30870_p1() {
    sext_ln1118_6_fu_30870_p1 = esl_sext<20,19>(shl_ln1118_2_fu_30862_p3.read());
}

void cnn::thread_sext_ln1118_70_fu_34900_p1() {
    sext_ln1118_70_fu_34900_p1 = esl_sext<18,17>(shl_ln1118_26_fu_34893_p3.read());
}

void cnn::thread_sext_ln1118_71_fu_33665_p0() {
    sext_ln1118_71_fu_33665_p0 = buf_V_110.read();
}

void cnn::thread_sext_ln1118_71_fu_33665_p1() {
    sext_ln1118_71_fu_33665_p1 = esl_sext<21,15>(sext_ln1118_71_fu_33665_p0.read());
}

void cnn::thread_sext_ln1118_72_fu_35442_p1() {
    sext_ln1118_72_fu_35442_p1 = esl_sext<24,15>(buf_V_110_load_reg_46148.read());
}

void cnn::thread_sext_ln1118_73_fu_33670_p0() {
    sext_ln1118_73_fu_33670_p0 = buf_V_110.read();
}

void cnn::thread_sext_ln1118_73_fu_33670_p1() {
    sext_ln1118_73_fu_33670_p1 = esl_sext<23,15>(sext_ln1118_73_fu_33670_p0.read());
}

void cnn::thread_sext_ln1118_74_fu_33675_p0() {
    sext_ln1118_74_fu_33675_p0 = buf_V_110.read();
}

void cnn::thread_sext_ln1118_74_fu_33675_p1() {
    sext_ln1118_74_fu_33675_p1 = esl_sext<20,15>(sext_ln1118_74_fu_33675_p0.read());
}

void cnn::thread_sext_ln1118_75_fu_35052_p1() {
    sext_ln1118_75_fu_35052_p1 = esl_sext<23,22>(shl_ln1118_28_fu_35045_p3.read());
}

void cnn::thread_sext_ln1118_76_fu_35063_p1() {
    sext_ln1118_76_fu_35063_p1 = esl_sext<23,17>(shl_ln1118_29_fu_35056_p3.read());
}

void cnn::thread_sext_ln1118_77_fu_35067_p1() {
    sext_ln1118_77_fu_35067_p1 = esl_sext<21,17>(shl_ln1118_29_fu_35056_p3.read());
}

void cnn::thread_sext_ln1118_78_fu_35140_p1() {
    sext_ln1118_78_fu_35140_p1 = esl_sext<21,20>(shl_ln1118_30_fu_35133_p3.read());
}

void cnn::thread_sext_ln1118_79_fu_33696_p0() {
    sext_ln1118_79_fu_33696_p0 = ap_sig_allocacmp_buf_V_111_load.read();
}

void cnn::thread_sext_ln1118_79_fu_33696_p1() {
    sext_ln1118_79_fu_33696_p1 = esl_sext<23,15>(sext_ln1118_79_fu_33696_p0.read());
}

void cnn::thread_sext_ln1118_7_fu_30898_p1() {
    sext_ln1118_7_fu_30898_p1 = esl_sext<19,18>(shl_ln1118_3_fu_30890_p3.read());
}

void cnn::thread_sext_ln1118_80_fu_35234_p1() {
    sext_ln1118_80_fu_35234_p1 = esl_sext<20,15>(buf_V_111_load_reg_46156.read());
}

void cnn::thread_sext_ln1118_81_fu_35254_p1() {
    sext_ln1118_81_fu_35254_p1 = esl_sext<20,19>(shl_ln1118_31_fu_35247_p3.read());
}

void cnn::thread_sext_ln1118_82_fu_35281_p1() {
    sext_ln1118_82_fu_35281_p1 = esl_sext<20,16>(shl_ln1118_32_fu_35274_p3.read());
}

void cnn::thread_sext_ln1118_83_fu_33711_p0() {
    sext_ln1118_83_fu_33711_p0 = ap_sig_allocacmp_buf_V_135_load.read();
}

void cnn::thread_sext_ln1118_83_fu_33711_p1() {
    sext_ln1118_83_fu_33711_p1 = esl_sext<24,15>(sext_ln1118_83_fu_33711_p0.read());
}

void cnn::thread_sext_ln1118_84_fu_33717_p0() {
    sext_ln1118_84_fu_33717_p0 = ap_sig_allocacmp_buf_V_135_load.read();
}

void cnn::thread_sext_ln1118_84_fu_33717_p1() {
    sext_ln1118_84_fu_33717_p1 = esl_sext<23,15>(sext_ln1118_84_fu_33717_p0.read());
}

void cnn::thread_sext_ln1118_85_fu_33722_p0() {
    sext_ln1118_85_fu_33722_p0 = ap_sig_allocacmp_buf_V_135_load.read();
}

void cnn::thread_sext_ln1118_85_fu_33722_p1() {
    sext_ln1118_85_fu_33722_p1 = esl_sext<22,15>(sext_ln1118_85_fu_33722_p0.read());
}

void cnn::thread_sext_ln1118_86_fu_35775_p1() {
    sext_ln1118_86_fu_35775_p1 = esl_sext<19,18>(shl_ln1118_33_fu_35768_p3.read());
}

void cnn::thread_sext_ln1118_87_fu_35786_p1() {
    sext_ln1118_87_fu_35786_p1 = esl_sext<19,16>(shl_ln1118_34_fu_35779_p3.read());
}

void cnn::thread_sext_ln1118_88_fu_35896_p1() {
    sext_ln1118_88_fu_35896_p1 = esl_sext<23,22>(shl_ln1118_35_fu_35889_p3.read());
}

void cnn::thread_sext_ln1118_89_fu_35948_p0() {
    sext_ln1118_89_fu_35948_p0 = buf_V_136.read();
}

void cnn::thread_sext_ln1118_89_fu_35948_p1() {
    sext_ln1118_89_fu_35948_p1 = esl_sext<23,15>(sext_ln1118_89_fu_35948_p0.read());
}

void cnn::thread_sext_ln1118_8_fu_30938_p0() {
    sext_ln1118_8_fu_30938_p0 = buf_V_24.read();
}

void cnn::thread_sext_ln1118_8_fu_30938_p1() {
    sext_ln1118_8_fu_30938_p1 = esl_sext<22,15>(sext_ln1118_8_fu_30938_p0.read());
}

void cnn::thread_sext_ln1118_90_fu_35953_p0() {
    sext_ln1118_90_fu_35953_p0 = buf_V_136.read();
}

void cnn::thread_sext_ln1118_90_fu_35953_p1() {
    sext_ln1118_90_fu_35953_p1 = esl_sext<24,15>(sext_ln1118_90_fu_35953_p0.read());
}

void cnn::thread_sext_ln1118_91_fu_35959_p0() {
    sext_ln1118_91_fu_35959_p0 = buf_V_136.read();
}

void cnn::thread_sext_ln1118_91_fu_35959_p1() {
    sext_ln1118_91_fu_35959_p1 = esl_sext<22,15>(sext_ln1118_91_fu_35959_p0.read());
}

void cnn::thread_sext_ln1118_92_fu_36048_p1() {
    sext_ln1118_92_fu_36048_p1 = esl_sext<22,21>(shl_ln1118_36_fu_36040_p3.read());
}

void cnn::thread_sext_ln1118_93_fu_36060_p1() {
    sext_ln1118_93_fu_36060_p1 = esl_sext<23,16>(shl_ln1118_37_fu_36052_p3.read());
}

void cnn::thread_sext_ln1118_94_fu_36064_p1() {
    sext_ln1118_94_fu_36064_p1 = esl_sext<22,16>(shl_ln1118_37_fu_36052_p3.read());
}

void cnn::thread_sext_ln1118_95_fu_36110_p1() {
    sext_ln1118_95_fu_36110_p1 = esl_sext<23,22>(shl_ln1118_38_fu_36102_p3.read());
}

void cnn::thread_sext_ln1118_96_fu_36166_p0() {
    sext_ln1118_96_fu_36166_p0 = buf_V_137.read();
}

void cnn::thread_sext_ln1118_96_fu_36166_p1() {
    sext_ln1118_96_fu_36166_p1 = esl_sext<22,15>(sext_ln1118_96_fu_36166_p0.read());
}

void cnn::thread_sext_ln1118_97_fu_36635_p1() {
    sext_ln1118_97_fu_36635_p1 = esl_sext<23,22>(shl_ln1118_39_fu_36628_p3.read());
}

void cnn::thread_sext_ln1118_98_fu_36305_p0() {
    sext_ln1118_98_fu_36305_p0 = buf_V_138.read();
}

void cnn::thread_sext_ln1118_98_fu_36305_p1() {
    sext_ln1118_98_fu_36305_p1 = esl_sext<24,15>(sext_ln1118_98_fu_36305_p0.read());
}

void cnn::thread_sext_ln1118_99_fu_36312_p0() {
    sext_ln1118_99_fu_36312_p0 = buf_V_138.read();
}

void cnn::thread_sext_ln1118_99_fu_36312_p1() {
    sext_ln1118_99_fu_36312_p1 = esl_sext<22,15>(sext_ln1118_99_fu_36312_p0.read());
}

void cnn::thread_sext_ln1118_9_fu_30944_p0() {
    sext_ln1118_9_fu_30944_p0 = buf_V_24.read();
}

void cnn::thread_sext_ln1118_9_fu_30944_p1() {
    sext_ln1118_9_fu_30944_p1 = esl_sext<19,15>(sext_ln1118_9_fu_30944_p0.read());
}

void cnn::thread_sext_ln1118_fu_30789_p0() {
    sext_ln1118_fu_30789_p0 = buf_V_23.read();
}

void cnn::thread_sext_ln1118_fu_30789_p1() {
    sext_ln1118_fu_30789_p1 = esl_sext<23,15>(sext_ln1118_fu_30789_p0.read());
}

void cnn::thread_sext_ln1192_10_fu_31394_p0() {
    sext_ln1192_10_fu_31394_p0 = buf_V_27.read();
}

void cnn::thread_sext_ln1192_10_fu_31394_p1() {
    sext_ln1192_10_fu_31394_p1 = esl_sext<24,15>(sext_ln1192_10_fu_31394_p0.read());
}

void cnn::thread_sext_ln1192_11_fu_31958_p1() {
    sext_ln1192_11_fu_31958_p1 = esl_sext<24,21>(reg_5011.read());
}

void cnn::thread_sext_ln1192_12_fu_31982_p1() {
    sext_ln1192_12_fu_31982_p1 = esl_sext<24,18>(shl_ln1118_7_fu_31968_p3.read());
}

void cnn::thread_sext_ln1192_13_fu_32034_p1() {
    sext_ln1192_13_fu_32034_p1 = esl_sext<24,23>(reg_11745.read());
}

void cnn::thread_sext_ln1192_14_fu_31651_p0() {
    sext_ln1192_14_fu_31651_p0 = buf_V_51.read();
}

void cnn::thread_sext_ln1192_14_fu_31651_p1() {
    sext_ln1192_14_fu_31651_p1 = esl_sext<24,15>(sext_ln1192_14_fu_31651_p0.read());
}

void cnn::thread_sext_ln1192_15_fu_32099_p1() {
    sext_ln1192_15_fu_32099_p1 = esl_sext<24,22>(sub_ln1118_6_fu_32075_p2.read());
}

void cnn::thread_sext_ln1192_16_fu_32127_p1() {
    sext_ln1192_16_fu_32127_p1 = esl_sext<24,22>(reg_11749.read());
}

void cnn::thread_sext_ln1192_17_fu_32178_p1() {
    sext_ln1192_17_fu_32178_p1 = esl_sext<24,18>(sub_ln1118_8_fu_32154_p2.read());
}

void cnn::thread_sext_ln1192_18_fu_32206_p0() {
    sext_ln1192_18_fu_32206_p0 =  (sc_lv<22>) (reg_11753.read());
}

void cnn::thread_sext_ln1192_18_fu_32206_p1() {
    sext_ln1192_18_fu_32206_p1 = esl_sext<24,22>(sext_ln1192_18_fu_32206_p0.read());
}

void cnn::thread_sext_ln1192_19_fu_32264_p1() {
    sext_ln1192_19_fu_32264_p1 = esl_sext<24,22>(add_ln1118_1_fu_32240_p2.read());
}

void cnn::thread_sext_ln1192_1_fu_30992_p1() {
    sext_ln1192_1_fu_30992_p1 = esl_sext<21,20>(tmp_30_fu_30980_p3.read());
}

void cnn::thread_sext_ln1192_20_fu_32316_p0() {
    sext_ln1192_20_fu_32316_p0 =  (sc_lv<23>) (reg_11765.read());
}

void cnn::thread_sext_ln1192_20_fu_32316_p1() {
    sext_ln1192_20_fu_32316_p1 = esl_sext<24,23>(sext_ln1192_20_fu_32316_p0.read());
}

void cnn::thread_sext_ln1192_21_fu_32344_p0() {
    sext_ln1192_21_fu_32344_p0 =  (sc_lv<23>) (reg_11769.read());
}

void cnn::thread_sext_ln1192_21_fu_32344_p1() {
    sext_ln1192_21_fu_32344_p1 = esl_sext<24,23>(sext_ln1192_21_fu_32344_p0.read());
}

void cnn::thread_sext_ln1192_22_fu_32372_p1() {
    sext_ln1192_22_fu_32372_p1 = esl_sext<24,23>(reg_11773.read());
}

void cnn::thread_sext_ln1192_23_fu_32953_p1() {
    sext_ln1192_23_fu_32953_p1 = esl_sext<24,22>(mul_ln1118_23_reg_11777.read());
}

void cnn::thread_sext_ln1192_24_fu_32438_p1() {
    sext_ln1192_24_fu_32438_p1 = esl_sext<24,23>(add_ln1118_2_fu_32414_p2.read());
}

void cnn::thread_sext_ln1192_25_fu_32996_p1() {
    sext_ln1192_25_fu_32996_p1 = esl_sext<24,23>(mul_ln1118_24_reg_11789.read());
}

void cnn::thread_sext_ln1192_26_fu_32496_p1() {
    sext_ln1192_26_fu_32496_p1 = esl_sext<24,22>(reg_11793.read());
}

void cnn::thread_sext_ln1192_27_fu_33037_p1() {
    sext_ln1192_27_fu_33037_p1 = esl_sext<24,22>(mul_ln1118_27_reg_11801.read());
}

void cnn::thread_sext_ln1192_28_fu_31732_p0() {
    sext_ln1192_28_fu_31732_p0 = buf_V_54.read();
}

void cnn::thread_sext_ln1192_28_fu_31732_p1() {
    sext_ln1192_28_fu_31732_p1 = esl_sext<24,15>(sext_ln1192_28_fu_31732_p0.read());
}

void cnn::thread_sext_ln1192_29_fu_33126_p1() {
    sext_ln1192_29_fu_33126_p1 = esl_sext<24,22>(reg_4944.read());
}

void cnn::thread_sext_ln1192_2_fu_31010_p1() {
    sext_ln1192_2_fu_31010_p1 = esl_sext<22,20>(tmp_31_fu_31002_p3.read());
}

void cnn::thread_sext_ln1192_30_fu_33182_p1() {
    sext_ln1192_30_fu_33182_p1 = esl_sext<24,22>(add_ln1118_3_fu_33158_p2.read());
}

void cnn::thread_sext_ln1192_31_fu_32530_p0() {
    sext_ln1192_31_fu_32530_p0 = buf_V_55.read();
}

void cnn::thread_sext_ln1192_31_fu_32530_p1() {
    sext_ln1192_31_fu_32530_p1 = esl_sext<24,15>(sext_ln1192_31_fu_32530_p0.read());
}

void cnn::thread_sext_ln1192_32_fu_33262_p1() {
    sext_ln1192_32_fu_33262_p1 = esl_sext<24,23>(sub_ln1118_9_fu_33238_p2.read());
}

void cnn::thread_sext_ln1192_33_fu_33342_p1() {
    sext_ln1192_33_fu_33342_p1 = esl_sext<24,23>(reg_11773.read());
}

void cnn::thread_sext_ln1192_34_fu_31046_p1() {
    sext_ln1192_34_fu_31046_p1 = esl_sext<20,19>(tmp_33_fu_31038_p3.read());
}

void cnn::thread_sext_ln1192_35_fu_33466_p0() {
    sext_ln1192_35_fu_33466_p0 =  (sc_lv<23>) (reg_11765.read());
}

void cnn::thread_sext_ln1192_35_fu_33466_p1() {
    sext_ln1192_35_fu_33466_p1 = esl_sext<24,23>(sext_ln1192_35_fu_33466_p0.read());
}

void cnn::thread_sext_ln1192_36_fu_33494_p0() {
    sext_ln1192_36_fu_33494_p0 =  (sc_lv<22>) (reg_11736.read());
}

void cnn::thread_sext_ln1192_36_fu_33494_p1() {
    sext_ln1192_36_fu_33494_p1 = esl_sext<24,22>(sext_ln1192_36_fu_33494_p0.read());
}

void cnn::thread_sext_ln1192_37_fu_33522_p1() {
    sext_ln1192_37_fu_33522_p1 = esl_sext<24,22>(reg_11749.read());
}

void cnn::thread_sext_ln1192_38_fu_33560_p1() {
    sext_ln1192_38_fu_33560_p1 = esl_sext<24,22>(reg_11793.read());
}

void cnn::thread_sext_ln1192_39_fu_32810_p0() {
    sext_ln1192_39_fu_32810_p0 = buf_V_80.read();
}

void cnn::thread_sext_ln1192_39_fu_32810_p1() {
    sext_ln1192_39_fu_32810_p1 = esl_sext<24,15>(sext_ln1192_39_fu_32810_p0.read());
}

void cnn::thread_sext_ln1192_3_fu_31096_p0() {
    sext_ln1192_3_fu_31096_p0 =  (sc_lv<22>) (grp_fu_5046_p2.read());
}

void cnn::thread_sext_ln1192_3_fu_31096_p1() {
    sext_ln1192_3_fu_31096_p1 = esl_sext<24,22>(sext_ln1192_3_fu_31096_p0.read());
}

void cnn::thread_sext_ln1192_40_fu_33760_p1() {
    sext_ln1192_40_fu_33760_p1 = esl_sext<24,21>(reg_5011.read());
}

void cnn::thread_sext_ln1192_41_fu_33835_p1() {
    sext_ln1192_41_fu_33835_p1 = esl_sext<24,21>(sub_ln1118_12_fu_33811_p2.read());
}

void cnn::thread_sext_ln1192_42_fu_33924_p1() {
    sext_ln1192_42_fu_33924_p1 = esl_sext<24,23>(mul_ln1118_46_reg_14331.read());
}

void cnn::thread_sext_ln1192_43_fu_34017_p1() {
    sext_ln1192_43_fu_34017_p1 = esl_sext<24,23>(reg_11745.read());
}

void cnn::thread_sext_ln1192_44_fu_34143_p1() {
    sext_ln1192_44_fu_34143_p1 = esl_sext<24,20>(sub_ln1118_15_fu_34119_p2.read());
}

void cnn::thread_sext_ln1192_45_fu_34212_p1() {
    sext_ln1192_45_fu_34212_p1 = esl_sext<24,19>(shl_ln1118_23_fu_34187_p3.read());
}

void cnn::thread_sext_ln1192_46_fu_34264_p0() {
    sext_ln1192_46_fu_34264_p0 =  (sc_lv<22>) (reg_11757.read());
}

void cnn::thread_sext_ln1192_46_fu_34264_p1() {
    sext_ln1192_46_fu_34264_p1 = esl_sext<24,22>(sext_ln1192_46_fu_34264_p0.read());
}

void cnn::thread_sext_ln1192_47_fu_34292_p0() {
    sext_ln1192_47_fu_34292_p0 =  (sc_lv<23>) (reg_11741.read());
}

void cnn::thread_sext_ln1192_47_fu_34292_p1() {
    sext_ln1192_47_fu_34292_p1 = esl_sext<24,23>(sext_ln1192_47_fu_34292_p0.read());
}

void cnn::thread_sext_ln1192_48_fu_34720_p1() {
    sext_ln1192_48_fu_34720_p1 = esl_sext<24,22>(mul_ln1118_54_reg_11695.read());
}

void cnn::thread_sext_ln1192_49_fu_34737_p1() {
    sext_ln1192_49_fu_34737_p1 = esl_sext<24,23>(reg_11707.read());
}

void cnn::thread_sext_ln1192_4_fu_31235_p0() {
    sext_ln1192_4_fu_31235_p0 =  (sc_lv<22>) (grp_fu_5044_p2.read());
}

void cnn::thread_sext_ln1192_4_fu_31235_p1() {
    sext_ln1192_4_fu_31235_p1 = esl_sext<24,22>(sext_ln1192_4_fu_31235_p0.read());
}

void cnn::thread_sext_ln1192_50_fu_34764_p1() {
    sext_ln1192_50_fu_34764_p1 = esl_sext<24,21>(add_ln1118_4_reg_46201.read());
}

void cnn::thread_sext_ln1192_51_fu_32920_p0() {
    sext_ln1192_51_fu_32920_p0 = buf_V_108.read();
}

void cnn::thread_sext_ln1192_51_fu_32920_p1() {
    sext_ln1192_51_fu_32920_p1 = esl_sext<24,15>(sext_ln1192_51_fu_32920_p0.read());
}

void cnn::thread_sext_ln1192_52_fu_34815_p1() {
    sext_ln1192_52_fu_34815_p1 = esl_sext<24,22>(mul_ln1118_58_reg_11689.read());
}

void cnn::thread_sext_ln1192_53_fu_34843_p1() {
    sext_ln1192_53_fu_34843_p1 = esl_sext<24,23>(mul_ln1118_59_reg_11692.read());
}

void cnn::thread_sext_ln1192_54_fu_35400_p1() {
    sext_ln1192_54_fu_35400_p1 = esl_sext<24,21>(sub_ln1118_27_fu_35376_p2.read());
}

void cnn::thread_sext_ln1192_55_fu_34928_p1() {
    sext_ln1192_55_fu_34928_p1 = esl_sext<24,18>(sub_ln1118_16_fu_34904_p2.read());
}

void cnn::thread_sext_ln1192_56_fu_34963_p1() {
    sext_ln1192_56_fu_34963_p1 = esl_sext<24,20>(shl_ln1118_27_fu_34938_p3.read());
}

void cnn::thread_sext_ln1192_57_fu_35432_p0() {
    sext_ln1192_57_fu_35432_p0 =  (sc_lv<22>) (sext_ln1192_57_fu_35432_p00.read());
}

void cnn::thread_sext_ln1192_57_fu_35432_p00() {
    sext_ln1192_57_fu_35432_p00 = (!grp_fu_5050_p0.read().is_01() || !grp_fu_5050_p1.read().is_01())? sc_lv<24>(): sc_bigint<15>(grp_fu_5050_p0.read()) * sc_bigint<15>(grp_fu_5050_p1.read());
}

void cnn::thread_sext_ln1192_57_fu_35432_p1() {
    sext_ln1192_57_fu_35432_p1 = esl_sext<24,22>(sext_ln1192_57_fu_35432_p0.read());
}

void cnn::thread_sext_ln1192_58_fu_35095_p1() {
    sext_ln1192_58_fu_35095_p1 = esl_sext<24,23>(add_ln1118_5_fu_35071_p2.read());
}

void cnn::thread_sext_ln1192_59_fu_35123_p1() {
    sext_ln1192_59_fu_35123_p1 = esl_sext<24,20>(mul_ln1118_63_reg_14970.read());
}

void cnn::thread_sext_ln1192_5_fu_31273_p0() {
    sext_ln1192_5_fu_31273_p0 =  (sc_lv<23>) (grp_fu_5030_p2.read());
}

void cnn::thread_sext_ln1192_5_fu_31273_p1() {
    sext_ln1192_5_fu_31273_p1 = esl_sext<24,23>(sext_ln1192_5_fu_31273_p0.read());
}

void cnn::thread_sext_ln1192_60_fu_35168_p1() {
    sext_ln1192_60_fu_35168_p1 = esl_sext<24,21>(sub_ln1118_17_fu_35144_p2.read());
}

void cnn::thread_sext_ln1192_61_fu_35196_p1() {
    sext_ln1192_61_fu_35196_p1 = esl_sext<24,23>(mul_ln1118_64_reg_14974.read());
}

void cnn::thread_sext_ln1192_62_fu_35224_p0() {
    sext_ln1192_62_fu_35224_p0 =  (sc_lv<21>) (reg_11710.read());
}

void cnn::thread_sext_ln1192_62_fu_35224_p1() {
    sext_ln1192_62_fu_35224_p1 = esl_sext<24,21>(sext_ln1192_62_fu_35224_p0.read());
}

void cnn::thread_sext_ln1192_63_fu_33690_p0() {
    sext_ln1192_63_fu_33690_p0 = ap_sig_allocacmp_buf_V_111_load.read();
}

void cnn::thread_sext_ln1192_63_fu_33690_p1() {
    sext_ln1192_63_fu_33690_p1 = esl_sext<24,15>(sext_ln1192_63_fu_33690_p0.read());
}

void cnn::thread_sext_ln1192_64_fu_35490_p1() {
    sext_ln1192_64_fu_35490_p1 = esl_sext<24,20>(add_ln1118_6_reg_46226.read());
}

void cnn::thread_sext_ln1192_65_fu_35506_p1() {
    sext_ln1192_65_fu_35506_p1 = esl_sext<24,20>(sub_ln1118_18_reg_46236.read());
}

void cnn::thread_sext_ln1192_66_fu_35319_p1() {
    sext_ln1192_66_fu_35319_p1 = esl_sext<24,23>(mul_ln1118_68_reg_14983.read());
}

void cnn::thread_sext_ln1192_67_fu_35814_p1() {
    sext_ln1192_67_fu_35814_p1 = esl_sext<24,19>(sub_ln1118_19_fu_35790_p2.read());
}

void cnn::thread_sext_ln1192_68_fu_35879_p1() {
    sext_ln1192_68_fu_35879_p1 = esl_sext<24,23>(mul_ln1118_72_reg_14999.read());
}

void cnn::thread_sext_ln1192_69_fu_36592_p1() {
    sext_ln1192_69_fu_36592_p1 = esl_sext<24,23>(sub_ln1118_21_reg_46261.read());
}

void cnn::thread_sext_ln1192_6_fu_31299_p0() {
    sext_ln1192_6_fu_31299_p0 = buf_V_26.read();
}

void cnn::thread_sext_ln1192_6_fu_31299_p1() {
    sext_ln1192_6_fu_31299_p1 = esl_sext<24,15>(sext_ln1192_6_fu_31299_p0.read());
}

void cnn::thread_sext_ln1192_70_fu_35929_p1() {
    sext_ln1192_70_fu_35929_p1 = esl_sext<24,22>(mul_ln1118_73_reg_15003.read());
}

void cnn::thread_sext_ln1192_71_fu_35982_p0() {
    sext_ln1192_71_fu_35982_p0 =  (sc_lv<22>) (grp_fu_5057_p2.read());
}

void cnn::thread_sext_ln1192_71_fu_35982_p1() {
    sext_ln1192_71_fu_35982_p1 = esl_sext<24,22>(sext_ln1192_71_fu_35982_p0.read());
}

void cnn::thread_sext_ln1192_72_fu_36092_p1() {
    sext_ln1192_72_fu_36092_p1 = esl_sext<24,22>(sub_ln1118_22_fu_36068_p2.read());
}

void cnn::thread_sext_ln1192_73_fu_36619_p1() {
    sext_ln1192_73_fu_36619_p1 = esl_sext<24,23>(sub_ln1118_23_reg_46266.read());
}

void cnn::thread_sext_ln1192_74_fu_36138_p0() {
    sext_ln1192_74_fu_36138_p0 =  (sc_lv<23>) (grp_fu_5062_p2.read());
}

void cnn::thread_sext_ln1192_74_fu_36138_p1() {
    sext_ln1192_74_fu_36138_p1 = esl_sext<24,23>(sext_ln1192_74_fu_36138_p0.read());
}

void cnn::thread_sext_ln1192_75_fu_36158_p0() {
    sext_ln1192_75_fu_36158_p0 = buf_V_137.read();
}

void cnn::thread_sext_ln1192_75_fu_36158_p1() {
    sext_ln1192_75_fu_36158_p1 = esl_sext<24,15>(sext_ln1192_75_fu_36158_p0.read());
}

void cnn::thread_sext_ln1192_76_fu_36237_p0() {
    sext_ln1192_76_fu_36237_p0 =  (sc_lv<22>) (grp_fu_5044_p2.read());
}

void cnn::thread_sext_ln1192_76_fu_36237_p1() {
    sext_ln1192_76_fu_36237_p1 = esl_sext<24,22>(sext_ln1192_76_fu_36237_p0.read());
}

void cnn::thread_sext_ln1192_77_fu_36663_p1() {
    sext_ln1192_77_fu_36663_p1 = esl_sext<24,23>(sub_ln1118_24_fu_36639_p2.read());
}

void cnn::thread_sext_ln1192_78_fu_36680_p1() {
    sext_ln1192_78_fu_36680_p1 = esl_sext<24,22>(sub_ln1118_25_reg_46276.read());
}

void cnn::thread_sext_ln1192_79_fu_36709_p1() {
    sext_ln1192_79_fu_36709_p1 = esl_sext<24,23>(mul_ln1118_82_reg_15024.read());
}

void cnn::thread_sext_ln1192_7_fu_31354_p0() {
    sext_ln1192_7_fu_31354_p0 =  (sc_lv<22>) (grp_fu_5034_p2.read());
}

void cnn::thread_sext_ln1192_7_fu_31354_p1() {
    sext_ln1192_7_fu_31354_p1 = esl_sext<24,22>(sext_ln1192_7_fu_31354_p0.read());
}

void cnn::thread_sext_ln1192_80_fu_36400_p0() {
    sext_ln1192_80_fu_36400_p0 =  (sc_lv<22>) (grp_fu_5036_p2.read());
}

void cnn::thread_sext_ln1192_80_fu_36400_p1() {
    sext_ln1192_80_fu_36400_p1 = esl_sext<24,22>(sext_ln1192_80_fu_36400_p0.read());
}

void cnn::thread_sext_ln1192_81_fu_36763_p0() {
    sext_ln1192_81_fu_36763_p0 =  (sc_lv<23>) (reg_11717.read());
}

void cnn::thread_sext_ln1192_81_fu_36763_p1() {
    sext_ln1192_81_fu_36763_p1 = esl_sext<24,23>(sext_ln1192_81_fu_36763_p0.read());
}

void cnn::thread_sext_ln1192_82_fu_36835_p0() {
    sext_ln1192_82_fu_36835_p0 =  (sc_lv<22>) (reg_11728.read());
}

void cnn::thread_sext_ln1192_82_fu_36835_p1() {
    sext_ln1192_82_fu_36835_p1 = esl_sext<24,22>(sext_ln1192_82_fu_36835_p0.read());
}

void cnn::thread_sext_ln1192_83_fu_36879_p1() {
    sext_ln1192_83_fu_36879_p1 = esl_sext<24,19>(add_ln1118_7_fu_36866_p2.read());
}

void cnn::thread_sext_ln1192_84_fu_37216_p1() {
    sext_ln1192_84_fu_37216_p1 = esl_sext<24,23>(add_ln1118_8_reg_46326.read());
}

void cnn::thread_sext_ln1192_85_fu_36933_p0() {
    sext_ln1192_85_fu_36933_p0 =  (sc_lv<20>) (reg_11793.read());
}

void cnn::thread_sext_ln1192_85_fu_36933_p1() {
    sext_ln1192_85_fu_36933_p1 = esl_sext<24,20>(sext_ln1192_85_fu_36933_p0.read());
}

void cnn::thread_sext_ln1192_86_fu_38144_p0() {
    sext_ln1192_86_fu_38144_p0 = buf_V_1_8.read();
}

void cnn::thread_sext_ln1192_86_fu_38144_p1() {
    sext_ln1192_86_fu_38144_p1 = esl_sext<24,15>(sext_ln1192_86_fu_38144_p0.read());
}

void cnn::thread_sext_ln1192_87_fu_39528_p0() {
    sext_ln1192_87_fu_39528_p0 =  (sc_lv<23>) (grp_fu_5037_p2.read());
}

void cnn::thread_sext_ln1192_87_fu_39528_p1() {
    sext_ln1192_87_fu_39528_p1 = esl_sext<24,23>(sext_ln1192_87_fu_39528_p0.read());
}

void cnn::thread_sext_ln1192_88_fu_39753_p0() {
    sext_ln1192_88_fu_39753_p0 = buf_V_1_20.read();
}

void cnn::thread_sext_ln1192_88_fu_39753_p1() {
    sext_ln1192_88_fu_39753_p1 = esl_sext<24,15>(sext_ln1192_88_fu_39753_p0.read());
}

void cnn::thread_sext_ln1192_89_fu_40097_p1() {
    sext_ln1192_89_fu_40097_p1 = esl_sext<24,23>(reg_17218.read());
}

void cnn::thread_sext_ln1192_8_fu_31865_p1() {
    sext_ln1192_8_fu_31865_p1 = esl_sext<24,20>(sub_ln1118_4_fu_31841_p2.read());
}

void cnn::thread_sext_ln1192_90_fu_41068_p0() {
    sext_ln1192_90_fu_41068_p0 = buf_V_1_31.read();
}

void cnn::thread_sext_ln1192_90_fu_41068_p1() {
    sext_ln1192_90_fu_41068_p1 = esl_sext<24,15>(sext_ln1192_90_fu_41068_p0.read());
}

void cnn::thread_sext_ln1192_91_fu_41548_p1() {
    sext_ln1192_91_fu_41548_p1 = esl_sext<24,23>(mul_ln1118_118_reg_15752.read());
}

void cnn::thread_sext_ln1192_92_fu_41758_p0() {
    sext_ln1192_92_fu_41758_p0 = buf_V_1_33.read();
}

void cnn::thread_sext_ln1192_92_fu_41758_p1() {
    sext_ln1192_92_fu_41758_p1 = esl_sext<24,15>(sext_ln1192_92_fu_41758_p0.read());
}

void cnn::thread_sext_ln1192_93_fu_43542_p0() {
    sext_ln1192_93_fu_43542_p0 =  (sc_lv<23>) (grp_fu_5053_p2.read());
}

void cnn::thread_sext_ln1192_93_fu_43542_p1() {
    sext_ln1192_93_fu_43542_p1 = esl_sext<24,23>(sext_ln1192_93_fu_43542_p0.read());
}

void cnn::thread_sext_ln1192_94_fu_45160_p1() {
    sext_ln1192_94_fu_45160_p1 = esl_sext<24,22>(mul_ln1118_131_reg_17224.read());
}

void cnn::thread_sext_ln1192_95_fu_45216_p1() {
    sext_ln1192_95_fu_45216_p1 = esl_sext<24,23>(mul_ln1118_132_reg_27006.read());
}

void cnn::thread_sext_ln1192_96_fu_45492_p1() {
    sext_ln1192_96_fu_45492_p1 = esl_sext<24,15>(in_val_V_1_reg_48865.read());
}

void cnn::thread_sext_ln1192_97_fu_31050_p1() {
    sext_ln1192_97_fu_31050_p1 = esl_sext<20,19>(sub_ln1118_2_fu_31032_p2.read());
}

void cnn::thread_sext_ln1192_9_fu_31882_p0() {
    sext_ln1192_9_fu_31882_p0 =  (sc_lv<22>) (reg_11728.read());
}

void cnn::thread_sext_ln1192_9_fu_31882_p1() {
    sext_ln1192_9_fu_31882_p1 = esl_sext<24,22>(sext_ln1192_9_fu_31882_p0.read());
}

void cnn::thread_sext_ln1192_fu_30988_p1() {
    sext_ln1192_fu_30988_p1 = esl_sext<21,19>(shl_ln1118_4_fu_30972_p3.read());
}

void cnn::thread_sext_ln203_1_fu_36991_p1() {
    sext_ln203_1_fu_36991_p1 = esl_sext<64,11>(add_ln203_fu_36985_p2.read());
}

void cnn::thread_sext_ln203_fu_36551_p1() {
    sext_ln203_fu_36551_p1 = esl_sext<11,9>(tmp_28_fu_36543_p3.read());
}

void cnn::thread_sext_ln21_100_fu_40052_p1() {
    sext_ln21_100_fu_40052_p1 = esl_sext<24,10>(conv2_weights_V_9_2_6_reg_48190.read());
}

void cnn::thread_sext_ln21_101_fu_41232_p1() {
    sext_ln21_101_fu_41232_p1 = esl_sext<24,9>(conv2_weights_V_0_2_6_reg_48195.read());
}

void cnn::thread_sext_ln21_102_fu_41236_p1() {
    sext_ln21_102_fu_41236_p1 = esl_sext<24,9>(conv2_weights_V_1_2_6_reg_48200.read());
}

void cnn::thread_sext_ln21_103_fu_41240_p1() {
    sext_ln21_103_fu_41240_p1 = esl_sext<24,9>(conv2_weights_V_2_2_6_reg_48205.read());
}

void cnn::thread_sext_ln21_104_fu_41244_p1() {
    sext_ln21_104_fu_41244_p1 = esl_sext<24,9>(conv2_weights_V_3_2_6_reg_48210.read());
}

void cnn::thread_sext_ln21_105_fu_41248_p1() {
    sext_ln21_105_fu_41248_p1 = esl_sext<24,10>(conv2_weights_V_4_2_6_reg_48215.read());
}

void cnn::thread_sext_ln21_106_fu_41252_p1() {
    sext_ln21_106_fu_41252_p1 = esl_sext<24,10>(conv2_weights_V_5_2_6_reg_48220.read());
}

void cnn::thread_sext_ln21_107_fu_41256_p1() {
    sext_ln21_107_fu_41256_p1 = esl_sext<24,9>(conv2_weights_V_6_2_6_reg_48225.read());
}

void cnn::thread_sext_ln21_108_fu_41260_p1() {
    sext_ln21_108_fu_41260_p1 = esl_sext<24,9>(conv2_weights_V_8_2_6_reg_48230.read());
}

void cnn::thread_sext_ln21_109_fu_41264_p1() {
    sext_ln21_109_fu_41264_p1 = esl_sext<24,9>(conv2_weights_V_0_2_8_reg_48235.read());
}

void cnn::thread_sext_ln21_10_fu_39900_p1() {
    sext_ln21_10_fu_39900_p1 = esl_sext<24,10>(conv2_weights_V_9_2_2_reg_47770.read());
}

void cnn::thread_sext_ln21_110_fu_41268_p1() {
    sext_ln21_110_fu_41268_p1 = esl_sext<24,10>(conv2_weights_V_1_2_8_reg_48240.read());
}

void cnn::thread_sext_ln21_111_fu_41272_p1() {
    sext_ln21_111_fu_41272_p1 = esl_sext<24,10>(conv2_weights_V_2_2_8_reg_48245.read());
}

void cnn::thread_sext_ln21_112_fu_41276_p1() {
    sext_ln21_112_fu_41276_p1 = esl_sext<24,9>(conv2_weights_V_3_2_8_reg_48250.read());
}

void cnn::thread_sext_ln21_113_fu_41280_p1() {
    sext_ln21_113_fu_41280_p1 = esl_sext<24,9>(conv2_weights_V_4_2_8_reg_48255.read());
}

void cnn::thread_sext_ln21_114_fu_41284_p1() {
    sext_ln21_114_fu_41284_p1 = esl_sext<24,9>(conv2_weights_V_5_2_8_reg_48260.read());
}

void cnn::thread_sext_ln21_115_fu_41288_p1() {
    sext_ln21_115_fu_41288_p1 = esl_sext<24,9>(conv2_weights_V_6_2_8_reg_48265.read());
}

void cnn::thread_sext_ln21_116_fu_41292_p1() {
    sext_ln21_116_fu_41292_p1 = esl_sext<24,9>(conv2_weights_V_7_2_10_reg_48270.read());
}

void cnn::thread_sext_ln21_117_fu_41296_p1() {
    sext_ln21_117_fu_41296_p1 = esl_sext<24,9>(conv2_weights_V_8_2_8_reg_48275.read());
}

void cnn::thread_sext_ln21_118_fu_41300_p1() {
    sext_ln21_118_fu_41300_p1 = esl_sext<24,10>(conv2_weights_V_9_2_8_reg_48280.read());
}

void cnn::thread_sext_ln21_119_fu_41304_p1() {
    sext_ln21_119_fu_41304_p1 = esl_sext<24,10>(conv2_weights_V_0_2_10_reg_48285.read());
}

void cnn::thread_sext_ln21_11_fu_41220_p1() {
    sext_ln21_11_fu_41220_p1 = esl_sext<24,11>(conv2_weights_V_9_2_4_reg_47790.read());
}

void cnn::thread_sext_ln21_120_fu_41308_p1() {
    sext_ln21_120_fu_41308_p1 = esl_sext<24,10>(conv2_weights_V_1_2_10_reg_48290.read());
}

void cnn::thread_sext_ln21_121_fu_41312_p1() {
    sext_ln21_121_fu_41312_p1 = esl_sext<24,9>(conv2_weights_V_2_2_10_reg_48295.read());
}

void cnn::thread_sext_ln21_122_fu_41316_p1() {
    sext_ln21_122_fu_41316_p1 = esl_sext<24,10>(conv2_weights_V_3_2_10_reg_48300.read());
}

void cnn::thread_sext_ln21_123_fu_41320_p1() {
    sext_ln21_123_fu_41320_p1 = esl_sext<24,10>(conv2_weights_V_4_2_10_reg_48305.read());
}

void cnn::thread_sext_ln21_124_fu_41324_p1() {
    sext_ln21_124_fu_41324_p1 = esl_sext<24,9>(conv2_weights_V_5_2_10_reg_48310.read());
}

void cnn::thread_sext_ln21_125_fu_41328_p1() {
    sext_ln21_125_fu_41328_p1 = esl_sext<24,10>(conv2_weights_V_6_2_10_reg_48315.read());
}

void cnn::thread_sext_ln21_126_fu_41332_p1() {
    sext_ln21_126_fu_41332_p1 = esl_sext<24,9>(conv2_weights_V_8_2_10_reg_48320.read());
}

void cnn::thread_sext_ln21_127_fu_41336_p1() {
    sext_ln21_127_fu_41336_p1 = esl_sext<24,9>(conv2_weights_V_9_2_10_reg_48325.read());
}

void cnn::thread_sext_ln21_128_fu_41340_p1() {
    sext_ln21_128_fu_41340_p1 = esl_sext<24,9>(conv2_weights_V_0_3_4_reg_48330.read());
}

void cnn::thread_sext_ln21_129_fu_41344_p1() {
    sext_ln21_129_fu_41344_p1 = esl_sext<24,10>(conv2_weights_V_1_3_2_reg_48335.read());
}

void cnn::thread_sext_ln21_12_fu_42532_p1() {
    sext_ln21_12_fu_42532_p1 = esl_sext<24,11>(conv2_weights_V_4_3_2_reg_47825.read());
}

void cnn::thread_sext_ln21_130_fu_41348_p1() {
    sext_ln21_130_fu_41348_p1 = esl_sext<24,10>(conv2_weights_V_2_3_2_reg_48340.read());
}

void cnn::thread_sext_ln21_131_fu_41352_p1() {
    sext_ln21_131_fu_41352_p1 = esl_sext<24,9>(conv2_weights_V_3_3_4_reg_48345.read());
}

void cnn::thread_sext_ln21_132_fu_41356_p1() {
    sext_ln21_132_fu_41356_p1 = esl_sext<24,10>(conv2_weights_V_4_3_4_reg_48350.read());
}

void cnn::thread_sext_ln21_133_fu_41360_p1() {
    sext_ln21_133_fu_41360_p1 = esl_sext<24,9>(conv2_weights_V_5_3_4_reg_48355.read());
}

void cnn::thread_sext_ln21_134_fu_41364_p1() {
    sext_ln21_134_fu_41364_p1 = esl_sext<24,10>(conv2_weights_V_7_3_4_reg_48360.read());
}

void cnn::thread_sext_ln21_135_fu_41368_p1() {
    sext_ln21_135_fu_41368_p1 = esl_sext<24,9>(conv2_weights_V_8_3_2_reg_48365.read());
}

void cnn::thread_sext_ln21_136_fu_41372_p1() {
    sext_ln21_136_fu_41372_p1 = esl_sext<24,10>(conv2_weights_V_9_3_2_reg_48370.read());
}

void cnn::thread_sext_ln21_137_fu_42540_p1() {
    sext_ln21_137_fu_42540_p1 = esl_sext<24,10>(conv2_weights_V_1_3_4_reg_48375.read());
}

void cnn::thread_sext_ln21_138_fu_42544_p1() {
    sext_ln21_138_fu_42544_p1 = esl_sext<24,9>(conv2_weights_V_2_3_4_reg_48380.read());
}

void cnn::thread_sext_ln21_139_fu_42548_p1() {
    sext_ln21_139_fu_42548_p1 = esl_sext<24,9>(conv2_weights_V_3_3_6_reg_48385.read());
}

void cnn::thread_sext_ln21_13_fu_43758_p1() {
    sext_ln21_13_fu_43758_p1 = esl_sext<24,11>(conv2_weights_V_4_4_2_reg_47840.read());
}

void cnn::thread_sext_ln21_140_fu_42552_p1() {
    sext_ln21_140_fu_42552_p1 = esl_sext<24,10>(conv2_weights_V_4_3_6_reg_48390.read());
}

void cnn::thread_sext_ln21_141_fu_42556_p1() {
    sext_ln21_141_fu_42556_p1 = esl_sext<24,9>(conv2_weights_V_5_3_6_reg_48395.read());
}

void cnn::thread_sext_ln21_142_fu_42560_p1() {
    sext_ln21_142_fu_42560_p1 = esl_sext<24,10>(conv2_weights_V_6_3_6_reg_48400.read());
}

void cnn::thread_sext_ln21_143_fu_42564_p1() {
    sext_ln21_143_fu_42564_p1 = esl_sext<24,9>(conv2_weights_V_7_3_6_reg_48405.read());
}

void cnn::thread_sext_ln21_144_fu_42568_p1() {
    sext_ln21_144_fu_42568_p1 = esl_sext<24,10>(conv2_weights_V_8_3_4_reg_48410.read());
}

void cnn::thread_sext_ln21_145_fu_42572_p1() {
    sext_ln21_145_fu_42572_p1 = esl_sext<24,10>(conv2_weights_V_9_3_4_reg_48415.read());
}

void cnn::thread_sext_ln21_146_fu_42576_p1() {
    sext_ln21_146_fu_42576_p1 = esl_sext<24,9>(conv2_weights_V_0_3_6_reg_48420.read());
}

void cnn::thread_sext_ln21_147_fu_42580_p1() {
    sext_ln21_147_fu_42580_p1 = esl_sext<24,10>(conv2_weights_V_1_3_6_reg_48425.read());
}

void cnn::thread_sext_ln21_148_fu_42584_p1() {
    sext_ln21_148_fu_42584_p1 = esl_sext<24,10>(conv2_weights_V_2_3_6_reg_48430.read());
}

void cnn::thread_sext_ln21_149_fu_42588_p1() {
    sext_ln21_149_fu_42588_p1 = esl_sext<24,10>(conv2_weights_V_4_3_8_reg_48435.read());
}

void cnn::thread_sext_ln21_14_fu_45074_p1() {
    sext_ln21_14_fu_45074_p1 = esl_sext<24,10>(conv2_weights_V_6_4_2_reg_47870.read());
}

void cnn::thread_sext_ln21_150_fu_42592_p1() {
    sext_ln21_150_fu_42592_p1 = esl_sext<24,9>(conv2_weights_V_5_3_8_reg_48440.read());
}

void cnn::thread_sext_ln21_151_fu_42596_p1() {
    sext_ln21_151_fu_42596_p1 = esl_sext<24,10>(conv2_weights_V_8_3_6_reg_48445.read());
}

void cnn::thread_sext_ln21_152_fu_42600_p1() {
    sext_ln21_152_fu_42600_p1 = esl_sext<24,10>(conv2_weights_V_9_3_6_reg_48450.read());
}

void cnn::thread_sext_ln21_153_fu_42604_p1() {
    sext_ln21_153_fu_42604_p1 = esl_sext<24,10>(conv2_weights_V_0_3_8_reg_48455.read());
}

void cnn::thread_sext_ln21_154_fu_42608_p1() {
    sext_ln21_154_fu_42608_p1 = esl_sext<24,9>(conv2_weights_V_1_3_8_reg_48460.read());
}

void cnn::thread_sext_ln21_155_fu_42612_p1() {
    sext_ln21_155_fu_42612_p1 = esl_sext<24,10>(conv2_weights_V_2_3_8_reg_48465.read());
}

void cnn::thread_sext_ln21_156_fu_42616_p1() {
    sext_ln21_156_fu_42616_p1 = esl_sext<24,9>(conv2_weights_V_3_3_8_reg_48470.read());
}

void cnn::thread_sext_ln21_157_fu_42620_p1() {
    sext_ln21_157_fu_42620_p1 = esl_sext<24,10>(conv2_weights_V_4_3_10_reg_48475.read());
}

void cnn::thread_sext_ln21_158_fu_42624_p1() {
    sext_ln21_158_fu_42624_p1 = esl_sext<24,9>(conv2_weights_V_5_3_10_reg_48480.read());
}

void cnn::thread_sext_ln21_159_fu_42628_p1() {
    sext_ln21_159_fu_42628_p1 = esl_sext<24,9>(conv2_weights_V_6_3_8_reg_48485.read());
}

void cnn::thread_sext_ln21_15_fu_37943_p1() {
    sext_ln21_15_fu_37943_p1 = esl_sext<24,9>(conv2_weights_V_0_0_1_q0.read());
}

void cnn::thread_sext_ln21_160_fu_42632_p1() {
    sext_ln21_160_fu_42632_p1 = esl_sext<24,9>(conv2_weights_V_7_3_8_reg_48490.read());
}

void cnn::thread_sext_ln21_161_fu_42636_p1() {
    sext_ln21_161_fu_42636_p1 = esl_sext<24,10>(conv2_weights_V_8_3_8_reg_48495.read());
}

void cnn::thread_sext_ln21_162_fu_42640_p1() {
    sext_ln21_162_fu_42640_p1 = esl_sext<24,9>(conv2_weights_V_9_3_8_reg_48500.read());
}

void cnn::thread_sext_ln21_163_fu_42644_p1() {
    sext_ln21_163_fu_42644_p1 = esl_sext<24,9>(conv2_weights_V_0_3_10_reg_48505.read());
}

void cnn::thread_sext_ln21_164_fu_42648_p1() {
    sext_ln21_164_fu_42648_p1 = esl_sext<24,10>(conv2_weights_V_1_3_10_reg_48510.read());
}

void cnn::thread_sext_ln21_165_fu_42652_p1() {
    sext_ln21_165_fu_42652_p1 = esl_sext<24,9>(conv2_weights_V_2_3_10_reg_48515.read());
}

void cnn::thread_sext_ln21_166_fu_42656_p1() {
    sext_ln21_166_fu_42656_p1 = esl_sext<24,10>(conv2_weights_V_3_3_10_reg_48520.read());
}

void cnn::thread_sext_ln21_167_fu_42660_p1() {
    sext_ln21_167_fu_42660_p1 = esl_sext<24,9>(conv2_weights_V_6_3_10_reg_48525.read());
}

void cnn::thread_sext_ln21_168_fu_42664_p1() {
    sext_ln21_168_fu_42664_p1 = esl_sext<24,10>(conv2_weights_V_7_3_10_reg_48530.read());
}

void cnn::thread_sext_ln21_169_fu_42668_p1() {
    sext_ln21_169_fu_42668_p1 = esl_sext<24,10>(conv2_weights_V_8_3_10_reg_48535.read());
}

void cnn::thread_sext_ln21_16_fu_37948_p1() {
    sext_ln21_16_fu_37948_p1 = esl_sext<24,9>(conv2_weights_V_2_0_1_q0.read());
}

void cnn::thread_sext_ln21_170_fu_42672_p1() {
    sext_ln21_170_fu_42672_p1 = esl_sext<24,9>(conv2_weights_V_9_3_10_reg_48540.read());
}

void cnn::thread_sext_ln21_171_fu_43778_p1() {
    sext_ln21_171_fu_43778_p1 = esl_sext<24,10>(conv2_weights_V_0_4_2_reg_48545.read());
}

void cnn::thread_sext_ln21_172_fu_43782_p1() {
    sext_ln21_172_fu_43782_p1 = esl_sext<24,10>(conv2_weights_V_1_4_2_reg_48550.read());
}

void cnn::thread_sext_ln21_173_fu_43786_p1() {
    sext_ln21_173_fu_43786_p1 = esl_sext<24,9>(conv2_weights_V_2_4_4_reg_48555.read());
}

void cnn::thread_sext_ln21_174_fu_43790_p1() {
    sext_ln21_174_fu_43790_p1 = esl_sext<24,9>(conv2_weights_V_3_4_6_reg_48560.read());
}

void cnn::thread_sext_ln21_175_fu_43794_p1() {
    sext_ln21_175_fu_43794_p1 = esl_sext<24,10>(conv2_weights_V_4_4_4_reg_48565.read());
}

void cnn::thread_sext_ln21_176_fu_43798_p1() {
    sext_ln21_176_fu_43798_p1 = esl_sext<24,10>(conv2_weights_V_6_4_4_reg_48570.read());
}

void cnn::thread_sext_ln21_177_fu_43802_p1() {
    sext_ln21_177_fu_43802_p1 = esl_sext<24,9>(conv2_weights_V_7_4_4_reg_48575.read());
}

void cnn::thread_sext_ln21_178_fu_43806_p1() {
    sext_ln21_178_fu_43806_p1 = esl_sext<24,9>(conv2_weights_V_8_4_2_reg_48580.read());
}

void cnn::thread_sext_ln21_179_fu_43810_p1() {
    sext_ln21_179_fu_43810_p1 = esl_sext<24,9>(conv2_weights_V_9_4_2_reg_48585.read());
}

void cnn::thread_sext_ln21_17_fu_37953_p1() {
    sext_ln21_17_fu_37953_p1 = esl_sext<24,9>(conv2_weights_V_3_0_1_q0.read());
}

void cnn::thread_sext_ln21_180_fu_43814_p1() {
    sext_ln21_180_fu_43814_p1 = esl_sext<24,9>(conv2_weights_V_0_4_4_reg_48590.read());
}

void cnn::thread_sext_ln21_181_fu_43818_p1() {
    sext_ln21_181_fu_43818_p1 = esl_sext<24,9>(conv2_weights_V_1_4_4_reg_48595.read());
}

void cnn::thread_sext_ln21_182_fu_43822_p1() {
    sext_ln21_182_fu_43822_p1 = esl_sext<24,10>(conv2_weights_V_2_4_6_reg_48600.read());
}

void cnn::thread_sext_ln21_183_fu_43826_p1() {
    sext_ln21_183_fu_43826_p1 = esl_sext<24,9>(conv2_weights_V_3_4_8_reg_48605.read());
}

void cnn::thread_sext_ln21_184_fu_43830_p1() {
    sext_ln21_184_fu_43830_p1 = esl_sext<24,9>(conv2_weights_V_6_4_6_reg_48610.read());
}

void cnn::thread_sext_ln21_185_fu_43834_p1() {
    sext_ln21_185_fu_43834_p1 = esl_sext<24,10>(conv2_weights_V_7_4_6_reg_48615.read());
}

void cnn::thread_sext_ln21_186_fu_43838_p1() {
    sext_ln21_186_fu_43838_p1 = esl_sext<24,9>(conv2_weights_V_8_4_4_reg_48620.read());
}

void cnn::thread_sext_ln21_187_fu_43842_p1() {
    sext_ln21_187_fu_43842_p1 = esl_sext<24,9>(conv2_weights_V_9_4_4_reg_48625.read());
}

void cnn::thread_sext_ln21_188_fu_43846_p1() {
    sext_ln21_188_fu_43846_p1 = esl_sext<24,9>(conv2_weights_V_0_4_6_reg_48630.read());
}

void cnn::thread_sext_ln21_189_fu_43850_p1() {
    sext_ln21_189_fu_43850_p1 = esl_sext<24,10>(conv2_weights_V_1_4_6_reg_48635.read());
}

void cnn::thread_sext_ln21_18_fu_37958_p1() {
    sext_ln21_18_fu_37958_p1 = esl_sext<24,9>(conv2_weights_V_5_0_1_q0.read());
}

void cnn::thread_sext_ln21_190_fu_43854_p1() {
    sext_ln21_190_fu_43854_p1 = esl_sext<24,10>(conv2_weights_V_4_4_6_reg_48640.read());
}

void cnn::thread_sext_ln21_191_fu_43858_p1() {
    sext_ln21_191_fu_43858_p1 = esl_sext<24,9>(conv2_weights_V_5_4_6_reg_48645.read());
}

void cnn::thread_sext_ln21_192_fu_43862_p1() {
    sext_ln21_192_fu_43862_p1 = esl_sext<24,10>(conv2_weights_V_6_4_8_reg_48650.read());
}

void cnn::thread_sext_ln21_193_fu_43866_p1() {
    sext_ln21_193_fu_43866_p1 = esl_sext<24,10>(conv2_weights_V_8_4_6_reg_48655.read());
}

void cnn::thread_sext_ln21_194_fu_43870_p1() {
    sext_ln21_194_fu_43870_p1 = esl_sext<24,9>(conv2_weights_V_9_4_6_reg_48660.read());
}

void cnn::thread_sext_ln21_195_fu_43874_p1() {
    sext_ln21_195_fu_43874_p1 = esl_sext<24,9>(conv2_weights_V_0_4_8_reg_48665.read());
}

void cnn::thread_sext_ln21_196_fu_43878_p1() {
    sext_ln21_196_fu_43878_p1 = esl_sext<24,10>(conv2_weights_V_1_4_8_reg_48670.read());
}

void cnn::thread_sext_ln21_197_fu_43882_p1() {
    sext_ln21_197_fu_43882_p1 = esl_sext<24,9>(conv2_weights_V_2_4_8_reg_48675.read());
}

void cnn::thread_sext_ln21_198_fu_43886_p1() {
    sext_ln21_198_fu_43886_p1 = esl_sext<24,9>(conv2_weights_V_3_4_10_reg_48680.read());
}

void cnn::thread_sext_ln21_199_fu_43890_p1() {
    sext_ln21_199_fu_43890_p1 = esl_sext<24,9>(conv2_weights_V_4_4_8_reg_48685.read());
}

void cnn::thread_sext_ln21_19_fu_37963_p1() {
    sext_ln21_19_fu_37963_p1 = esl_sext<24,9>(conv2_weights_V_6_0_1_q0.read());
}

void cnn::thread_sext_ln21_1_fu_37863_p1() {
    sext_ln21_1_fu_37863_p1 = esl_sext<24,9>(conv2_weights_V_2_0_s_q0.read());
}

void cnn::thread_sext_ln21_200_fu_43894_p1() {
    sext_ln21_200_fu_43894_p1 = esl_sext<24,9>(conv2_weights_V_5_4_8_reg_48690.read());
}

void cnn::thread_sext_ln21_201_fu_43898_p1() {
    sext_ln21_201_fu_43898_p1 = esl_sext<24,10>(conv2_weights_V_6_4_10_reg_48695.read());
}

void cnn::thread_sext_ln21_202_fu_43902_p1() {
    sext_ln21_202_fu_43902_p1 = esl_sext<24,9>(conv2_weights_V_7_4_8_reg_48700.read());
}

void cnn::thread_sext_ln21_203_fu_43906_p1() {
    sext_ln21_203_fu_43906_p1 = esl_sext<24,9>(conv2_weights_V_8_4_8_reg_48705.read());
}

void cnn::thread_sext_ln21_204_fu_43910_p1() {
    sext_ln21_204_fu_43910_p1 = esl_sext<24,9>(conv2_weights_V_9_4_8_reg_48710.read());
}

void cnn::thread_sext_ln21_205_fu_45078_p1() {
    sext_ln21_205_fu_45078_p1 = esl_sext<24,9>(conv2_weights_V_0_4_10_reg_48715.read());
}

void cnn::thread_sext_ln21_206_fu_45082_p1() {
    sext_ln21_206_fu_45082_p1 = esl_sext<24,9>(conv2_weights_V_1_4_10_reg_48720.read());
}

void cnn::thread_sext_ln21_207_fu_45086_p1() {
    sext_ln21_207_fu_45086_p1 = esl_sext<24,9>(conv2_weights_V_2_4_10_reg_48725.read());
}

void cnn::thread_sext_ln21_208_fu_45090_p1() {
    sext_ln21_208_fu_45090_p1 = esl_sext<24,9>(conv2_weights_V_4_4_10_reg_48730.read());
}

void cnn::thread_sext_ln21_209_fu_45094_p1() {
    sext_ln21_209_fu_45094_p1 = esl_sext<24,9>(conv2_weights_V_5_4_10_reg_48735.read());
}

void cnn::thread_sext_ln21_20_fu_37968_p1() {
    sext_ln21_20_fu_37968_p1 = esl_sext<24,9>(conv2_weights_V_7_0_1_q0.read());
}

void cnn::thread_sext_ln21_210_fu_45098_p1() {
    sext_ln21_210_fu_45098_p1 = esl_sext<24,9>(conv2_weights_V_7_4_10_reg_48740.read());
}

void cnn::thread_sext_ln21_211_fu_45102_p1() {
    sext_ln21_211_fu_45102_p1 = esl_sext<24,9>(conv2_weights_V_8_4_10_reg_48745.read());
}

void cnn::thread_sext_ln21_212_fu_45106_p1() {
    sext_ln21_212_fu_45106_p1 = esl_sext<24,9>(conv2_weights_V_9_4_10_reg_48750.read());
}

void cnn::thread_sext_ln21_21_fu_37973_p1() {
    sext_ln21_21_fu_37973_p1 = esl_sext<24,9>(conv2_weights_V_8_0_1_q0.read());
}

void cnn::thread_sext_ln21_22_fu_37978_p1() {
    sext_ln21_22_fu_37978_p1 = esl_sext<24,9>(conv2_weights_V_9_0_1_q0.read());
}

void cnn::thread_sext_ln21_23_fu_37983_p1() {
    sext_ln21_23_fu_37983_p1 = esl_sext<24,9>(conv2_weights_V_0_0_2_q0.read());
}

void cnn::thread_sext_ln21_24_fu_37988_p1() {
    sext_ln21_24_fu_37988_p1 = esl_sext<24,9>(conv2_weights_V_1_0_2_q0.read());
}

void cnn::thread_sext_ln21_25_fu_37993_p1() {
    sext_ln21_25_fu_37993_p1 = esl_sext<24,9>(conv2_weights_V_2_0_2_q0.read());
}

void cnn::thread_sext_ln21_26_fu_37998_p1() {
    sext_ln21_26_fu_37998_p1 = esl_sext<24,10>(conv2_weights_V_3_0_2_q0.read());
}

void cnn::thread_sext_ln21_27_fu_38003_p1() {
    sext_ln21_27_fu_38003_p1 = esl_sext<24,10>(conv2_weights_V_4_0_2_q0.read());
}

void cnn::thread_sext_ln21_28_fu_38008_p1() {
    sext_ln21_28_fu_38008_p1 = esl_sext<24,10>(conv2_weights_V_8_0_2_q0.read());
}

void cnn::thread_sext_ln21_29_fu_38013_p1() {
    sext_ln21_29_fu_38013_p1 = esl_sext<24,10>(conv2_weights_V_9_0_2_q0.read());
}

void cnn::thread_sext_ln21_2_fu_37868_p1() {
    sext_ln21_2_fu_37868_p1 = esl_sext<24,10>(conv2_weights_V_3_0_s_q0.read());
}

void cnn::thread_sext_ln21_30_fu_38018_p1() {
    sext_ln21_30_fu_38018_p1 = esl_sext<24,9>(conv2_weights_V_2_0_3_q0.read());
}

void cnn::thread_sext_ln21_31_fu_38023_p1() {
    sext_ln21_31_fu_38023_p1 = esl_sext<24,10>(conv2_weights_V_3_0_3_q0.read());
}

void cnn::thread_sext_ln21_32_fu_38028_p1() {
    sext_ln21_32_fu_38028_p1 = esl_sext<24,10>(conv2_weights_V_4_0_3_q0.read());
}

void cnn::thread_sext_ln21_33_fu_38033_p1() {
    sext_ln21_33_fu_38033_p1 = esl_sext<24,9>(conv2_weights_V_6_0_3_q0.read());
}

void cnn::thread_sext_ln21_34_fu_38038_p1() {
    sext_ln21_34_fu_38038_p1 = esl_sext<24,9>(conv2_weights_V_7_0_3_q0.read());
}

void cnn::thread_sext_ln21_35_fu_38043_p1() {
    sext_ln21_35_fu_38043_p1 = esl_sext<24,9>(conv2_weights_V_8_0_3_q0.read());
}

void cnn::thread_sext_ln21_36_fu_38048_p1() {
    sext_ln21_36_fu_38048_p1 = esl_sext<24,9>(conv2_weights_V_9_0_3_q0.read());
}

void cnn::thread_sext_ln21_37_fu_38620_p1() {
    sext_ln21_37_fu_38620_p1 = esl_sext<24,9>(conv2_weights_V_0_0_10_reg_47875.read());
}

void cnn::thread_sext_ln21_38_fu_38624_p1() {
    sext_ln21_38_fu_38624_p1 = esl_sext<24,9>(conv2_weights_V_1_0_10_reg_47880.read());
}

void cnn::thread_sext_ln21_39_fu_38628_p1() {
    sext_ln21_39_fu_38628_p1 = esl_sext<24,10>(conv2_weights_V_2_0_10_reg_47885.read());
}

void cnn::thread_sext_ln21_3_fu_37873_p1() {
    sext_ln21_3_fu_37873_p1 = esl_sext<24,10>(conv2_weights_V_4_0_s_q0.read());
}

void cnn::thread_sext_ln21_40_fu_38632_p1() {
    sext_ln21_40_fu_38632_p1 = esl_sext<24,10>(conv2_weights_V_3_0_10_reg_47890.read());
}

void cnn::thread_sext_ln21_41_fu_38636_p1() {
    sext_ln21_41_fu_38636_p1 = esl_sext<24,9>(conv2_weights_V_4_0_10_reg_47895.read());
}

void cnn::thread_sext_ln21_42_fu_38640_p1() {
    sext_ln21_42_fu_38640_p1 = esl_sext<24,9>(conv2_weights_V_5_0_10_reg_47900.read());
}

void cnn::thread_sext_ln21_43_fu_38644_p1() {
    sext_ln21_43_fu_38644_p1 = esl_sext<24,10>(conv2_weights_V_6_0_10_reg_47905.read());
}

void cnn::thread_sext_ln21_44_fu_38648_p1() {
    sext_ln21_44_fu_38648_p1 = esl_sext<24,9>(conv2_weights_V_7_0_10_reg_47910.read());
}

void cnn::thread_sext_ln21_45_fu_38652_p1() {
    sext_ln21_45_fu_38652_p1 = esl_sext<24,9>(conv2_weights_V_8_0_10_reg_47915.read());
}

void cnn::thread_sext_ln21_46_fu_38656_p1() {
    sext_ln21_46_fu_38656_p1 = esl_sext<24,10>(conv2_weights_V_9_0_10_reg_47920.read());
}

void cnn::thread_sext_ln21_47_fu_38660_p1() {
    sext_ln21_47_fu_38660_p1 = esl_sext<24,9>(conv2_weights_V_2_1_4_reg_47925.read());
}

void cnn::thread_sext_ln21_48_fu_38664_p1() {
    sext_ln21_48_fu_38664_p1 = esl_sext<24,9>(conv2_weights_V_3_1_4_reg_47930.read());
}

void cnn::thread_sext_ln21_49_fu_38668_p1() {
    sext_ln21_49_fu_38668_p1 = esl_sext<24,9>(conv2_weights_V_4_1_2_reg_47935.read());
}

void cnn::thread_sext_ln21_4_fu_37878_p1() {
    sext_ln21_4_fu_37878_p1 = esl_sext<24,9>(conv2_weights_V_5_0_s_q0.read());
}

void cnn::thread_sext_ln21_50_fu_38672_p1() {
    sext_ln21_50_fu_38672_p1 = esl_sext<24,9>(conv2_weights_V_5_1_8_reg_47940.read());
}

void cnn::thread_sext_ln21_51_fu_38676_p1() {
    sext_ln21_51_fu_38676_p1 = esl_sext<24,10>(conv2_weights_V_6_1_6_reg_47945.read());
}

void cnn::thread_sext_ln21_52_fu_38680_p1() {
    sext_ln21_52_fu_38680_p1 = esl_sext<24,10>(conv2_weights_V_8_1_2_reg_47950.read());
}

void cnn::thread_sext_ln21_53_fu_38684_p1() {
    sext_ln21_53_fu_38684_p1 = esl_sext<24,10>(conv2_weights_V_9_1_2_reg_47955.read());
}

void cnn::thread_sext_ln21_54_fu_38688_p1() {
    sext_ln21_54_fu_38688_p1 = esl_sext<24,9>(conv2_weights_V_4_1_4_reg_47960.read());
}

void cnn::thread_sext_ln21_55_fu_38692_p1() {
    sext_ln21_55_fu_38692_p1 = esl_sext<24,9>(conv2_weights_V_7_1_6_reg_47965.read());
}

void cnn::thread_sext_ln21_56_fu_38696_p1() {
    sext_ln21_56_fu_38696_p1 = esl_sext<24,9>(conv2_weights_V_8_1_4_reg_47970.read());
}

void cnn::thread_sext_ln21_57_fu_38700_p1() {
    sext_ln21_57_fu_38700_p1 = esl_sext<24,9>(conv2_weights_V_9_1_4_reg_47975.read());
}

void cnn::thread_sext_ln21_58_fu_38704_p1() {
    sext_ln21_58_fu_38704_p1 = esl_sext<24,9>(conv2_weights_V_0_1_6_reg_47980.read());
}

void cnn::thread_sext_ln21_59_fu_38708_p1() {
    sext_ln21_59_fu_38708_p1 = esl_sext<24,9>(conv2_weights_V_1_1_6_reg_47985.read());
}

void cnn::thread_sext_ln21_5_fu_37893_p1() {
    sext_ln21_5_fu_37893_p1 = esl_sext<24,10>(conv2_weights_V_8_0_s_q0.read());
}

void cnn::thread_sext_ln21_60_fu_38712_p1() {
    sext_ln21_60_fu_38712_p1 = esl_sext<24,10>(conv2_weights_V_2_1_6_reg_47990.read());
}

void cnn::thread_sext_ln21_61_fu_38716_p1() {
    sext_ln21_61_fu_38716_p1 = esl_sext<24,10>(conv2_weights_V_3_1_6_reg_47995.read());
}

void cnn::thread_sext_ln21_62_fu_38720_p1() {
    sext_ln21_62_fu_38720_p1 = esl_sext<24,10>(conv2_weights_V_4_1_6_reg_48000.read());
}

void cnn::thread_sext_ln21_63_fu_38724_p1() {
    sext_ln21_63_fu_38724_p1 = esl_sext<24,9>(conv2_weights_V_8_1_6_reg_48005.read());
}

void cnn::thread_sext_ln21_64_fu_38728_p1() {
    sext_ln21_64_fu_38728_p1 = esl_sext<24,9>(conv2_weights_V_9_1_6_reg_48010.read());
}

void cnn::thread_sext_ln21_65_fu_39912_p1() {
    sext_ln21_65_fu_39912_p1 = esl_sext<24,9>(conv2_weights_V_0_1_8_reg_48015.read());
}

void cnn::thread_sext_ln21_66_fu_39916_p1() {
    sext_ln21_66_fu_39916_p1 = esl_sext<24,9>(conv2_weights_V_1_1_8_reg_48020.read());
}

void cnn::thread_sext_ln21_67_fu_39920_p1() {
    sext_ln21_67_fu_39920_p1 = esl_sext<24,10>(conv2_weights_V_2_1_8_reg_48025.read());
}

void cnn::thread_sext_ln21_68_fu_39924_p1() {
    sext_ln21_68_fu_39924_p1 = esl_sext<24,10>(conv2_weights_V_3_1_8_reg_48030.read());
}

void cnn::thread_sext_ln21_69_fu_39928_p1() {
    sext_ln21_69_fu_39928_p1 = esl_sext<24,10>(conv2_weights_V_4_1_8_reg_48035.read());
}

void cnn::thread_sext_ln21_6_fu_37898_p1() {
    sext_ln21_6_fu_37898_p1 = esl_sext<24,9>(conv2_weights_V_9_0_s_q0.read());
}

void cnn::thread_sext_ln21_70_fu_39932_p1() {
    sext_ln21_70_fu_39932_p1 = esl_sext<24,9>(conv2_weights_V_5_1_10_reg_48040.read());
}

void cnn::thread_sext_ln21_71_fu_39936_p1() {
    sext_ln21_71_fu_39936_p1 = esl_sext<24,9>(conv2_weights_V_6_1_8_reg_48045.read());
}

void cnn::thread_sext_ln21_72_fu_39940_p1() {
    sext_ln21_72_fu_39940_p1 = esl_sext<24,9>(conv2_weights_V_7_1_8_reg_48050.read());
}

void cnn::thread_sext_ln21_73_fu_39944_p1() {
    sext_ln21_73_fu_39944_p1 = esl_sext<24,9>(conv2_weights_V_8_1_8_reg_48055.read());
}

void cnn::thread_sext_ln21_74_fu_39948_p1() {
    sext_ln21_74_fu_39948_p1 = esl_sext<24,9>(conv2_weights_V_9_1_8_reg_48060.read());
}

void cnn::thread_sext_ln21_75_fu_39952_p1() {
    sext_ln21_75_fu_39952_p1 = esl_sext<24,9>(conv2_weights_V_0_1_10_reg_48065.read());
}

void cnn::thread_sext_ln21_76_fu_39956_p1() {
    sext_ln21_76_fu_39956_p1 = esl_sext<24,9>(conv2_weights_V_1_1_10_reg_48070.read());
}

void cnn::thread_sext_ln21_77_fu_39960_p1() {
    sext_ln21_77_fu_39960_p1 = esl_sext<24,10>(conv2_weights_V_2_1_10_reg_48075.read());
}

void cnn::thread_sext_ln21_78_fu_39964_p1() {
    sext_ln21_78_fu_39964_p1 = esl_sext<24,10>(conv2_weights_V_3_1_10_reg_48080.read());
}

void cnn::thread_sext_ln21_79_fu_39968_p1() {
    sext_ln21_79_fu_39968_p1 = esl_sext<24,9>(conv2_weights_V_4_1_10_reg_48085.read());
}

void cnn::thread_sext_ln21_7_fu_37903_p1() {
    sext_ln21_7_fu_37903_p1 = esl_sext<24,11>(conv2_weights_V_1_0_1_q0.read());
}

void cnn::thread_sext_ln21_80_fu_39972_p1() {
    sext_ln21_80_fu_39972_p1 = esl_sext<24,10>(conv2_weights_V_6_1_10_reg_48090.read());
}

void cnn::thread_sext_ln21_81_fu_39976_p1() {
    sext_ln21_81_fu_39976_p1 = esl_sext<24,9>(conv2_weights_V_7_1_10_reg_48095.read());
}

void cnn::thread_sext_ln21_82_fu_39980_p1() {
    sext_ln21_82_fu_39980_p1 = esl_sext<24,9>(conv2_weights_V_8_1_10_reg_48100.read());
}

void cnn::thread_sext_ln21_83_fu_39984_p1() {
    sext_ln21_83_fu_39984_p1 = esl_sext<24,9>(conv2_weights_V_9_1_10_reg_48105.read());
}

void cnn::thread_sext_ln21_84_fu_39988_p1() {
    sext_ln21_84_fu_39988_p1 = esl_sext<24,9>(conv2_weights_V_0_2_2_reg_48110.read());
}

void cnn::thread_sext_ln21_85_fu_39992_p1() {
    sext_ln21_85_fu_39992_p1 = esl_sext<24,9>(conv2_weights_V_1_2_4_reg_48115.read());
}

void cnn::thread_sext_ln21_86_fu_39996_p1() {
    sext_ln21_86_fu_39996_p1 = esl_sext<24,9>(conv2_weights_V_2_2_2_reg_48120.read());
}

void cnn::thread_sext_ln21_87_fu_40000_p1() {
    sext_ln21_87_fu_40000_p1 = esl_sext<24,9>(conv2_weights_V_3_2_2_reg_48125.read());
}

void cnn::thread_sext_ln21_88_fu_40004_p1() {
    sext_ln21_88_fu_40004_p1 = esl_sext<24,9>(conv2_weights_V_4_2_2_reg_48130.read());
}

void cnn::thread_sext_ln21_89_fu_40008_p1() {
    sext_ln21_89_fu_40008_p1 = esl_sext<24,9>(conv2_weights_V_5_2_2_reg_48135.read());
}

void cnn::thread_sext_ln21_8_fu_37908_p1() {
    sext_ln21_8_fu_37908_p1 = esl_sext<24,10>(conv2_weights_V_4_0_1_q0.read());
}

void cnn::thread_sext_ln21_90_fu_40012_p1() {
    sext_ln21_90_fu_40012_p1 = esl_sext<24,9>(conv2_weights_V_6_2_2_reg_48140.read());
}

void cnn::thread_sext_ln21_91_fu_40016_p1() {
    sext_ln21_91_fu_40016_p1 = esl_sext<24,9>(conv2_weights_V_7_2_8_reg_48145.read());
}

void cnn::thread_sext_ln21_92_fu_40020_p1() {
    sext_ln21_92_fu_40020_p1 = esl_sext<24,9>(conv2_weights_V_8_2_2_reg_48150.read());
}

void cnn::thread_sext_ln21_93_fu_40024_p1() {
    sext_ln21_93_fu_40024_p1 = esl_sext<24,9>(conv2_weights_V_0_2_4_reg_48155.read());
}

void cnn::thread_sext_ln21_94_fu_40028_p1() {
    sext_ln21_94_fu_40028_p1 = esl_sext<24,10>(conv2_weights_V_2_2_4_reg_48160.read());
}

void cnn::thread_sext_ln21_95_fu_40032_p1() {
    sext_ln21_95_fu_40032_p1 = esl_sext<24,10>(conv2_weights_V_3_2_4_reg_48165.read());
}

void cnn::thread_sext_ln21_96_fu_40036_p1() {
    sext_ln21_96_fu_40036_p1 = esl_sext<24,9>(conv2_weights_V_4_2_4_reg_48170.read());
}

void cnn::thread_sext_ln21_97_fu_40040_p1() {
    sext_ln21_97_fu_40040_p1 = esl_sext<24,9>(conv2_weights_V_5_2_4_reg_48175.read());
}

void cnn::thread_sext_ln21_98_fu_40044_p1() {
    sext_ln21_98_fu_40044_p1 = esl_sext<24,9>(conv2_weights_V_6_2_4_reg_48180.read());
}

void cnn::thread_sext_ln21_99_fu_40048_p1() {
    sext_ln21_99_fu_40048_p1 = esl_sext<24,10>(conv2_weights_V_8_2_4_reg_48185.read());
}

void cnn::thread_sext_ln21_9_fu_38596_p1() {
    sext_ln21_9_fu_38596_p1 = esl_sext<24,10>(conv2_weights_V_3_1_2_reg_47735.read());
}

void cnn::thread_sext_ln21_fu_37853_p1() {
    sext_ln21_fu_37853_p1 = esl_sext<24,9>(conv2_weights_V_0_0_s_q0.read());
}

void cnn::thread_sext_ln63_fu_37703_p1() {
    sext_ln63_fu_37703_p1 = esl_sext<8,7>(tmp_190_fu_37695_p3.read());
}

void cnn::thread_sext_ln708_fu_30794_p0() {
    sext_ln708_fu_30794_p0 = buf_V_23.read();
}

void cnn::thread_sext_ln708_fu_30794_p1() {
    sext_ln708_fu_30794_p1 = esl_sext<24,15>(sext_ln708_fu_30794_p0.read());
}

void cnn::thread_sext_ln728_10_fu_40739_p0() {
    sext_ln728_10_fu_40739_p0 = buf_V_1_23.read();
}

void cnn::thread_sext_ln728_10_fu_40739_p1() {
    sext_ln728_10_fu_40739_p1 = esl_sext<23,15>(sext_ln728_10_fu_40739_p0.read());
}

void cnn::thread_sext_ln728_11_fu_41771_p0() {
    sext_ln728_11_fu_41771_p0 = buf_V_1_33.read();
}

void cnn::thread_sext_ln728_11_fu_41771_p1() {
    sext_ln728_11_fu_41771_p1 = esl_sext<23,15>(sext_ln728_11_fu_41771_p0.read());
}

void cnn::thread_sext_ln728_12_fu_42307_p0() {
    sext_ln728_12_fu_42307_p0 = buf_V_1_35.read();
}

void cnn::thread_sext_ln728_12_fu_42307_p1() {
    sext_ln728_12_fu_42307_p1 = esl_sext<23,15>(sext_ln728_12_fu_42307_p0.read());
}

void cnn::thread_sext_ln728_13_fu_42505_p0() {
    sext_ln728_13_fu_42505_p0 = buf_V_1_43.read();
}

void cnn::thread_sext_ln728_13_fu_42505_p1() {
    sext_ln728_13_fu_42505_p1 = esl_sext<23,15>(sext_ln728_13_fu_42505_p0.read());
}

void cnn::thread_sext_ln728_14_fu_44371_p0() {
    sext_ln728_14_fu_44371_p0 = buf_V_1_55.read();
}

void cnn::thread_sext_ln728_14_fu_44371_p1() {
    sext_ln728_14_fu_44371_p1 = esl_sext<23,15>(sext_ln728_14_fu_44371_p0.read());
}

void cnn::thread_sext_ln728_15_fu_44643_p0() {
    sext_ln728_15_fu_44643_p0 = buf_V_1_56.read();
}

void cnn::thread_sext_ln728_15_fu_44643_p1() {
    sext_ln728_15_fu_44643_p1 = esl_sext<23,15>(sext_ln728_15_fu_44643_p0.read());
}

void cnn::thread_sext_ln728_16_fu_45504_p1() {
    sext_ln728_16_fu_45504_p1 = esl_sext<23,15>(in_val_V_1_reg_48865.read());
}

void cnn::thread_sext_ln728_1_fu_31092_p1() {
    sext_ln728_1_fu_31092_p1 = esl_sext<24,23>(tmp_35_fu_31084_p3.read());
}

void cnn::thread_sext_ln728_2_fu_31175_p1() {
    sext_ln728_2_fu_31175_p1 = esl_sext<24,21>(tmp_39_fu_31167_p3.read());
}

void cnn::thread_sext_ln728_3_fu_31203_p1() {
    sext_ln728_3_fu_31203_p1 = esl_sext<24,22>(tmp_175_fu_31195_p3.read());
}

void cnn::thread_sext_ln728_4_fu_31231_p1() {
    sext_ln728_4_fu_31231_p1 = esl_sext<24,20>(tmp_179_fu_31223_p3.read());
}

void cnn::thread_sext_ln728_5_fu_38200_p1() {
    sext_ln728_5_fu_38200_p1 = esl_sext<24,23>(tmp_424_fu_38192_p3.read());
}

void cnn::thread_sext_ln728_6_fu_38324_p1() {
    sext_ln728_6_fu_38324_p1 = esl_sext<24,23>(tmp_426_fu_38316_p3.read());
}

void cnn::thread_sext_ln728_7_fu_38352_p1() {
    sext_ln728_7_fu_38352_p1 = esl_sext<24,23>(tmp_428_fu_38344_p3.read());
}

void cnn::thread_sext_ln728_8_fu_38431_p0() {
    sext_ln728_8_fu_38431_p0 = buf_V_1_9.read();
}

void cnn::thread_sext_ln728_8_fu_38431_p1() {
    sext_ln728_8_fu_38431_p1 = esl_sext<23,15>(sext_ln728_8_fu_38431_p0.read());
}

void cnn::thread_sext_ln728_9_fu_39883_p0() {
    sext_ln728_9_fu_39883_p0 = buf_V_1_21.read();
}

void cnn::thread_sext_ln728_9_fu_39883_p1() {
    sext_ln728_9_fu_39883_p1 = esl_sext<23,15>(sext_ln728_9_fu_39883_p0.read());
}

void cnn::thread_sext_ln728_fu_30962_p1() {
    sext_ln728_fu_30962_p1 = esl_sext<24,22>(tmp_29_fu_30954_p3.read());
}

void cnn::thread_shl_ln1118_10_fu_32392_p3() {
    shl_ln1118_10_fu_32392_p3 = esl_concat<15,7>(buf_V_52_load_reg_45987.read(), ap_const_lv7_0);
}

void cnn::thread_shl_ln1118_11_fu_32403_p3() {
    shl_ln1118_11_fu_32403_p3 = esl_concat<15,4>(buf_V_52_load_reg_45987.read(), ap_const_lv4_0);
}

void cnn::thread_shl_ln1118_12_fu_33136_p3() {
    shl_ln1118_12_fu_33136_p3 = esl_concat<15,6>(buf_V_54_load_reg_45993.read(), ap_const_lv6_0);
}

void cnn::thread_shl_ln1118_13_fu_33147_p3() {
    shl_ln1118_13_fu_33147_p3 = esl_concat<15,4>(buf_V_54_load_reg_45993.read(), ap_const_lv4_0);
}

void cnn::thread_shl_ln1118_14_fu_33216_p3() {
    shl_ln1118_14_fu_33216_p3 = esl_concat<15,7>(buf_V_55_load_reg_46034.read(), ap_const_lv7_0);
}

void cnn::thread_shl_ln1118_15_fu_33227_p3() {
    shl_ln1118_15_fu_33227_p3 = esl_concat<15,4>(buf_V_55_load_reg_46034.read(), ap_const_lv4_0);
}

void cnn::thread_shl_ln1118_16_fu_33272_p3() {
    shl_ln1118_16_fu_33272_p3 = esl_concat<15,8>(buf_V_55_load_reg_46034.read(), ap_const_lv8_0);
}

void cnn::thread_shl_ln1118_17_fu_33283_p3() {
    shl_ln1118_17_fu_33283_p3 = esl_concat<15,5>(buf_V_55_load_reg_46034.read(), ap_const_lv5_0);
}

void cnn::thread_shl_ln1118_18_fu_33783_p3() {
    shl_ln1118_18_fu_33783_p3 = esl_concat<15,5>(buf_V_80_load_reg_46042.read(), ap_const_lv5_0);
}

void cnn::thread_shl_ln1118_19_fu_33800_p3() {
    shl_ln1118_19_fu_33800_p3 = esl_concat<15,1>(buf_V_80_load_reg_46042.read(), ap_const_lv1_0);
}

void cnn::thread_shl_ln1118_1_fu_30820_p1() {
    shl_ln1118_1_fu_30820_p1 = buf_V_23.read();
}

void cnn::thread_shl_ln1118_1_fu_30820_p3() {
    shl_ln1118_1_fu_30820_p3 = esl_concat<15,2>(shl_ln1118_1_fu_30820_p1.read(), ap_const_lv2_0);
}

void cnn::thread_shl_ln1118_20_fu_33934_p3() {
    shl_ln1118_20_fu_33934_p3 = esl_concat<15,8>(buf_V_81_load_reg_46048.read(), ap_const_lv8_0);
}

void cnn::thread_shl_ln1118_21_fu_33945_p3() {
    shl_ln1118_21_fu_33945_p3 = esl_concat<15,3>(buf_V_81_load_reg_46048.read(), ap_const_lv3_0);
}

void cnn::thread_shl_ln1118_22_fu_34102_p3() {
    shl_ln1118_22_fu_34102_p3 = esl_concat<15,4>(buf_V_82_load_reg_46054.read(), ap_const_lv4_0);
}

void cnn::thread_shl_ln1118_23_fu_34187_p3() {
    shl_ln1118_23_fu_34187_p3 = esl_concat<15,4>(buf_V_83_load_reg_46065.read(), ap_const_lv4_0);
}

void cnn::thread_shl_ln1118_24_fu_34610_p3() {
    shl_ln1118_24_fu_34610_p3 = esl_concat<15,5>(buf_V_107_load_reg_46075.read(), ap_const_lv5_0);
}

void cnn::thread_shl_ln1118_25_fu_34621_p3() {
    shl_ln1118_25_fu_34621_p3 = esl_concat<15,1>(buf_V_107_load_reg_46075.read(), ap_const_lv1_0);
}

void cnn::thread_shl_ln1118_26_fu_34893_p3() {
    shl_ln1118_26_fu_34893_p3 = esl_concat<15,2>(buf_V_109_load_reg_46140.read(), ap_const_lv2_0);
}

void cnn::thread_shl_ln1118_27_fu_34938_p3() {
    shl_ln1118_27_fu_34938_p3 = esl_concat<15,5>(buf_V_109_load_reg_46140.read(), ap_const_lv5_0);
}

void cnn::thread_shl_ln1118_28_fu_35045_p3() {
    shl_ln1118_28_fu_35045_p3 = esl_concat<15,7>(buf_V_110_load_reg_46148.read(), ap_const_lv7_0);
}

void cnn::thread_shl_ln1118_29_fu_35056_p3() {
    shl_ln1118_29_fu_35056_p3 = esl_concat<15,2>(buf_V_110_load_reg_46148.read(), ap_const_lv2_0);
}

void cnn::thread_shl_ln1118_2_fu_30862_p1() {
    shl_ln1118_2_fu_30862_p1 = buf_V_23.read();
}

void cnn::thread_shl_ln1118_2_fu_30862_p3() {
    shl_ln1118_2_fu_30862_p3 = esl_concat<15,4>(shl_ln1118_2_fu_30862_p1.read(), ap_const_lv4_0);
}

void cnn::thread_shl_ln1118_30_fu_35133_p3() {
    shl_ln1118_30_fu_35133_p3 = esl_concat<15,5>(buf_V_110_load_reg_46148.read(), ap_const_lv5_0);
}

void cnn::thread_shl_ln1118_31_fu_35247_p3() {
    shl_ln1118_31_fu_35247_p3 = esl_concat<15,4>(buf_V_111_load_reg_46156.read(), ap_const_lv4_0);
}

void cnn::thread_shl_ln1118_32_fu_35274_p3() {
    shl_ln1118_32_fu_35274_p3 = esl_concat<15,1>(buf_V_111_load_reg_46156.read(), ap_const_lv1_0);
}

void cnn::thread_shl_ln1118_33_fu_35768_p3() {
    shl_ln1118_33_fu_35768_p3 = esl_concat<15,3>(buf_V_135_load_reg_46168.read(), ap_const_lv3_0);
}

void cnn::thread_shl_ln1118_34_fu_35779_p3() {
    shl_ln1118_34_fu_35779_p3 = esl_concat<15,1>(buf_V_135_load_reg_46168.read(), ap_const_lv1_0);
}

void cnn::thread_shl_ln1118_35_fu_35889_p3() {
    shl_ln1118_35_fu_35889_p3 = esl_concat<15,7>(buf_V_135_load_reg_46168.read(), ap_const_lv7_0);
}

void cnn::thread_shl_ln1118_36_fu_36040_p1() {
    shl_ln1118_36_fu_36040_p1 = buf_V_136.read();
}

void cnn::thread_shl_ln1118_36_fu_36040_p3() {
    shl_ln1118_36_fu_36040_p3 = esl_concat<15,6>(shl_ln1118_36_fu_36040_p1.read(), ap_const_lv6_0);
}

void cnn::thread_shl_ln1118_37_fu_36052_p1() {
    shl_ln1118_37_fu_36052_p1 = buf_V_136.read();
}

void cnn::thread_shl_ln1118_37_fu_36052_p3() {
    shl_ln1118_37_fu_36052_p3 = esl_concat<15,1>(shl_ln1118_37_fu_36052_p1.read(), ap_const_lv1_0);
}

void cnn::thread_shl_ln1118_38_fu_36102_p1() {
    shl_ln1118_38_fu_36102_p1 = buf_V_136.read();
}

void cnn::thread_shl_ln1118_38_fu_36102_p3() {
    shl_ln1118_38_fu_36102_p3 = esl_concat<15,7>(shl_ln1118_38_fu_36102_p1.read(), ap_const_lv7_0);
}

void cnn::thread_shl_ln1118_39_fu_36628_p3() {
    shl_ln1118_39_fu_36628_p3 = esl_concat<15,7>(buf_V_137_load_reg_46271.read(), ap_const_lv7_0);
}

void cnn::thread_shl_ln1118_3_fu_30890_p1() {
    shl_ln1118_3_fu_30890_p1 = buf_V_23.read();
}

void cnn::thread_shl_ln1118_3_fu_30890_p3() {
    shl_ln1118_3_fu_30890_p3 = esl_concat<15,3>(shl_ln1118_3_fu_30890_p1.read(), ap_const_lv3_0);
}

void cnn::thread_shl_ln1118_40_fu_36322_p1() {
    shl_ln1118_40_fu_36322_p1 = buf_V_138.read();
}

}

