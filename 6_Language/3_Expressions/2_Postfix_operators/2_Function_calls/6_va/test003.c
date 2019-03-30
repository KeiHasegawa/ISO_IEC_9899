#include <stdio.h>
#include <stdarg.h>

void f(long long int, ...);

int main()
{
  f( 0LL, 1LL, 2LL, 3LL, 4LL, 5LL, 6LL, 7LL, 8LL, 9LL,
     10LL,11LL,12LL,13LL,14LL,15LL,16LL,17LL,18LL,19LL);
  return 0;
}

void f(long long int a, ...)
{
  long long int array[20];
  va_list ap;
  int i;

  va_start(ap,a);
  array[0] = a;
  for ( i = 1 ; i < 20 ; ++i )
    array[i] = va_arg(ap,long long int);

  for ( i = 0 ; i < 20 ; ++i )
    printf("array[%d] = %lld\n", i, array[i]);

  va_end(ap);
}
