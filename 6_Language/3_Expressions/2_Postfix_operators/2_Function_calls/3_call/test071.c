#include <stdio.h>


short int f(double a)
{
  return a;
}

int main(void)
{
  printf("return value : 0x%x\n",f(0x12345678));
  return 0;
}
