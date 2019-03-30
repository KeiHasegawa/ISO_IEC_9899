#include <stdio.h>

long double x = 1.5;
long double y = -2.25;
long double z = 3.75;


void f(double a)
{
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  y = a;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
}

int main()
{
  f(-4.5);
  return 0;
}
