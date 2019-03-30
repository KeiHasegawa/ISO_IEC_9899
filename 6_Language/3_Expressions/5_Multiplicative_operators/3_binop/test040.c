#include <stdio.h>

void f(unsigned int y, int z)
{
  printf("%d >> %d = %d\n",y,z,y>>z);
}

int main(void)
{
  f(-10,2.5);
  return 0;
}
