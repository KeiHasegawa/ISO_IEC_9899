#include <stdio.h>


void f(double a, double b)
{
  if ( a == b )
    printf("error\n");
  else
    printf("ok\n");
}

int main(void)
{
  f(0.2,0.3);
  return 0;
}
