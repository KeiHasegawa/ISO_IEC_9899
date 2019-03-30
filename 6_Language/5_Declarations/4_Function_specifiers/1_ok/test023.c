/*
 * Check if it's possible to refer to __func__ at inline or static function.
 */
#include <stdio.h>
#ifdef __func__
#undef __func__
#endif

inline int alpha(int n)
{
  printf("%s called with %d\n", __func__, n);
  return n + 10;
}

static double beta(double d)
{
  printf("%s called with %f\n", __func__, d);
  return d * 3;
}

inline float gamma(int);

static char* delta(int);

int main()
{
  printf("alpha(5) = %d\n", alpha(5));
  printf("beta(2.5) = %f\n" , beta(2.5));
  printf("gamma(4) = %f\n", gamma(4));
  printf("delta(7) = %s\n", delta(7));
  return 0;
}

inline float gamma(int n)
{
  printf("%s called with %d\n", __func__, n);
  return n * 0.2;
}

char array[] = "abcdefghijklmnopqrstuvwxyz";

static char* delta(int n)
{
  printf("%s called with %d\n", __func__, n);
  return &array[n];
}
