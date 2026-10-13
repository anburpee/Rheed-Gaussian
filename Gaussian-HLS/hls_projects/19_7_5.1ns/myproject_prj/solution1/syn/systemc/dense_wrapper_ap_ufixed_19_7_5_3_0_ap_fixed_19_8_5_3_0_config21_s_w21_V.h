// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 88;
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


   SC_CTOR(dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b1101110101011111111111000011010000000000000010001111111111110001110100000000000000010010";
        ram[1] = "0b1110111000000000000000110110011000000000011010000011111111111111000000000000001001100001";
        ram[2] = "0b1101101001110000000001010111101000000000101101111111111111111010000001111111111111011101";
        ram[3] = "0b1011111110100000000001010100111000000000010110110111111111110010011011111111110000100100";
        ram[4] = "0b0000100110101111111110010100000111111111001000110100000000000011000000000000000011100000";
        ram[5] = "0b0111011011010000000000001001101111111111111001011111111111110100010100000000011000010100";
        ram[6] = "0b1111100001100000000001100011000000000000101111001000000000100011000011111111100111111011";
        ram[7] = "0b1110110110100000000001000100111000000000100110000011111111111101001010000000000000010001";
        ram[8] = "0b0001100110110000000001000100000000000000011110010100000000000011000000000000000000001110";
        ram[9] = "0b0001011111100000000000111000100111111111000101110100000000111100111100000000000010101010";


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


SC_MODULE(dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 88;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_19_7_5_3_0_ap_fixed_19_8_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
