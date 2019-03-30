#include <stdio.h>

int main(void)
{
  long long int x, y, z;
  y = -171;
  z = 4;
  x = y >> z;
  printf("%lld >> %lld = %lld\n",y,z,x);
  return 0;
}
