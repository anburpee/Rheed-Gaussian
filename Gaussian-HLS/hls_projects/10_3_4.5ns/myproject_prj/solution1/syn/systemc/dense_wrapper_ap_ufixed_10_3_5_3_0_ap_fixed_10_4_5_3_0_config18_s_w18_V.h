// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_H__
#define __dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 97;
  static const unsigned AddressRange = 15;
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


   SC_CTOR(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_ram) {
        ram[0] = "0b1101000000000010000000111000000001010111110011011110011111111110100111110011000000010011111111000";
        ram[1] = "0b0100001000001111011111101110000010000111111110100001100011111100011111111000011111101100000001110";
        ram[2] = "0b1100010000000010000000101100000011101111111111100000000100000011100111110110111111111101111110000";
        ram[3] = "0b0000010111111010011111111001111101110111111101111111100011111110100000000101111111110110000010100";
        ram[4] = "0b1100111000000000011111010101111101010111111111000000001010000000110000001000100000000101111001001";
        ram[5] = "0b1010010000000100100000001001111110001000010011111111111100000000110000000000000000000011111110111";
        ram[6] = "0b1100111000001001000000010011111111111111110000011110111100000100010111111010011111010101111101001";
        ram[7] = "0b1001101000000011011111010101111110100000000010011110010000000000011000001010000000101101111101010";
        ram[8] = "0b0000001000001111000000100101111110001111110110000001001000000000100000001001011111110101111110101";
        ram[9] = "0b1111010000010010111111010111111111100111111010100000100101111101110000010001000000000110000001101";
        ram[10] = "0b0000110000010101011110111001111101000000001001011111001101111011011000000000011110101100000001011";
        ram[11] = "0b0000101111111101111111111001111011000111111011100001000101111110110111111101000000101110000000111";
        ram[12] = "0b1110101111111110111111101000000000111111111010011110111100000000100000000011000000011000000000111";
        ram[13] = "0b1110011000000000111111110011111111101111110110011111101110000000011111111110100000001000000000011";
        ram[14] = "0b1110000000000010111110110000000001101000001001011111111100000001100111111000100000011001111011111";


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


SC_MODULE(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V) {


static const unsigned DataWidth = 97;
static const unsigned AddressRange = 15;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V) {
meminst = new dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_ram("dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config18_s_w18_V() {
    delete meminst;
}


};//endmodule
#endif
