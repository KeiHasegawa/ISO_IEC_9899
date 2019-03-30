#include <stdio.h>


void f(unsigned short int x, unsigned short int y, unsigned short int z)
{
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  x = 0xdef0;
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
}

int main()
{
  f(0x1234,0x5678,0x9abc);
  return 0;
}

