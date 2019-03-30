#include <stdio.h>

void f(float y)
{
  float* x, z;
  z = 0.5;
  x = &z;
  *x = y;
  printf("z = %f\n",z);
}

int main(void)
{
  f(0.625);
  return 0;
}
