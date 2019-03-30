#include <stdio.h>

long double x = 1.2L;
long double y = 3.4L;
long double z = 5.6L;

void f(long double x)
{
  printf("x = %Lf\n",x);
}

int main()
{
  f(x);
  f(y);
  f(z);
  return 0;
}
