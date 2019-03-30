/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

extern double fahr(double);

inline double cels(double t)
{
  printf("`cels' called with %f\n", t);
  return t;
}

void f(void)
{
  printf("`f' called\n");
  printf("%f\n", fahr(80));
  printf("%f\n", cels(80));
}
