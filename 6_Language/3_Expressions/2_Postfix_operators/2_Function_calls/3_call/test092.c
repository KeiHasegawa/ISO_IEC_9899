#include <stdio.h>


void f(unsigned long int x)
{
  printf("x = %ld\n",x);
}

int main(void)
{
  f(567UL);
  return 0;
}
