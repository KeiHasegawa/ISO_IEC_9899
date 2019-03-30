#include <stdio.h>

int f(void)
{
  int a, b, c, d;
  a = 1;
  b = a + 3;
  c = b - 5;
  d = c * 6;
  return d;
}

int main(void)
{
  int a;
  a = f();
  printf("f return value %d\n",a);
  return 0;
}
