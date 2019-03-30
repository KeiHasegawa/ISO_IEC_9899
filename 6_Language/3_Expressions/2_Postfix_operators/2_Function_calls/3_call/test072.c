#include <stdio.h>

unsigned short int f(char a)
{
  return a;
}

int main(void)
{
  printf("return value : 0x%x\n",f(-1));
  return 0;
}
