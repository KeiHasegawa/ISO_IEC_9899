#include <stdio.h>

void f(double a)
{
  printf("a = %f\n",a);
}

void g(short int a)
{
  f(a);
}

int main(void)
{
  g(-1);
  return 0;
}
