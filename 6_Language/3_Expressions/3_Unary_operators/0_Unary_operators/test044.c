#include <stdio.h>

void f(double* y)
{
  double x;
  x = *y;
  printf("x = %lf\n",x);
}

int main(void)
{
  double a = 123.456;
  f(&a);
  return 0;
}
