#include <stdio.h>

unsigned long long int x = 0x1122334455667788;
unsigned long long int y = 0x7fffffffffffffff;
unsigned long long int z = 0xffffffffffffffff;

void f(unsigned long long int x)
{
  printf("x = %llx\n",x);
}

int main()
{
  f(x);
  f(y);
  f(z);
  return 0;
}
