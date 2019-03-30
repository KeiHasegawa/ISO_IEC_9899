/*
 * Check shift operator works well in constant-expression.
 */
#include <stdio.h>

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case -1 << 1:
    printf("case -1 << 1:\n");
    break;
  case -2 >> 1:
    printf("case -2 >> 1:\n");
    break;
  case sizeof(1 << 3ULL):
    printf("case sizeof(1 << 3ULL):\n");
    break;
  case sizeof(1LL << 3ULL):
    printf("case sizeof(1LL << 3ULL):\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f(-1 << 1);
  f(-2 >> 1);
  f(sizeof 1);
  f(sizeof 1LL);
  return 0;
}

