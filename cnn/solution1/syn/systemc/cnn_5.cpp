#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_grp_fu_6762_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6762_p1 = conv2_weights_7_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6762_p1 = ap_const_lv32_BE53BF13;
    } else {
        grp_fu_6762_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6768_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6768_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6768_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6768_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6768_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6768_p1 = conv2_weights_8_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6768_p1 = ap_const_lv32_BE99528E;
    } else {
        grp_fu_6768_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6774_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6774_p0 = linebuf_8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6774_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6774_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6774_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6774_p1 = conv2_weights_9_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6774_p1 = ap_const_lv32_3F242DD0;
    } else {
        grp_fu_6774_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6780_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6780_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6780_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6780_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6780_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6780_p1 = conv2_weights_0_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6780_p1 = ap_const_lv32_BEABBD7A;
    } else {
        grp_fu_6780_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6786_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6786_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6786_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6786_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6786_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6786_p1 = conv2_weights_1_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6786_p1 = ap_const_lv32_BDB3E314;
    } else {
        grp_fu_6786_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6792_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6792_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6792_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6792_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6792_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6792_p1 = conv2_weights_2_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6792_p1 = ap_const_lv32_BD1CC0F4;
    } else {
        grp_fu_6792_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6798_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6798_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6798_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6798_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6798_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6798_p1 = conv2_weights_3_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6798_p1 = ap_const_lv32_BDA40439;
    } else {
        grp_fu_6798_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6804_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6804_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6804_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6804_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6804_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6804_p1 = conv2_weights_4_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6804_p1 = ap_const_lv32_BEBBFE92;
    } else {
        grp_fu_6804_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6810_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6810_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6810_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6810_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6810_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6810_p1 = conv2_weights_5_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6810_p1 = ap_const_lv32_3F1798CD;
    } else {
        grp_fu_6810_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6816_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6816_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6816_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6816_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6816_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6816_p1 = conv2_weights_6_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6816_p1 = ap_const_lv32_3D6E99DC;
    } else {
        grp_fu_6816_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6822_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6822_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6822_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6822_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6822_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6822_p1 = conv2_weights_7_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6822_p1 = ap_const_lv32_3C89401C;
    } else {
        grp_fu_6822_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6828_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6828_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6828_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6828_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6828_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6828_p1 = conv2_weights_8_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6828_p1 = ap_const_lv32_3EF7E122;
    } else {
        grp_fu_6828_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6834_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6834_p0 = ap_sig_allocacmp_linebuf_9_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6834_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6834_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6834_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6834_p1 = conv2_weights_9_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6834_p1 = ap_const_lv32_BE34C00F;
    } else {
        grp_fu_6834_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6840_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6840_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6840_p0 = linebuf_1_51.read();
    } else {
        grp_fu_6840_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6840_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6840_p1 = conv2_weights_0_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6840_p1 = ap_const_lv32_BE0F8A29;
    } else {
        grp_fu_6840_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6846_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6846_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6846_p0 = linebuf_1_51.read();
    } else {
        grp_fu_6846_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6846_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6846_p1 = conv2_weights_1_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6846_p1 = ap_const_lv32_3D9B62F4;
    } else {
        grp_fu_6846_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6852_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6852_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6852_p0 = linebuf_1_51.read();
    } else {
        grp_fu_6852_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6852_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6852_p1 = conv2_weights_2_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6852_p1 = ap_const_lv32_BC1C0B42;
    } else {
        grp_fu_6852_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6858_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6858_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6858_p0 = linebuf_1_51.read();
    } else {
        grp_fu_6858_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6858_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6858_p1 = conv2_weights_3_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6858_p1 = ap_const_lv32_BDD451DD;
    } else {
        grp_fu_6858_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6864_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6864_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6864_p0 = linebuf_1_51.read();
    } else {
        grp_fu_6864_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6864_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6864_p1 = conv2_weights_4_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6864_p1 = ap_const_lv32_BF218181;
    } else {
        grp_fu_6864_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6870_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6870_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6870_p0 = linebuf_1_51.read();
    } else {
        grp_fu_6870_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6870_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6870_p1 = conv2_weights_5_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6870_p1 = ap_const_lv32_3E11B949;
    } else {
        grp_fu_6870_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6876_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6876_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6876_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6876_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6876_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6876_p1 = conv2_weights_6_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6876_p1 = ap_const_lv32_3EC3A70B;
    } else {
        grp_fu_6876_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6882_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6882_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6882_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6882_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6882_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6882_p1 = conv2_weights_7_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6882_p1 = ap_const_lv32_BE2D333E;
    } else {
        grp_fu_6882_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6888_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6888_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6888_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6888_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6888_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6888_p1 = conv2_weights_8_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6888_p1 = ap_const_lv32_BE043F30;
    } else {
        grp_fu_6888_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6894_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6894_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6894_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6894_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6894_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6894_p1 = conv2_weights_9_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6894_p1 = ap_const_lv32_BE4BC9B0;
    } else {
        grp_fu_6894_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6900_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6900_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6900_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6900_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6900_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6900_p1 = conv2_weights_0_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6900_p1 = ap_const_lv32_BDD1AB5C;
    } else {
        grp_fu_6900_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6906_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6906_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6906_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6906_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6906_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6906_p1 = conv2_weights_1_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6906_p1 = ap_const_lv32_3E905FE9;
    } else {
        grp_fu_6906_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6912_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6912_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6912_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6912_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6912_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6912_p1 = conv2_weights_2_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6912_p1 = ap_const_lv32_3F5B8F41;
    } else {
        grp_fu_6912_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6918_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6918_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6918_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6918_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6918_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6918_p1 = conv2_weights_3_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6918_p1 = ap_const_lv32_BF59808E;
    } else {
        grp_fu_6918_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6924_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6924_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6924_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6924_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6924_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6924_p1 = conv2_weights_4_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6924_p1 = ap_const_lv32_BE7191D7;
    } else {
        grp_fu_6924_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6930_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6930_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6930_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6930_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6930_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6930_p1 = conv2_weights_5_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6930_p1 = ap_const_lv32_BDB5937C;
    } else {
        grp_fu_6930_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6936_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6936_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6936_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6936_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6936_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6936_p1 = conv2_weights_6_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6936_p1 = ap_const_lv32_BEC48A0A;
    } else {
        grp_fu_6936_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6942_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6942_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6942_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6942_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6942_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6942_p1 = conv2_weights_7_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6942_p1 = ap_const_lv32_BDF08FEB;
    } else {
        grp_fu_6942_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6948_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6948_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6948_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6948_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6948_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6948_p1 = conv2_weights_8_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6948_p1 = ap_const_lv32_3E9EA395;
    } else {
        grp_fu_6948_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6954_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6954_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6954_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6954_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6954_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6954_p1 = conv2_weights_9_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6954_p1 = ap_const_lv32_BF14489E;
    } else {
        grp_fu_6954_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6960_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6960_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6960_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6960_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6960_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6960_p1 = conv2_weights_0_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6960_p1 = ap_const_lv32_3E9CA8A9;
    } else {
        grp_fu_6960_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6966_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6966_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6966_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6966_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6966_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6966_p1 = conv2_weights_1_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6966_p1 = ap_const_lv32_BD8B468A;
    } else {
        grp_fu_6966_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6972_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6972_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6972_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6972_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6972_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6972_p1 = conv2_weights_2_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6972_p1 = ap_const_lv32_3E2188E5;
    } else {
        grp_fu_6972_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6978_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6978_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6978_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6978_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6978_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6978_p1 = conv2_weights_3_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6978_p1 = ap_const_lv32_BE8E46C9;
    } else {
        grp_fu_6978_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6984_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6984_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6984_p0 = linebuf_1_55.read();
    } else {
        grp_fu_6984_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6984_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6984_p1 = conv2_weights_4_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6984_p1 = ap_const_lv32_BE5ECBE5;
    } else {
        grp_fu_6984_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6990_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6990_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6990_p0 = linebuf_1_55.read();
    } else {
        grp_fu_6990_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6990_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6990_p1 = conv2_weights_5_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6990_p1 = ap_const_lv32_BEDF0984;
    } else {
        grp_fu_6990_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6996_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6996_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6996_p0 = linebuf_1_55.read();
    } else {
        grp_fu_6996_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6996_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6996_p1 = conv2_weights_6_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6996_p1 = ap_const_lv32_3E0757FB;
    } else {
        grp_fu_6996_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7002_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7002_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7002_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7002_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7002_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7002_p1 = conv2_weights_7_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7002_p1 = ap_const_lv32_3EC24B21;
    } else {
        grp_fu_7002_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7008_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7008_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7008_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7008_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7008_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7008_p1 = conv2_weights_8_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7008_p1 = ap_const_lv32_3EE6D373;
    } else {
        grp_fu_7008_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7014_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7014_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7014_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7014_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7014_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7014_p1 = conv2_weights_9_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7014_p1 = ap_const_lv32_BF0AA47A;
    } else {
        grp_fu_7014_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7020_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7020_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7020_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7020_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7020_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7020_p1 = conv2_weights_0_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7020_p1 = ap_const_lv32_BF260703;
    } else {
        grp_fu_7020_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7026_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7026_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7026_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7026_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7026_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7026_p1 = conv2_weights_1_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7026_p1 = ap_const_lv32_BE0A9905;
    } else {
        grp_fu_7026_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7032_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7032_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7032_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7032_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7032_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7032_p1 = conv2_weights_2_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7032_p1 = ap_const_lv32_BDB13131;
    } else {
        grp_fu_7032_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7038_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7038_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7038_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7038_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7038_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7038_p1 = conv2_weights_3_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7038_p1 = ap_const_lv32_3D9AA61C;
    } else {
        grp_fu_7038_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7044_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7044_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7044_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7044_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7044_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7044_p1 = conv2_weights_4_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7044_p1 = ap_const_lv32_BED93A90;
    } else {
        grp_fu_7044_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7050_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7050_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7050_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7050_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7050_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7050_p1 = conv2_weights_5_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7050_p1 = ap_const_lv32_3D9D1198;
    } else {
        grp_fu_7050_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7056_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7056_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7056_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7056_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7056_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7056_p1 = conv2_weights_6_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7056_p1 = ap_const_lv32_BE9A48E4;
    } else {
        grp_fu_7056_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7062_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7062_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7062_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7062_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7062_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7062_p1 = conv2_weights_7_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7062_p1 = ap_const_lv32_3D5ABC6F;
    } else {
        grp_fu_7062_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7068_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7068_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7068_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7068_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7068_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7068_p1 = conv2_weights_8_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7068_p1 = ap_const_lv32_BEB177E9;
    } else {
        grp_fu_7068_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7074_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7074_p0 = linebuf_20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7074_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7074_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7074_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7074_p1 = conv2_weights_9_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7074_p1 = ap_const_lv32_3F124F04;
    } else {
        grp_fu_7074_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7080_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7080_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7080_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7080_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7080_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7080_p1 = conv2_weights_0_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7080_p1 = ap_const_lv32_BD85C807;
    } else {
        grp_fu_7080_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7086_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7086_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7086_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7086_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7086_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7086_p1 = conv2_weights_1_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7086_p1 = ap_const_lv32_3EF6AFD9;
    } else {
        grp_fu_7086_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7092_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7092_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7092_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7092_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7092_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7092_p1 = conv2_weights_2_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7092_p1 = ap_const_lv32_3EDA82B2;
    } else {
        grp_fu_7092_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7098_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7098_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7098_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7098_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7098_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7098_p1 = conv2_weights_3_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7098_p1 = ap_const_lv32_BE889EE8;
    } else {
        grp_fu_7098_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7104_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7104_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7104_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7104_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7104_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7104_p1 = conv2_weights_4_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7104_p1 = ap_const_lv32_3E3E52AF;
    } else {
        grp_fu_7104_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7110_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7110_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7110_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7110_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7110_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7110_p1 = conv2_weights_5_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7110_p1 = ap_const_lv32_3EF828EA;
    } else {
        grp_fu_7110_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7116_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7116_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7116_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7116_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7116_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7116_p1 = conv2_weights_6_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7116_p1 = ap_const_lv32_BE9E03D5;
    } else {
        grp_fu_7116_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7122_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7122_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7122_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7122_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7122_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7122_p1 = conv2_weights_7_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7122_p1 = ap_const_lv32_3E2798C2;
    } else {
        grp_fu_7122_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7128_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7128_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7128_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7128_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7128_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7128_p1 = conv2_weights_8_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7128_p1 = ap_const_lv32_3F08FF0B;
    } else {
        grp_fu_7128_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7134_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7134_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7134_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7134_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7134_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7134_p1 = conv2_weights_9_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7134_p1 = ap_const_lv32_BF188EBF;
    } else {
        grp_fu_7134_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7140_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7140_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7140_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7140_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7140_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7140_p1 = conv2_weights_0_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7140_p1 = ap_const_lv32_3ED58C24;
    } else {
        grp_fu_7140_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7146_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7146_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7146_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7146_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7146_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7146_p1 = conv2_weights_1_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7146_p1 = ap_const_lv32_BD05164A;
    } else {
        grp_fu_7146_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7152_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7152_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7152_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7152_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7152_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7152_p1 = conv2_weights_2_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7152_p1 = ap_const_lv32_3EE55A8F;
    } else {
        grp_fu_7152_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7158_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7158_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7158_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7158_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7158_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7158_p1 = conv2_weights_3_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7158_p1 = ap_const_lv32_BEDC13B5;
    } else {
        grp_fu_7158_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7164_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7164_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7164_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7164_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7164_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7164_p1 = conv2_weights_4_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7164_p1 = ap_const_lv32_3D0449B6;
    } else {
        grp_fu_7164_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7170_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7170_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7170_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7170_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7170_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7170_p1 = conv2_weights_5_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7170_p1 = ap_const_lv32_BF117DC5;
    } else {
        grp_fu_7170_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7176_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7176_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7176_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7176_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7176_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7176_p1 = conv2_weights_6_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7176_p1 = ap_const_lv32_3DEEB3F8;
    } else {
        grp_fu_7176_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7182_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7182_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7182_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7182_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7182_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7182_p1 = conv2_weights_7_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7182_p1 = ap_const_lv32_3E31070C;
    } else {
        grp_fu_7182_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7188_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7188_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7188_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7188_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7188_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7188_p1 = conv2_weights_8_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7188_p1 = ap_const_lv32_3F02A424;
    } else {
        grp_fu_7188_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7194_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7194_p0 = ap_sig_allocacmp_linebuf_22_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7194_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7194_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7194_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7194_p1 = conv2_weights_9_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7194_p1 = ap_const_lv32_BF430F3C;
    } else {
        grp_fu_7194_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7200_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7200_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7200_p0 = ap_sig_allocacmp_linebuf_1_107_load.read();
    } else {
        grp_fu_7200_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7200_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7200_p1 = conv2_weights_0_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7200_p1 = ap_const_lv32_BF467380;
    } else {
        grp_fu_7200_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7206_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7206_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7206_p0 = ap_sig_allocacmp_linebuf_1_107_load.read();
    } else {
        grp_fu_7206_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7206_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7206_p1 = conv2_weights_1_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7206_p1 = ap_const_lv32_BDCD7036;
    } else {
        grp_fu_7206_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7212_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7212_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7212_p0 = ap_sig_allocacmp_linebuf_1_107_load.read();
    } else {
        grp_fu_7212_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7212_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7212_p1 = conv2_weights_2_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7212_p1 = ap_const_lv32_3E308EAD;
    } else {
        grp_fu_7212_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7218_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7218_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7218_p0 = ap_sig_allocacmp_linebuf_1_107_load.read();
    } else {
        grp_fu_7218_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7218_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7218_p1 = conv2_weights_3_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7218_p1 = ap_const_lv32_3EF504AC;
    } else {
        grp_fu_7218_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7224_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7224_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7224_p0 = ap_sig_allocacmp_linebuf_1_107_load.read();
    } else {
        grp_fu_7224_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7224_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7224_p1 = conv2_weights_4_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7224_p1 = ap_const_lv32_BF24D2A2;
    } else {
        grp_fu_7224_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7230_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7230_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7230_p0 = ap_sig_allocacmp_linebuf_1_107_load.read();
    } else {
        grp_fu_7230_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7230_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7230_p1 = conv2_weights_5_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7230_p1 = ap_const_lv32_3D894755;
    } else {
        grp_fu_7230_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7236_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7236_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7236_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7236_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7236_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7236_p1 = conv2_weights_6_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7236_p1 = ap_const_lv32_BEEC79CC;
    } else {
        grp_fu_7236_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7242_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7242_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7242_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7242_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7242_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7242_p1 = conv2_weights_7_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7242_p1 = ap_const_lv32_BDB4F8D5;
    } else {
        grp_fu_7242_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7248_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7248_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7248_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7248_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7248_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7248_p1 = conv2_weights_8_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7248_p1 = ap_const_lv32_3E678FEA;
    } else {
        grp_fu_7248_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7254_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7254_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7254_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7254_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7254_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7254_p1 = conv2_weights_9_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7254_p1 = ap_const_lv32_3F1C6A9A;
    } else {
        grp_fu_7254_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7260_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7260_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7260_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7260_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7260_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7260_p1 = conv2_weights_0_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7260_p1 = ap_const_lv32_BD72465C;
    } else {
        grp_fu_7260_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7266_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7266_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7266_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7266_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7266_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7266_p1 = conv2_weights_1_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7266_p1 = ap_const_lv32_3EC9E125;
    } else {
        grp_fu_7266_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7272_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7272_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7272_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7272_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7272_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7272_p1 = conv2_weights_2_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7272_p1 = ap_const_lv32_3BD5C9F4;
    } else {
        grp_fu_7272_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7278_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7278_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7278_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7278_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7278_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7278_p1 = conv2_weights_3_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7278_p1 = ap_const_lv32_3D836FDC;
    } else {
        grp_fu_7278_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7284_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7284_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7284_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7284_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7284_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7284_p1 = conv2_weights_4_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7284_p1 = ap_const_lv32_3F0FA6B0;
    } else {
        grp_fu_7284_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7290_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7290_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7290_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7290_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7290_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7290_p1 = conv2_weights_5_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7290_p1 = ap_const_lv32_BEB2F463;
    } else {
        grp_fu_7290_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7296_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7296_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7296_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7296_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7296_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7296_p1 = conv2_weights_6_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7296_p1 = ap_const_lv32_BDE4A466;
    } else {
        grp_fu_7296_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7302_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7302_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7302_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7302_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7302_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7302_p1 = conv2_weights_7_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7302_p1 = ap_const_lv32_3F1AB038;
    } else {
        grp_fu_7302_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7308_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7308_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7308_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7308_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7308_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7308_p1 = conv2_weights_8_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7308_p1 = ap_const_lv32_3E8455A4;
    } else {
        grp_fu_7308_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7314_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7314_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7314_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7314_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7314_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7314_p1 = conv2_weights_9_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7314_p1 = ap_const_lv32_3CB43F22;
    } else {
        grp_fu_7314_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7320_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7320_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7320_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7320_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7320_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7320_p1 = conv2_weights_0_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7320_p1 = ap_const_lv32_3D66A2F8;
    } else {
        grp_fu_7320_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7326_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7326_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7326_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7326_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7326_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7326_p1 = conv2_weights_1_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7326_p1 = ap_const_lv32_BE4CC474;
    } else {
        grp_fu_7326_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7332_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7332_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7332_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7332_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7332_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7332_p1 = conv2_weights_2_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7332_p1 = ap_const_lv32_3E93AB9A;
    } else {
        grp_fu_7332_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7338_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7338_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7338_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7338_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7338_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7338_p1 = conv2_weights_3_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7338_p1 = ap_const_lv32_3D2F2AD6;
    } else {
        grp_fu_7338_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7344_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7344_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7344_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7344_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7344_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7344_p1 = conv2_weights_4_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7344_p1 = ap_const_lv32_3E8940D9;
    } else {
        grp_fu_7344_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7350_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7350_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7350_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7350_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7350_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7350_p1 = conv2_weights_5_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7350_p1 = ap_const_lv32_3D0D1F59;
    } else {
        grp_fu_7350_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7356_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7356_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7356_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7356_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7356_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7356_p1 = conv2_weights_6_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7356_p1 = ap_const_lv32_BCD4D938;
    } else {
        grp_fu_7356_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7362_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7362_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7362_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7362_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7362_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7362_p1 = conv2_weights_7_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7362_p1 = ap_const_lv32_3E28F14B;
    } else {
        grp_fu_7362_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7368_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7368_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7368_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7368_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7368_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7368_p1 = conv2_weights_8_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7368_p1 = ap_const_lv32_3EAA4F19;
    } else {
        grp_fu_7368_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7374_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7374_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7374_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7374_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7374_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7374_p1 = conv2_weights_9_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7374_p1 = ap_const_lv32_BF3BD737;
    } else {
        grp_fu_7374_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7380_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7380_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7380_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7380_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7380_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7380_p1 = conv2_weights_0_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7380_p1 = ap_const_lv32_3C54C542;
    } else {
        grp_fu_7380_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7386_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7386_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7386_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7386_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7386_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7386_p1 = conv2_weights_1_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7386_p1 = ap_const_lv32_3EC62DD8;
    } else {
        grp_fu_7386_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7392_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7392_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7392_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7392_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7392_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7392_p1 = conv2_weights_2_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7392_p1 = ap_const_lv32_3EB4791D;
    } else {
        grp_fu_7392_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7398_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7398_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7398_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7398_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7398_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7398_p1 = conv2_weights_3_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7398_p1 = ap_const_lv32_BE16AD80;
    } else {
        grp_fu_7398_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7404_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7404_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7404_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7404_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7404_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7404_p1 = conv2_weights_4_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7404_p1 = ap_const_lv32_BE80D384;
    } else {
        grp_fu_7404_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7410_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7410_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7410_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7410_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7410_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7410_p1 = conv2_weights_5_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7410_p1 = ap_const_lv32_3DCBE0A1;
    } else {
        grp_fu_7410_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7416_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7416_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7416_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7416_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7416_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7416_p1 = conv2_weights_6_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7416_p1 = ap_const_lv32_BDBA7D21;
    } else {
        grp_fu_7416_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7422_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7422_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7422_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7422_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7422_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7422_p1 = conv2_weights_7_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7422_p1 = ap_const_lv32_3EBD0168;
    } else {
        grp_fu_7422_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7428_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7428_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7428_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7428_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7428_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7428_p1 = conv2_weights_8_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7428_p1 = ap_const_lv32_3E959A1E;
    } else {
        grp_fu_7428_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7434_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7434_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7434_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7434_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7434_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7434_p1 = conv2_weights_9_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7434_p1 = ap_const_lv32_BDF5008F;
    } else {
        grp_fu_7434_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7440_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7440_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7440_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7440_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7440_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7440_p1 = conv2_weights_0_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7440_p1 = ap_const_lv32_BE7BCF8B;
    } else {
        grp_fu_7440_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7446_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7446_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7446_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7446_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7446_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7446_p1 = conv2_weights_1_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7446_p1 = ap_const_lv32_3E47AA2C;
    } else {
        grp_fu_7446_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7452_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7452_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7452_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7452_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7452_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7452_p1 = conv2_weights_2_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7452_p1 = ap_const_lv32_BE89141C;
    } else {
        grp_fu_7452_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7458_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7458_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7458_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7458_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7458_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7458_p1 = conv2_weights_3_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7458_p1 = ap_const_lv32_3ED397F5;
    } else {
        grp_fu_7458_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7464_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7464_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7464_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7464_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7464_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7464_p1 = conv2_weights_4_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7464_p1 = ap_const_lv32_3DD8A842;
    } else {
        grp_fu_7464_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7470_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7470_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7470_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7470_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7470_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7470_p1 = conv2_weights_5_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7470_p1 = ap_const_lv32_BEDE9417;
    } else {
        grp_fu_7470_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7476_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7476_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7476_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7476_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7476_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7476_p1 = conv2_weights_6_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7476_p1 = ap_const_lv32_BE7EFFD3;
    } else {
        grp_fu_7476_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7482_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7482_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7482_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7482_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7482_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7482_p1 = conv2_weights_7_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7482_p1 = ap_const_lv32_3F13569C;
    } else {
        grp_fu_7482_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7488_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7488_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7488_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7488_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7488_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7488_p1 = conv2_weights_8_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7488_p1 = ap_const_lv32_3DC0295B;
    } else {
        grp_fu_7488_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7494_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7494_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7494_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7494_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7494_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7494_p1 = conv2_weights_9_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7494_p1 = ap_const_lv32_3F10E5FA;
    } else {
        grp_fu_7494_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7500_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7500_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7500_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7500_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7500_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7500_p1 = conv2_weights_0_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7500_p1 = ap_const_lv32_BE267D67;
    } else {
        grp_fu_7500_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7506_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7506_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7506_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7506_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7506_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7506_p1 = conv2_weights_1_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7506_p1 = ap_const_lv32_3DC6DEE6;
    } else {
        grp_fu_7506_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7512_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7512_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7512_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7512_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7512_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7512_p1 = conv2_weights_2_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7512_p1 = ap_const_lv32_3E91C6F3;
    } else {
        grp_fu_7512_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7518_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7518_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7518_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7518_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7518_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7518_p1 = conv2_weights_3_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7518_p1 = ap_const_lv32_3E9E6E5D;
    } else {
        grp_fu_7518_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7524_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7524_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7524_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7524_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7524_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7524_p1 = conv2_weights_4_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7524_p1 = ap_const_lv32_3E4482CD;
    } else {
        grp_fu_7524_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7531_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7531_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7531_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7531_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7531_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7531_p1 = conv2_weights_5_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7531_p1 = ap_const_lv32_3E8F7A62;
    } else {
        grp_fu_7531_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7538_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7538_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7538_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7538_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7538_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7538_p1 = conv2_weights_6_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7538_p1 = ap_const_lv32_BDA69B1C;
    } else {
        grp_fu_7538_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7545_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7545_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7545_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7545_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7545_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7545_p1 = conv2_weights_7_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7545_p1 = ap_const_lv32_3C9D60F1;
    } else {
        grp_fu_7545_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7552_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7552_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7552_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7552_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7552_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7552_p1 = conv2_weights_8_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7552_p1 = ap_const_lv32_3E81012C;
    } else {
        grp_fu_7552_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7559_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7559_p0 = ap_sig_allocacmp_linebuf_35_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7559_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7559_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7559_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7559_p1 = conv2_weights_9_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_7559_p1 = ap_const_lv32_BCAB5688;
    } else {
        grp_fu_7559_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_8470_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(norm_img_V_full_n.read(), ap_const_logic_1)))) {
        grp_fu_8470_ce = ap_const_logic_1;
    } else {
        grp_fu_8470_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_max_pool2_fu_5248_ap_start() {
    grp_max_pool2_fu_5248_ap_start = grp_max_pool2_fu_5248_ap_start_reg.read();
}

void cnn::thread_grp_max_pool_fu_5268_ap_start() {
    grp_max_pool_fu_5268_ap_start = grp_max_pool_fu_5268_ap_start_reg.read();
}

void cnn::thread_icmp_ln10_fu_8513_p2() {
    icmp_ln10_fu_8513_p2 = (!r_0_i_reg_5065.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(r_0_i_reg_5065.read() == ap_const_lv5_1C);
}

void cnn::thread_icmp_ln115_1_fu_11084_p2() {
    icmp_ln115_1_fu_11084_p2 = (!tmp_26_fu_11074_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_26_fu_11074_p4.read() != ap_const_lv2_0);
}

void cnn::thread_icmp_ln115_2_fu_11325_p2() {
    icmp_ln115_2_fu_11325_p2 = (!tmp_28_fu_11315_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_28_fu_11315_p4.read() != ap_const_lv2_0);
}

void cnn::thread_icmp_ln115_fu_11023_p2() {
    icmp_ln115_fu_11023_p2 = (!tmp_25_fu_11013_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_25_fu_11013_p4.read() != ap_const_lv2_0);
}

void cnn::thread_icmp_ln11_fu_8525_p2() {
    icmp_ln11_fu_8525_p2 = (!c_0_i_reg_5076.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(c_0_i_reg_5076.read() == ap_const_lv5_1C);
}

void cnn::thread_icmp_ln20_1_fu_10599_p2() {
    icmp_ln20_1_fu_10599_p2 = (!phi_ln20_1_reg_5144.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln20_1_reg_5144.read() == ap_const_lv3_7);
}

void cnn::thread_icmp_ln20_2_fu_10605_p2() {
    icmp_ln20_2_fu_10605_p2 = (!phi_ln20_reg_5132.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln20_reg_5132.read() == ap_const_lv4_9);
}

void cnn::thread_icmp_ln20_fu_10593_p2() {
    icmp_ln20_fu_10593_p2 = (!phi_ln20_2_reg_5156.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln20_2_reg_5156.read() == ap_const_lv3_7);
}

void cnn::thread_icmp_ln21_fu_10611_p2() {
    icmp_ln21_fu_10611_p2 = (!indvar_flatten281_reg_5167.read().is_01() || !ap_const_lv10_360.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten281_reg_5167.read() == ap_const_lv10_360);
}

void cnn::thread_icmp_ln24_fu_8537_p2() {
    icmp_ln24_fu_8537_p2 = (!indvar_flatten_reg_5087.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_5087.read() == ap_const_lv10_310);
}

void cnn::thread_icmp_ln25_fu_8555_p2() {
    icmp_ln25_fu_8555_p2 = (!col_0_i_reg_5109.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(col_0_i_reg_5109.read() == ap_const_lv5_1C);
}

void cnn::thread_icmp_ln52_1_fu_8595_p2() {
    icmp_ln52_1_fu_8595_p2 = (!tmp_18_fu_8585_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_8585_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln52_2_fu_9793_p2() {
    icmp_ln52_2_fu_9793_p2 = (!tmp_21_fu_9783_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_21_fu_9783_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln52_fu_8579_p2() {
    icmp_ln52_fu_8579_p2 = (!tmp_fu_8569_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_8569_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln5_10_fu_10463_p2() {
    icmp_ln5_10_fu_10463_p2 = (!trunc_ln5_4_fu_10453_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_4_fu_10453_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_11_fu_10508_p2() {
    icmp_ln5_11_fu_10508_p2 = (!tmp_16_fu_10494_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_16_fu_10494_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_12_fu_10514_p2() {
    icmp_ln5_12_fu_10514_p2 = (!trunc_ln5_5_fu_10504_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_5_fu_10504_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_2_fu_10259_p2() {
    icmp_ln5_2_fu_10259_p2 = (!trunc_ln5_fu_10249_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_fu_10249_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_3_fu_10304_p2() {
    icmp_ln5_3_fu_10304_p2 = (!tmp_8_fu_10290_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_8_fu_10290_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_4_fu_10310_p2() {
    icmp_ln5_4_fu_10310_p2 = (!trunc_ln5_1_fu_10300_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_1_fu_10300_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_5_fu_10355_p2() {
    icmp_ln5_5_fu_10355_p2 = (!tmp_10_fu_10341_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_10_fu_10341_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_6_fu_10361_p2() {
    icmp_ln5_6_fu_10361_p2 = (!trunc_ln5_2_fu_10351_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_2_fu_10351_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_7_fu_10406_p2() {
    icmp_ln5_7_fu_10406_p2 = (!tmp_12_fu_10392_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_12_fu_10392_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_8_fu_10412_p2() {
    icmp_ln5_8_fu_10412_p2 = (!trunc_ln5_3_fu_10402_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_3_fu_10402_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_9_fu_10457_p2() {
    icmp_ln5_9_fu_10457_p2 = (!tmp_14_fu_10443_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_14_fu_10443_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_fu_10253_p2() {
    icmp_ln5_fu_10253_p2 = (!tmp_2_fu_10239_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2_fu_10239_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln67_fu_10541_p2() {
    icmp_ln67_fu_10541_p2 = (!f_0_i47_reg_5120.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(f_0_i47_reg_5120.read() == ap_const_lv3_6);
}

void cnn::thread_icmp_ln81_fu_11790_p2() {
    icmp_ln81_fu_11790_p2 = (!f_0_i68_reg_5224.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(f_0_i68_reg_5224.read() == ap_const_lv4_A);
}

void cnn::thread_icmp_ln87_fu_10629_p2() {
    icmp_ln87_fu_10629_p2 = (!indvar_flatten11_reg_5189.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten11_reg_5189.read() == ap_const_lv8_90);
}

void cnn::thread_icmp_ln88_fu_11035_p2() {
    icmp_ln88_fu_11035_p2 = (!ap_phi_mux_col_0_i51_phi_fu_5216_p4.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_col_0_i51_phi_fu_5216_p4.read() == ap_const_lv4_C);
}

void cnn::thread_img_in_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0))) {
        img_in_V_blk_n = img_in_V_empty_n.read();
    } else {
        img_in_V_blk_n = ap_const_logic_1;
    }
}

void cnn::thread_img_in_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(icmp_ln11_fu_8525_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read())))) {
        img_in_V_read = ap_const_logic_1;
    } else {
        img_in_V_read = ap_const_logic_0;
    }
}

void cnn::thread_norm_img_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11835.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        norm_img_V_read = ap_const_logic_1;
    } else {
        norm_img_V_read = ap_const_logic_0;
    }
}

void cnn::thread_norm_img_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(norm_img_V_full_n.read(), ap_const_logic_1))) {
        norm_img_V_write = ap_const_logic_1;
    } else {
        norm_img_V_write = ap_const_logic_0;
    }
}

void cnn::thread_or_ln5_1_fu_10316_p2() {
    or_ln5_1_fu_10316_p2 = (icmp_ln5_4_fu_10310_p2.read() | icmp_ln5_3_fu_10304_p2.read());
}

void cnn::thread_or_ln5_2_fu_10367_p2() {
    or_ln5_2_fu_10367_p2 = (icmp_ln5_6_fu_10361_p2.read() | icmp_ln5_5_fu_10355_p2.read());
}

void cnn::thread_or_ln5_3_fu_10418_p2() {
    or_ln5_3_fu_10418_p2 = (icmp_ln5_8_fu_10412_p2.read() | icmp_ln5_7_fu_10406_p2.read());
}

void cnn::thread_or_ln5_4_fu_10469_p2() {
    or_ln5_4_fu_10469_p2 = (icmp_ln5_10_fu_10463_p2.read() | icmp_ln5_9_fu_10457_p2.read());
}

void cnn::thread_or_ln5_5_fu_10520_p2() {
    or_ln5_5_fu_10520_p2 = (icmp_ln5_12_fu_10514_p2.read() | icmp_ln5_11_fu_10508_p2.read());
}

void cnn::thread_or_ln5_fu_10265_p2() {
    or_ln5_fu_10265_p2 = (icmp_ln5_2_fu_10259_p2.read() | icmp_ln5_fu_10253_p2.read());
}

void cnn::thread_or_ln91_fu_11053_p2() {
    or_ln91_fu_11053_p2 = (and_ln22_2_fu_11041_p2.read() | icmp_ln87_reg_11938_pp1_iter2_reg.read());
}

void cnn::thread_p_shl2_cast_fu_11384_p3() {
    p_shl2_cast_fu_11384_p3 = esl_concat<7,4>(trunc_ln91_fu_11380_p1.read(), ap_const_lv4_0);
}

void cnn::thread_p_shl3_cast_fu_11396_p3() {
    p_shl3_cast_fu_11396_p3 = esl_concat<9,2>(trunc_ln91_1_fu_11392_p1.read(), ap_const_lv2_0);
}

void cnn::thread_pool_features1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        pool_features1_address0 =  (sc_lv<10>) (zext_ln91_4_fu_11430_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        pool_features1_address0 = grp_max_pool_fu_5268_pool_feature_address0.read();
    } else {
        pool_features1_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_pool_features1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter4.read()))) {
        pool_features1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        pool_features1_ce0 = grp_max_pool_fu_5268_pool_feature_ce0.read();
    } else {
        pool_features1_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_pool_features1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        pool_features1_we0 = grp_max_pool_fu_5268_pool_feature_we0.read();
    } else {
        pool_features1_we0 = ap_const_logic_0;
    }
}

void cnn::thread_pool_features2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        pool_features2_address0 = grp_flattening_layer_fu_5288_pool_features2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        pool_features2_address0 = grp_max_pool2_fu_5248_pool_feature_address0.read();
    } else {
        pool_features2_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void cnn::thread_pool_features2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        pool_features2_ce0 = grp_flattening_layer_fu_5288_pool_features2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        pool_features2_ce0 = grp_max_pool2_fu_5248_pool_feature_ce0.read();
    } else {
        pool_features2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_pool_features2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        pool_features2_we0 = grp_max_pool2_fu_5248_pool_feature_we0.read();
    } else {
        pool_features2_we0 = ap_const_logic_0;
    }
}

void cnn::thread_prediction_address0() {
    prediction_address0 = grp_dense_layer_fu_5236_prediction_address0.read();
}

void cnn::thread_prediction_ce0() {
    prediction_ce0 = grp_dense_layer_fu_5236_prediction_ce0.read();
}

void cnn::thread_prediction_d0() {
    prediction_d0 = grp_dense_layer_fu_5236_prediction_d0.read();
}

void cnn::thread_prediction_we0() {
    prediction_we0 = grp_dense_layer_fu_5236_prediction_we0.read();
}

void cnn::thread_r_fu_8519_p2() {
    r_fu_8519_p2 = (!r_0_i_reg_5065.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(r_0_i_reg_5065.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_row_1_fu_11047_p2() {
    row_1_fu_11047_p2 = (!ap_const_lv4_1.is_01() || !select_ln22_fu_11001_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln22_fu_11001_p3.read()));
}

void cnn::thread_row_fu_8549_p2() {
    row_fu_8549_p2 = (!ap_phi_mux_row_0_i_phi_fu_5102_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_row_0_i_phi_fu_5102_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_select_ln22_2_fu_10635_p3() {
    select_ln22_2_fu_10635_p3 = (!icmp_ln87_fu_10629_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln87_fu_10629_p2.read()[0].to_bool())? f_2_fu_10623_p2.read(): ap_phi_mux_f_0_phi_fu_5182_p4.read());
}

void cnn::thread_select_ln22_3_fu_11110_p3() {
    select_ln22_3_fu_11110_p3 = (!icmp_ln87_reg_11938_pp1_iter2_reg.read()[0].is_01())? sc_lv<4>(): ((icmp_ln87_reg_11938_pp1_iter2_reg.read()[0].to_bool())? ap_const_lv4_C: add_ln122_2_fu_11104_p2.read());
}

void cnn::thread_select_ln22_fu_11001_p3() {
    select_ln22_fu_11001_p3 = (!icmp_ln87_reg_11938_pp1_iter2_reg.read()[0].is_01())? sc_lv<4>(): ((icmp_ln87_reg_11938_pp1_iter2_reg.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_row_0_i49_phi_fu_5204_p4.read());
}

void cnn::thread_select_ln24_1_fu_8601_p3() {
    select_ln24_1_fu_8601_p3 = (!icmp_ln25_fu_8555_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln25_fu_8555_p2.read()[0].to_bool())? icmp_ln52_fu_8579_p2.read(): icmp_ln52_1_fu_8595_p2.read());
}

void cnn::thread_select_ln24_2_fu_8609_p3() {
    select_ln24_2_fu_8609_p3 = (!icmp_ln25_fu_8555_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln25_fu_8555_p2.read()[0].to_bool())? row_fu_8549_p2.read(): ap_phi_mux_row_0_i_phi_fu_5102_p4.read());
}

void cnn::thread_select_ln24_fu_8561_p3() {
    select_ln24_fu_8561_p3 = (!icmp_ln25_fu_8555_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln25_fu_8555_p2.read()[0].to_bool())? ap_const_lv5_0: col_0_i_reg_5109.read());
}

void cnn::thread_select_ln87_fu_10743_p3() {
    select_ln87_fu_10743_p3 = (!icmp_ln87_fu_10629_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln87_fu_10629_p2.read()[0].to_bool())? ap_const_lv8_1: add_ln87_fu_10737_p2.read());
}

void cnn::thread_select_ln91_1_fu_11066_p3() {
    select_ln91_1_fu_11066_p3 = (!and_ln22_2_fu_11041_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln22_2_fu_11041_p2.read()[0].to_bool())? row_1_fu_11047_p2.read(): select_ln22_fu_11001_p3.read());
}

void cnn::thread_select_ln91_2_fu_11090_p3() {
    select_ln91_2_fu_11090_p3 = (!and_ln22_2_fu_11041_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln22_2_fu_11041_p2.read()[0].to_bool())? icmp_ln115_1_fu_11084_p2.read(): and_ln22_fu_11029_p2.read());
}

void cnn::thread_select_ln91_3_fu_11117_p3() {
    select_ln91_3_fu_11117_p3 = (!and_ln22_2_fu_11041_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln22_2_fu_11041_p2.read()[0].to_bool())? add_ln122_fu_11098_p2.read(): select_ln22_3_fu_11110_p3.read());
}

void cnn::thread_select_ln91_fu_11058_p3() {
    select_ln91_fu_11058_p3 = (!or_ln91_fu_11053_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln91_fu_11053_p2.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_col_0_i51_phi_fu_5216_p4.read());
}

void cnn::thread_sext_ln59_1_fu_10225_p1() {
    sext_ln59_1_fu_10225_p1 = esl_sext<64,11>(add_ln59_1_fu_10219_p2.read());
}

void cnn::thread_sext_ln59_fu_9836_p1() {
    sext_ln59_fu_9836_p1 = esl_sext<11,9>(tmp_19_fu_9828_p3.read());
}

void cnn::thread_sext_ln87_fu_11417_p1() {
    sext_ln87_fu_11417_p1 = esl_sext<8,7>(tmp_27_fu_11410_p3.read());
}

void cnn::thread_sub_ln59_fu_9840_p2() {
    sub_ln59_fu_9840_p2 = (!tmp_3_fu_9820_p3.read().is_01() || !sext_ln59_fu_9836_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_3_fu_9820_p3.read()) - sc_bigint<11>(sext_ln59_fu_9836_p1.read()));
}

void cnn::thread_sub_ln91_1_fu_11404_p2() {
    sub_ln91_1_fu_11404_p2 = (!p_shl2_cast_fu_11384_p3.read().is_01() || !p_shl3_cast_fu_11396_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl2_cast_fu_11384_p3.read()) - sc_biguint<11>(p_shl3_cast_fu_11396_p3.read()));
}

void cnn::thread_sub_ln91_fu_11365_p2() {
    sub_ln91_fu_11365_p2 = (!zext_ln91_fu_11350_p1.read().is_01() || !zext_ln91_1_fu_11361_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln91_fu_11350_p1.read()) - sc_biguint<64>(zext_ln91_1_fu_11361_p1.read()));
}

void cnn::thread_tmp_10_fu_10341_p4() {
    tmp_10_fu_10341_p4 = bitcast_ln5_2_fu_10337_p1.read().range(30, 23);
}

void cnn::thread_tmp_12_fu_10392_p4() {
    tmp_12_fu_10392_p4 = bitcast_ln5_3_fu_10388_p1.read().range(30, 23);
}

void cnn::thread_tmp_14_fu_10443_p4() {
    tmp_14_fu_10443_p4 = bitcast_ln5_4_fu_10439_p1.read().range(30, 23);
}

void cnn::thread_tmp_16_fu_10494_p4() {
    tmp_16_fu_10494_p4 = bitcast_ln5_5_fu_10490_p1.read().range(30, 23);
}

void cnn::thread_tmp_18_fu_8585_p4() {
    tmp_18_fu_8585_p4 = ap_phi_mux_row_0_i_phi_fu_5102_p4.read().range(4, 2);
}

void cnn::thread_tmp_19_fu_9828_p3() {
    tmp_19_fu_9828_p3 = esl_concat<6,3>(add_ln24_fu_9814_p2.read(), ap_const_lv3_0);
}

void cnn::thread_tmp_20_fu_10571_p3() {
    tmp_20_fu_10571_p3 = esl_concat<3,3>(phi_ln20_1_reg_5144.read(), phi_ln20_2_reg_5156.read());
}

void cnn::thread_tmp_21_fu_9783_p4() {
    tmp_21_fu_9783_p4 = select_ln24_fu_8561_p3.read().range(4, 2);
}

void cnn::thread_tmp_23_fu_11343_p3() {
    tmp_23_fu_11343_p3 = esl_concat<3,4>(select_ln22_2_reg_11946_pp1_iter3_reg.read(), ap_const_lv4_0);
}

void cnn::thread_tmp_24_fu_11354_p3() {
    tmp_24_fu_11354_p3 = esl_concat<3,2>(select_ln22_2_reg_11946_pp1_iter3_reg.read(), ap_const_lv2_0);
}

void cnn::thread_tmp_25_fu_11013_p4() {
    tmp_25_fu_11013_p4 = ap_phi_mux_row_0_i49_phi_fu_5204_p4.read().range(3, 2);
}

void cnn::thread_tmp_26_fu_11074_p4() {
    tmp_26_fu_11074_p4 = row_1_fu_11047_p2.read().range(3, 2);
}

void cnn::thread_tmp_27_fu_11410_p3() {
    tmp_27_fu_11410_p3 = esl_concat<4,3>(select_ln91_3_reg_13344.read(), ap_const_lv3_0);
}

void cnn::thread_tmp_28_fu_11315_p4() {
    tmp_28_fu_11315_p4 = select_ln91_fu_11058_p3.read().range(3, 2);
}

void cnn::thread_tmp_2_fu_10239_p4() {
    tmp_2_fu_10239_p4 = bitcast_ln5_fu_10235_p1.read().range(30, 23);
}

void cnn::thread_tmp_3_fu_9820_p3() {
    tmp_3_fu_9820_p3 = esl_concat<6,5>(add_ln24_fu_9814_p2.read(), ap_const_lv5_0);
}

void cnn::thread_tmp_8_fu_10290_p4() {
    tmp_8_fu_10290_p4 = bitcast_ln5_1_fu_10286_p1.read().range(30, 23);
}

void cnn::thread_tmp_fu_8569_p4() {
    tmp_fu_8569_p4 = row_fu_8549_p2.read().range(4, 2);
}

void cnn::thread_trunc_ln5_1_fu_10300_p1() {
    trunc_ln5_1_fu_10300_p1 = bitcast_ln5_1_fu_10286_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_2_fu_10351_p1() {
    trunc_ln5_2_fu_10351_p1 = bitcast_ln5_2_fu_10337_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_3_fu_10402_p1() {
    trunc_ln5_3_fu_10402_p1 = bitcast_ln5_3_fu_10388_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_4_fu_10453_p1() {
    trunc_ln5_4_fu_10453_p1 = bitcast_ln5_4_fu_10439_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_5_fu_10504_p1() {
    trunc_ln5_5_fu_10504_p1 = bitcast_ln5_5_fu_10490_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_fu_10249_p1() {
    trunc_ln5_fu_10249_p1 = bitcast_ln5_fu_10235_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln91_1_fu_11392_p1() {
    trunc_ln91_1_fu_11392_p1 = add_ln91_fu_11374_p2.read().range(9-1, 0);
}

void cnn::thread_trunc_ln91_fu_11380_p1() {
    trunc_ln91_fu_11380_p1 = add_ln91_fu_11374_p2.read().range(7-1, 0);
}

void cnn::thread_xor_ln22_fu_11008_p2() {
    xor_ln22_fu_11008_p2 = (icmp_ln87_reg_11938_pp1_iter2_reg.read() ^ ap_const_lv1_1);
}

void cnn::thread_zext_ln122_1_fu_11710_p1() {
    zext_ln122_1_fu_11710_p1 = esl_zext<64,8>(add_ln122_3_fu_11704_p2.read());
}

void cnn::thread_zext_ln122_fu_11700_p1() {
    zext_ln122_fu_11700_p1 = esl_zext<8,4>(add_ln122_1_fu_11695_p2.read());
}

void cnn::thread_zext_ln20_fu_10579_p1() {
    zext_ln20_fu_10579_p1 = esl_zext<64,6>(tmp_20_fu_10571_p3.read());
}

void cnn::thread_zext_ln22_fu_10643_p1() {
    zext_ln22_fu_10643_p1 = esl_zext<64,3>(select_ln22_2_fu_10635_p3.read());
}

void cnn::thread_zext_ln24_fu_9811_p1() {
    zext_ln24_fu_9811_p1 = esl_zext<6,5>(select_ln24_2_reg_11849.read());
}

void cnn::thread_zext_ln59_fu_10215_p1() {
    zext_ln59_fu_10215_p1 = esl_zext<11,5>(add_ln59_fu_10210_p2.read());
}

void cnn::thread_zext_ln83_fu_11802_p1() {
    zext_ln83_fu_11802_p1 = esl_zext<64,4>(f_0_i68_reg_5224.read());
}

void cnn::thread_zext_ln91_1_fu_11361_p1() {
    zext_ln91_1_fu_11361_p1 = esl_zext<64,5>(tmp_24_fu_11354_p3.read());
}

void cnn::thread_zext_ln91_2_fu_11371_p1() {
    zext_ln91_2_fu_11371_p1 = esl_zext<64,4>(select_ln91_1_reg_13338.read());
}

void cnn::thread_zext_ln91_3_fu_11421_p1() {
    zext_ln91_3_fu_11421_p1 = esl_zext<11,4>(select_ln91_reg_13332.read());
}

void cnn::thread_zext_ln91_4_fu_11430_p1() {
    zext_ln91_4_fu_11430_p1 = esl_zext<64,11>(add_ln91_1_fu_11424_p2.read());
}

void cnn::thread_zext_ln91_fu_11350_p1() {
    zext_ln91_fu_11350_p1 = esl_zext<64,7>(tmp_23_fu_11343_p3.read());
}

}

