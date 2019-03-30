#include <stdio.h>

int* x = (int*)0x1234;
int* y = (int*)0x5678;
int* z = (int*)0x9abc;


int main()
{
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
  y = 0;
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
  return 0;
}


