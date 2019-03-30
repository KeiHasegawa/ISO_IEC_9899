#include <stdio.h>

unsigned short int f()
{
  return 0xdef0;
}

int main()
{
  unsigned short int x = 0x1234;
  unsigned short int y = 0x5678;
  unsigned short int z = 0x9abc;

  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  y = f();
  printf("x = %x\n",x);
  printf("y = %x\n",y);
  printf("z = %x\n",z);
  return 0;
}
