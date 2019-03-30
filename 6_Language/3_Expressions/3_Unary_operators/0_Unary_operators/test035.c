#include <stdio.h>

void f(float y)
{
  float x;
  x = y;
  printf("x = %f\n",x);
}

int main(void)
{
  f(0.625);
  return 0;
}
