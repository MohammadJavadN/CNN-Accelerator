// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_layer_denseeOg_H__
#define __dense_layer_denseeOg_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_layer_denseeOg_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 10;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_layer_denseeOg_ram) {
        ram[0] = "0b00111110010011100011000110101111";
        ram[1] = "0b00111110101000110110011111111001";
        ram[2] = "0b10111110010011110011011011001000";
        ram[3] = "0b10111101010000110011110101111110";
        ram[4] = "0b00111101101011000101110101110111";
        ram[5] = "0b00111100110100100001111000100011";
        ram[6] = "0b10111101110010111011001001000001";
        ram[7] = "0b10111101000111101111001101110011";
        ram[8] = "0b00111100110010100100010010010000";
        ram[9] = "0b10111110001001101011001010111110";


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


SC_MODULE(dense_layer_denseeOg) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_layer_denseeOg_ram* meminst;


SC_CTOR(dense_layer_denseeOg) {
meminst = new dense_layer_denseeOg_ram("dense_layer_denseeOg_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_layer_denseeOg() {
    delete meminst;
}


};//endmodule
#endif
