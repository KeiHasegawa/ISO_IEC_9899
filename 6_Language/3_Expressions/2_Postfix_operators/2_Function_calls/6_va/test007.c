#include <stdio.h>
#include <stdarg.h>

#define ARRAY_SIZE 308    /* SPU test magic number */

struct T {
  int a[ARRAY_SIZE];
};

void g(struct T t)
{
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i ){
    if ( i != t.a[i] ){
      printf("error: t.a[%d] != %d\n",i,i);
      return;
    }
  }
  printf("ok\n");
}

void f(struct T t, int n, ...)
{
  g(t);
  va_list ap;
  printf("n = %d\n", n);
  va_start(ap,n);
  double x = va_arg(ap,double);
  printf("x = %f\n", x);
  long long int y = va_arg(ap,long long int);
  printf("y = %lld\n", y);
  va_end(ap);
}

int main(void)
{
  struct T t;
  for ( int i = 0 ; i < ARRAY_SIZE ; ++i )
    t.a[i] = i;
  f(t,1,2.0,3LL);
  return 0;
}
