// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "max_pool.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic max_pool::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic max_pool::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> max_pool::ap_ST_fsm_state1 = "1";
const sc_lv<6> max_pool::ap_ST_fsm_state2 = "10";
const sc_lv<6> max_pool::ap_ST_fsm_state3 = "100";
const sc_lv<6> max_pool::ap_ST_fsm_state4 = "1000";
const sc_lv<6> max_pool::ap_ST_fsm_state5 = "10000";
const sc_lv<6> max_pool::ap_ST_fsm_state6 = "100000";
const sc_lv<32> max_pool::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> max_pool::ap_const_lv32_1 = "1";
const sc_lv<1> max_pool::ap_const_lv1_1 = "1";
const sc_lv<32> max_pool::ap_const_lv32_2 = "10";
const sc_lv<1> max_pool::ap_const_lv1_0 = "0";
const sc_lv<32> max_pool::ap_const_lv32_3 = "11";
const sc_lv<32> max_pool::ap_const_lv32_4 = "100";
const sc_lv<32> max_pool::ap_const_lv32_5 = "101";
const sc_lv<5> max_pool::ap_const_lv5_0 = "00000";
const sc_lv<32> max_pool::ap_const_lv32_800000 = "100000000000000000000000";
const sc_lv<2> max_pool::ap_const_lv2_0 = "00";
const sc_lv<4> max_pool::ap_const_lv4_0 = "0000";
const sc_lv<5> max_pool::ap_const_lv5_18 = "11000";
const sc_lv<5> max_pool::ap_const_lv5_2 = "10";
const sc_lv<2> max_pool::ap_const_lv2_2 = "10";
const sc_lv<2> max_pool::ap_const_lv2_1 = "1";
const sc_lv<3> max_pool::ap_const_lv3_0 = "000";
const sc_lv<32> max_pool::ap_const_lv32_17 = "10111";
const sc_lv<32> max_pool::ap_const_lv32_1E = "11110";
const sc_lv<8> max_pool::ap_const_lv8_FF = "11111111";
const sc_lv<23> max_pool::ap_const_lv23_0 = "00000000000000000000000";
const bool max_pool::ap_const_boolean_1 = true;

max_pool::max_pool(sc_module_name name) : sc_module(name), mVcdFile(0) {
    cnn_fcmp_32ns_32nbkb_U1 = new cnn_fcmp_32ns_32nbkb<1,1,32,32,1>("cnn_fcmp_32ns_32nbkb_U1");
    cnn_fcmp_32ns_32nbkb_U1->din0(pool_fu_467_p8);
    cnn_fcmp_32ns_32nbkb_U1->din1(pool_1_reg_219);
    cnn_fcmp_32ns_32nbkb_U1->opcode(ap_var_for_const0);
    cnn_fcmp_32ns_32nbkb_U1->dout(tmp_8_fu_242_p2);
    cnn_mux_63_32_1_1_U2 = new cnn_mux_63_32_1_1<1,1,32,32,32,32,32,32,3,32>("cnn_mux_63_32_1_1_U2");
    cnn_mux_63_32_1_1_U2->din0(feature_0_q0);
    cnn_mux_63_32_1_1_U2->din1(feature_1_q0);
    cnn_mux_63_32_1_1_U2->din2(feature_2_q0);
    cnn_mux_63_32_1_1_U2->din3(feature_3_q0);
    cnn_mux_63_32_1_1_U2->din4(feature_4_q0);
    cnn_mux_63_32_1_1_U2->din5(feature_5_q0);
    cnn_mux_63_32_1_1_U2->din6(feature_offset);
    cnn_mux_63_32_1_1_U2->dout(pool_fu_467_p8);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln49_1_fu_442_p2);
    sensitive << ( c_0_reg_183 );
    sensitive << ( zext_ln47_fu_426_p1 );

    SC_METHOD(thread_add_ln49_2_fu_452_p2);
    sensitive << ( sub_ln49_reg_611 );
    sensitive << ( zext_ln49_2_fu_448_p1 );

    SC_METHOD(thread_add_ln49_fu_360_p2);
    sensitive << ( r_0_reg_171 );
    sensitive << ( zext_ln46_fu_344_p1 );

    SC_METHOD(thread_add_ln53_1_fu_410_p2);
    sensitive << ( sub_ln53_1_reg_590 );
    sensitive << ( zext_ln53_3_fu_406_p1 );

    SC_METHOD(thread_add_ln53_fu_301_p2);
    sensitive << ( sext_ln53_reg_582 );
    sensitive << ( zext_ln53_2_fu_297_p1 );

    SC_METHOD(thread_and_ln49_1_fu_563_p2);
    sensitive << ( and_ln49_fu_557_p2 );
    sensitive << ( tmp_8_fu_242_p2 );

    SC_METHOD(thread_and_ln49_fu_557_p2);
    sensitive << ( or_ln49_fu_533_p2 );
    sensitive << ( or_ln49_1_fu_551_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln40_fu_281_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln40_fu_281_p2 );

    SC_METHOD(thread_bitcast_ln49_1_fu_503_p1);
    sensitive << ( pool_1_reg_219 );

    SC_METHOD(thread_bitcast_ln49_fu_485_p1);
    sensitive << ( pool_fu_467_p8 );

    SC_METHOD(thread_c_fu_420_p2);
    sensitive << ( c_0_reg_183 );

    SC_METHOD(thread_feature_0_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln49_fu_457_p1 );

    SC_METHOD(thread_feature_0_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_feature_1_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln49_fu_457_p1 );

    SC_METHOD(thread_feature_1_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_feature_2_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln49_fu_457_p1 );

    SC_METHOD(thread_feature_2_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_feature_3_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln49_fu_457_p1 );

    SC_METHOD(thread_feature_3_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_feature_4_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln49_fu_457_p1 );

    SC_METHOD(thread_feature_4_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_feature_5_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln49_fu_457_p1 );

    SC_METHOD(thread_feature_5_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_icmp_ln40_fu_281_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( r_0_reg_171 );

    SC_METHOD(thread_icmp_ln42_fu_332_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( c_0_reg_183 );

    SC_METHOD(thread_icmp_ln46_fu_348_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( pr_0_reg_208 );

    SC_METHOD(thread_icmp_ln47_fu_430_p2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( pc_0_reg_231 );

    SC_METHOD(thread_icmp_ln49_1_fu_527_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( trunc_ln49_fu_499_p1 );

    SC_METHOD(thread_icmp_ln49_2_fu_539_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_7_fu_507_p4 );

    SC_METHOD(thread_icmp_ln49_3_fu_545_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( trunc_ln49_1_fu_517_p1 );

    SC_METHOD(thread_icmp_ln49_fu_521_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_6_fu_489_p4 );

    SC_METHOD(thread_or_ln49_1_fu_551_p2);
    sensitive << ( icmp_ln49_3_fu_545_p2 );
    sensitive << ( icmp_ln49_2_fu_539_p2 );

    SC_METHOD(thread_or_ln49_fu_533_p2);
    sensitive << ( icmp_ln49_1_fu_527_p2 );
    sensitive << ( icmp_ln49_fu_521_p2 );

    SC_METHOD(thread_p_shl2_cast_fu_310_p3);
    sensitive << ( trunc_ln53_fu_306_p1 );

    SC_METHOD(thread_p_shl3_cast_fu_318_p3);
    sensitive << ( add_ln53_fu_301_p2 );

    SC_METHOD(thread_pc_fu_436_p2);
    sensitive << ( pc_0_reg_231 );

    SC_METHOD(thread_pool_3_fu_569_p3);
    sensitive << ( pool_1_reg_219 );
    sensitive << ( pool_fu_467_p8 );
    sensitive << ( and_ln49_1_fu_563_p2 );

    SC_METHOD(thread_pool_feature_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln53_4_fu_415_p1 );

    SC_METHOD(thread_pool_feature_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_pool_feature_d0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( pool_0_reg_195 );

    SC_METHOD(thread_pool_feature_we0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln46_fu_348_p2 );

    SC_METHOD(thread_pr_fu_354_p2);
    sensitive << ( pr_0_reg_208 );

    SC_METHOD(thread_r_fu_338_p2);
    sensitive << ( r_0_reg_171 );

    SC_METHOD(thread_sext_ln49_fu_457_p1);
    sensitive << ( add_ln49_2_fu_452_p2 );

    SC_METHOD(thread_sext_ln53_fu_277_p1);
    sensitive << ( sub_ln53_fu_271_p2 );

    SC_METHOD(thread_sub_ln49_fu_390_p2);
    sensitive << ( zext_ln49_fu_374_p1 );
    sensitive << ( zext_ln49_1_fu_386_p1 );

    SC_METHOD(thread_sub_ln53_1_fu_326_p2);
    sensitive << ( p_shl2_cast_fu_310_p3 );
    sensitive << ( p_shl3_cast_fu_318_p3 );

    SC_METHOD(thread_sub_ln53_fu_271_p2);
    sensitive << ( zext_ln53_fu_255_p1 );
    sensitive << ( zext_ln53_1_fu_267_p1 );

    SC_METHOD(thread_tmp_10_fu_287_p4);
    sensitive << ( r_0_reg_171 );

    SC_METHOD(thread_tmp_11_fu_396_p4);
    sensitive << ( c_0_reg_183 );

    SC_METHOD(thread_tmp_1_fu_378_p3);
    sensitive << ( add_ln49_fu_360_p2 );

    SC_METHOD(thread_tmp_6_fu_489_p4);
    sensitive << ( bitcast_ln49_fu_485_p1 );

    SC_METHOD(thread_tmp_7_fu_507_p4);
    sensitive << ( bitcast_ln49_1_fu_503_p1 );

    SC_METHOD(thread_tmp_9_fu_259_p3);
    sensitive << ( feature_offset );

    SC_METHOD(thread_tmp_fu_247_p3);
    sensitive << ( feature_offset );

    SC_METHOD(thread_tmp_s_fu_366_p3);
    sensitive << ( add_ln49_fu_360_p2 );

    SC_METHOD(thread_trunc_ln49_1_fu_517_p1);
    sensitive << ( bitcast_ln49_1_fu_503_p1 );

    SC_METHOD(thread_trunc_ln49_fu_499_p1);
    sensitive << ( bitcast_ln49_fu_485_p1 );

    SC_METHOD(thread_trunc_ln53_fu_306_p1);
    sensitive << ( add_ln53_fu_301_p2 );

    SC_METHOD(thread_zext_ln46_fu_344_p1);
    sensitive << ( pr_0_reg_208 );

    SC_METHOD(thread_zext_ln47_fu_426_p1);
    sensitive << ( pc_0_reg_231 );

    SC_METHOD(thread_zext_ln49_1_fu_386_p1);
    sensitive << ( tmp_1_fu_378_p3 );

    SC_METHOD(thread_zext_ln49_2_fu_448_p1);
    sensitive << ( add_ln49_1_fu_442_p2 );

    SC_METHOD(thread_zext_ln49_fu_374_p1);
    sensitive << ( tmp_s_fu_366_p3 );

    SC_METHOD(thread_zext_ln53_1_fu_267_p1);
    sensitive << ( tmp_9_fu_259_p3 );

    SC_METHOD(thread_zext_ln53_2_fu_297_p1);
    sensitive << ( tmp_10_fu_287_p4 );

    SC_METHOD(thread_zext_ln53_3_fu_406_p1);
    sensitive << ( tmp_11_fu_396_p4 );

    SC_METHOD(thread_zext_ln53_4_fu_415_p1);
    sensitive << ( add_ln53_1_fu_410_p2 );

    SC_METHOD(thread_zext_ln53_fu_255_p1);
    sensitive << ( tmp_fu_247_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln40_fu_281_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln42_fu_332_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln46_fu_348_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( icmp_ln47_fu_430_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "max_pool_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, feature_0_address0, "(port)feature_0_address0");
    sc_trace(mVcdFile, feature_0_ce0, "(port)feature_0_ce0");
    sc_trace(mVcdFile, feature_0_q0, "(port)feature_0_q0");
    sc_trace(mVcdFile, feature_1_address0, "(port)feature_1_address0");
    sc_trace(mVcdFile, feature_1_ce0, "(port)feature_1_ce0");
    sc_trace(mVcdFile, feature_1_q0, "(port)feature_1_q0");
    sc_trace(mVcdFile, feature_2_address0, "(port)feature_2_address0");
    sc_trace(mVcdFile, feature_2_ce0, "(port)feature_2_ce0");
    sc_trace(mVcdFile, feature_2_q0, "(port)feature_2_q0");
    sc_trace(mVcdFile, feature_3_address0, "(port)feature_3_address0");
    sc_trace(mVcdFile, feature_3_ce0, "(port)feature_3_ce0");
    sc_trace(mVcdFile, feature_3_q0, "(port)feature_3_q0");
    sc_trace(mVcdFile, feature_4_address0, "(port)feature_4_address0");
    sc_trace(mVcdFile, feature_4_ce0, "(port)feature_4_ce0");
    sc_trace(mVcdFile, feature_4_q0, "(port)feature_4_q0");
    sc_trace(mVcdFile, feature_5_address0, "(port)feature_5_address0");
    sc_trace(mVcdFile, feature_5_ce0, "(port)feature_5_ce0");
    sc_trace(mVcdFile, feature_5_q0, "(port)feature_5_q0");
    sc_trace(mVcdFile, feature_offset, "(port)feature_offset");
    sc_trace(mVcdFile, pool_feature_address0, "(port)pool_feature_address0");
    sc_trace(mVcdFile, pool_feature_ce0, "(port)pool_feature_ce0");
    sc_trace(mVcdFile, pool_feature_we0, "(port)pool_feature_we0");
    sc_trace(mVcdFile, pool_feature_d0, "(port)pool_feature_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, sext_ln53_fu_277_p1, "sext_ln53_fu_277_p1");
    sc_trace(mVcdFile, sext_ln53_reg_582, "sext_ln53_reg_582");
    sc_trace(mVcdFile, sub_ln53_1_fu_326_p2, "sub_ln53_1_fu_326_p2");
    sc_trace(mVcdFile, sub_ln53_1_reg_590, "sub_ln53_1_reg_590");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln40_fu_281_p2, "icmp_ln40_fu_281_p2");
    sc_trace(mVcdFile, r_fu_338_p2, "r_fu_338_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, icmp_ln42_fu_332_p2, "icmp_ln42_fu_332_p2");
    sc_trace(mVcdFile, pr_fu_354_p2, "pr_fu_354_p2");
    sc_trace(mVcdFile, pr_reg_606, "pr_reg_606");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, sub_ln49_fu_390_p2, "sub_ln49_fu_390_p2");
    sc_trace(mVcdFile, sub_ln49_reg_611, "sub_ln49_reg_611");
    sc_trace(mVcdFile, icmp_ln46_fu_348_p2, "icmp_ln46_fu_348_p2");
    sc_trace(mVcdFile, c_fu_420_p2, "c_fu_420_p2");
    sc_trace(mVcdFile, pc_fu_436_p2, "pc_fu_436_p2");
    sc_trace(mVcdFile, pc_reg_624, "pc_reg_624");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, icmp_ln47_fu_430_p2, "icmp_ln47_fu_430_p2");
    sc_trace(mVcdFile, pool_3_fu_569_p3, "pool_3_fu_569_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, r_0_reg_171, "r_0_reg_171");
    sc_trace(mVcdFile, c_0_reg_183, "c_0_reg_183");
    sc_trace(mVcdFile, pool_0_reg_195, "pool_0_reg_195");
    sc_trace(mVcdFile, pr_0_reg_208, "pr_0_reg_208");
    sc_trace(mVcdFile, pool_1_reg_219, "pool_1_reg_219");
    sc_trace(mVcdFile, pc_0_reg_231, "pc_0_reg_231");
    sc_trace(mVcdFile, zext_ln53_4_fu_415_p1, "zext_ln53_4_fu_415_p1");
    sc_trace(mVcdFile, sext_ln49_fu_457_p1, "sext_ln49_fu_457_p1");
    sc_trace(mVcdFile, pool_fu_467_p8, "pool_fu_467_p8");
    sc_trace(mVcdFile, tmp_fu_247_p3, "tmp_fu_247_p3");
    sc_trace(mVcdFile, tmp_9_fu_259_p3, "tmp_9_fu_259_p3");
    sc_trace(mVcdFile, zext_ln53_fu_255_p1, "zext_ln53_fu_255_p1");
    sc_trace(mVcdFile, zext_ln53_1_fu_267_p1, "zext_ln53_1_fu_267_p1");
    sc_trace(mVcdFile, sub_ln53_fu_271_p2, "sub_ln53_fu_271_p2");
    sc_trace(mVcdFile, tmp_10_fu_287_p4, "tmp_10_fu_287_p4");
    sc_trace(mVcdFile, zext_ln53_2_fu_297_p1, "zext_ln53_2_fu_297_p1");
    sc_trace(mVcdFile, add_ln53_fu_301_p2, "add_ln53_fu_301_p2");
    sc_trace(mVcdFile, trunc_ln53_fu_306_p1, "trunc_ln53_fu_306_p1");
    sc_trace(mVcdFile, p_shl2_cast_fu_310_p3, "p_shl2_cast_fu_310_p3");
    sc_trace(mVcdFile, p_shl3_cast_fu_318_p3, "p_shl3_cast_fu_318_p3");
    sc_trace(mVcdFile, zext_ln46_fu_344_p1, "zext_ln46_fu_344_p1");
    sc_trace(mVcdFile, add_ln49_fu_360_p2, "add_ln49_fu_360_p2");
    sc_trace(mVcdFile, tmp_s_fu_366_p3, "tmp_s_fu_366_p3");
    sc_trace(mVcdFile, tmp_1_fu_378_p3, "tmp_1_fu_378_p3");
    sc_trace(mVcdFile, zext_ln49_fu_374_p1, "zext_ln49_fu_374_p1");
    sc_trace(mVcdFile, zext_ln49_1_fu_386_p1, "zext_ln49_1_fu_386_p1");
    sc_trace(mVcdFile, tmp_11_fu_396_p4, "tmp_11_fu_396_p4");
    sc_trace(mVcdFile, zext_ln53_3_fu_406_p1, "zext_ln53_3_fu_406_p1");
    sc_trace(mVcdFile, add_ln53_1_fu_410_p2, "add_ln53_1_fu_410_p2");
    sc_trace(mVcdFile, zext_ln47_fu_426_p1, "zext_ln47_fu_426_p1");
    sc_trace(mVcdFile, add_ln49_1_fu_442_p2, "add_ln49_1_fu_442_p2");
    sc_trace(mVcdFile, zext_ln49_2_fu_448_p1, "zext_ln49_2_fu_448_p1");
    sc_trace(mVcdFile, add_ln49_2_fu_452_p2, "add_ln49_2_fu_452_p2");
    sc_trace(mVcdFile, bitcast_ln49_fu_485_p1, "bitcast_ln49_fu_485_p1");
    sc_trace(mVcdFile, bitcast_ln49_1_fu_503_p1, "bitcast_ln49_1_fu_503_p1");
    sc_trace(mVcdFile, tmp_6_fu_489_p4, "tmp_6_fu_489_p4");
    sc_trace(mVcdFile, trunc_ln49_fu_499_p1, "trunc_ln49_fu_499_p1");
    sc_trace(mVcdFile, icmp_ln49_1_fu_527_p2, "icmp_ln49_1_fu_527_p2");
    sc_trace(mVcdFile, icmp_ln49_fu_521_p2, "icmp_ln49_fu_521_p2");
    sc_trace(mVcdFile, tmp_7_fu_507_p4, "tmp_7_fu_507_p4");
    sc_trace(mVcdFile, trunc_ln49_1_fu_517_p1, "trunc_ln49_1_fu_517_p1");
    sc_trace(mVcdFile, icmp_ln49_3_fu_545_p2, "icmp_ln49_3_fu_545_p2");
    sc_trace(mVcdFile, icmp_ln49_2_fu_539_p2, "icmp_ln49_2_fu_539_p2");
    sc_trace(mVcdFile, or_ln49_fu_533_p2, "or_ln49_fu_533_p2");
    sc_trace(mVcdFile, or_ln49_1_fu_551_p2, "or_ln49_1_fu_551_p2");
    sc_trace(mVcdFile, and_ln49_fu_557_p2, "and_ln49_fu_557_p2");
    sc_trace(mVcdFile, tmp_8_fu_242_p2, "tmp_8_fu_242_p2");
    sc_trace(mVcdFile, and_ln49_1_fu_563_p2, "and_ln49_1_fu_563_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

max_pool::~max_pool() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete cnn_fcmp_32ns_32nbkb_U1;
    delete cnn_mux_63_32_1_1_U2;
}

void max_pool::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_lv5_2;
}

void max_pool::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln40_fu_281_p2.read(), ap_const_lv1_1))) {
        c_0_reg_183 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln46_fu_348_p2.read()))) {
        c_0_reg_183 = c_fu_420_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln46_fu_348_p2.read()))) {
        pc_0_reg_231 = ap_const_lv2_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        pc_0_reg_231 = pc_reg_624.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_fu_332_p2.read()))) {
        pool_0_reg_195 = ap_const_lv32_800000;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_fu_430_p2.read()))) {
        pool_0_reg_195 = pool_1_reg_219.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln46_fu_348_p2.read()))) {
        pool_1_reg_219 = pool_0_reg_195.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        pool_1_reg_219 = pool_3_fu_569_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln42_fu_332_p2.read()))) {
        pr_0_reg_208 = ap_const_lv2_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_fu_430_p2.read()))) {
        pr_0_reg_208 = pr_reg_606.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln42_fu_332_p2.read(), ap_const_lv1_0))) {
        r_0_reg_171 = r_fu_338_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        r_0_reg_171 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        pc_reg_624 = pc_fu_436_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        pr_reg_606 = pr_fu_354_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        sext_ln53_reg_582 = sext_ln53_fu_277_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln46_fu_348_p2.read()))) {
        sub_ln49_reg_611 = sub_ln49_fu_390_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln40_fu_281_p2.read(), ap_const_lv1_1))) {
        sub_ln53_1_reg_590 = sub_ln53_1_fu_326_p2.read();
    }
}

void max_pool::thread_add_ln49_1_fu_442_p2() {
    add_ln49_1_fu_442_p2 = (!zext_ln47_fu_426_p1.read().is_01() || !c_0_reg_183.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln47_fu_426_p1.read()) + sc_biguint<5>(c_0_reg_183.read()));
}

void max_pool::thread_add_ln49_2_fu_452_p2() {
    add_ln49_2_fu_452_p2 = (!sub_ln49_reg_611.read().is_01() || !zext_ln49_2_fu_448_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln49_reg_611.read()) + sc_biguint<11>(zext_ln49_2_fu_448_p1.read()));
}

void max_pool::thread_add_ln49_fu_360_p2() {
    add_ln49_fu_360_p2 = (!zext_ln46_fu_344_p1.read().is_01() || !r_0_reg_171.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln46_fu_344_p1.read()) + sc_biguint<5>(r_0_reg_171.read()));
}

void max_pool::thread_add_ln53_1_fu_410_p2() {
    add_ln53_1_fu_410_p2 = (!sub_ln53_1_reg_590.read().is_01() || !zext_ln53_3_fu_406_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(sub_ln53_1_reg_590.read()) + sc_biguint<11>(zext_ln53_3_fu_406_p1.read()));
}

void max_pool::thread_add_ln53_fu_301_p2() {
    add_ln53_fu_301_p2 = (!zext_ln53_2_fu_297_p1.read().is_01() || !sext_ln53_reg_582.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln53_2_fu_297_p1.read()) + sc_bigint<9>(sext_ln53_reg_582.read()));
}

void max_pool::thread_and_ln49_1_fu_563_p2() {
    and_ln49_1_fu_563_p2 = (and_ln49_fu_557_p2.read() & tmp_8_fu_242_p2.read());
}

void max_pool::thread_and_ln49_fu_557_p2() {
    and_ln49_fu_557_p2 = (or_ln49_fu_533_p2.read() & or_ln49_1_fu_551_p2.read());
}

void max_pool::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void max_pool::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void max_pool::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void max_pool::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void max_pool::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void max_pool::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void max_pool::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln40_fu_281_p2.read(), ap_const_lv1_0)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void max_pool::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void max_pool::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln40_fu_281_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void max_pool::thread_bitcast_ln49_1_fu_503_p1() {
    bitcast_ln49_1_fu_503_p1 = pool_1_reg_219.read();
}

void max_pool::thread_bitcast_ln49_fu_485_p1() {
    bitcast_ln49_fu_485_p1 = pool_fu_467_p8.read();
}

void max_pool::thread_c_fu_420_p2() {
    c_fu_420_p2 = (!c_0_reg_183.read().is_01() || !ap_const_lv5_2.is_01())? sc_lv<5>(): (sc_biguint<5>(c_0_reg_183.read()) + sc_biguint<5>(ap_const_lv5_2));
}

void max_pool::thread_feature_0_address0() {
    feature_0_address0 =  (sc_lv<10>) (sext_ln49_fu_457_p1.read());
}

void max_pool::thread_feature_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        feature_0_ce0 = ap_const_logic_1;
    } else {
        feature_0_ce0 = ap_const_logic_0;
    }
}

void max_pool::thread_feature_1_address0() {
    feature_1_address0 =  (sc_lv<10>) (sext_ln49_fu_457_p1.read());
}

void max_pool::thread_feature_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        feature_1_ce0 = ap_const_logic_1;
    } else {
        feature_1_ce0 = ap_const_logic_0;
    }
}

void max_pool::thread_feature_2_address0() {
    feature_2_address0 =  (sc_lv<10>) (sext_ln49_fu_457_p1.read());
}

void max_pool::thread_feature_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        feature_2_ce0 = ap_const_logic_1;
    } else {
        feature_2_ce0 = ap_const_logic_0;
    }
}

void max_pool::thread_feature_3_address0() {
    feature_3_address0 =  (sc_lv<10>) (sext_ln49_fu_457_p1.read());
}

void max_pool::thread_feature_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        feature_3_ce0 = ap_const_logic_1;
    } else {
        feature_3_ce0 = ap_const_logic_0;
    }
}

void max_pool::thread_feature_4_address0() {
    feature_4_address0 =  (sc_lv<10>) (sext_ln49_fu_457_p1.read());
}

void max_pool::thread_feature_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        feature_4_ce0 = ap_const_logic_1;
    } else {
        feature_4_ce0 = ap_const_logic_0;
    }
}

void max_pool::thread_feature_5_address0() {
    feature_5_address0 =  (sc_lv<10>) (sext_ln49_fu_457_p1.read());
}

void max_pool::thread_feature_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        feature_5_ce0 = ap_const_logic_1;
    } else {
        feature_5_ce0 = ap_const_logic_0;
    }
}

void max_pool::thread_icmp_ln40_fu_281_p2() {
    icmp_ln40_fu_281_p2 = (!r_0_reg_171.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): (sc_biguint<5>(r_0_reg_171.read()) < sc_biguint<5>(ap_const_lv5_18));
}

void max_pool::thread_icmp_ln42_fu_332_p2() {
    icmp_ln42_fu_332_p2 = (!c_0_reg_183.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): (sc_biguint<5>(c_0_reg_183.read()) < sc_biguint<5>(ap_const_lv5_18));
}

void max_pool::thread_icmp_ln46_fu_348_p2() {
    icmp_ln46_fu_348_p2 = (!pr_0_reg_208.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(pr_0_reg_208.read() == ap_const_lv2_2);
}

void max_pool::thread_icmp_ln47_fu_430_p2() {
    icmp_ln47_fu_430_p2 = (!pc_0_reg_231.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(pc_0_reg_231.read() == ap_const_lv2_2);
}

void max_pool::thread_icmp_ln49_1_fu_527_p2() {
    icmp_ln49_1_fu_527_p2 = (!trunc_ln49_fu_499_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln49_fu_499_p1.read() == ap_const_lv23_0);
}

void max_pool::thread_icmp_ln49_2_fu_539_p2() {
    icmp_ln49_2_fu_539_p2 = (!tmp_7_fu_507_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_7_fu_507_p4.read() != ap_const_lv8_FF);
}

void max_pool::thread_icmp_ln49_3_fu_545_p2() {
    icmp_ln49_3_fu_545_p2 = (!trunc_ln49_1_fu_517_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln49_1_fu_517_p1.read() == ap_const_lv23_0);
}

void max_pool::thread_icmp_ln49_fu_521_p2() {
    icmp_ln49_fu_521_p2 = (!tmp_6_fu_489_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_6_fu_489_p4.read() != ap_const_lv8_FF);
}

void max_pool::thread_or_ln49_1_fu_551_p2() {
    or_ln49_1_fu_551_p2 = (icmp_ln49_3_fu_545_p2.read() | icmp_ln49_2_fu_539_p2.read());
}

void max_pool::thread_or_ln49_fu_533_p2() {
    or_ln49_fu_533_p2 = (icmp_ln49_1_fu_527_p2.read() | icmp_ln49_fu_521_p2.read());
}

void max_pool::thread_p_shl2_cast_fu_310_p3() {
    p_shl2_cast_fu_310_p3 = esl_concat<7,4>(trunc_ln53_fu_306_p1.read(), ap_const_lv4_0);
}

void max_pool::thread_p_shl3_cast_fu_318_p3() {
    p_shl3_cast_fu_318_p3 = esl_concat<9,2>(add_ln53_fu_301_p2.read(), ap_const_lv2_0);
}

void max_pool::thread_pc_fu_436_p2() {
    pc_fu_436_p2 = (!pc_0_reg_231.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(pc_0_reg_231.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void max_pool::thread_pool_3_fu_569_p3() {
    pool_3_fu_569_p3 = (!and_ln49_1_fu_563_p2.read()[0].is_01())? sc_lv<32>(): ((and_ln49_1_fu_563_p2.read()[0].to_bool())? pool_fu_467_p8.read(): pool_1_reg_219.read());
}

void max_pool::thread_pool_feature_address0() {
    pool_feature_address0 =  (sc_lv<10>) (zext_ln53_4_fu_415_p1.read());
}

void max_pool::thread_pool_feature_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        pool_feature_ce0 = ap_const_logic_1;
    } else {
        pool_feature_ce0 = ap_const_logic_0;
    }
}

void max_pool::thread_pool_feature_d0() {
    pool_feature_d0 = pool_0_reg_195.read();
}

void max_pool::thread_pool_feature_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln46_fu_348_p2.read()))) {
        pool_feature_we0 = ap_const_logic_1;
    } else {
        pool_feature_we0 = ap_const_logic_0;
    }
}

void max_pool::thread_pr_fu_354_p2() {
    pr_fu_354_p2 = (!pr_0_reg_208.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(pr_0_reg_208.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void max_pool::thread_r_fu_338_p2() {
    r_fu_338_p2 = (!r_0_reg_171.read().is_01() || !ap_const_lv5_2.is_01())? sc_lv<5>(): (sc_biguint<5>(r_0_reg_171.read()) + sc_biguint<5>(ap_const_lv5_2));
}

void max_pool::thread_sext_ln49_fu_457_p1() {
    sext_ln49_fu_457_p1 = esl_sext<64,11>(add_ln49_2_fu_452_p2.read());
}

void max_pool::thread_sext_ln53_fu_277_p1() {
    sext_ln53_fu_277_p1 = esl_sext<9,8>(sub_ln53_fu_271_p2.read());
}

void max_pool::thread_sub_ln49_fu_390_p2() {
    sub_ln49_fu_390_p2 = (!zext_ln49_fu_374_p1.read().is_01() || !zext_ln49_1_fu_386_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln49_fu_374_p1.read()) - sc_biguint<11>(zext_ln49_1_fu_386_p1.read()));
}

void max_pool::thread_sub_ln53_1_fu_326_p2() {
    sub_ln53_1_fu_326_p2 = (!p_shl2_cast_fu_310_p3.read().is_01() || !p_shl3_cast_fu_318_p3.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl2_cast_fu_310_p3.read()) - sc_biguint<11>(p_shl3_cast_fu_318_p3.read()));
}

void max_pool::thread_sub_ln53_fu_271_p2() {
    sub_ln53_fu_271_p2 = (!zext_ln53_fu_255_p1.read().is_01() || !zext_ln53_1_fu_267_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln53_fu_255_p1.read()) - sc_biguint<8>(zext_ln53_1_fu_267_p1.read()));
}

void max_pool::thread_tmp_10_fu_287_p4() {
    tmp_10_fu_287_p4 = r_0_reg_171.read().range(4, 1);
}

void max_pool::thread_tmp_11_fu_396_p4() {
    tmp_11_fu_396_p4 = c_0_reg_183.read().range(4, 1);
}

void max_pool::thread_tmp_1_fu_378_p3() {
    tmp_1_fu_378_p3 = esl_concat<5,3>(add_ln49_fu_360_p2.read(), ap_const_lv3_0);
}

void max_pool::thread_tmp_6_fu_489_p4() {
    tmp_6_fu_489_p4 = bitcast_ln49_fu_485_p1.read().range(30, 23);
}

void max_pool::thread_tmp_7_fu_507_p4() {
    tmp_7_fu_507_p4 = bitcast_ln49_1_fu_503_p1.read().range(30, 23);
}

void max_pool::thread_tmp_9_fu_259_p3() {
    tmp_9_fu_259_p3 = esl_concat<3,2>(feature_offset.read(), ap_const_lv2_0);
}

void max_pool::thread_tmp_fu_247_p3() {
    tmp_fu_247_p3 = esl_concat<3,4>(feature_offset.read(), ap_const_lv4_0);
}

void max_pool::thread_tmp_s_fu_366_p3() {
    tmp_s_fu_366_p3 = esl_concat<5,5>(add_ln49_fu_360_p2.read(), ap_const_lv5_0);
}

void max_pool::thread_trunc_ln49_1_fu_517_p1() {
    trunc_ln49_1_fu_517_p1 = bitcast_ln49_1_fu_503_p1.read().range(23-1, 0);
}

void max_pool::thread_trunc_ln49_fu_499_p1() {
    trunc_ln49_fu_499_p1 = bitcast_ln49_fu_485_p1.read().range(23-1, 0);
}

void max_pool::thread_trunc_ln53_fu_306_p1() {
    trunc_ln53_fu_306_p1 = add_ln53_fu_301_p2.read().range(7-1, 0);
}

void max_pool::thread_zext_ln46_fu_344_p1() {
    zext_ln46_fu_344_p1 = esl_zext<5,2>(pr_0_reg_208.read());
}

void max_pool::thread_zext_ln47_fu_426_p1() {
    zext_ln47_fu_426_p1 = esl_zext<5,2>(pc_0_reg_231.read());
}

void max_pool::thread_zext_ln49_1_fu_386_p1() {
    zext_ln49_1_fu_386_p1 = esl_zext<11,8>(tmp_1_fu_378_p3.read());
}

void max_pool::thread_zext_ln49_2_fu_448_p1() {
    zext_ln49_2_fu_448_p1 = esl_zext<11,5>(add_ln49_1_fu_442_p2.read());
}

void max_pool::thread_zext_ln49_fu_374_p1() {
    zext_ln49_fu_374_p1 = esl_zext<11,10>(tmp_s_fu_366_p3.read());
}

void max_pool::thread_zext_ln53_1_fu_267_p1() {
    zext_ln53_1_fu_267_p1 = esl_zext<8,5>(tmp_9_fu_259_p3.read());
}

void max_pool::thread_zext_ln53_2_fu_297_p1() {
    zext_ln53_2_fu_297_p1 = esl_zext<9,4>(tmp_10_fu_287_p4.read());
}

void max_pool::thread_zext_ln53_3_fu_406_p1() {
    zext_ln53_3_fu_406_p1 = esl_zext<11,4>(tmp_11_fu_396_p4.read());
}

void max_pool::thread_zext_ln53_4_fu_415_p1() {
    zext_ln53_4_fu_415_p1 = esl_zext<64,11>(add_ln53_1_fu_410_p2.read());
}

void max_pool::thread_zext_ln53_fu_255_p1() {
    zext_ln53_fu_255_p1 = esl_zext<8,7>(tmp_fu_247_p3.read());
}

void max_pool::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln40_fu_281_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln42_fu_332_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln46_fu_348_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln47_fu_430_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        default : 
            ap_NS_fsm = "XXXXXX";
            break;
    }
}

}
