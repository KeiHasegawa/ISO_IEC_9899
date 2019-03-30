#include <stdio.h>


float x = -3.25;
float y = 0.5;
float z = 1.125;

long double a = 65535.5L;

int main()
{
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  x = a;
  y = 65535.5L;
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
