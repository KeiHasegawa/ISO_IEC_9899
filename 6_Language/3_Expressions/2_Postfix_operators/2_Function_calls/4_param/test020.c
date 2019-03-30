#include <stdio.h>

void f(long int x)
{
  printf("x = %ld\n",x);
}

int main()
{
  f(1L);
  f(2L);
  f(3L);
  return 0;
}
