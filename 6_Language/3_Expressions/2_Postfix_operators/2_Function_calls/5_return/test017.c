#include <stdio.h>

long long int f()
{
  return 2;
}

int main()
{
  long long int x = 1LL;
  long long int y = -2;
  long long int z = 3LL;

  printf("x = %lld\n",x);
  printf("y = %lld\n",y);
  printf("z = %lld\n",z);
  y = f();
  printf("x = %lld\n",x);
  printf("y = %lld\n",y);
  printf("z = %lld\n",z);
  return 0;
}
