/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

inline double fahr(double t)
{
  return (9.0 * t) / 5.0 + 32.0;
}

inline double cels(double t)
{
  return (5.0 * (t - 32.0)) / 9.0;
}

/* Creates an external definition. */
extern double fahr(double);

double convert(int is_fahr, double temp)
{
  /* A translator may perform inline substitutions. */
  return is_fahr ? cels(temp) : fahr(temp);
}

extern void f(void);

int main(void)
{
  printf("%f\n", convert(0,25));
  f();
  return 0;
}
