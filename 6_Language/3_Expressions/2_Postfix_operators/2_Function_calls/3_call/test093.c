#include <stdio.h>


void f(float x)
{
  printf("x = %f\n",x);
}

int main(void)
{
  f(0.625F);
  return 0;
}
