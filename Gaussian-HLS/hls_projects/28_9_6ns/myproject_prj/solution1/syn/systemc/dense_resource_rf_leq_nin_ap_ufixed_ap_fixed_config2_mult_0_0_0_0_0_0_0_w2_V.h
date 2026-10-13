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

  static const unsigned DataWidth = 160;
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
        ram[0] = "0b0100000011010111001100000000011100101110111100001111111110000010000001010100000000000110101101001100110000000000010101100110101111000000000000010000001111010011";
        ram[1] = "0b0000000001001000100011111111101101001010011111101111111111101101011010100001111111111100011110111100110111111111101100001110101001001111111111100101110001001100";
        ram[2] = "0b0001001100000011100011111111110110011010010001000000000000000000010100101101000000000111110000101110001111111111100010011010101010001111111110110010101110110001";
        ram[3] = "0b0101001011100000001000000000001110010010010100001111111111001101100101010111000000001000001011000001100100000000011000101011011110000000000010010001110111100011";
        ram[4] = "0b1111111000101100000011111111101101000111110000001111111110100101101001010000111111110111010010001001000011111111110000111000010011100000000000111011111011111110";
        ram[5] = "0b1111110010000010001111111111111011010000000110100000000001110000011011101000111111111001001110001100011111111111110100111010111010011111111110111100010011110011";
        ram[6] = "0b0101000011111010111111111111100011110100001001111111111110110101100001001101000000000000001010000001000111111111111110110000001000001111111101111111100100000101";
        ram[7] = "0b0110100000101011000000000000000100011001100111001111111110001101000010101111111111110111010011110010110000000000010101001010000100110000000000110101011011111000";
        ram[8] = "0b0001100110010101100011111111111110000100101011010000000000110110010110011001111111111011100010100101101011111111011010110101101000111111111110100111001101101001";


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


static const unsigned DataWidth = 160;
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
