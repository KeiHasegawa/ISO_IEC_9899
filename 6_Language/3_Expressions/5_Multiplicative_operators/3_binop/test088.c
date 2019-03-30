#include <stdio.h>

int main(void)
{
  unsigned long long int x, y, z;
  y = 0xfffffffffffffff1;
  z = 6;
  x = y % z;
  printf("%llu %% %llu = %llu\n",y,z,x);
  return 0;
}
