#include <stdio.h>

long double a = -4.5;


void f(long double x, long double y, long double z)
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
  f(1.5,-2.25,3.75);
  return 0;
}
