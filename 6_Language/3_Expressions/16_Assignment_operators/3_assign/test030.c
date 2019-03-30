#include <stdio.h>

unsigned int x = 0x12345678;
unsigned int y = 0x9abcdef0;
unsigned int z = 0x56789abc;


int main()
{
  printf("x = %x\n", x);
  printf("y = %x\n", y);
  printf("z = %x\n", z);
  y = x;
  printf("x = %x\n", x);
  printf("y = %x\n", y);
  printf("z = %x\n", z);
  return 0;
}

