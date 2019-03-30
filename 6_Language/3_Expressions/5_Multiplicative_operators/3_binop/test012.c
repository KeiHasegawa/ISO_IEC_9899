#include <stdio.h>

int main(void)
{
  signed int x, y, z;
  y = -5;
  z = 2;
  x = y % z;
  printf("%d\n",x);
  return 0;
}
