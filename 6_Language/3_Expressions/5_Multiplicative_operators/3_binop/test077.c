#include <stdio.h>

void f(void)
{
  float x = 0.125F * 2.5F;
  printf("x = %f\n",x);
}

int main(void)
{
  f();
  return 0;
}
