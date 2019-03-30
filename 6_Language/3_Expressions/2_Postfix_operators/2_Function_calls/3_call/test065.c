#include <stdio.h>

long int x = 0x12345678;

void f(unsigned short int a)
{
  printf("a = 0x%x\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
