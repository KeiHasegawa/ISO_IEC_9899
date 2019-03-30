#include <stdio.h>

int main(void)
{
  float *x, y, z;
  y = 1.234;
  z = 5.678;
  x = &z;
  *x = y;
  printf("z = %f\n",z);
  return 0;
}
