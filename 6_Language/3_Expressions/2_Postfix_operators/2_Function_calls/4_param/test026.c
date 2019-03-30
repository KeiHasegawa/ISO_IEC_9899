#include <stdio.h>

void f(long long int x)
{
  printf("x = %lld\n",x);
}

int main()
{
  f(1LL);
  f(2LL);
  f(3LL);
  return 0;
}
