/*
 * Check if conversions from `float' to `long double' are well done.
 *
 * Note : We assumed that compiler uses
 * IEEE 754 floating constant format and
 * Intel 80 bits floating constant format
 *
 * See also comments of
../../../../1_Lexical_elements/3_Constants/1_Floating_constants/1_ok/test001.c
../../../../1_Lexical_elements/3_Constants/1_Floating_constants/1_ok/test003.c
 */
#include <stdio.h>

void f(long double ld)
{
  union {
    long double ld;
    struct {
      int w[2];
      unsigned short int h;
    } s;
  } u = { ld };
  printf("0x%04x 0x%08x 0x%08x\n", u.s.h, u.s.w[1], u.s.w[0]);
}

int main(void)
{
  float a[] = {
    0x000001p-149F, /* 単精度最小非正規化数 */
    0x7fffffp-149F, /* 単精度最大非正規化数 */
    0x800000p-149F, /* 単精度最小正規化数 */
    0xffffffp+104F, /* 単精度最大正規化数 */
  };
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    f(a[i]);
  return 0;
}
