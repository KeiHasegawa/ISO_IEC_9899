#include <stdio.h>

unsigned int x = -1;

void f(double a)
{
  printf("a = %lf\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
