#include <stdio.h>


long double x = -3.25;
long double y = 0.5;
long double z = 1.125;

int main()
{
  short int a = 256;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  y = a;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  return 0;
}
