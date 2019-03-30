#include <stdio.h>

void f(unsigned short int x)
{
  printf("x = %x\n",x);
}

int main()
{
  f(0x8000);
  f(0x7fff);
  f(0xffff);
  return 0;
}
