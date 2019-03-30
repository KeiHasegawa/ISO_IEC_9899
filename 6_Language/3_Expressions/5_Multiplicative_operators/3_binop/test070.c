#include <stdio.h>

void f(int z)
{
  int x;
  x = 123 + z;
  printf("%d + %d = %d\n",123,z,x);
}

int main(void)
{
  f(3);
  return 0;
}
