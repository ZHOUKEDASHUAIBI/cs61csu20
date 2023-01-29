#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
   unsigned bit0_std = 1, bit2_std = 1 << 2, bit3_std = 1 << 3, bit5_std = 1 << 5;
   int bit_0 = *reg & bit0_std, bit_2 = (*reg & bit2_std) >> 2, bit_3 = (*reg & bit3_std) >> 3, bit_5 = (*reg & bit5_std) >> 5;

   int leftmost_bit = bit_5 ^ (bit_3 ^ (bit_0 ^ bit_2));
   *reg = (*reg >> 1) | (leftmost_bit << 15);
}
