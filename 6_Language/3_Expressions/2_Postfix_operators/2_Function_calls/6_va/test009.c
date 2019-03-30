#include <stdio.h>
#include <stdarg.h>

void test00(const char* fmt, ...)
{
  va_list ap;
  va_start(ap, fmt);
  vprintf(fmt, ap);
  va_end(ap);
}

struct S {
  char c[20];
  long double ld;
};

void test01_subr(int n, va_list ap)
{
  switch (n) {
  case 0:
    {
      int n = va_arg(ap, int);
      long double ld = va_arg(ap, long double);
      printf("%d %Lf\n", n, ld);
    }
    break;
  case 1:
    {
      char* p = va_arg(ap, char*);
      double d = va_arg(ap, double);
      printf("%s %f\n", p, d);
    }
    break;
  case 2:
    {
#ifdef USE_BUILTIN_VA_ARG
      struct S s = __builtin_va_arg(ap, struct S);
#else // USE_BUILTIN_VA_ARG
      struct S s = va_arg(ap, struct S);
#endif // USE_BUILTIN_VA_ARG
      long double ld = va_arg(ap, long double);
      printf("%s %Lf %Lf\n", s.c, s.ld, ld);
    }
    break;
  }
}

void test01(int n, ...)
{
  va_list ap;
  va_start(ap, n);
  test01_subr(n, ap);
  va_end(ap);
}

int main(void)
{
  test00("%c %Lf %c %d %f %lld\n", 'a', 1.5L, 'b', -10, 3.0, 23LL);
  test01(0, 1, 2.0L);
  test01(1, "abc", 3.0);
  struct S s = { "def", 4.0L };
  test01(2, s, 5.0L);
  return 0;
}
