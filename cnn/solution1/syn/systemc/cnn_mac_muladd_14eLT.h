// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __cnn_mac_muladd_14eLT__HH__
#define __cnn_mac_muladd_14eLT__HH__
#include "simcore_mac_5.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int dout_WIDTH>
SC_MODULE(cnn_mac_muladd_14eLT) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    simcore_mac_5<ID, 1, din0_WIDTH, din1_WIDTH, din2_WIDTH, dout_WIDTH> simcore_mac_5_U;

    SC_CTOR(cnn_mac_muladd_14eLT):  simcore_mac_5_U ("simcore_mac_5_U") {
        simcore_mac_5_U.din0(din0);
        simcore_mac_5_U.din1(din1);
        simcore_mac_5_U.din2(din2);
        simcore_mac_5_U.dout(dout);

    }

};

#endif //
