#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <array>
#include <cstddef>
#include <cstdio>
#include <tuple>
#include <tuple>


// hls-fpga-machine-learning insert numbers

// hls-fpga-machine-learning insert layer-precision
typedef nnet::array<ap_ufixed<13,0>, 1*1> input_t;
typedef ap_fixed<26,8> model_default_t;
typedef nnet::array<ap_fixed<13,5>, 6*1> layer2_t;
typedef ap_fixed<13,3> weight2_t;
typedef ap_fixed<13,3> bias2_t;
typedef nnet::array<ap_fixed<26,8>, 6*1> layer3_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_linear_table_t;
typedef nnet::array<ap_ufixed<13,4>, 6*1> layer4_t;
typedef ap_fixed<18,8> q_activation_table_t;
typedef nnet::array<ap_ufixed<13,4>, 6*1> layer5_t;
typedef nnet::array<ap_fixed<13,5>, 8*1> layer6_t;
typedef ap_fixed<13,5> weight6_t;
typedef ap_fixed<13,5> bias6_t;
typedef nnet::array<ap_fixed<26,8>, 8*1> layer7_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_1_linear_table_t;
typedef nnet::array<ap_ufixed<13,4>, 8*1> layer8_t;
typedef ap_fixed<18,8> q_activation_1_table_t;
typedef nnet::array<ap_ufixed<13,4>, 8*1> layer9_t;
typedef nnet::array<ap_fixed<13,5>, 10*1> layer10_t;
typedef ap_fixed<13,5> weight10_t;
typedef ap_fixed<13,5> bias10_t;
typedef nnet::array<ap_fixed<26,8>, 10*1> layer11_t;
typedef ap_fixed<18,8> q_conv2d_batchnorm_2_linear_table_t;
typedef nnet::array<ap_ufixed<13,4>, 10*1> layer12_t;
typedef ap_fixed<18,8> q_activation_2_table_t;
typedef nnet::array<ap_ufixed<13,4>, 10*1> layer13_t;
typedef nnet::array<ap_fixed<13,5>, 15*1> layer15_t;
typedef ap_fixed<13,5> weight15_t;
typedef ap_fixed<13,5> bias15_t;
typedef ap_uint<1> layer15_index;
typedef nnet::array<ap_fixed<26,8>, 15*1> layer16_t;
typedef ap_fixed<18,8> q_dense_linear_table_t;
typedef nnet::array<ap_ufixed<13,4>, 15*1> layer17_t;
typedef ap_fixed<18,8> q_activation_3_table_t;
typedef nnet::array<ap_fixed<13,5>, 10*1> layer18_t;
typedef ap_fixed<13,5> weight18_t;
typedef ap_fixed<13,5> bias18_t;
typedef ap_uint<1> layer18_index;
typedef nnet::array<ap_fixed<26,8>, 10*1> layer19_t;
typedef ap_fixed<18,8> q_dense_1_linear_table_t;
typedef nnet::array<ap_ufixed<13,4>, 10*1> layer20_t;
typedef ap_fixed<18,8> q_activation_4_table_t;
typedef nnet::array<ap_fixed<13,5>, 5*1> layer21_t;
typedef ap_fixed<13,5> weight21_t;
typedef ap_fixed<13,5> bias21_t;
typedef ap_uint<1> layer21_index;
typedef nnet::array<ap_fixed<26,8>, 5*1> result_t;
typedef ap_fixed<18,8> q_dense_2_linear_table_t;

// hls-fpga-machine-learning insert emulator-defines


#endif
