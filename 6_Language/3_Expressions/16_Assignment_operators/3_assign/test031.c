#include <stdio.h>

unsigned int x = 0x12345678;
unsigned int y = 0x9abcdef0;
unsigned int z = 0x56789abc;


int main()
{
  unsigned int a = 0x11223344;
  printf("x = %x\n", x);
  printf("y = %x\n", y);
  printf("z = %x\n", z);
  y = a;
  printf("x = %x\n", x);
  printf("y = %x\n", y);
  printf("z = %x\n", z);
  return 0;
}

