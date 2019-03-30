#include <stdio.h>


void f(int* x, int* y, int* z)
{
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
  y = 0;
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
}

int main()
{
  f((int*)0x1234,(int*)0x5678,(int*)0x9abc);
  return 0;
}


