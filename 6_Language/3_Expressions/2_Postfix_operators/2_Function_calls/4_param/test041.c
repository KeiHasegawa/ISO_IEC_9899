#include <stdio.h>

void f(long double x)
{
  printf("x = %Lf\n",x);
}

int main()
{
  f(1.2L);
  f(3.4L);
  f(5.6L);
  return 0;
}
