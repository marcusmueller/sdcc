/*
mode-dependent-address.c from the execute part of the gcc torture tests.
*/

#include <testfwk.h>

/* { dg-require-effective-target stdint_types } */

#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#if !(defined(__SDCC_mcs51) && (defined(__SDCC_MODEL_SMALL) || defined(__SDCC_MODEL_MEDIUM))) && !defined(__SDCC_pdk14) && !defined(__SDCC_pdk15) // Lack of memory
void f883b (int8_t * result,
    int16_t * restrict arg1,
    uint32_t * restrict arg2,
    uint64_t * restrict arg3,
    uint8_t * restrict arg4)
{
    int idx;
    for (idx=0;idx<96;idx += 1) {
	result[idx] = (((((((((((-27 + 2+1)>>1) || arg4[idx]) < arg1[idx])
				? (((-27 + 2+1)>>1) || arg4[idx])
				: arg1[idx])
			       >> (arg2[idx] & 31)) ^ 1) - -32)>>7) | -5) & arg3[idx]);
    }
}

int8_t result[96];
int16_t arg1[96];
uint32_t arg2[96];
uint64_t arg3[96];
uint8_t arg4[96];
#endif

void
testTortureExecute (void)
{
#if !(defined(__SDCC_mcs51) && (defined(__SDCC_MODEL_SMALL) || defined(__SDCC_MODEL_MEDIUM))) && !defined(__SDCC_pdk14) && !defined(__SDCC_pdk15) // Lack of memory
  int i;
  int correct[] = {0x0,0x1,0x2,0x3,0x0,0x1,0x2,0x3,0x8,0x9,0xa,0xb,0x8,0x9,
                   0xa,0xb,0x10,0x11,0x12,0x13,0x10,0x11,0x12,0x13,
                   0x18,0x19,0x1a,0x1b,0x18,0x19,0x1a,0x1b,0x20,0x21,0x22,
                   0x23,0x20,0x21,0x22,0x23,0x28,0x29,0x2a,
                   0x2b,0x28,0x29,0x2a,0x2b,0x30,0x31,0x32,0x33,
                   0x30,0x31,0x32,0x33,0x38,0x39,0x3a,0x3b,0x38,0x39,0x3a,
                   0x3b,0x40,0x41,0x42,0x43,0x40,0x41,0x42,0x43,0x48,0x49,
                   0x4a,0x4b,0x48,0x49,0x4a,0x4b,0x50,0x51,
                   0x52,0x53,0x50,0x51,0x52,0x53,0x58,0x59,0x5a,0x5b,
                   0x58,0x59,0x5a,0x5b};

  for (i=0; i < 96; i++)
    arg3[i] = arg2[i] = arg1[i] = arg4[i] = i;

  f883b(result, arg1, arg2, arg3, arg4);

  for (i=0; i < 96; i++)
    if (result[i] != correct[i]) ASSERT(0);
#endif
  return;
}
