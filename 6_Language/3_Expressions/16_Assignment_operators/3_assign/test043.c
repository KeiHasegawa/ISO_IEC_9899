#include <stdio.h>

unsigned long int x = 1UL;
unsigned long int y = 2UL;
unsigned long int z = 3UL;


void f(unsigned long int a)
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
  f(4UL);
  return 0;
}
