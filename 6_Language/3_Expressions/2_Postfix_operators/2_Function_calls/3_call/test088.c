#include <stdio.h>


void f(unsigned short int x)
{
  printf("x = %d\n",x);
}

int main(void)
{
  f(456);
  return 0;
}
