#include <stdio.h>

void f(double d)
{
  printf("%lf\n",d);
}

int main(void)
{
  f(12345678);
  return 0;
}
