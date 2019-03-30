#include <stdio.h>


short int f(void)
{
  return 0x234;
}

int main(void)
{
  printf("return value : 0x%x\n",f());
  return 0;
}
