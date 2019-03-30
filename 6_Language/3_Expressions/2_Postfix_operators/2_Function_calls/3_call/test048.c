#include <stdio.h>

double f(char c, int n, double d)
{
  return c * n - d;
}

int main(void)
{
  printf("%lf\n",f(3,5,-1.2));
  return 0;
}
