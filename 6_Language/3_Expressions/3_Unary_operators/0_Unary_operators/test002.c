#include <stdio.h>

int main(void)
{
  int x;
  x = ~0x12345678;
  printf("0x%x\n",x);
  return 0;
}
