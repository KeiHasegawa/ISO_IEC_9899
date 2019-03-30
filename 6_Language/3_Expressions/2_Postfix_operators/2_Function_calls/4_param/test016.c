#include <stdio.h>

void f(unsigned int x)
{
  printf("x = %x\n",x);
}

int main()
{
  unsigned int x = 0x7fffffff;
  unsigned int y = 0x80000000;
  unsigned int z = 0xffffffff;

  f(x);
  f(y);
  f(z);
  return 0;
}
