#include <stdio.h>


void f(unsigned long int x, unsigned long int y, unsigned long int z)
{
  printf("x = %lu\n",x);
  printf("y = %lu\n",y);
  printf("z = %lu\n",z);
  y = 4UL;
  printf("x = %lu\n",x);
  printf("y = %lu\n",y);
  printf("z = %lu\n",z);
}

int main()
{
  f(1UL,2UL,3UL);
  return 0;
}
