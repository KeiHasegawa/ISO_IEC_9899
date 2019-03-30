#include <stdio.h>

int y = 0x12345678;

int main(void)
{
  int* x, z;
  z = 0x9abcdef0;
  printf("z = 0x%x\n",z);
  x = &z;
  *x = y;
  printf("z = 0x%x\n",z);
  return 0;
}
