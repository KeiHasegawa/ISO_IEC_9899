#include <stdio.h>

void f(unsigned int y, float z)
{
  printf("%d + %f = %f\n",y,z,y+z);
}

int main(void)
{
  f(123,0.5);
  return 0;
}
