#include <stdio.h>

void f(double x)
{
  printf("x = %f\n",x);
}

int main()
{
  f(1.2);
  f(3.4);
  f(5.6);
  return 0;
}
