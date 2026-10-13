// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 131;
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


   SC_CTOR(dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b11011101010100100001111111111110000110011001100000000000000000100010110011011111111111100011100110111110000000000000000100100011110";
        ram[1] = "0b11101110000000000000000000000001101100110101000000000000000110100000000000011111111111111101111111111110000000000010011000001101000";
        ram[2] = "0b11011010011010110000000000000010101111001010110000000000001011011111001101011111111111110100000001011111111111111111110111001011111";
        ram[3] = "0b10111111101001100010000000000010101001101101011000000000000101101100111100011111111111100100110100000011111111111100001000111001001";
        ram[4] = "0b00001001100111101001111111111100101000000000000111111111110010001100101010000000000000000110000000000000000000000000110111111101100";
        ram[5] = "0b01110110110011100000000000000000010011001111100111111111111110010111000101111111111111101000101000011100000000000110000100111100101";
        ram[6] = "0b11111000011001110100000000000011000110000001111000000000001011110001111010100000000001000110000011101001111111111001111110101000001";
        ram[7] = "0b11101101100110000010000000000010001001110100110000000000001001011111111110111111111111111010010100100010000000000000000100010101011";
        ram[8] = "0b00011001101010001110000000000010001000000000000000000000000111100100111110000000000000000110000000000000000000000000000011011011000";
        ram[9] = "0b00010111110111001000000000000001110001000000110111111111110001011100100001000000000001111001111001101100000000000000101010011010101";


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


SC_MODULE(dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 131;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_28_9_5_3_0_ap_fixed_28_10_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
