// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_H__
#define __dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 177;
  static const unsigned AddressRange = 9;
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


   SC_CTOR(dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_ram) {
        ram[0] = "0b010000001101011100101000000000001110010111011110000001111111111000001000000101001111000000000011010110100110011000000000000001010110011010111011100000000000001000000111101001110";
        ram[1] = "0b000000000100100010000011111111110110100101001111101111111111111110110101101010000100111111111110001111011110011001111111111110110000111010100100101111111111110010111000100110010";
        ram[2] = "0b000100110000001110000011111111111011001101001000011110000000000000000001010010110100000000000011111000010111000101111111111110001001101010100111111111111111011001010111011000101";
        ram[3] = "0b010100101110000000100000000000000111001001001010000011111111111100110110010101011101000000000100000101100000110010000000000001100010101101111000000000000001001000111011110001011";
        ram[4] = "0b111111100010110000000111111111110110100011111000000011111111111010010110100100111111111111111011101001000100100000011111111111000011100001001101110000000000011101111101111110110";
        ram[5] = "0b111111001000001000110111111111111101101000000011001100000000000111000001101110100001111111111100100111000110001110011111111111010011101011101001001111111111011110001001111001110";
        ram[6] = "0b010100001111101011111011111111110001111010000100111101111111111011010110000100110100000000000000000101000000100010111111111111111011000000100000001111111110111111110010000010101";
        ram[7] = "0b011010000010101011111100000000000010001100110011011111111111111000110100001010111110111111111011101001111001010111000000000001010100101000010011000000000000011010101101111011111";
        ram[8] = "0b000110011001010110000111111111111111000010010101101100000000000011011001011001100100111111111101110001010010110100111111111101101011010110100011001111111111010011100110110100110";


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


SC_MODULE(dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V) {


static const unsigned DataWidth = 177;
static const unsigned AddressRange = 9;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_ram* meminst;


SC_CTOR(dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V) {
meminst = new dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_ram("dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_rf_leq_nin_ap_ufixed_ap_fixed_config2_mult_0_0_0_0_0_0_0_w2_V() {
    delete meminst;
}


};//endmodule
#endif
