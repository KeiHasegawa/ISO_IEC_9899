#include <stdio.h>

long int x = -1L;
long int y = 2L;
long int z = -3L;

void f(long int x)
{
  printf("x = %ld\n",x);
}

int main()
{
  f(x);
  f(y);
  f(z);
  return 0;
}
