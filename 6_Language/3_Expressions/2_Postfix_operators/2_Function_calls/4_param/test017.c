#include <stdio.h>

void f(unsigned int x)
{
  printf("x = %x\n",x);
}

int main()
{
  f(0x7fffffffU);
  f(0x80000000);
  f(0xffffffff);
  return 0;
}
