// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V_H__
#define __dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 33;
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


   SC_CTOR(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V_ram) {
        ram[0] = "0b111001111100000000011111000000000";
        ram[1] = "0b111100000011000001100000000000101";
        ram[2] = "0b110110000101000011011111110000000";
        ram[3] = "0b110000000101000001111111011111000";
        ram[4] = "0b000011111001111100100000010000010";
        ram[5] = "0b011110000001111111111111010001100";
        ram[6] = "0b111110000110000011000010011110100";
        ram[7] = "0b111100000100000010111111110000000";
        ram[8] = "0b000110000100000010000000010000000";
        ram[9] = "0b000110000100111100100011110000001";


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


SC_MODULE(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V) {


static const unsigned DataWidth = 33;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V) {
meminst = new dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V_ram("dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_7_2_5_3_0_ap_fixed_7_3_5_3_0_config21_s_w21_V() {
    delete meminst;
}


};//endmodule
#endif
