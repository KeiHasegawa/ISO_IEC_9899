#include <stdio.h>


void f(long int x)
{
  printf("x = %ld\n",x);
}

int main(void)
{
  f(234L);
  return 0;
}
