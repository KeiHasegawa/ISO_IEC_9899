#include <stdio.h>

void f(unsigned short int x)
{
  printf("x = %x\n",x);
}

int main()
{
  unsigned short int x = 0x8000;
  unsigned short int y = 0x7fff;
  unsigned short int z = 0xffff;

  f(x);
  f(y);
  f(z);
  return 0;
}
