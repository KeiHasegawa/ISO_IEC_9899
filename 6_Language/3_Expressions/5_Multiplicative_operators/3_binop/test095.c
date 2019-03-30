#include <stdio.h>

int main(void)
{
  long double x;
  long double y;
  long double z;
  y = 1.5;
  z = -3.75;
  x = y + z;
  printf("%Lf + %Lf = %Lf\n",y,z,x);
  return 0;
}
