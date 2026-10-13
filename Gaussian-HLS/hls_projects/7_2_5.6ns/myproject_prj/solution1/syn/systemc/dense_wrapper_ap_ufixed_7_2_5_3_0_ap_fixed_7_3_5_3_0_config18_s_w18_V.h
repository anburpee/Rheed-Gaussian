// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_H__
#define __dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 68;
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


   SC_CTOR(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_ram) {
        ram[0] = "0b11010000000100001110000011111101011101001111101111101000000101111110";
        ram[1] = "0b01000000100011111100000100111111100011001111001111110011111010000100";
        ram[2] = "0b11001000000100001010000111000000000000010000111111101100000001111100";
        ram[3] = "0b00001111110111111111111100111111111111001111101000001111111110000101";
        ram[4] = "0b11010000000011110111111010000000000000010000001000010000000001110010";
        ram[5] = "0b10101000001000000011111100000101000000000000001000000000000001111110";
        ram[6] = "0b11010000010000000100000000111100011101110001001111110111110101111010";
        ram[7] = "0b10011000000111110111111101000000111100100000001000010100001011111010";
        ram[8] = "0b00000000011100001001111100111101100010010000001000010111111111111101";
        ram[9] = "0b11110000100111110111111111111110100001011111100000100000000010000011";
        ram[10] = "0b00001000101011101111111010000010111110101110111000000011101010000011";
        ram[11] = "0b00001111111111111111110110111111000010011111101111111100001100000010";
        ram[12] = "0b11101111111111111010000010111110111110000000001000001000000110000010";
        ram[13] = "0b11101000000011111101111111111101111111100000001111111100000010000001";
        ram[14] = "0b11100000000111101100000011000010100000000000011111110000000111111000";


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


SC_MODULE(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V) {


static const unsigned DataWidth = 68;
static const unsigned AddressRange = 15;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V) {
meminst = new dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_ram("dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config18_s_w18_V() {
    delete meminst;
}


};//endmodule
#endif
