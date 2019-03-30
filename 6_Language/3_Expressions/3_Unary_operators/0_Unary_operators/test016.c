#include <stdio.h>

int main(void)
{
  double *x, y, z;
  y = 1.234;
  z = 5.678;
  x = &z;
  *x = y;
  printf("z = %lf\n",z);
  return 0;
}
