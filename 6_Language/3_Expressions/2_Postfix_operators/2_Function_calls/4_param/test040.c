#include <stdio.h>

void f(long double x)
{
  printf("x = %Lf\n",x);
}

int main()
{
  long double x = 1.2L;
  long double y = 3.4L;
  long double z = 5.6L;

  f(x);
  f(y);
  f(z);
  return 0;
}
