/*
   20020508-2.c from the execute part of the gcc torture suite.
 */

#include <testfwk.h>

#ifdef __SDCC
#pragma std_c99
#endif

#include <limits.h>

#ifndef CHAR_BIT
#define CHAR_BIT 8
#endif

#define ROR(a,b) (((a) >> (b)) | ((a) << ((sizeof (a) * CHAR_BIT) - (b))))
#define ROL(a,b) (((a) << (b)) | ((a) >> ((sizeof (a) * CHAR_BIT) - (b))))

#define CHAR_VALUE ((char)0x1234)
#define SHORT_VALUE ((short)0x1234)
#define INT_VALUE ((int)0x1234)
#define LONG_VALUE ((long)0x12345678L)
#define LL_VALUE ((long long)0x12345678abcdef0LL)

#define SHIFT1 4
#define SHIFT2 ((sizeof (long long) * CHAR_BIT) - SHIFT1)

char c = CHAR_VALUE;
short s = SHORT_VALUE;
int i = INT_VALUE;
long l = LONG_VALUE;
long long ll = LL_VALUE;
int shift1 = SHIFT1;
int shift2 = SHIFT2;

void
testTortureExecute (void)
{
  if (ROR (c, shift1) != ROR (CHAR_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (c, SHIFT1) != ROR (CHAR_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (s, shift1) != ROR (SHORT_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (s, SHIFT1) != ROR (SHORT_VALUE, SHIFT1))
    ASSERT (0);
#ifndef __SDCC_pdk14 // Lack of memory
  if (ROR (i, shift1) != ROR (INT_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (i, SHIFT1) != ROR (INT_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (l, shift1) != ROR (LONG_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (l, SHIFT1) != ROR (LONG_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (ll, shift1) != ROR (LL_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (ll, SHIFT1) != ROR (LL_VALUE, SHIFT1))
    ASSERT (0);

  if (ROR (ll, shift2) != ROR (LL_VALUE, SHIFT2))
    ASSERT (0);

  if (ROR (ll, SHIFT2) != ROR (LL_VALUE, SHIFT2))
    ASSERT (0);

  if (ROL (c, shift1) != ROL (CHAR_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (c, SHIFT1) != ROL (CHAR_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (s, shift1) != ROL (SHORT_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (s, SHIFT1) != ROL (SHORT_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (i, shift1) != ROL (INT_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (i, SHIFT1) != ROL (INT_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (l, shift1) != ROL (LONG_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (l, SHIFT1) != ROL (LONG_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (ll, shift1) != ROL (LL_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (ll, SHIFT1) != ROL (LL_VALUE, SHIFT1))
    ASSERT (0);

  if (ROL (ll, shift2) != ROL (LL_VALUE, SHIFT2))
    ASSERT (0);

  if (ROL (ll, SHIFT2) != ROL (LL_VALUE, SHIFT2))
    ASSERT (0);
#endif
  return;
}
