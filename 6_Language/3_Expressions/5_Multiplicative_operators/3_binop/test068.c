#include <stdio.h>

double y = 123.4;
double z = 56.78;

int main(void)
{
  double x;
  x = y * z;
  printf("%lf * %lf = %lf\n",y,z,x);
  return 0;
}
