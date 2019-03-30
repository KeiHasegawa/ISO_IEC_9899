#include <stdio.h>


void f(double x)
{
  printf("x = %lf\n",x);
}

int main(void)
{
  f(456.789);
  return 0;
}
