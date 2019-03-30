#include <stdio.h>

unsigned long int x = 1UL;
unsigned long int y = 2UL;
unsigned long int z = 3UL;
unsigned long int a = 4UL;

int main()
{
  printf("x = %lu\n",x);
  printf("y = %lu\n",y);
  printf("z = %lu\n",z);
  y = a;
  printf("x = %lu\n",x);
  printf("y = %lu\n",y);
  printf("z = %lu\n",z);
  return 0;
}
