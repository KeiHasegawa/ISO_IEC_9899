#include <stdio.h>

void f(unsigned char uc)
{
  printf("0x%x\n",uc);
}

int main(void)
{
  f(0x12345678);
  return 0;
}
