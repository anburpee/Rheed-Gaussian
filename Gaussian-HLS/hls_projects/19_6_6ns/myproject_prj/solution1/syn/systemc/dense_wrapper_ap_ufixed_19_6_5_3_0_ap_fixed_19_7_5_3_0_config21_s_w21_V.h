// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 89;
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


   SC_CTOR(dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b11011101010101111111110000110011000000000000100011011111111100011100110000000000000100100";
        ram[1] = "0b11101110000000000000001101100111000000000110100000011111111111110000000000000010011000010";
        ram[2] = "0b11011010011010000000010101111001000000001011011111011111111110100000011111111111110111001";
        ram[3] = "0b10111111101010000000010101001110000000000101101101011111111100100110101111111100001000111";
        ram[4] = "0b00001001101001111111100101000000111111110010001100100000000000110000000000000000111000000";
        ram[5] = "0b01110110110100000000000010011010111111111110010111011111111101000101000000000110000101000";
        ram[6] = "0b11111000011010000000011000110000000000001011110010000000001000110000101111111001111110101";
        ram[7] = "0b11101101100110000000010001001111000000001001100000011111111111010010100000000000000100011";
        ram[8] = "0b00011001101010000000010001000000000000000111100101000000000000110000000000000000000011011";
        ram[9] = "0b00010111111000000000001110001000111111110001011100100000001111001111010000000000101010011";


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


SC_MODULE(dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 89;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_19_6_5_3_0_ap_fixed_19_7_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
