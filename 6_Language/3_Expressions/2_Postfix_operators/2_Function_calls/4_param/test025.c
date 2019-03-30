#include <stdio.h>

void f(long long int x)
{
  printf("x = %lld\n",x);
}

int main()
{
  long long int x = 1;
  long long int y = -1;
  long long int z = -2;

  f(x);
  f(y);
  f(z);
  return 0;
}
