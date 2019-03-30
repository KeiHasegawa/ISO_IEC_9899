#include <stdio.h>
#include <complex.h>

void f(float complex a, double complex b)
{
  if (a == b)
    printf("a == b\n");

  if (a != b)
    printf("a != b\n");
}


int main(void)
{
  float complex x = 1.0 + I*2.0;
  double complex y = 3.0 + I*4.0;
  f(x, y);
  x = y;
  f(x, y);
  return 0;
}

