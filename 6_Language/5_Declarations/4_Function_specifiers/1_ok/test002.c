/*
 * Check if ISO sample works well
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

void test000(void)
{
  printf("`test000' called\n");
  double fahr[] = { 60, 80, 100 };
  double cels[sizeof fahr/sizeof fahr[0]];
  for ( int i = 0 ; i < sizeof fahr/sizeof fahr[0] ; ++i )
    printf(" %f", convert(1,fahr[i]));
  printf("\n");
}

void test001(void)
{
  printf("`test001' called\n");
  double cels[] = { 20, 25, 30, 35 };
  double fahr[sizeof cels/sizeof cels[0]];
  for ( int i = 0 ; i < sizeof cels/sizeof cels[0] ; ++i )
    printf(" %f", convert(0,cels[i]));
  printf("\n");
}

int main(void)
{
  test000();
  test001();
  return 0;
}
