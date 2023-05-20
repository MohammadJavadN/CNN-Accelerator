// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _soft_max_HH_
#define _soft_max_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "cnn_fadd_32ns_32nbkb.h"
#include "cnn_fdiv_32ns_32ncud.h"
#include "cnn_fpext_32ns_64dEe.h"
#include "cnn_fexp_32ns_32neOg.h"

namespace ap_rtl {

struct soft_max : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > dense_array_address0;
    sc_out< sc_logic > dense_array_ce0;
    sc_in< sc_lv<32> > dense_array_q0;
    sc_out< sc_lv<16> > pred_V_V_TDATA;
    sc_out< sc_logic > pred_V_V_TVALID;
    sc_in< sc_logic > pred_V_V_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;


    // Module declarations
    soft_max(sc_module_name name);
    SC_HAS_PROCESS(soft_max);

    ~soft_max();

    sc_trace_file* mVcdFile;

    cnn_fadd_32ns_32nbkb<1,4,32,32,32>* cnn_fadd_32ns_32nbkb_U38;
    cnn_fdiv_32ns_32ncud<1,10,32,32,32>* cnn_fdiv_32ns_32ncud_U39;
    cnn_fpext_32ns_64dEe<1,2,32,64>* cnn_fpext_32ns_64dEe_U40;
    cnn_fexp_32ns_32neOg<1,8,32,32,32>* cnn_fexp_32ns_32neOg_U41;
    sc_signal< sc_lv<36> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > pred_V_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<32> > grp_fu_143_p2;
    sc_signal< sc_lv<32> > reg_154;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<4> > i_fu_166_p2;
    sc_signal< sc_lv<4> > i_reg_477;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln15_fu_160_p2;
    sc_signal< sc_lv<32> > grp_fu_130_p2;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<4> > j_fu_183_p2;
    sc_signal< sc_lv<4> > j_reg_495;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<1> > icmp_ln20_fu_177_p2;
    sc_signal< sc_lv<32> > grp_fu_135_p2;
    sc_signal< sc_lv<32> > v_assign_reg_505;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<1> > p_Result_s_reg_511;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_lv<52> > trunc_ln565_fu_224_p1;
    sc_signal< sc_lv<52> > trunc_ln565_reg_516;
    sc_signal< sc_lv<1> > icmp_ln571_fu_228_p2;
    sc_signal< sc_lv<1> > icmp_ln571_reg_521;
    sc_signal< sc_lv<12> > F2_fu_234_p2;
    sc_signal< sc_lv<12> > F2_reg_527;
    sc_signal< sc_lv<32> > sum_0_reg_96;
    sc_signal< sc_lv<4> > i_0_reg_108;
    sc_signal< sc_lv<4> > j_0_reg_119;
    sc_signal< sc_lv<64> > zext_ln17_fu_172_p1;
    sc_signal< sc_lv<64> > zext_ln22_fu_189_p1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_lv<64> > grp_fu_140_p1;
    sc_signal< sc_lv<64> > ireg_V_fu_194_p1;
    sc_signal< sc_lv<11> > exp_tmp_V_fu_210_p4;
    sc_signal< sc_lv<63> > trunc_ln556_fu_198_p1;
    sc_signal< sc_lv<12> > zext_ln461_fu_220_p1;
    sc_signal< sc_lv<53> > tmp_1_fu_240_p3;
    sc_signal< sc_lv<54> > p_Result_1_fu_247_p1;
    sc_signal< sc_lv<54> > man_V_1_fu_251_p2;
    sc_signal< sc_lv<1> > icmp_ln581_fu_264_p2;
    sc_signal< sc_lv<12> > add_ln581_fu_269_p2;
    sc_signal< sc_lv<12> > sub_ln581_fu_274_p2;
    sc_signal< sc_lv<12> > sh_amt_fu_279_p3;
    sc_signal< sc_lv<54> > man_V_2_fu_257_p3;
    sc_signal< sc_lv<32> > sext_ln581_fu_287_p1;
    sc_signal< sc_lv<54> > zext_ln586_fu_312_p1;
    sc_signal< sc_lv<54> > ashr_ln586_fu_316_p2;
    sc_signal< sc_lv<32> > bitcast_ln696_fu_326_p1;
    sc_signal< sc_lv<1> > tmp_4_fu_329_p3;
    sc_signal< sc_lv<15> > trunc_ln583_fu_296_p1;
    sc_signal< sc_lv<15> > sext_ln581cast_fu_345_p1;
    sc_signal< sc_lv<1> > icmp_ln582_fu_291_p2;
    sc_signal< sc_lv<1> > xor_ln571_fu_355_p2;
    sc_signal< sc_lv<1> > or_ln582_fu_366_p2;
    sc_signal< sc_lv<1> > xor_ln582_fu_371_p2;
    sc_signal< sc_lv<1> > icmp_ln585_fu_300_p2;
    sc_signal< sc_lv<1> > and_ln581_fu_377_p2;
    sc_signal< sc_lv<1> > xor_ln585_fu_383_p2;
    sc_signal< sc_lv<1> > or_ln581_fu_401_p2;
    sc_signal< sc_lv<1> > icmp_ln603_fu_306_p2;
    sc_signal< sc_lv<1> > xor_ln581_fu_407_p2;
    sc_signal< sc_lv<1> > and_ln603_fu_413_p2;
    sc_signal< sc_lv<15> > shl_ln604_fu_349_p2;
    sc_signal< sc_lv<15> > trunc_ln586_fu_322_p1;
    sc_signal< sc_lv<1> > and_ln585_1_fu_395_p2;
    sc_signal< sc_lv<1> > and_ln585_fu_389_p2;
    sc_signal< sc_lv<15> > select_ln588_fu_337_p3;
    sc_signal< sc_lv<1> > and_ln582_fu_360_p2;
    sc_signal< sc_lv<1> > or_ln603_fu_427_p2;
    sc_signal< sc_lv<15> > select_ln603_fu_419_p3;
    sc_signal< sc_lv<15> > select_ln603_1_fu_433_p3;
    sc_signal< sc_lv<1> > or_ln603_1_fu_441_p2;
    sc_signal< sc_lv<1> > or_ln603_2_fu_455_p2;
    sc_signal< sc_lv<15> > select_ln603_2_fu_447_p3;
    sc_signal< sc_lv<15> > tmp_V_fu_461_p3;
    sc_signal< sc_lv<36> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<36> ap_ST_fsm_state1;
    static const sc_lv<36> ap_ST_fsm_state2;
    static const sc_lv<36> ap_ST_fsm_state3;
    static const sc_lv<36> ap_ST_fsm_state4;
    static const sc_lv<36> ap_ST_fsm_state5;
    static const sc_lv<36> ap_ST_fsm_state6;
    static const sc_lv<36> ap_ST_fsm_state7;
    static const sc_lv<36> ap_ST_fsm_state8;
    static const sc_lv<36> ap_ST_fsm_state9;
    static const sc_lv<36> ap_ST_fsm_state10;
    static const sc_lv<36> ap_ST_fsm_state11;
    static const sc_lv<36> ap_ST_fsm_state12;
    static const sc_lv<36> ap_ST_fsm_state13;
    static const sc_lv<36> ap_ST_fsm_state14;
    static const sc_lv<36> ap_ST_fsm_state15;
    static const sc_lv<36> ap_ST_fsm_state16;
    static const sc_lv<36> ap_ST_fsm_state17;
    static const sc_lv<36> ap_ST_fsm_state18;
    static const sc_lv<36> ap_ST_fsm_state19;
    static const sc_lv<36> ap_ST_fsm_state20;
    static const sc_lv<36> ap_ST_fsm_state21;
    static const sc_lv<36> ap_ST_fsm_state22;
    static const sc_lv<36> ap_ST_fsm_state23;
    static const sc_lv<36> ap_ST_fsm_state24;
    static const sc_lv<36> ap_ST_fsm_state25;
    static const sc_lv<36> ap_ST_fsm_state26;
    static const sc_lv<36> ap_ST_fsm_state27;
    static const sc_lv<36> ap_ST_fsm_state28;
    static const sc_lv<36> ap_ST_fsm_state29;
    static const sc_lv<36> ap_ST_fsm_state30;
    static const sc_lv<36> ap_ST_fsm_state31;
    static const sc_lv<36> ap_ST_fsm_state32;
    static const sc_lv<36> ap_ST_fsm_state33;
    static const sc_lv<36> ap_ST_fsm_state34;
    static const sc_lv<36> ap_ST_fsm_state35;
    static const sc_lv<36> ap_ST_fsm_state36;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<12> ap_const_lv12_433;
    static const sc_lv<54> ap_const_lv54_0;
    static const sc_lv<12> ap_const_lv12_9;
    static const sc_lv<12> ap_const_lv12_FF7;
    static const sc_lv<12> ap_const_lv12_36;
    static const sc_lv<12> ap_const_lv12_F;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<15> ap_const_lv15_7FFF;
    static const sc_lv<15> ap_const_lv15_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_F2_fu_234_p2();
    void thread_add_ln581_fu_269_p2();
    void thread_and_ln581_fu_377_p2();
    void thread_and_ln582_fu_360_p2();
    void thread_and_ln585_1_fu_395_p2();
    void thread_and_ln585_fu_389_p2();
    void thread_and_ln603_fu_413_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ashr_ln586_fu_316_p2();
    void thread_bitcast_ln696_fu_326_p1();
    void thread_dense_array_address0();
    void thread_dense_array_ce0();
    void thread_exp_tmp_V_fu_210_p4();
    void thread_i_fu_166_p2();
    void thread_icmp_ln15_fu_160_p2();
    void thread_icmp_ln20_fu_177_p2();
    void thread_icmp_ln571_fu_228_p2();
    void thread_icmp_ln581_fu_264_p2();
    void thread_icmp_ln582_fu_291_p2();
    void thread_icmp_ln585_fu_300_p2();
    void thread_icmp_ln603_fu_306_p2();
    void thread_ireg_V_fu_194_p1();
    void thread_j_fu_183_p2();
    void thread_man_V_1_fu_251_p2();
    void thread_man_V_2_fu_257_p3();
    void thread_or_ln581_fu_401_p2();
    void thread_or_ln582_fu_366_p2();
    void thread_or_ln603_1_fu_441_p2();
    void thread_or_ln603_2_fu_455_p2();
    void thread_or_ln603_fu_427_p2();
    void thread_p_Result_1_fu_247_p1();
    void thread_pred_V_V_TDATA();
    void thread_pred_V_V_TDATA_blk_n();
    void thread_pred_V_V_TVALID();
    void thread_select_ln588_fu_337_p3();
    void thread_select_ln603_1_fu_433_p3();
    void thread_select_ln603_2_fu_447_p3();
    void thread_select_ln603_fu_419_p3();
    void thread_sext_ln581_fu_287_p1();
    void thread_sext_ln581cast_fu_345_p1();
    void thread_sh_amt_fu_279_p3();
    void thread_shl_ln604_fu_349_p2();
    void thread_sub_ln581_fu_274_p2();
    void thread_tmp_1_fu_240_p3();
    void thread_tmp_4_fu_329_p3();
    void thread_tmp_V_fu_461_p3();
    void thread_trunc_ln556_fu_198_p1();
    void thread_trunc_ln565_fu_224_p1();
    void thread_trunc_ln583_fu_296_p1();
    void thread_trunc_ln586_fu_322_p1();
    void thread_xor_ln571_fu_355_p2();
    void thread_xor_ln581_fu_407_p2();
    void thread_xor_ln582_fu_371_p2();
    void thread_xor_ln585_fu_383_p2();
    void thread_zext_ln17_fu_172_p1();
    void thread_zext_ln22_fu_189_p1();
    void thread_zext_ln461_fu_220_p1();
    void thread_zext_ln586_fu_312_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
