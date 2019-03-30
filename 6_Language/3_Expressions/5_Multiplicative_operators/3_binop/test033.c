#include <stdio.h>

void f(int y, unsigned int z)
{
  printf("%d << %d = %d\n",y,z,y<<z);
}

int main(void)
{
  f(-10,3.14);
  return 0;
}
