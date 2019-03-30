#include <stdio.h>

unsigned char f(int a)
{
  return a;
}

int main(void)
{
  printf("0x%x\n",f(0x1234));
  return 0;
}
