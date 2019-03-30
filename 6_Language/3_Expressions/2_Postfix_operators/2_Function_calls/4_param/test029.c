#include <stdio.h>

void f(unsigned long long int x)
{
  printf("x = %llx\n",x);
}

int main()
{
  f(0x1122334455667788U);
  f(0x7fffffffffffffffU);
  f(0xffffffffffffffff);
  return 0;
}
