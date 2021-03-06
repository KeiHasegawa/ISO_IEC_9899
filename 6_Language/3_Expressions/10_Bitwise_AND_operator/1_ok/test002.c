/*
 * Check bitwise and operator works well in constant-expression.
 */
#include <stdio.h>

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case 0xc & 0xa:
    printf("case 0xc & 0xa:\n");
    break;
  case -1LL & -2:
    printf("case -1LL & -2:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f(8);
  f(-2);
  return 0;
}
