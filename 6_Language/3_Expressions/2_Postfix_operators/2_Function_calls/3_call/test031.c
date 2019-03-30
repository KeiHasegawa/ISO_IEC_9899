#include <stdio.h>

short int f(int a, int b)
{
  return a + b;
}

int main(void)
{
  printf("0x%x\n",f(0x12340000,0x00005678));
  return 0;
}
