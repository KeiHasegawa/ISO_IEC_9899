#include <stdio.h>
#include <stdarg.h>

void f(long double, ...);

int main()
{
  f( 0.0L, 1.0L, 2.0L, 3.0L, 4.0L, 5.0L, 6.0L, 7.0L, 8.0L, 9.0L,
     10.0L,11.0L,12.0L,13.0L,14.0L,15.0L,16.0L,17.0L,18.0L,19.0L);
  return 0;
}

void f(long double a, ...)
{
  long double array[20];
  va_list ap;
  int i;

  va_start(ap,a);
  array[0] = a;
  for ( i = 1 ; i < 20 ; ++i )
    array[i] = va_arg(ap,long double);

  for ( i = 0 ; i < 20 ; ++i )
    printf("array[%d] = %Lf\n", i, array[i]);

  va_end(ap);
}
