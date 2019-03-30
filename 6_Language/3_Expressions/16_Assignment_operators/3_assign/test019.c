#include <stdio.h>

unsigned short int x = 0x1234;
unsigned short int y = 0x5678;
unsigned short int z = 0x9abc;



void f(unsigned short int a)
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
  f(0xdef0);
  return 0;
}

