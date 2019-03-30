#include <stdio.h>

int main(void)
{
  int x, *y, z;
  z = 1234;
  y = &z;
  x = *y;
  printf("x = %d\n",x);
  return 0;
}
