#include <stdio.h>

int* a = (int*)0xdef0;


int main()
{
  int* x = (int*)0x1234;
  int* y = (int*)0x5678;
  int* z = (int*)0x9abc;

  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
  y = a;
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
  return 0;
}


