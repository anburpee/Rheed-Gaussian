//Numpy array shape [5]
//Min 0.500000000000
//Max 1.000000000000
//Number of zeros 0

#ifndef B21_H_
#define B21_H_

#ifndef __SYNTHESIS__
bias21_t b21[5];
#else
bias21_t b21[5] = {0.5, 0.5, 0.5, 0.5, 1.0};

#endif

#endif
