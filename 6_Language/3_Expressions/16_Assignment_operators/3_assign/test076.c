#include <stdio.h>


void f(double x, double y, double z, double a)
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
  f(1.5,-2.25,3.75,-4.5);
  return 0;
}
