#include <stdio.h>

int f(int a)
{
  return 0x12345678;
}

int main(void)
{
  printf("0x%x\n",f(0x9abcdef0));
  return 0;
}
