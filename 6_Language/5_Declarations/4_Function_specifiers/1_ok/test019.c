/*
 * Check if calling inline function which takes variable number of arguments
 * works well.
 */
#include <stdio.h>
#include <stdarg.h>

struct S {
  char c[40];
  long double ld;
  int i;
};

inline void f(int n, ...)
{
  va_list ap;
  va_start(ap,n);
  switch (n) {
  case 0:
    {
      double d = va_arg(ap, double);
      printf("%d, %f\n", n, d);
    }
    break;
  case 1:
    {
      char* s = va_arg(ap, char*);
      long double ld = va_arg(ap, long double);
      printf("%d %s, %Lf\n", n, s, ld);
    }
    break;
  case 2:
    {
#ifdef USE_BUILTIN_VA_ARG
      struct S s = __builtin_va_arg(ap, struct S);      
#else // USE_BUILTIN_VA_ARG
      struct S s = va_arg(ap, struct S);
#endif // USE_BUILTIN_VA_ARG
      long long int lli = va_arg(ap, long long int);
      double d = va_arg(ap, double);
      int i = va_arg(ap, int);
      long double ld = va_arg(ap, long double);
      printf("%d %s %Lf %d %lli %f %i %Lf\n", n, s.c, s.ld, s.i, lli, d, i, ld);
    }
  }
  va_end(ap);
}

int main(void)
{
  f(0, 1.0);
  f(1, "abc", 2.0L);
  struct S s = {"def", 3.0L, 4};
  f(2, s, 5LL, 6.0, 7, 8.0L);
  return 0;
}
