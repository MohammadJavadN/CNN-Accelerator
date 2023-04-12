#include "cnn.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void cnn::thread_grp_fu_6794_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6794_p1 = conv2_weights_9_0_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6794_p1 = ap_const_lv32_3F242DD0;
    } else {
        grp_fu_6794_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6800_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6800_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6800_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6800_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6800_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6800_p1 = conv2_weights_0_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6800_p1 = ap_const_lv32_BEABBD7A;
    } else {
        grp_fu_6800_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6806_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6806_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6806_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6806_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6806_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6806_p1 = conv2_weights_1_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6806_p1 = ap_const_lv32_BDB3E314;
    } else {
        grp_fu_6806_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6812_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6812_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6812_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6812_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6812_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6812_p1 = conv2_weights_2_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6812_p1 = ap_const_lv32_BD1CC0F4;
    } else {
        grp_fu_6812_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6818_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6818_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6818_p0 = linebuf_1_26.read();
    } else {
        grp_fu_6818_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6818_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6818_p1 = conv2_weights_3_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6818_p1 = ap_const_lv32_BDA40439;
    } else {
        grp_fu_6818_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6824_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6824_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6824_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6824_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6824_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6824_p1 = conv2_weights_4_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6824_p1 = ap_const_lv32_BEBBFE92;
    } else {
        grp_fu_6824_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6830_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6830_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6830_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6830_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6830_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6830_p1 = conv2_weights_5_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6830_p1 = ap_const_lv32_3F1798CD;
    } else {
        grp_fu_6830_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6836_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6836_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6836_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6836_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6836_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6836_p1 = conv2_weights_6_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6836_p1 = ap_const_lv32_3D6E99DC;
    } else {
        grp_fu_6836_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6842_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6842_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6842_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6842_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6842_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6842_p1 = conv2_weights_7_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6842_p1 = ap_const_lv32_3C89401C;
    } else {
        grp_fu_6842_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6848_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6848_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6848_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6848_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6848_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6848_p1 = conv2_weights_8_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6848_p1 = ap_const_lv32_3EF7E122;
    } else {
        grp_fu_6848_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6854_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6854_p0 = linebuf_9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6854_p0 = linebuf_1_27.read();
    } else {
        grp_fu_6854_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6854_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6854_p1 = conv2_weights_9_0_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6854_p1 = ap_const_lv32_BE34C00F;
    } else {
        grp_fu_6854_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6860_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6860_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6860_p0 = ap_sig_allocacmp_linebuf_1_51_load.read();
    } else {
        grp_fu_6860_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6860_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6860_p1 = conv2_weights_0_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6860_p1 = ap_const_lv32_BE0F8A29;
    } else {
        grp_fu_6860_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6866_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6866_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6866_p0 = ap_sig_allocacmp_linebuf_1_51_load.read();
    } else {
        grp_fu_6866_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6866_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6866_p1 = conv2_weights_1_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6866_p1 = ap_const_lv32_3D9B62F4;
    } else {
        grp_fu_6866_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6872_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6872_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6872_p0 = ap_sig_allocacmp_linebuf_1_51_load.read();
    } else {
        grp_fu_6872_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6872_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6872_p1 = conv2_weights_2_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6872_p1 = ap_const_lv32_BC1C0B42;
    } else {
        grp_fu_6872_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6878_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6878_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6878_p0 = ap_sig_allocacmp_linebuf_1_51_load.read();
    } else {
        grp_fu_6878_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6878_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6878_p1 = conv2_weights_3_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6878_p1 = ap_const_lv32_BDD451DD;
    } else {
        grp_fu_6878_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6884_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6884_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6884_p0 = ap_sig_allocacmp_linebuf_1_51_load.read();
    } else {
        grp_fu_6884_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6884_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6884_p1 = conv2_weights_4_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6884_p1 = ap_const_lv32_BF218181;
    } else {
        grp_fu_6884_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6890_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6890_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6890_p0 = ap_sig_allocacmp_linebuf_1_51_load.read();
    } else {
        grp_fu_6890_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6890_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6890_p1 = conv2_weights_5_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()))) {
        grp_fu_6890_p1 = ap_const_lv32_3E11B949;
    } else {
        grp_fu_6890_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6896_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6896_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6896_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6896_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6896_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6896_p1 = conv2_weights_6_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6896_p1 = ap_const_lv32_3EC3A70B;
    } else {
        grp_fu_6896_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6902_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6902_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6902_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6902_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6902_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6902_p1 = conv2_weights_7_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6902_p1 = ap_const_lv32_BE2D333E;
    } else {
        grp_fu_6902_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6908_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6908_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6908_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6908_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6908_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6908_p1 = conv2_weights_8_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6908_p1 = ap_const_lv32_BE043F30;
    } else {
        grp_fu_6908_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6914_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6914_p0 = linebuf_10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6914_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6914_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6914_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6914_p1 = conv2_weights_9_0_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6914_p1 = ap_const_lv32_BE4BC9B0;
    } else {
        grp_fu_6914_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6920_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6920_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6920_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6920_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6920_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6920_p1 = conv2_weights_0_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6920_p1 = ap_const_lv32_BDD1AB5C;
    } else {
        grp_fu_6920_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6926_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6926_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6926_p0 = linebuf_1_52.read();
    } else {
        grp_fu_6926_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6926_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6926_p1 = conv2_weights_1_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6926_p1 = ap_const_lv32_3E905FE9;
    } else {
        grp_fu_6926_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6932_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6932_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6932_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6932_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6932_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6932_p1 = conv2_weights_2_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6932_p1 = ap_const_lv32_3F5B8F41;
    } else {
        grp_fu_6932_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6938_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6938_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6938_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6938_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6938_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6938_p1 = conv2_weights_3_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6938_p1 = ap_const_lv32_BF59808E;
    } else {
        grp_fu_6938_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6944_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6944_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6944_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6944_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6944_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6944_p1 = conv2_weights_4_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6944_p1 = ap_const_lv32_BE7191D7;
    } else {
        grp_fu_6944_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6950_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6950_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6950_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6950_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6950_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6950_p1 = conv2_weights_5_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6950_p1 = ap_const_lv32_BDB5937C;
    } else {
        grp_fu_6950_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6956_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6956_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6956_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6956_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6956_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6956_p1 = conv2_weights_6_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6956_p1 = ap_const_lv32_BEC48A0A;
    } else {
        grp_fu_6956_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6962_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6962_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6962_p0 = linebuf_1_53.read();
    } else {
        grp_fu_6962_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6962_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6962_p1 = conv2_weights_7_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6962_p1 = ap_const_lv32_BDF08FEB;
    } else {
        grp_fu_6962_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6968_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6968_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6968_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6968_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6968_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6968_p1 = conv2_weights_8_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6968_p1 = ap_const_lv32_3E9EA395;
    } else {
        grp_fu_6968_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6974_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6974_p0 = linebuf_11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6974_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6974_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6974_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6974_p1 = conv2_weights_9_0_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6974_p1 = ap_const_lv32_BF14489E;
    } else {
        grp_fu_6974_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6980_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6980_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6980_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6980_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6980_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6980_p1 = conv2_weights_0_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6980_p1 = ap_const_lv32_3E9CA8A9;
    } else {
        grp_fu_6980_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6986_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6986_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6986_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6986_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6986_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6986_p1 = conv2_weights_1_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6986_p1 = ap_const_lv32_BD8B468A;
    } else {
        grp_fu_6986_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6992_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6992_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6992_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6992_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6992_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6992_p1 = conv2_weights_2_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6992_p1 = ap_const_lv32_3E2188E5;
    } else {
        grp_fu_6992_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6998_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6998_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6998_p0 = linebuf_1_54.read();
    } else {
        grp_fu_6998_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_6998_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_6998_p1 = conv2_weights_3_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_6998_p1 = ap_const_lv32_BE8E46C9;
    } else {
        grp_fu_6998_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7004_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7004_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7004_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7004_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7004_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7004_p1 = conv2_weights_4_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7004_p1 = ap_const_lv32_BE5ECBE5;
    } else {
        grp_fu_7004_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7010_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7010_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7010_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7010_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7010_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7010_p1 = conv2_weights_5_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7010_p1 = ap_const_lv32_BEDF0984;
    } else {
        grp_fu_7010_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7016_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7016_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7016_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7016_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7016_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7016_p1 = conv2_weights_6_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7016_p1 = ap_const_lv32_3E0757FB;
    } else {
        grp_fu_7016_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7022_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7022_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7022_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7022_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7022_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7022_p1 = conv2_weights_7_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7022_p1 = ap_const_lv32_3EC24B21;
    } else {
        grp_fu_7022_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7028_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7028_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7028_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7028_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7028_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7028_p1 = conv2_weights_8_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7028_p1 = ap_const_lv32_3EE6D373;
    } else {
        grp_fu_7028_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7034_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7034_p0 = linebuf_19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7034_p0 = linebuf_1_55.read();
    } else {
        grp_fu_7034_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7034_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7034_p1 = conv2_weights_9_1_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7034_p1 = ap_const_lv32_BF0AA47A;
    } else {
        grp_fu_7034_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7040_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7040_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7040_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7040_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7040_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7040_p1 = conv2_weights_0_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7040_p1 = ap_const_lv32_BF260703;
    } else {
        grp_fu_7040_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7046_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7046_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7046_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7046_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7046_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7046_p1 = conv2_weights_1_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7046_p1 = ap_const_lv32_BE0A9905;
    } else {
        grp_fu_7046_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7052_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7052_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7052_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7052_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7052_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7052_p1 = conv2_weights_2_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7052_p1 = ap_const_lv32_BDB13131;
    } else {
        grp_fu_7052_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7058_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7058_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7058_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7058_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7058_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7058_p1 = conv2_weights_3_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7058_p1 = ap_const_lv32_3D9AA61C;
    } else {
        grp_fu_7058_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7064_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7064_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7064_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7064_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7064_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7064_p1 = conv2_weights_4_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7064_p1 = ap_const_lv32_BED93A90;
    } else {
        grp_fu_7064_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7070_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7070_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7070_p0 = linebuf_1_79.read();
    } else {
        grp_fu_7070_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7070_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7070_p1 = conv2_weights_5_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7070_p1 = ap_const_lv32_3D9D1198;
    } else {
        grp_fu_7070_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7076_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7076_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7076_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7076_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7076_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7076_p1 = conv2_weights_6_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7076_p1 = ap_const_lv32_BE9A48E4;
    } else {
        grp_fu_7076_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7082_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7082_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7082_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7082_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7082_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7082_p1 = conv2_weights_7_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7082_p1 = ap_const_lv32_3D5ABC6F;
    } else {
        grp_fu_7082_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7088_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7088_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7088_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7088_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7088_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7088_p1 = conv2_weights_8_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7088_p1 = ap_const_lv32_BEB177E9;
    } else {
        grp_fu_7088_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7094_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7094_p0 = ap_sig_allocacmp_linebuf_20_load.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7094_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7094_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7094_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        grp_fu_7094_p1 = conv2_weights_9_1_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7094_p1 = ap_const_lv32_3F124F04;
    } else {
        grp_fu_7094_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7100_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7100_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7100_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7100_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7100_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7100_p1 = conv2_weights_0_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7100_p1 = ap_const_lv32_BD85C807;
    } else {
        grp_fu_7100_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7106_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7106_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7106_p0 = linebuf_1_80.read();
    } else {
        grp_fu_7106_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7106_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7106_p1 = conv2_weights_1_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7106_p1 = ap_const_lv32_3EF6AFD9;
    } else {
        grp_fu_7106_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7112_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7112_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7112_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7112_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7112_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7112_p1 = conv2_weights_2_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7112_p1 = ap_const_lv32_3EDA82B2;
    } else {
        grp_fu_7112_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7118_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7118_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7118_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7118_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7118_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7118_p1 = conv2_weights_3_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7118_p1 = ap_const_lv32_BE889EE8;
    } else {
        grp_fu_7118_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7124_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7124_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7124_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7124_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7124_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7124_p1 = conv2_weights_4_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7124_p1 = ap_const_lv32_3E3E52AF;
    } else {
        grp_fu_7124_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7130_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7130_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7130_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7130_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7130_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7130_p1 = conv2_weights_5_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7130_p1 = ap_const_lv32_3EF828EA;
    } else {
        grp_fu_7130_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7136_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7136_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7136_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7136_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7136_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7136_p1 = conv2_weights_6_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7136_p1 = ap_const_lv32_BE9E03D5;
    } else {
        grp_fu_7136_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7142_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7142_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7142_p0 = linebuf_1_81.read();
    } else {
        grp_fu_7142_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7142_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7142_p1 = conv2_weights_7_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7142_p1 = ap_const_lv32_3E2798C2;
    } else {
        grp_fu_7142_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7148_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7148_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7148_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7148_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7148_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7148_p1 = conv2_weights_8_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7148_p1 = ap_const_lv32_3F08FF0B;
    } else {
        grp_fu_7148_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7154_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7154_p0 = linebuf_21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7154_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7154_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7154_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7154_p1 = conv2_weights_9_1_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7154_p1 = ap_const_lv32_BF188EBF;
    } else {
        grp_fu_7154_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7160_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7160_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7160_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7160_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7160_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7160_p1 = conv2_weights_0_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7160_p1 = ap_const_lv32_3ED58C24;
    } else {
        grp_fu_7160_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7166_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7166_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7166_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7166_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7166_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7166_p1 = conv2_weights_1_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7166_p1 = ap_const_lv32_BD05164A;
    } else {
        grp_fu_7166_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7172_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7172_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7172_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7172_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7172_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7172_p1 = conv2_weights_2_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7172_p1 = ap_const_lv32_3EE55A8F;
    } else {
        grp_fu_7172_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7178_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7178_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7178_p0 = linebuf_1_82.read();
    } else {
        grp_fu_7178_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7178_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7178_p1 = conv2_weights_3_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7178_p1 = ap_const_lv32_BEDC13B5;
    } else {
        grp_fu_7178_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7184_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7184_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7184_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7184_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7184_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7184_p1 = conv2_weights_4_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7184_p1 = ap_const_lv32_3D0449B6;
    } else {
        grp_fu_7184_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7190_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7190_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7190_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7190_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7190_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7190_p1 = conv2_weights_5_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7190_p1 = ap_const_lv32_BF117DC5;
    } else {
        grp_fu_7190_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7196_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7196_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7196_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7196_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7196_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7196_p1 = conv2_weights_6_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7196_p1 = ap_const_lv32_3DEEB3F8;
    } else {
        grp_fu_7196_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7202_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7202_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7202_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7202_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7202_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7202_p1 = conv2_weights_7_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7202_p1 = ap_const_lv32_3E31070C;
    } else {
        grp_fu_7202_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7208_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7208_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7208_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7208_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7208_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7208_p1 = conv2_weights_8_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7208_p1 = ap_const_lv32_3F02A424;
    } else {
        grp_fu_7208_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7214_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7214_p0 = linebuf_22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7214_p0 = linebuf_1_83.read();
    } else {
        grp_fu_7214_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7214_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7214_p1 = conv2_weights_9_1_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7214_p1 = ap_const_lv32_BF430F3C;
    } else {
        grp_fu_7214_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7220_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7220_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7220_p0 = linebuf_1_107.read();
    } else {
        grp_fu_7220_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7220_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7220_p1 = conv2_weights_0_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7220_p1 = ap_const_lv32_BF467380;
    } else {
        grp_fu_7220_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7226_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7226_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7226_p0 = linebuf_1_107.read();
    } else {
        grp_fu_7226_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7226_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7226_p1 = conv2_weights_1_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7226_p1 = ap_const_lv32_BDCD7036;
    } else {
        grp_fu_7226_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7232_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7232_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7232_p0 = linebuf_1_107.read();
    } else {
        grp_fu_7232_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7232_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7232_p1 = conv2_weights_2_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7232_p1 = ap_const_lv32_3E308EAD;
    } else {
        grp_fu_7232_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7238_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7238_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7238_p0 = linebuf_1_107.read();
    } else {
        grp_fu_7238_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7238_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7238_p1 = conv2_weights_3_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7238_p1 = ap_const_lv32_3EF504AC;
    } else {
        grp_fu_7238_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7244_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7244_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7244_p0 = linebuf_1_107.read();
    } else {
        grp_fu_7244_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7244_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7244_p1 = conv2_weights_4_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7244_p1 = ap_const_lv32_BF24D2A2;
    } else {
        grp_fu_7244_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7250_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7250_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7250_p0 = linebuf_1_107.read();
    } else {
        grp_fu_7250_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7250_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7250_p1 = conv2_weights_5_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7250_p1 = ap_const_lv32_3D894755;
    } else {
        grp_fu_7250_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7256_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7256_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7256_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7256_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7256_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7256_p1 = conv2_weights_6_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7256_p1 = ap_const_lv32_BEEC79CC;
    } else {
        grp_fu_7256_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7262_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7262_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7262_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7262_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7262_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7262_p1 = conv2_weights_7_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7262_p1 = ap_const_lv32_BDB4F8D5;
    } else {
        grp_fu_7262_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7268_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7268_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7268_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7268_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7268_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7268_p1 = conv2_weights_8_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7268_p1 = ap_const_lv32_3E678FEA;
    } else {
        grp_fu_7268_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7274_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7274_p0 = linebuf_23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7274_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7274_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7274_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7274_p1 = conv2_weights_9_1_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7274_p1 = ap_const_lv32_3F1C6A9A;
    } else {
        grp_fu_7274_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7280_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7280_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7280_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7280_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7280_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7280_p1 = conv2_weights_0_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7280_p1 = ap_const_lv32_BD72465C;
    } else {
        grp_fu_7280_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7286_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7286_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7286_p0 = linebuf_1_108.read();
    } else {
        grp_fu_7286_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7286_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7286_p1 = conv2_weights_1_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7286_p1 = ap_const_lv32_3EC9E125;
    } else {
        grp_fu_7286_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7292_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7292_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7292_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7292_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7292_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7292_p1 = conv2_weights_2_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7292_p1 = ap_const_lv32_3BD5C9F4;
    } else {
        grp_fu_7292_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7298_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7298_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7298_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7298_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7298_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7298_p1 = conv2_weights_3_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7298_p1 = ap_const_lv32_3D836FDC;
    } else {
        grp_fu_7298_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7304_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7304_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7304_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7304_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7304_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7304_p1 = conv2_weights_4_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7304_p1 = ap_const_lv32_3F0FA6B0;
    } else {
        grp_fu_7304_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7310_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7310_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7310_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7310_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7310_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7310_p1 = conv2_weights_5_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7310_p1 = ap_const_lv32_BEB2F463;
    } else {
        grp_fu_7310_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7316_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7316_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7316_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7316_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7316_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7316_p1 = conv2_weights_6_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7316_p1 = ap_const_lv32_BDE4A466;
    } else {
        grp_fu_7316_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7322_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7322_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7322_p0 = linebuf_1_109.read();
    } else {
        grp_fu_7322_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7322_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7322_p1 = conv2_weights_7_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7322_p1 = ap_const_lv32_3F1AB038;
    } else {
        grp_fu_7322_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7328_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7328_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7328_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7328_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7328_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7328_p1 = conv2_weights_8_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7328_p1 = ap_const_lv32_3E8455A4;
    } else {
        grp_fu_7328_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7334_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7334_p0 = linebuf_31.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7334_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7334_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7334_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7334_p1 = conv2_weights_9_2_0_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7334_p1 = ap_const_lv32_3CB43F22;
    } else {
        grp_fu_7334_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7340_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7340_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7340_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7340_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7340_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7340_p1 = conv2_weights_0_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7340_p1 = ap_const_lv32_3D66A2F8;
    } else {
        grp_fu_7340_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7346_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7346_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7346_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7346_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7346_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7346_p1 = conv2_weights_1_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7346_p1 = ap_const_lv32_BE4CC474;
    } else {
        grp_fu_7346_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7352_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7352_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7352_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7352_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7352_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7352_p1 = conv2_weights_2_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7352_p1 = ap_const_lv32_3E93AB9A;
    } else {
        grp_fu_7352_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7358_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7358_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7358_p0 = linebuf_1_110.read();
    } else {
        grp_fu_7358_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7358_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7358_p1 = conv2_weights_3_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7358_p1 = ap_const_lv32_3D2F2AD6;
    } else {
        grp_fu_7358_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7364_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7364_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7364_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7364_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7364_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7364_p1 = conv2_weights_4_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7364_p1 = ap_const_lv32_3E8940D9;
    } else {
        grp_fu_7364_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7370_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7370_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7370_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7370_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7370_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7370_p1 = conv2_weights_5_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7370_p1 = ap_const_lv32_3D0D1F59;
    } else {
        grp_fu_7370_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7376_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7376_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7376_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7376_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7376_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7376_p1 = conv2_weights_6_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7376_p1 = ap_const_lv32_BCD4D938;
    } else {
        grp_fu_7376_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7382_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7382_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7382_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7382_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7382_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7382_p1 = conv2_weights_7_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7382_p1 = ap_const_lv32_3E28F14B;
    } else {
        grp_fu_7382_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7388_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7388_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7388_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7388_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7388_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7388_p1 = conv2_weights_8_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7388_p1 = ap_const_lv32_3EAA4F19;
    } else {
        grp_fu_7388_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7394_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7394_p0 = linebuf_32.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7394_p0 = linebuf_1_111.read();
    } else {
        grp_fu_7394_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7394_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7394_p1 = conv2_weights_9_2_1_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7394_p1 = ap_const_lv32_BF3BD737;
    } else {
        grp_fu_7394_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7400_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7400_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7400_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7400_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7400_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7400_p1 = conv2_weights_0_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7400_p1 = ap_const_lv32_3C54C542;
    } else {
        grp_fu_7400_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7406_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7406_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7406_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7406_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7406_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7406_p1 = conv2_weights_1_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7406_p1 = ap_const_lv32_3EC62DD8;
    } else {
        grp_fu_7406_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7412_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7412_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7412_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7412_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7412_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7412_p1 = conv2_weights_2_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7412_p1 = ap_const_lv32_3EB4791D;
    } else {
        grp_fu_7412_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7418_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7418_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7418_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7418_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7418_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7418_p1 = conv2_weights_3_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7418_p1 = ap_const_lv32_BE16AD80;
    } else {
        grp_fu_7418_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7424_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7424_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7424_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7424_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7424_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7424_p1 = conv2_weights_4_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7424_p1 = ap_const_lv32_BE80D384;
    } else {
        grp_fu_7424_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7430_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7430_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7430_p0 = linebuf_1_135.read();
    } else {
        grp_fu_7430_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7430_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7430_p1 = conv2_weights_5_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7430_p1 = ap_const_lv32_3DCBE0A1;
    } else {
        grp_fu_7430_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7436_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7436_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7436_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7436_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7436_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7436_p1 = conv2_weights_6_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7436_p1 = ap_const_lv32_BDBA7D21;
    } else {
        grp_fu_7436_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7442_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7442_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7442_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7442_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7442_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7442_p1 = conv2_weights_7_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7442_p1 = ap_const_lv32_3EBD0168;
    } else {
        grp_fu_7442_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7448_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7448_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7448_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7448_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7448_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7448_p1 = conv2_weights_8_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7448_p1 = ap_const_lv32_3E959A1E;
    } else {
        grp_fu_7448_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7454_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7454_p0 = linebuf_33.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7454_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7454_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7454_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7454_p1 = conv2_weights_9_2_2_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7454_p1 = ap_const_lv32_BDF5008F;
    } else {
        grp_fu_7454_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7460_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7460_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7460_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7460_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7460_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7460_p1 = conv2_weights_0_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7460_p1 = ap_const_lv32_BE7BCF8B;
    } else {
        grp_fu_7460_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7466_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7466_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7466_p0 = linebuf_1_136.read();
    } else {
        grp_fu_7466_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7466_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7466_p1 = conv2_weights_1_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7466_p1 = ap_const_lv32_3E47AA2C;
    } else {
        grp_fu_7466_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7472_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7472_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7472_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7472_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7472_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7472_p1 = conv2_weights_2_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7472_p1 = ap_const_lv32_BE89141C;
    } else {
        grp_fu_7472_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7478_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7478_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7478_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7478_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7478_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7478_p1 = conv2_weights_3_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7478_p1 = ap_const_lv32_3ED397F5;
    } else {
        grp_fu_7478_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7484_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7484_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7484_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7484_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7484_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7484_p1 = conv2_weights_4_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7484_p1 = ap_const_lv32_3DD8A842;
    } else {
        grp_fu_7484_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7490_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7490_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7490_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7490_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7490_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7490_p1 = conv2_weights_5_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7490_p1 = ap_const_lv32_BEDE9417;
    } else {
        grp_fu_7490_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7496_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7496_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7496_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7496_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7496_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7496_p1 = conv2_weights_6_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7496_p1 = ap_const_lv32_BE7EFFD3;
    } else {
        grp_fu_7496_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7502_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7502_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7502_p0 = linebuf_1_137.read();
    } else {
        grp_fu_7502_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7502_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7502_p1 = conv2_weights_7_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7502_p1 = ap_const_lv32_3F13569C;
    } else {
        grp_fu_7502_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7508_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7508_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7508_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7508_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7508_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7508_p1 = conv2_weights_8_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7508_p1 = ap_const_lv32_3DC0295B;
    } else {
        grp_fu_7508_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7514_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7514_p0 = linebuf_34.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7514_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7514_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7514_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7514_p1 = conv2_weights_9_2_3_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7514_p1 = ap_const_lv32_3F10E5FA;
    } else {
        grp_fu_7514_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7520_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7520_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7520_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7520_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7520_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7520_p1 = conv2_weights_0_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7520_p1 = ap_const_lv32_BE267D67;
    } else {
        grp_fu_7520_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7526_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7526_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7526_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7526_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7526_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7526_p1 = conv2_weights_1_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7526_p1 = ap_const_lv32_3DC6DEE6;
    } else {
        grp_fu_7526_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7532_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7532_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7532_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7532_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7532_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7532_p1 = conv2_weights_2_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7532_p1 = ap_const_lv32_3E91C6F3;
    } else {
        grp_fu_7532_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7538_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7538_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7538_p0 = linebuf_1_138.read();
    } else {
        grp_fu_7538_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7538_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7538_p1 = conv2_weights_3_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7538_p1 = ap_const_lv32_3E9E6E5D;
    } else {
        grp_fu_7538_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7544_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7544_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7544_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7544_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7544_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7544_p1 = conv2_weights_4_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7544_p1 = ap_const_lv32_3E4482CD;
    } else {
        grp_fu_7544_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7551_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7551_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7551_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7551_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7551_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7551_p1 = conv2_weights_5_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7551_p1 = ap_const_lv32_3E8F7A62;
    } else {
        grp_fu_7551_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7558_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7558_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7558_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7558_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7558_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7558_p1 = conv2_weights_6_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7558_p1 = ap_const_lv32_BDA69B1C;
    } else {
        grp_fu_7558_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7565_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7565_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7565_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7565_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7565_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7565_p1 = conv2_weights_7_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7565_p1 = ap_const_lv32_3C9D60F1;
    } else {
        grp_fu_7565_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7572_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7572_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7572_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7572_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7572_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7572_p1 = conv2_weights_8_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7572_p1 = ap_const_lv32_3E81012C;
    } else {
        grp_fu_7572_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7579_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7579_p0 = linebuf_35.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7579_p0 = norm_img_V_dout.read();
    } else {
        grp_fu_7579_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_7579_p1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        grp_fu_7579_p1 = conv2_weights_9_2_4_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()))) {
        grp_fu_7579_p1 = ap_const_lv32_BCAB5688;
    } else {
        grp_fu_7579_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void cnn::thread_grp_fu_8490_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(icmp_ln11_fu_8545_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(norm_img_V_full_n.read(), ap_const_logic_1)))) {
        grp_fu_8490_ce = ap_const_logic_1;
    } else {
        grp_fu_8490_ce = ap_const_logic_0;
    }
}

void cnn::thread_grp_max_pool2_fu_5248_ap_start() {
    grp_max_pool2_fu_5248_ap_start = grp_max_pool2_fu_5248_ap_start_reg.read();
}

void cnn::thread_grp_max_pool_fu_5268_ap_start() {
    grp_max_pool_fu_5268_ap_start = grp_max_pool_fu_5268_ap_start_reg.read();
}

void cnn::thread_icmp_ln10_fu_8533_p2() {
    icmp_ln10_fu_8533_p2 = (!r_0_i_reg_5065.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(r_0_i_reg_5065.read() == ap_const_lv5_1C);
}

void cnn::thread_icmp_ln115_1_fu_10894_p2() {
    icmp_ln115_1_fu_10894_p2 = (!tmp_26_fu_10884_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_26_fu_10884_p4.read() != ap_const_lv2_0);
}

void cnn::thread_icmp_ln115_2_fu_11155_p2() {
    icmp_ln115_2_fu_11155_p2 = (!tmp_28_fu_11145_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_28_fu_11145_p4.read() != ap_const_lv2_0);
}

void cnn::thread_icmp_ln115_fu_10833_p2() {
    icmp_ln115_fu_10833_p2 = (!tmp_25_fu_10823_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_25_fu_10823_p4.read() != ap_const_lv2_0);
}

void cnn::thread_icmp_ln11_fu_8545_p2() {
    icmp_ln11_fu_8545_p2 = (!c_0_i_reg_5076.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(c_0_i_reg_5076.read() == ap_const_lv5_1C);
}

void cnn::thread_icmp_ln20_1_fu_10619_p2() {
    icmp_ln20_1_fu_10619_p2 = (!phi_ln20_1_reg_5144.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln20_1_reg_5144.read() == ap_const_lv3_7);
}

void cnn::thread_icmp_ln20_2_fu_10625_p2() {
    icmp_ln20_2_fu_10625_p2 = (!phi_ln20_reg_5132.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln20_reg_5132.read() == ap_const_lv4_9);
}

void cnn::thread_icmp_ln20_fu_10613_p2() {
    icmp_ln20_fu_10613_p2 = (!phi_ln20_2_reg_5156.read().is_01() || !ap_const_lv3_7.is_01())? sc_lv<1>(): sc_lv<1>(phi_ln20_2_reg_5156.read() == ap_const_lv3_7);
}

void cnn::thread_icmp_ln22_fu_10631_p2() {
    icmp_ln22_fu_10631_p2 = (!indvar_flatten281_reg_5167.read().is_01() || !ap_const_lv10_360.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten281_reg_5167.read() == ap_const_lv10_360);
}

void cnn::thread_icmp_ln24_fu_8557_p2() {
    icmp_ln24_fu_8557_p2 = (!indvar_flatten_reg_5087.read().is_01() || !ap_const_lv10_310.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_5087.read() == ap_const_lv10_310);
}

void cnn::thread_icmp_ln25_fu_8575_p2() {
    icmp_ln25_fu_8575_p2 = (!col_0_i_reg_5109.read().is_01() || !ap_const_lv5_1C.is_01())? sc_lv<1>(): sc_lv<1>(col_0_i_reg_5109.read() == ap_const_lv5_1C);
}

void cnn::thread_icmp_ln52_1_fu_8615_p2() {
    icmp_ln52_1_fu_8615_p2 = (!tmp_18_fu_8605_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_18_fu_8605_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln52_2_fu_9193_p2() {
    icmp_ln52_2_fu_9193_p2 = (!tmp_21_fu_9183_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_21_fu_9183_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln52_fu_8599_p2() {
    icmp_ln52_fu_8599_p2 = (!tmp_fu_8589_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_8589_p4.read() != ap_const_lv3_0);
}

void cnn::thread_icmp_ln5_10_fu_10483_p2() {
    icmp_ln5_10_fu_10483_p2 = (!trunc_ln5_4_fu_10473_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_4_fu_10473_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_11_fu_10528_p2() {
    icmp_ln5_11_fu_10528_p2 = (!tmp_16_fu_10514_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_16_fu_10514_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_12_fu_10534_p2() {
    icmp_ln5_12_fu_10534_p2 = (!trunc_ln5_5_fu_10524_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_5_fu_10524_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_2_fu_10279_p2() {
    icmp_ln5_2_fu_10279_p2 = (!trunc_ln5_fu_10269_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_fu_10269_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_3_fu_10324_p2() {
    icmp_ln5_3_fu_10324_p2 = (!tmp_8_fu_10310_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_8_fu_10310_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_4_fu_10330_p2() {
    icmp_ln5_4_fu_10330_p2 = (!trunc_ln5_1_fu_10320_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_1_fu_10320_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_5_fu_10375_p2() {
    icmp_ln5_5_fu_10375_p2 = (!tmp_10_fu_10361_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_10_fu_10361_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_6_fu_10381_p2() {
    icmp_ln5_6_fu_10381_p2 = (!trunc_ln5_2_fu_10371_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_2_fu_10371_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_7_fu_10426_p2() {
    icmp_ln5_7_fu_10426_p2 = (!tmp_12_fu_10412_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_12_fu_10412_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_8_fu_10432_p2() {
    icmp_ln5_8_fu_10432_p2 = (!trunc_ln5_3_fu_10422_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln5_3_fu_10422_p1.read() == ap_const_lv23_0);
}

void cnn::thread_icmp_ln5_9_fu_10477_p2() {
    icmp_ln5_9_fu_10477_p2 = (!tmp_14_fu_10463_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_14_fu_10463_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln5_fu_10273_p2() {
    icmp_ln5_fu_10273_p2 = (!tmp_2_fu_10259_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2_fu_10259_p4.read() != ap_const_lv8_FF);
}

void cnn::thread_icmp_ln67_fu_10561_p2() {
    icmp_ln67_fu_10561_p2 = (!f_0_i47_reg_5120.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(f_0_i47_reg_5120.read() == ap_const_lv3_6);
}

void cnn::thread_icmp_ln81_fu_11850_p2() {
    icmp_ln81_fu_11850_p2 = (!f_0_i68_reg_5224.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(f_0_i68_reg_5224.read() == ap_const_lv4_A);
}

void cnn::thread_icmp_ln87_fu_10649_p2() {
    icmp_ln87_fu_10649_p2 = (!indvar_flatten11_reg_5189.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten11_reg_5189.read() == ap_const_lv8_90);
}

void cnn::thread_icmp_ln88_fu_10845_p2() {
    icmp_ln88_fu_10845_p2 = (!ap_phi_mux_col_0_i51_phi_fu_5216_p4.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_col_0_i51_phi_fu_5216_p4.read() == ap_const_lv4_C);
}

void cnn::thread_img_in_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_8545_p2.read(), ap_const_lv1_0))) {
        img_in_V_blk_n = img_in_V_empty_n.read();
    } else {
        img_in_V_blk_n = ap_const_logic_1;
    }
}

void cnn::thread_img_in_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_8545_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(icmp_ln11_fu_8545_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, img_in_V_empty_n.read())))) {
        img_in_V_read = ap_const_logic_1;
    } else {
        img_in_V_read = ap_const_logic_0;
    }
}

void cnn::thread_norm_img_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_reg_11895.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
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

void cnn::thread_or_ln5_1_fu_10336_p2() {
    or_ln5_1_fu_10336_p2 = (icmp_ln5_4_fu_10330_p2.read() | icmp_ln5_3_fu_10324_p2.read());
}

void cnn::thread_or_ln5_2_fu_10387_p2() {
    or_ln5_2_fu_10387_p2 = (icmp_ln5_6_fu_10381_p2.read() | icmp_ln5_5_fu_10375_p2.read());
}

void cnn::thread_or_ln5_3_fu_10438_p2() {
    or_ln5_3_fu_10438_p2 = (icmp_ln5_8_fu_10432_p2.read() | icmp_ln5_7_fu_10426_p2.read());
}

void cnn::thread_or_ln5_4_fu_10489_p2() {
    or_ln5_4_fu_10489_p2 = (icmp_ln5_10_fu_10483_p2.read() | icmp_ln5_9_fu_10477_p2.read());
}

void cnn::thread_or_ln5_5_fu_10540_p2() {
    or_ln5_5_fu_10540_p2 = (icmp_ln5_12_fu_10534_p2.read() | icmp_ln5_11_fu_10528_p2.read());
}

void cnn::thread_or_ln5_fu_10285_p2() {
    or_ln5_fu_10285_p2 = (icmp_ln5_2_fu_10279_p2.read() | icmp_ln5_fu_10273_p2.read());
}

void cnn::thread_or_ln91_fu_10863_p2() {
    or_ln91_fu_10863_p2 = (and_ln23_1_fu_10851_p2.read() | icmp_ln87_reg_11998.read());
}

void cnn::thread_p_shl2_cast_fu_11214_p3() {
    p_shl2_cast_fu_11214_p3 = esl_concat<7,4>(trunc_ln91_fu_11210_p1.read(), ap_const_lv4_0);
}

void cnn::thread_p_shl3_cast_fu_11226_p3() {
    p_shl3_cast_fu_11226_p3 = esl_concat<9,2>(trunc_ln91_1_fu_11222_p1.read(), ap_const_lv2_0);
}

void cnn::thread_pool_features1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        pool_features1_address0 =  (sc_lv<10>) (zext_ln91_4_fu_11260_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        pool_features1_address0 = grp_max_pool_fu_5268_pool_feature_address0.read();
    } else {
        pool_features1_address0 = "XXXXXXXXXX";
    }
}

void cnn::thread_pool_features1_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        pool_features2_address0 = grp_flattening_layer_fu_5288_pool_features2_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        pool_features2_address0 = grp_max_pool2_fu_5248_pool_feature_address0.read();
    } else {
        pool_features2_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void cnn::thread_pool_features2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        pool_features2_ce0 = grp_flattening_layer_fu_5288_pool_features2_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        pool_features2_ce0 = grp_max_pool2_fu_5248_pool_feature_ce0.read();
    } else {
        pool_features2_ce0 = ap_const_logic_0;
    }
}

void cnn::thread_pool_features2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
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

void cnn::thread_r_fu_8539_p2() {
    r_fu_8539_p2 = (!r_0_i_reg_5065.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(r_0_i_reg_5065.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_row_1_fu_10857_p2() {
    row_1_fu_10857_p2 = (!ap_const_lv4_1.is_01() || !select_ln23_fu_10811_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(select_ln23_fu_10811_p3.read()));
}

void cnn::thread_row_fu_8569_p2() {
    row_fu_8569_p2 = (!ap_phi_mux_row_0_i_phi_fu_5102_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_row_0_i_phi_fu_5102_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void cnn::thread_select_ln23_2_fu_10655_p3() {
    select_ln23_2_fu_10655_p3 = (!icmp_ln87_fu_10649_p2.read()[0].is_01())? sc_lv<3>(): ((icmp_ln87_fu_10649_p2.read()[0].to_bool())? f_2_fu_10643_p2.read(): ap_phi_mux_f_0_phi_fu_5182_p4.read());
}

void cnn::thread_select_ln23_3_fu_10920_p3() {
    select_ln23_3_fu_10920_p3 = (!icmp_ln87_reg_11998.read()[0].is_01())? sc_lv<4>(): ((icmp_ln87_reg_11998.read()[0].to_bool())? ap_const_lv4_C: add_ln122_2_fu_10914_p2.read());
}

void cnn::thread_select_ln23_fu_10811_p3() {
    select_ln23_fu_10811_p3 = (!icmp_ln87_reg_11998.read()[0].is_01())? sc_lv<4>(): ((icmp_ln87_reg_11998.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_row_0_i49_phi_fu_5204_p4.read());
}

void cnn::thread_select_ln24_1_fu_8621_p3() {
    select_ln24_1_fu_8621_p3 = (!icmp_ln25_fu_8575_p2.read()[0].is_01())? sc_lv<1>(): ((icmp_ln25_fu_8575_p2.read()[0].to_bool())? icmp_ln52_fu_8599_p2.read(): icmp_ln52_1_fu_8615_p2.read());
}

void cnn::thread_select_ln24_2_fu_8629_p3() {
    select_ln24_2_fu_8629_p3 = (!icmp_ln25_fu_8575_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln25_fu_8575_p2.read()[0].to_bool())? row_fu_8569_p2.read(): ap_phi_mux_row_0_i_phi_fu_5102_p4.read());
}

void cnn::thread_select_ln24_fu_8581_p3() {
    select_ln24_fu_8581_p3 = (!icmp_ln25_fu_8575_p2.read()[0].is_01())? sc_lv<5>(): ((icmp_ln25_fu_8575_p2.read()[0].to_bool())? ap_const_lv5_0: col_0_i_reg_5109.read());
}

void cnn::thread_select_ln87_fu_10803_p3() {
    select_ln87_fu_10803_p3 = (!icmp_ln87_fu_10649_p2.read()[0].is_01())? sc_lv<8>(): ((icmp_ln87_fu_10649_p2.read()[0].to_bool())? ap_const_lv8_1: add_ln87_fu_10797_p2.read());
}

void cnn::thread_select_ln91_1_fu_10876_p3() {
    select_ln91_1_fu_10876_p3 = (!and_ln23_1_fu_10851_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln23_1_fu_10851_p2.read()[0].to_bool())? row_1_fu_10857_p2.read(): select_ln23_fu_10811_p3.read());
}

void cnn::thread_select_ln91_2_fu_10900_p3() {
    select_ln91_2_fu_10900_p3 = (!and_ln23_1_fu_10851_p2.read()[0].is_01())? sc_lv<1>(): ((and_ln23_1_fu_10851_p2.read()[0].to_bool())? icmp_ln115_1_fu_10894_p2.read(): and_ln23_fu_10839_p2.read());
}

void cnn::thread_select_ln91_3_fu_10927_p3() {
    select_ln91_3_fu_10927_p3 = (!and_ln23_1_fu_10851_p2.read()[0].is_01())? sc_lv<4>(): ((and_ln23_1_fu_10851_p2.read()[0].to_bool())? add_ln122_fu_10908_p2.read(): select_ln23_3_fu_10920_p3.read());
}

void cnn::thread_select_ln91_fu_10868_p3() {
    select_ln91_fu_10868_p3 = (!or_ln91_fu_10863_p2.read()[0].is_01())? sc_lv<4>(): ((or_ln91_fu_10863_p2.read()[0].to_bool())? ap_const_lv4_0: ap_phi_mux_col_0_i51_phi_fu_5216_p4.read());
}

void cnn::thread_sext_ln59_1_fu_10245_p1() {
    sext_ln59_1_fu_10245_p1 = esl_sext<64,11>(add_ln59_1_fu_10239_p2.read());
}

void cnn::thread_sext_ln59_fu_9236_p1() {
    sext_ln59_fu_9236_p1 = esl_sext<11,9>(tmp_19_fu_9228_p3.read());
}

void cnn::thread_sext_ln87_fu_11247_p1() {
    sext_ln87_fu_11247_p1 = esl_sext<8,7>(tmp_27_fu_11240_p3.read());
}

void cnn::thread_sub_ln59_fu_9240_p2() {
    sub_ln59_fu_9240_p2 = (!tmp_3_fu_9220_p3.read().is_01() || !sext_ln59_fu_9236_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_3_fu_9220_p3.read()) - sc_bigint<11>(sext_ln59_fu_9236_p1.read()));
}

void cnn::thread_sub_ln91_1_fu_11234_p2() {
    sub_ln91_1_fu_11234_p2 = (!p_shl2_cast_fu_11214_p3.read().is_01() || !p_shl3_cast_fu_11226_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl2_cast_fu_11214_p3.read()) - sc_biguint<11>(p_shl3_cast_fu_11226_p3.read()));
}

void cnn::thread_sub_ln91_fu_11195_p2() {
    sub_ln91_fu_11195_p2 = (!zext_ln91_fu_11180_p1.read().is_01() || !zext_ln91_1_fu_11191_p1.read().is_01())? sc_lv<64>(): (sc_biguint<64>(zext_ln91_fu_11180_p1.read()) - sc_biguint<64>(zext_ln91_1_fu_11191_p1.read()));
}

void cnn::thread_tmp_10_fu_10361_p4() {
    tmp_10_fu_10361_p4 = bitcast_ln5_2_fu_10357_p1.read().range(30, 23);
}

void cnn::thread_tmp_12_fu_10412_p4() {
    tmp_12_fu_10412_p4 = bitcast_ln5_3_fu_10408_p1.read().range(30, 23);
}

void cnn::thread_tmp_14_fu_10463_p4() {
    tmp_14_fu_10463_p4 = bitcast_ln5_4_fu_10459_p1.read().range(30, 23);
}

void cnn::thread_tmp_16_fu_10514_p4() {
    tmp_16_fu_10514_p4 = bitcast_ln5_5_fu_10510_p1.read().range(30, 23);
}

void cnn::thread_tmp_18_fu_8605_p4() {
    tmp_18_fu_8605_p4 = ap_phi_mux_row_0_i_phi_fu_5102_p4.read().range(4, 2);
}

void cnn::thread_tmp_19_fu_9228_p3() {
    tmp_19_fu_9228_p3 = esl_concat<6,3>(add_ln24_fu_9214_p2.read(), ap_const_lv3_0);
}

void cnn::thread_tmp_20_fu_10591_p3() {
    tmp_20_fu_10591_p3 = esl_concat<3,3>(phi_ln20_1_reg_5144.read(), phi_ln20_2_reg_5156.read());
}

void cnn::thread_tmp_21_fu_9183_p4() {
    tmp_21_fu_9183_p4 = select_ln24_fu_8581_p3.read().range(4, 2);
}

void cnn::thread_tmp_23_fu_11173_p3() {
    tmp_23_fu_11173_p3 = esl_concat<3,4>(select_ln23_2_reg_12006_pp1_iter1_reg.read(), ap_const_lv4_0);
}

void cnn::thread_tmp_24_fu_11184_p3() {
    tmp_24_fu_11184_p3 = esl_concat<3,2>(select_ln23_2_reg_12006_pp1_iter1_reg.read(), ap_const_lv2_0);
}

void cnn::thread_tmp_25_fu_10823_p4() {
    tmp_25_fu_10823_p4 = ap_phi_mux_row_0_i49_phi_fu_5204_p4.read().range(3, 2);
}

void cnn::thread_tmp_26_fu_10884_p4() {
    tmp_26_fu_10884_p4 = row_1_fu_10857_p2.read().range(3, 2);
}

void cnn::thread_tmp_27_fu_11240_p3() {
    tmp_27_fu_11240_p3 = esl_concat<4,3>(select_ln91_3_reg_13064.read(), ap_const_lv3_0);
}

void cnn::thread_tmp_28_fu_11145_p4() {
    tmp_28_fu_11145_p4 = select_ln91_fu_10868_p3.read().range(3, 2);
}

void cnn::thread_tmp_2_fu_10259_p4() {
    tmp_2_fu_10259_p4 = bitcast_ln5_fu_10255_p1.read().range(30, 23);
}

void cnn::thread_tmp_3_fu_9220_p3() {
    tmp_3_fu_9220_p3 = esl_concat<6,5>(add_ln24_fu_9214_p2.read(), ap_const_lv5_0);
}

void cnn::thread_tmp_8_fu_10310_p4() {
    tmp_8_fu_10310_p4 = bitcast_ln5_1_fu_10306_p1.read().range(30, 23);
}

void cnn::thread_tmp_fu_8589_p4() {
    tmp_fu_8589_p4 = row_fu_8569_p2.read().range(4, 2);
}

void cnn::thread_trunc_ln5_1_fu_10320_p1() {
    trunc_ln5_1_fu_10320_p1 = bitcast_ln5_1_fu_10306_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_2_fu_10371_p1() {
    trunc_ln5_2_fu_10371_p1 = bitcast_ln5_2_fu_10357_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_3_fu_10422_p1() {
    trunc_ln5_3_fu_10422_p1 = bitcast_ln5_3_fu_10408_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_4_fu_10473_p1() {
    trunc_ln5_4_fu_10473_p1 = bitcast_ln5_4_fu_10459_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_5_fu_10524_p1() {
    trunc_ln5_5_fu_10524_p1 = bitcast_ln5_5_fu_10510_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln5_fu_10269_p1() {
    trunc_ln5_fu_10269_p1 = bitcast_ln5_fu_10255_p1.read().range(23-1, 0);
}

void cnn::thread_trunc_ln91_1_fu_11222_p1() {
    trunc_ln91_1_fu_11222_p1 = add_ln91_fu_11204_p2.read().range(9-1, 0);
}

void cnn::thread_trunc_ln91_fu_11210_p1() {
    trunc_ln91_fu_11210_p1 = add_ln91_fu_11204_p2.read().range(7-1, 0);
}

void cnn::thread_xor_ln23_fu_10818_p2() {
    xor_ln23_fu_10818_p2 = (icmp_ln87_reg_11998.read() ^ ap_const_lv1_1);
}

void cnn::thread_zext_ln122_1_fu_11620_p1() {
    zext_ln122_1_fu_11620_p1 = esl_zext<64,8>(add_ln122_3_fu_11614_p2.read());
}

void cnn::thread_zext_ln122_fu_11610_p1() {
    zext_ln122_fu_11610_p1 = esl_zext<8,4>(add_ln122_1_fu_11605_p2.read());
}

void cnn::thread_zext_ln20_fu_10599_p1() {
    zext_ln20_fu_10599_p1 = esl_zext<64,6>(tmp_20_fu_10591_p3.read());
}

void cnn::thread_zext_ln23_fu_10663_p1() {
    zext_ln23_fu_10663_p1 = esl_zext<64,3>(select_ln23_2_fu_10655_p3.read());
}

void cnn::thread_zext_ln24_fu_9211_p1() {
    zext_ln24_fu_9211_p1 = esl_zext<6,5>(select_ln24_2_reg_11909.read());
}

void cnn::thread_zext_ln59_fu_10235_p1() {
    zext_ln59_fu_10235_p1 = esl_zext<11,5>(add_ln59_fu_10230_p2.read());
}

void cnn::thread_zext_ln83_fu_11862_p1() {
    zext_ln83_fu_11862_p1 = esl_zext<64,4>(f_0_i68_reg_5224.read());
}

void cnn::thread_zext_ln91_1_fu_11191_p1() {
    zext_ln91_1_fu_11191_p1 = esl_zext<64,5>(tmp_24_fu_11184_p3.read());
}

void cnn::thread_zext_ln91_2_fu_11201_p1() {
    zext_ln91_2_fu_11201_p1 = esl_zext<64,4>(select_ln91_1_reg_13058.read());
}

void cnn::thread_zext_ln91_3_fu_11251_p1() {
    zext_ln91_3_fu_11251_p1 = esl_zext<11,4>(select_ln91_reg_13052.read());
}

void cnn::thread_zext_ln91_4_fu_11260_p1() {
    zext_ln91_4_fu_11260_p1 = esl_zext<64,11>(add_ln91_1_fu_11254_p2.read());
}

void cnn::thread_zext_ln91_fu_11180_p1() {
    zext_ln91_fu_11180_p1 = esl_zext<64,7>(tmp_23_fu_11173_p3.read());
}

}

