#include <stdio.h>

int y = 0x12345678;

int main(void)
{
  char x;
  x = y;
  printf("x = 0x%x\n",x);
  return 0;
}
