// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V_H__
#define __dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 104;
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


   SC_CTOR(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V_ram) {
        ram[0] = "0b01000011111111111010000100000010010001100111110111101111111111111100100000011111011111111011101010001001";
        ram[1] = "0b11111111110100001000111110111110110000000110111111110011110010000001100001110001100000001000000011111111";
        ram[2] = "0b11100111110111111011001001011101111110100111110100001010000010000000011111101110111111111100000110000010";
        ram[3] = "0b11010100000101111010000000011111000000001111010111110111110000000101100000010000011000101011111010000101";
        ram[4] = "0b00010011111010000010111100100010000000110111111100000011111000000000111110111110110111110011101101111111";
        ram[5] = "0b00110000001010000101111110111110111110110111101000011111110011000100000000100001001000110000000001111110";
        ram[6] = "0b00011100010110000010000000111111011110101111010111101010000000000000100010100001100111101100010010000110";
        ram[7] = "0b11111111111011110110000001011110111111000111010111110100000001000000100001100000101000010000000011111111";
        ram[8] = "0b11111011110101111101111010111100110000000111101011101101111101111100111111001111110000111000010101111111";
        ram[9] = "0b11011111100100000000000000111101111111001000110000010011101110000001000000000000111000001011100100000111";


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


SC_MODULE(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V) {


static const unsigned DataWidth = 104;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V) {
meminst = new dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V_ram("dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config15_s_w15_V() {
    delete meminst;
}


};//endmodule
#endif
