// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 145;
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


   SC_CTOR(dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b1101110101010001111111111111111111000011001100110000000000000000000010001011001011111111111111110001110011011111010000000000000000010010001110111";
        ram[1] = "0b1110111000000000000000000000000000110110011010011111000000000000011010000000000000011111111111111110111111111111100000000000001001100000110100010";
        ram[2] = "0b1101101001101011000000000000000001010111100101010111000000000000101101111100110011011111111111111010000000101111011111111111111111011100101111101";
        ram[3] = "0b1011111110100110001000000000000001010100110110101110000000000000010110110011110001011111111111110010011010000001001111111111110000100011100100101";
        ram[4] = "0b0000100110011110011111111111111110010100000000000000111111111111001000110010100111100000000000000010111111111111110000000000000011011111110101111";
        ram[5] = "0b0111011011001101111100000000000000001001100111101110111111111111111001011100010110011111111111110100010100001101110000000000011000010011110010010";
        ram[6] = "0b1111100001100111001110000000000001100011000000111011000000000000101111000111101011000000000000100011000001110011101111111111100111111010100000010";
        ram[7] = "0b1110110110011000001010000000000001000100111010011010000000000000100101111111111001111111111111111101001010010001010000000000000000010001010101010";
        ram[8] = "0b0001100110101000111010000000000001000100000000000000000000000000011110010011111000000000000000000010111111111111110000000000000000001101101100000";
        ram[9] = "0b0001011111011100100000000000000000111000100000010110111111111111000101110010000011100000000000111100111100110101100000000000000010101001101010100";


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


SC_MODULE(dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 145;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_31_10_5_3_0_ap_fixed_31_11_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
