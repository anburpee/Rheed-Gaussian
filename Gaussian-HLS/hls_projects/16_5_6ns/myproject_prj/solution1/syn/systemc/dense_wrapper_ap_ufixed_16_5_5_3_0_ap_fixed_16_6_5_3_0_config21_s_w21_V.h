// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 75;
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


   SC_CTOR(dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b110111010111111111100001101000000000001000111111111000111010000000000001001";
        ram[1] = "0b111011100000000000011011010000000001101000011111111111100000000000100110000";
        ram[2] = "0b110110100110000000101011110000000010111000011111111101000001111111111101110";
        ram[3] = "0b101111111010000000101010011000000001011011011111111001001111111111000010010";
        ram[4] = "0b000010011011111111001010000111111100100011000000000001100000000000001110000";
        ram[5] = "0b011101101100000000000100110111111111100110011111111010001010000001100001010";
        ram[6] = "0b111110000110000000110001100000000010111100100000010001100001111110011111101";
        ram[7] = "0b111011011010000000100010100000000010011000011111111110100110000000000001001";
        ram[8] = "0b000110011010000000100010000000000001111001000000000001100000000000000000111";
        ram[9] = "0b000101111110000000011100010111111100010111000000011110011110000000001010101";


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


SC_MODULE(dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 75;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_16_5_5_3_0_ap_fixed_16_6_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
