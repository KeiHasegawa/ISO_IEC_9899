#include <stdio.h>


long double x = -3.25;
long double y = 0.5;
long double z = 1.125;
signed char a = 255;

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
