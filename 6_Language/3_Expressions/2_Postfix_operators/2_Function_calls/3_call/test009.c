#include <stdio.h>

int fact(int n)
{
  if ( n <= 1 ) return 1;
  return n * fact(n-1);
}

int main(void)
{
  printf("6! = %d\n",fact(6));
  return 0;
}
