/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

void f(int a, int b, int c)
{
  printf("`f' called with %d, %d and %d\n", a, b, c);
}

void test000(void)
{
  printf("`test000' called\n");
  int a = 1;
  int t;
  int c = 2;
  f(a, (t=3, t+2), c);
}

int main(void)
{
  test000();
  return 0;
}
