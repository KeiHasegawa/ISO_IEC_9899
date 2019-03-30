/*
 * Check logical OR operator works well in constant-expression.
 */
#include <stdio.h>

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case 0.0 || 0ULL:
    printf("case 0.0 || 0ULL:\n");
    break;
  case -0.5 || 1ULL:
    printf("case -0.5 || 1ULL:\n");
    break;
  case sizeof(n || *(int*)n):
    printf("case sizeof(n || *(int*)n):\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f(0);
  f(1);
  f(sizeof(int));
  return 0;
}
