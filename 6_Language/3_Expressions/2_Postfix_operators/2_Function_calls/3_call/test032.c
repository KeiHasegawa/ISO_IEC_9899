#include <stdio.h>

unsigned short int f(float x, double y, char z)
{
  int r = x + y;
  return r * z;
}

int main(void)
{
  printf("%d\n",f(3.14,2.17,2));
  return 0;
}
