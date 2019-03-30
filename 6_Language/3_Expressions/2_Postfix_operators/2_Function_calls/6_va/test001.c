#include <stdio.h>
#include <stdarg.h>

void f(double, ...);

int main()
{
  f( 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0,
     10.0,11.0,12.0,13.0,14.0,15.0,16.0,17.0,18.0,19.0);
  return 0;
}

void f(double a, ...)
{
  double array[20];
  va_list ap;
  int i;

  va_start(ap,a);
  array[0] = a;
  for ( i = 1 ; i < 20 ; ++i )
    array[i] = va_arg(ap,double);

  for ( i = 0 ; i < 20 ; ++i )
    printf("array[%d] = %f\n", i, array[i]);

  va_end(ap);
}
