#include <stdio.h>


void f(long double x, long double y, long double z)
{
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  y = -4.5L;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
}

int main()
{
  f(1.5,-2.25,3.75);
  return 0;
}
