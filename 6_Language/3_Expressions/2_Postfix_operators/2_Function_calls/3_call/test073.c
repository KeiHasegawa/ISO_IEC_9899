#include <stdio.h>


int f(unsigned short int a)
{
  return a;
}

int main(void)
{
  printf("return value : 0x%x\n",f(-1));
  return 0;
}
