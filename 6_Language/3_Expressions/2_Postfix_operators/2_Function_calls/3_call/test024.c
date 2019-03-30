#include <stdio.h>

int f(void)
{
  return 0x12345678;
}

int main(void)
{
  printf("0x%x\n",f());
  return 0;
}
