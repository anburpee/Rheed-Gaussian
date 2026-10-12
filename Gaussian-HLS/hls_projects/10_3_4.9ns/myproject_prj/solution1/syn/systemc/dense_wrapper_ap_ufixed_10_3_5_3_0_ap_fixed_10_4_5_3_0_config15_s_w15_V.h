// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_H__
#define __dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 147;
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


   SC_CTOR(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_ram) {
        ram[0] = "0b011111011111110111111100111000001111100001001010000110001111111001011110110101111111010111110010100000001001111101100111111011011110100110000100011";
        ram[1] = "0b111101111111010010000011110111111001111111011011111111111111011110111111000111111001001000000110000000110110000110010000000100100000001001111111101";
        ram[2] = "0b110010011111011101111101100000100100111110110101111001111111111010100000100110000001000000000000111111101111111011110111111110100000010100000001000";
        ram[3] = "0b101010100000010011111101001000000000111111100100000000110111101001111111011101111000000000010110100000000110000001101000010011011111101100000010011";
        ram[4] = "0b000111111111100100000001000111110010000001000000000011000111111110100000001101111011111000000010011111010111111010110111110111111110110101111111011";
        ram[5] = "0b011000100000100110000010011111111011011111011011111010110111110100100001111011111001011000010000100000001100000100010000010111111111111111111111001";
        ram[6] = "0b001110100001011100000000111000000010011111100111111010101111101010011110100101111111110000000010000001010100000110000111110101100001000110000011001";
        ram[7] = "0b111110011111101001111011001000000100111111011011111100000111101001011111010000000000011000000010100000101110000010011000001001000000001101111111110";
        ram[8] = "0b111011111111010001111110010111101011011110011000000000001111110101011110110101111110100111110011011111100001111110110000011101000001010001111111010";
        ram[9] = "0b101110111110001100000000010000000010111110111011111100101000011000100001001011110110111000000100100000000000000011011000000100111110010100000011100";


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


SC_MODULE(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V) {


static const unsigned DataWidth = 147;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V) {
meminst = new dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_ram("dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_10_3_5_3_0_ap_fixed_10_4_5_3_0_config15_s_w15_V() {
    delete meminst;
}


};//endmodule
#endif
