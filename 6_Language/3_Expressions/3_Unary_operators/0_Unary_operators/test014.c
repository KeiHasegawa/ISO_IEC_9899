#include <stdio.h>

int main(void)
{
  double x, *y, z;
  z = 5.678;
  y = &z;
  x = *y;
  printf("x = %f\n",x);
  return 0;
}
