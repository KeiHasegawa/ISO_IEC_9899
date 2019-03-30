#include <stdio.h>

void f(double y)
{
  double x;
  x = -y;
  printf("x = %lf\n",x);
}

int main(void)
{
  f(123.456);
  return 0;
}
