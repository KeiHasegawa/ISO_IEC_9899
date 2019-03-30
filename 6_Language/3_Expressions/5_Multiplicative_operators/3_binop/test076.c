#include <stdio.h>

void f(float y)
{
  float x = y - 2.5F;
  printf("x = %f\n",x);
}

int main(void)
{
  f(0.25F);
  return 0;
}
