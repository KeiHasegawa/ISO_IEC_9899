#include <stdio.h>


float a = 65535.5F;

int main()
{
  long double x = -3.25;
  long double y = 0.5;
  long double z = 1.125;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  y = 65535.5F;
  z = a;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  return 0;
}
