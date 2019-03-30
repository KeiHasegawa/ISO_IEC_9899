#include <stdio.h>

int z = 0x12345678;
int* y = &z;

int main(void)
{
  int x = 0x9abcdef0;
  printf("x = 0x%x\n",x);
  x = *y;
  printf("x = 0x%x\n",x);
  return 0;
}
