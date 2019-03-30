/*
 * Check if ISO sample works well.
 */
#include <stdio.h>
#include <stdarg.h>

int (*fpfi(int (*)(long), int))(int, ...);

int f(long a)
{
  printf("`f' called with %ld\n", a);
  return 3;
}

int g(int a, ...)
{
  va_list ap;
  va_start(ap,a);
  printf("`g' called with %d\n", a);
  if ( a )
    printf("%f\n", va_arg(ap,double));
  va_end(ap);
}

void h(void)
{
  printf("`h' called\n");
  int (*pf)(int, ...) = fpfi(&f,5);
  (*pf)(1,4.0);
}


int (*fpfi(int (*a)(long), int b))(int, ...)
{
  printf("`fpfi' called\n");
  printf("%d\n", a(b));
  return &g;
}

int main(void)
{
  h();
  return 0;
}
