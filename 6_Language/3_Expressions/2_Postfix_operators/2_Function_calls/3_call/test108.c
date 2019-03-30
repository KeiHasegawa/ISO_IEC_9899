#include <stdio.h>

long long int f(void)
{
  return 4294967296;
}

int main(void)
{
  printf("%lld\n",f());
  return 0;
}
