#include <stdio.h>

void f(float* y)
{
  float x;
  x = *y;
  printf("x = %f\n",x);
}

int main(void)
{
  float a = 0.625;
  f(&a);
  return 0;
}
