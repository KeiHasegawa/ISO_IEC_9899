#include <stdio.h>

unsigned char x = 127;
unsigned char y = 128;
unsigned char z = 255;

void f(unsigned char x)
{
  printf("x = %d\n",x);
}

int main()
{
  f(x);
  f(y);
  f(z);
  return 0;
}
