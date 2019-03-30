#include <stdio.h>

int main(void)
{
  int x, y, z;
  y = 0xc;
  z = 0xa;
  x = y | z;
  printf("0x%x | 0x%x = 0x%x\n",y,z,x);
  return 0;
}
