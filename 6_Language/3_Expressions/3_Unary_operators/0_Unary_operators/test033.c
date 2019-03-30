#include <stdio.h>

void f(int y)
{
  int* x, z;
  x = &z;
  *x = y;
  printf("z = %d\n",z);
}

int main(void)
{
  f(5);
  return 0;
}
