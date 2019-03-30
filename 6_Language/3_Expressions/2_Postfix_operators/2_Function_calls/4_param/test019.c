#include <stdio.h>

void f(long int x)
{
  printf("x = %ld\n",x);
}

int main()
{
  long int x = -1L;
  long int y = 2L;
  long int z = -3L;

  f(x);
  f(y);
  f(z);
  return 0;
}
