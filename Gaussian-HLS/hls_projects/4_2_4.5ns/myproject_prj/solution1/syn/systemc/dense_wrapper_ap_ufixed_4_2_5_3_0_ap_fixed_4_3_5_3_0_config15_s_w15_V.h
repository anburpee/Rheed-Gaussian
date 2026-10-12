// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_H__
#define __dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 59;
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


   SC_CTOR(dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_ram) {
        ram[0] = "0b01000001111000100010010000011110000111100001111000011110001";
        ram[1] = "0b00011110001000011110000111011111110000000010010000000000000";
        ram[2] = "0b11111111111001011111110000000010000000000001111000000000000";
        ram[3] = "0b11100001111000000000000111111111110000100000000000100000001";
        ram[4] = "0b00000000000111100010001000000001111000011111111111111110000";
        ram[5] = "0b01000010001000011111111111100101110000100000001000100000000";
        ram[6] = "0b00100010000000000001111111111110000000000010010111100010001";
        ram[7] = "0b00000001111000011111111111111110000000000010001000100000000";
        ram[8] = "0b00011110000111111100000111111110000111111110000001000010000";
        ram[9] = "0b11111100000000011111111001000011110000000000001000011100001";


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


SC_MODULE(dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V) {


static const unsigned DataWidth = 59;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V) {
meminst = new dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_ram("dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_4_2_5_3_0_ap_fixed_4_3_5_3_0_config15_s_w15_V() {
    delete meminst;
}


};//endmodule
#endif
