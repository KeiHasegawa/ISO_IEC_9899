#include <stdio.h>

float z = 23.4F;

void f(void)
{
  float x = 23.400000F + z;
  printf("x = %f\n",x);
}

int main(void)
{
  f();
  return 0;
}
