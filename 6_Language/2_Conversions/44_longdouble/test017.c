#include <stdio.h>


int main()
{
  long double x = -3.25;
  long double y = 0.5;
  long double z = 1.125;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  y = 0x12345678;
  printf("x = %Lf\n",x);
  printf("y = %Lf\n",y);
  printf("z = %Lf\n",z);
  return 0;
}
