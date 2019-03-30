#include <stdio.h>

int main(void)
{
  unsigned int x, y, z;
  y = -16;
  z = 3;
  x = y >> z;
  printf("%d\n",x);
  return 0;
}
