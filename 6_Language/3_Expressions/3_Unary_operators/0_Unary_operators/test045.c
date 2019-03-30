#include <stdio.h>

void f(double y)
{
  double* x, z;
  z = 654.321;
  x = &z;
  *x = y;
  printf("z = %lf\n",z);
}

int main(void)
{
  f(123.456);
  return 0;
}
