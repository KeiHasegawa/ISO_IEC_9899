#include <stdio.h>

int x = 0x12345678;

void f(int a)
{
  printf("a = 0x%x\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
