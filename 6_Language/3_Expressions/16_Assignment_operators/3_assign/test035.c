#include <stdio.h>


void f(unsigned int x, unsigned int y, unsigned int z)
{
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  y = 0xddeeff00;
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
}

int main()
{
  f(0x11223344,0x55667788,0x99aabbcc);
  return 0;
}
