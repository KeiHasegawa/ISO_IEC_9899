#include <stdio.h>

double x = 1.2;
double y = 3.4;
double z = 5.6;

double f()
{
  return 7.8;
}

int main()
{
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  y = f();
  printf("x = %f\n",x);
  printf("y = %f\n",y);
  printf("z = %f\n",z);
  return 0;
}
