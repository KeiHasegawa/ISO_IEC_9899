#include <stdio.h>

float y = 23.4F;

void f(void)
{
  float x = y / 23.4F;
  printf("x = %f\n",x);
}

int main(void)
{
  f();
  return 0;
}
