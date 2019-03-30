#include <stdio.h>

int x = 12345678;

void f(float a)
{
  printf("a = %f\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
