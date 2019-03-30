#include <stdio.h>


double a = 1.0;
double b = 0.1;

void f(void)
{
  if ( a > b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
