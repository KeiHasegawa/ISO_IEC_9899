#include <stdio.h>

long double x = 1.5;
long double y = -2.25;
long double z = 3.75;
long double a = -4.5;


int main()
{
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  y = a;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  return 0;
}
