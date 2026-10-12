// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 47;
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


   SC_CTOR(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b11011111111110001000000000111111100100000000001";
        ram[1] = "0b11101110000001110000000110111111111110000010011";
        ram[2] = "0b11011010000010110000001011111111110101111111111";
        ram[3] = "0b11000000000010101000000101111111100101111100001";
        ram[4] = "0b00001011111100101111110010000000000110000000111";
        ram[5] = "0b01110110000000010111111110111111101000000110001";
        ram[6] = "0b11111000000011001000001100000001000111111010000";
        ram[7] = "0b11101110000010001000001001111111111010000000001";
        ram[8] = "0b00011010000010001000000111100000000110000000000";
        ram[9] = "0b00011000000001110111110001100001111010000000101";


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


SC_MODULE(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 47;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
