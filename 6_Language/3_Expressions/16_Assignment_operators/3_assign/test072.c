#include <stdio.h>

double x = 1.5;
double y = -2.25;
double z = 3.75;
double a = -4.5;


int main()
{
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = a;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
