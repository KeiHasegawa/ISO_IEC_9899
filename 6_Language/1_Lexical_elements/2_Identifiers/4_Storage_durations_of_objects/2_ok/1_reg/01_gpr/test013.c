#include <stdio.h>

const int y = 10;


int main(void)
{
  int x, z;
  z = 3;
  x = y / z;
  printf("%d/%d = %d\n",y,z,x);
  return 0;
}
