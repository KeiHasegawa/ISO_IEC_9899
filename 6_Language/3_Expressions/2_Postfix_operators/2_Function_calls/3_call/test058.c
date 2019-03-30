#include <stdio.h>

void f(short int a)
{
  printf("a = 0x%x\n",a);
}

void g(double a)
{
  f(a);
}

int main(void)
{
  g(0x1234);
  return 0;
}
