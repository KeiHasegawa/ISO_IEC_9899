#include <stdio.h>


void f(double x, double y, double z)
{
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = -4.5;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
}

int main()
{
  f(1.5,-2.25,3.75);
  return 0;
}
