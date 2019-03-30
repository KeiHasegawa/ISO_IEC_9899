#include <stdio.h>

unsigned int x = 0x7fffffff;
unsigned int y = 0x80000000;
unsigned int z = 0xffffffff;

void f(unsigned int x)
{
  printf("x = %x\n",x);
}

int main()
{
  f(x);
  f(y);
  f(z);
  return 0;
}
