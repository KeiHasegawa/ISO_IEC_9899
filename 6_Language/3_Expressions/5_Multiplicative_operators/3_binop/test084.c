#include <stdio.h>

int main(void)
{
  long long int x, y, z;
  y = 2147483649;
  z = 2;
  x = y * z;
  printf("%lld * %lld = %lld\n",y,z,x);
  return 0;
}
