#include <stdio.h>

int main(void)
{
  long long int x, y, z;
  y = 0x9abcdef012345678;
  z = 0x123456789abcdef0;
  x = y ^ z;
  printf("%llx ^ %llx = %llx\n",y,z,x);
  return 0;
}
