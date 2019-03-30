#include <stdio.h>

unsigned short int x = -1;

void f(int a)
{
  printf("a = 0x%x\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
