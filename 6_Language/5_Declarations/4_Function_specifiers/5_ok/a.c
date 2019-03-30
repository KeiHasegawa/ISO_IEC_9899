/*
 * Check if ISO sample works well. In this sample, first reference inline
 * funciton and second, creates an external definition.
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

double convert(int is_fahr, double temp)
{
  /* A translator may perform inline substitutions. */
  return is_fahr ? cels(temp) : fahr(temp);
}

/* Creates an external definition. */
extern double fahr(double);

extern void f(void);

int main(void)
{
  printf("%f\n", convert(0,25));
  f();
  return 0;
}
