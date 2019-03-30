#include <stdio.h>


void f(unsigned long int x, unsigned long int y, unsigned long int z, unsigned long int a)
{
  printf("x = %lu\n",x);
  printf("y = %lu\n",y);
  printf("z = %lu\n",z);
  y = a;
  printf("x = %lu\n",x);
  printf("y = %lu\n",y);
  printf("z = %lu\n",z);
}

int main()
{
  f(1UL,2UL,3UL,4UL);
  return 0;
}
