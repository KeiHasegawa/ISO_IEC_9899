#include <stdio.h>

void f(float z)
{
  float x = -0.5F + z;
  printf("x = %f\n",x);
}

int main(void)
{
  f(2.75F);
  return 0;
}
