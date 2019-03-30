#include <stdio.h>


int main()
{
  long double x = -3.25;
  long double y = 0.5;
  long double z = 1.125;
  float a = -32768.5;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  y = a;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  return 0;
}
