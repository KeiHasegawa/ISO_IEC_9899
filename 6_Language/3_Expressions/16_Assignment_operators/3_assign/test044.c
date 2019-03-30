#include <stdio.h>

unsigned long int x = 1UL;
unsigned long int y = 2UL;
unsigned long int z = 3UL;


int main()
{
  printf("x = %lu\n",x);
  printf("y = %lu\n",y);
  printf("z = %lu\n",z);
  y = 4UL;
  printf("x = %lu\n",x);
  printf("y = %lu\n",y);
  printf("z = %lu\n",z);
  return 0;
}
