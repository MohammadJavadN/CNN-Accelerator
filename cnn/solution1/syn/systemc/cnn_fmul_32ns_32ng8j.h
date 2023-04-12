// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __cnn_fmul_32ns_32ng8j__HH__
#define __cnn_fmul_32ns_32ng8j__HH__
#include "ACMP_fmul_comb.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(cnn_fmul_32ns_32ng8j) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fmul_comb<ID, 1, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_fmul_comb_U;

    SC_CTOR(cnn_fmul_32ns_32ng8j):  ACMP_fmul_comb_U ("ACMP_fmul_comb_U") {
        ACMP_fmul_comb_U.din0(din0);
        ACMP_fmul_comb_U.din1(din1);
        ACMP_fmul_comb_U.dout(dout);

    }

};

#endif //