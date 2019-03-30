#include <stdio.h>

unsigned int f()
{
  return 0xddeeff00;
}

int main()
{
  unsigned int x = 0x11223344;
  unsigned int y = 0x55667788;
  unsigned int z = 0x99aabbcc;

  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  y = f();
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  return 0;
}
