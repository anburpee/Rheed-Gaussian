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

  static const unsigned DataWidth = 143;
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
        ram[0] = "0b01000000110101110100000000111001011101111001111111100000100000010101000000001101011010011001100000000101011001101011110000000000100000011110101";
        ram[1] = "0b00000000010010001011111111011010010100111111111111111011010110101000111111111000111101111001111111111011000011101010011111111111001011100010011";
        ram[2] = "0b00010011000000111011111111101100110100100010000000000000000101001011000000001111100001011100111111111000100110101010101111111101100101011101100";
        ram[3] = "0b01010010111000000000000000011100100100101001111111110011011001010110000000010000010110000011000000000110001010110111100000000100100011101111001";
        ram[4] = "0b11111110001011000011111111011010001111100001111111101001011010010100111111101110100100010010011111111100001110000100110000000001110111110111111";
        ram[5] = "0b11111100100000100111111111110110100000001100000000011100000110111010111111110010011100011001011111111101001110101110101111111101111000100111101";
        ram[6] = "0b01010000111110110011111111000111101000010101111111101101011000010011000000000000010100000010011111111111101100000010001111111011111111001000001";
        ram[7] = "0b01101000001010110000000000001000110011001111111111100011010000101100111111101110100111100101100000000101010010100001010000000001101010110111110";
        ram[8] = "0b00011001100101011011111111111100001001010110000000001101100101100110111111110111000101001011111111110110101101011010011111111101001110011011010";


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


static const unsigned DataWidth = 143;
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
