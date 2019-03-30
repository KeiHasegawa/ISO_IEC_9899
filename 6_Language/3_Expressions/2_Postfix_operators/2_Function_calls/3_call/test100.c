#include <stdio.h>


unsigned int f(void)
{
  return 0xcdeu;
}

int main(void)
{
  printf("return value : 0x%x\n",f());
  return 0;
}
