#include <stdio.h>

double x = 1.5;
double y = -2.25;
double z = 3.75;


void f(double a)
{
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = a;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
}

int main()
{
  f(-4.5);
  return 0;
}
