/*
 * Check unary arithmetic operator works well in constant-expression.
 */
#include <stdio.h>

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case +0:
    printf("case +0:\n");
    break;
  case -'c':
    printf("case -'c':\n");
    break;
  case ~0L:
    printf("case ~0:\n");
    break;
  case !0.0L:
    printf("case !0:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f(0);
  f(-'c');
  f(~0L);
  f(!0.0L);
  return 0;
}
