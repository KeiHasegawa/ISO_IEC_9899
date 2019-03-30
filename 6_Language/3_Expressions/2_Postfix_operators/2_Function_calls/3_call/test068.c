#include <stdio.h>


double x = 0.625;

void f(float a)
{
  printf("a = %f\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
