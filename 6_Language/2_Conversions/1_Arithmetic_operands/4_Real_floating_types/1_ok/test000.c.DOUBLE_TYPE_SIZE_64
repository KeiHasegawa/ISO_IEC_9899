/*
 * Check if conversions from `float' to `double' are well done.
 *
 * Note : We assumed that compiler uses
 * IEEE 754 floating constant format.
 *
 * See also comments of
../../../../1_Lexical_elements/3_Constants/1_Floating_constants/1_ok/test001.c
../../../../1_Lexical_elements/3_Constants/1_Floating_constants/1_ok/test002.c
 */
#include <stdio.h>

void swap(int* pa, int* pb)
{
  int tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}

void f(double d)
{
  int i = 1;
  union {
    double d;
    int i[2];
  } u = { d };
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x%08x 0x%08x\n", u.i[0], u.i[1]);
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
