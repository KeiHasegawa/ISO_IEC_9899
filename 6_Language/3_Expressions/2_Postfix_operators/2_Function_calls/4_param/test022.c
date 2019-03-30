#include <stdio.h>

void f(unsigned long int x)
{
  printf("x = %lx\n",x);
}

int main()
{
  unsigned long int x = 0x12345678;
  unsigned long int y = 0x9abcdef0;
  unsigned long int z = 0x11223344;

  f(x);
  f(y);
  f(z);
  return 0;
}
