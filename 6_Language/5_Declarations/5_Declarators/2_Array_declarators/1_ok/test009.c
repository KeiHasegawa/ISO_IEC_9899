/*
 * Unused variable length array doesn't affect its dimension expression.
 */
#include <stdio.h>

int m;

void f(int n)
{
  int a[m = n]; /* Unused variable length array. But m is set. */
}

int main(void)
{
  printf("m = %d\n", m);
  f(5);
  printf("m = %d\n", m);
  return 0;
}
