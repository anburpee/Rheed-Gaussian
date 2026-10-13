// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 103;
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


   SC_CTOR(dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b1101110101010011111111111000011001101000000000000010001011011111111110001110011100000000000000010010010";
        ram[1] = "0b1110111000000000000000000110110011010000000000011010000000011111111111111000000000000000001001100000111";
        ram[2] = "0b1101101001101010000000001010111100101000000000101101111101011111111111010000000111111111111111011100110";
        ram[3] = "0b1011111110100110000000001010100110111000000000010110110100011111111110010011010001111111110000100011101";
        ram[4] = "0b0000100110011111111111110010100000000111111111001000110010100000000000011000000000000000000011011111111";
        ram[5] = "0b0111011011001110000000000001001101000111111111111001011100111111111110100010100010000000011000010011110";
        ram[6] = "0b1111100001101000000000001100011000001000000000101111000111100000000100011000001111111111100111111010100";
        ram[7] = "0b1110110110011000000000001000100111010000000000100110000000011111111111101001010010000000000000010001011";
        ram[8] = "0b0001100110101000000000001000100000000000000000011110010100000000000000011000000000000000000000001101110";
        ram[9] = "0b0001011111011100000000000111000100000111111111000101110010000000000111100111100110000000000010101001101";


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


SC_MODULE(dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 103;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_22_7_5_3_0_ap_fixed_22_8_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
