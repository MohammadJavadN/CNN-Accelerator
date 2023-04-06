// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __cnn_conv2_weightsdIJ_H__
#define __cnn_conv2_weightsdIJ_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct cnn_conv2_weightsdIJ_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 6;
  static const unsigned AddressWidth = 3;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(cnn_conv2_weightsdIJ_ram) {
        ram[0] = "0b10111110001001010100011000011011";
        ram[1] = "0b00111100011101101110100101001001";
        ram[2] = "0b00111110010001110011010111011011";
        ram[3] = "0b10111110011001000100100010110001";
        ram[4] = "0b00111110001100110011001000001100";
        ram[5] = "0b00111101100101100001011000100101";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(cnn_conv2_weightsdIJ) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 6;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


cnn_conv2_weightsdIJ_ram* meminst;


SC_CTOR(cnn_conv2_weightsdIJ) {
meminst = new cnn_conv2_weightsdIJ_ram("cnn_conv2_weightsdIJ_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~cnn_conv2_weightsdIJ() {
    delete meminst;
}


};//endmodule
#endif