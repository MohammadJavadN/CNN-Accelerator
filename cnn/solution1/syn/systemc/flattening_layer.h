// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _flattening_layer_HH_
#define _flattening_layer_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct flattening_layer : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<8> > pool_features_V_address0;
    sc_out< sc_logic > pool_features_V_ce0;
    sc_in< sc_lv<14> > pool_features_V_q0;
    sc_out< sc_lv<8> > flat_array_V_address0;
    sc_out< sc_logic > flat_array_V_ce0;
    sc_out< sc_logic > flat_array_V_we0;
    sc_out< sc_lv<14> > flat_array_V_d0;


    // Module declarations
    flattening_layer(sc_module_name name);
    SC_HAS_PROCESS(flattening_layer);

    ~flattening_layer();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > f_fu_138_p2;
    sc_signal< sc_lv<4> > f_reg_237;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<8> > index_fu_144_p2;
    sc_signal< sc_lv<8> > index_reg_242;
    sc_signal< sc_lv<1> > icmp_ln12_fu_132_p2;
    sc_signal< sc_lv<7> > zext_ln13_fu_158_p1;
    sc_signal< sc_lv<7> > zext_ln13_reg_247;
    sc_signal< sc_lv<3> > r_fu_168_p2;
    sc_signal< sc_lv<3> > r_reg_255;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > add_ln17_fu_174_p2;
    sc_signal< sc_lv<8> > add_ln17_reg_260;
    sc_signal< sc_lv<1> > icmp_ln13_fu_162_p2;
    sc_signal< sc_lv<9> > tmp_8_cast_fu_189_p3;
    sc_signal< sc_lv<9> > tmp_8_cast_reg_265;
    sc_signal< sc_lv<3> > c_fu_203_p2;
    sc_signal< sc_lv<3> > c_reg_273;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln14_fu_197_p2;
    sc_signal< sc_lv<8> > add_ln17_1_fu_228_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > index_0_reg_65;
    sc_signal< sc_lv<4> > f_0_reg_77;
    sc_signal< sc_lv<8> > index_1_reg_88;
    sc_signal< sc_lv<3> > r_0_reg_99;
    sc_signal< sc_lv<8> > index_2_reg_110;
    sc_signal< sc_lv<3> > c_0_reg_121;
    sc_signal< sc_lv<64> > zext_ln203_7_fu_218_p1;
    sc_signal< sc_lv<64> > zext_ln16_fu_223_p1;
    sc_signal< sc_lv<6> > tmp_fu_150_p3;
    sc_signal< sc_lv<7> > zext_ln203_fu_180_p1;
    sc_signal< sc_lv<7> > add_ln203_fu_184_p2;
    sc_signal< sc_lv<9> > zext_ln203_6_fu_209_p1;
    sc_signal< sc_lv<9> > add_ln203_2_fu_213_p2;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<8> ap_const_lv8_10;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<8> ap_const_lv8_4;
    static const sc_lv<8> ap_const_lv8_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln17_1_fu_228_p2();
    void thread_add_ln17_fu_174_p2();
    void thread_add_ln203_2_fu_213_p2();
    void thread_add_ln203_fu_184_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_fu_203_p2();
    void thread_f_fu_138_p2();
    void thread_flat_array_V_address0();
    void thread_flat_array_V_ce0();
    void thread_flat_array_V_d0();
    void thread_flat_array_V_we0();
    void thread_icmp_ln12_fu_132_p2();
    void thread_icmp_ln13_fu_162_p2();
    void thread_icmp_ln14_fu_197_p2();
    void thread_index_fu_144_p2();
    void thread_pool_features_V_address0();
    void thread_pool_features_V_ce0();
    void thread_r_fu_168_p2();
    void thread_tmp_8_cast_fu_189_p3();
    void thread_tmp_fu_150_p3();
    void thread_zext_ln13_fu_158_p1();
    void thread_zext_ln16_fu_223_p1();
    void thread_zext_ln203_6_fu_209_p1();
    void thread_zext_ln203_7_fu_218_p1();
    void thread_zext_ln203_fu_180_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
