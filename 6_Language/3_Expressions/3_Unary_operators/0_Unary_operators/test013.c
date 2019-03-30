#include <stdio.h>

int main(void)
{
  float x, *y, z;
  z = 1.234;
  y = &z;
  x = *y;
  printf("x = %f\n",x);
  return 0;
}
