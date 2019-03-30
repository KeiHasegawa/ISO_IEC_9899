#include <stdio.h>

void f(char y, unsigned char z)
{
  printf("%d + %d = %d\n",y,z,y+z);
}

int main(void)
{
  f(100,255);
  return 0;
}
