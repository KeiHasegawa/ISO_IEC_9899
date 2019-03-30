#include <stdio.h>

void f(long long int lli)
{
  printf("%lld\n",lli);
}

int main(void)
{
  f(4294967296);
  return 0;
}
