#include <stdio.h>


float a = 65535.5F;

int main()
{
  double x = -3.25;
  double y = 0.5;
  double z = 1.125;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = 65535.5F;
  z = a;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
