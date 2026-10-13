// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 117;
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


   SC_CTOR(dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b110111010101001001111111111100001100110011000000000000001000101100111111111111000111001110000000000000000001001000111";
        ram[1] = "0b111011100000000000000000000011011001101010000000000001101000000000011111111111111100000000000000000000100110000011010";
        ram[2] = "0b110110100110101100000000000101011110010101000000000010110111110011011111111111101000000011001111111111111101110011000";
        ram[3] = "0b101111111010011000000000000101010011011011000000000001011011001111011111111111001001101000001111111111000010001110010";
        ram[4] = "0b000010011001111011111111111001010000000000111111111100100011001010100000000000001100000000000000000000001101111111011";
        ram[5] = "0b011101101100111000000000000000100110011111111111111111100101110001111111111111010001010000110000000001100001001111001";
        ram[6] = "0b111110000110011100000000000110001100000100000000000010111100011110100000000010001100000111011111111110011111101010000";
        ram[7] = "0b111011011001100000000000000100010011101010000000000010010111111111111111111111110100101001000000000000000001000101011";
        ram[8] = "0b000110011010100100000000000100010000000000000000000001111001001111100000000000001100000000000000000000000000110110110";
        ram[9] = "0b000101111101110010000000000011100010000001111111111100010111001000000000000011110011110011010000000000001010100110101";


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


SC_MODULE(dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 117;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_25_8_5_3_0_ap_fixed_25_9_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
