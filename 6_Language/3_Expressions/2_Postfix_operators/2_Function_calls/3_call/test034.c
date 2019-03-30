#include <stdio.h>

unsigned int f(float a, double b, int c, char d)
{
  c = a - b;
  c *= d;
  return c;
}

int main(void)
{
  printf("%d\n",f(10,5,1,3));
  return 0;
}
