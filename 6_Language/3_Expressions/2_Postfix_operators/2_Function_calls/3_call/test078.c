#include <stdio.h>


unsigned char r = 0xf2;

unsigned char f(void)
{
  return r;
}

int main(void)
{
  printf("return value : 0x%x\n",f());
  return 0;
}
