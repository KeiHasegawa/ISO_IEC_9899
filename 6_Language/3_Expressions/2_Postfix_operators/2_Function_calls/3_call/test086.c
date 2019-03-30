#include <stdio.h>


void f(unsigned char x)
{
  printf("x = %d\n",x);
}

int main(void)
{
  f(-1);
  return 0;
}
