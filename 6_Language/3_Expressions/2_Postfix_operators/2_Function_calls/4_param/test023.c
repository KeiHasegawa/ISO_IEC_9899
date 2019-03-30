#include <stdio.h>

void f(unsigned long int x)
{
  printf("x = %lx\n",x);
}

int main()
{
  f(0x12345678UL);
  f(0x9abcdef0L);
  f(0x11223344UL);
  return 0;
}
