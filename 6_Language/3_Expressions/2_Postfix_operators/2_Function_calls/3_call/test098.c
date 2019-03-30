#include <stdio.h>


unsigned short int f(void)
{
  return 0x567;
}

int main(void)
{
  printf("return value : 0x%x\n",f());
  return 0;
}
