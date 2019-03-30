#include <stdio.h>


void f(unsigned int x)
{
  printf("x = %d\n",x);
}

int main(void)
{
  f(901U);
  return 0;
}
