#include <stdio.h>


void f(int* x, int* y, int* z, int* a)
{
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
  y = a;
  printf("x = %x\n", (int)x);
  printf("y = %x\n", (int)y);
  printf("z = %x\n", (int)z);
}

int main()
{
  f((int*)0x1234,(int*)0x5678,(int*)0x9abc,(int*)0xdef0);
  return 0;
}


