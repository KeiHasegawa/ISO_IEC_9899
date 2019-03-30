#include <stdio.h>

void f(unsigned short int a)
{
  printf("a = 0x%x\n",a);
}

void g(float a)
{
  f(a);
}

int main(void)
{
  g(0xffff);
  return 0;
}
