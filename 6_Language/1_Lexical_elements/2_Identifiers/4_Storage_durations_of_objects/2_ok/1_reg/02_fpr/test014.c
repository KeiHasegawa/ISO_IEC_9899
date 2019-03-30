#include <stdio.h>

double f(void)
{
  double a, b, c;
  a = 6.0;
  b = 2.0;
  c = 3.0;
  return a * b / c;
}

int main(void)
{
  int i;
  
  for (i = 0; i < 10; i++)
    printf("%f\n",f());
  return 0;
}
