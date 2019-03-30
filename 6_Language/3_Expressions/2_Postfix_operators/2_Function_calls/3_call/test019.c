#include <stdio.h>

void f(unsigned long int uli)
{
  printf("%ld\n",uli);
}

int main(void)
{
  f(1*2*3*4*5*6);
  return 0;
}
