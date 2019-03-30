#include <stdio.h>

double x = 1.2;
double y = 3.4;
double z = 5.6;

void f(double x)
{
  printf("x = %f\n",x);
}

int main()
{
  f(x);
  f(y);
  f(z);
  return 0;
}
