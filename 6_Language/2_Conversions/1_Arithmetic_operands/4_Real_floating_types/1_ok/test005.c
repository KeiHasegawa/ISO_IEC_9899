/*
 * Check if conversions from `long double' to `double' are well done.
 *
 * Note : We assumed that compiler uses
 * IEEE 754 floating constant format and
 * Intel 80 bits floating constant format
 *
 * See also comments of
../../../../1_Lexical_elements/3_Constants/1_Floating_constants/1_ok/test002.c
../../../../1_Lexical_elements/3_Constants/1_Floating_constants/1_ok/test003.c
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
  long double a[] = {
    0x00000000000001p-1074, /* ”{¸“xÅ¬”ñ³‹K‰»” */
    0x0fffffffffffffp-1074, /* ”{¸“xÅ‘å”ñ³‹K‰»” */
    0x10000000000000p-1074, /* ”{¸“xÅ¬³‹K‰»” */
    0x1fffffffffffffp+971,  /* ”{¸“xÅ‘å³‹K‰»” */
  };
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    f(a[i]);
  return 0;
}
