#include <stdio.h>


void f(long double x, long double y, long double z, long double a)
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
  f(1.5,-2.25,3.75,-4.5);
  return 0;
}
