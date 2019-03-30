#include <stdio.h>


double x = -3.25;
double y = 0.5;
double z = 1.125;
long double a = -32767.5;

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
