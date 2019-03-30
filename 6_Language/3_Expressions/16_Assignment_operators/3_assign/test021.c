#include <stdio.h>

unsigned short int a = 0x1234;


void f(unsigned short int x, unsigned short int y, unsigned short int z)
{
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  y = a;
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
}

int main()
{
  f(0x5678,0x9abc,0xdef0);
  return 0;
}

