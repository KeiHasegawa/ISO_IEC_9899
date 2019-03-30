#include <stdio.h>

short int x = 0x1234;

void f(int a)
{
  printf("a = 0x%x\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
