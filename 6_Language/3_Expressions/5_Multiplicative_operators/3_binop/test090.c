#include <stdio.h>

int main(void)
{
  unsigned long long int x, y, z;
  y = 0xffffffffffffff55;
  z = 4;
  x = y >> z;
  printf("%llu >> %llu = %llu\n",y,z,x);
  return 0;
}
