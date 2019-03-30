#include <stdio.h>

unsigned short int x = 0x1234;
unsigned short int y = 0x5678;
unsigned short int z = 0x9abc;


int main()
{
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  x = 0xdef0;
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  return 0;
}

