#include <stdio.h>


void f(short int x)
{
  printf("x = %d\n",x);
}

int main(void)
{
  f(123);
  return 0;
}
