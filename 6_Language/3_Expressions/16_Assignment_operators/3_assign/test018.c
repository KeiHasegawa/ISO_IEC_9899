#include <stdio.h>

unsigned short int x = 0x1234;
unsigned short int y = 0x5678;
unsigned short int z = 0x9abc;
unsigned short int a = 0xdef0;


int main()
{
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  y = a;
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  return 0;
}

