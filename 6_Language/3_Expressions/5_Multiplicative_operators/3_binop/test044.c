#include <stdio.h>

void f(unsigned int y, double z)
{
  printf("%d / %f = %f\n",y,z,y/z);
}

int main(void)
{
  f(123,0.456);
  return 0;
}
