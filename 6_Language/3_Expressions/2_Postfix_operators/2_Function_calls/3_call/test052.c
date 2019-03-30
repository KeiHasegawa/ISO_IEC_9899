#include <stdio.h>

void f(float a)
{
  printf("a = %f\n",a);
}

void g(unsigned short int a)
{
  f(a);
}

int main(void)
{
  g(-1);
  return 0;
}
