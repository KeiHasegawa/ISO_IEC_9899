#include <stdio.h>
#include <stdarg.h>

void f(int, ...);

int main()
{
  f( 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
     10,11,12,13,14,15,16,17,18,19);
  return 0;
}

void f(int a, ...)
{
  int array[20];
  va_list ap;
  int i;

  va_start(ap,a);
  array[0] = a;
  for ( i = 1 ; i < 20 ; ++i )
    array[i] = va_arg(ap,int);

  for ( i = 0 ; i < 20 ; ++i )
    printf("array[%d] = %d\n", i, array[i]);

  va_end(ap);
}
