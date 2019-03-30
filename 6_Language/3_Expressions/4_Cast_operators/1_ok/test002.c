/*
 * Check cast operator works well in constant-expression.
 */
#include <stdio.h>

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case (char)0:
    printf("case (char)0:\n");
    break;
  case (long long int)-1:
    printf("case (long long int)-1:\n");
    break;
  case (short int)(int*)1:
    printf("case (short int)(int*)1:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f(0);
  f(-1.0L);
  f(1.0);
  return 0;
}

