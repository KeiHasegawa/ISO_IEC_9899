#include <stdio.h>

int main(void)
{
  long double x;
  long double y;
  y = 1.5;
  x = -y;
  printf("%Lf = %Lf\n",y,x);
  return 0;
}
