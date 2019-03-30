/*
 * Check multiplicative operator works well in constant-expression.
 */
#include <stdio.h>

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case (long int)(1.0*'c'):
    printf("case (long int)(1.0*'c'):\n");
    break;
  case (int)(10 / 3.0L):
    printf("case (int)(10 / 3.0L):\n");
    break;
  case (unsigned int)11 % 3:
    printf("case (unsigned int)11 %% 3:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f('c');
  f(3);
  f(2);
  return 0;
}
