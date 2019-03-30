#include <stdio.h>

void f(float y, double z)
{
  printf("%f + %f = %f\n",y,z,y+z);
}

int main(void)
{
  f(12.34,5.678);
  return 0;
}
