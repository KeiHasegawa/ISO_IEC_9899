#include <stdio.h>

int y = 0x12345678;

int main(void)
{
  int* x;
  x = &y;
  *x = 0x9abcdef0;
  printf("y = 0x%x\n",y);
  return 0;
}
