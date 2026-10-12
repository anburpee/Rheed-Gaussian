// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 61;
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


   SC_CTOR(dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b1101110111111111000011000000000010011111110001110000000000010";
        ram[1] = "0b1110111000000000110110000000011010011111111111000000001001100";
        ram[2] = "0b1101101010000001011000000000101110011111111010001111111111100";
        ram[3] = "0b1011111110000001010101000000010111011111110010101111110000100";
        ram[4] = "0b0000100111111110010100111111001001000000000011000000000011100";
        ram[5] = "0b0111011100000000001010111111111001111111110100010000011000010";
        ram[6] = "0b1111100010000001100011000000101111000000100011001111100111111";
        ram[7] = "0b1110110110000001000101000000100110011111111101010000000000010";
        ram[8] = "0b0001100110000001000100000000011110100000000011000000000000010";
        ram[9] = "0b0001100000000000111001111111000110000000111101000000000010101";


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


SC_MODULE(dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 61;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_13_4_5_3_0_ap_fixed_13_5_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
