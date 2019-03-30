#include <stdio.h>
#include <stdarg.h>

void f(int, ...);

int main(void)
{
  f(0,'c');
  short int x = 1;
  f(1,x);
  f(1,2);
  float y = 0.5;
  f(2,y);
  f(2,2.0);
  return 0;
}

void f(int n, ...)
{
  va_list ap;
  va_start(ap,n);
  switch ( n ){
  case 0:
    printf("'%c'\n", va_arg(ap,int));
    break;
  case 1:
    printf("%d\n", va_arg(ap,int));
    break;
  default:
    printf("%f\n", va_arg(ap,double));
    break;
  }
  va_end(ap);
}
