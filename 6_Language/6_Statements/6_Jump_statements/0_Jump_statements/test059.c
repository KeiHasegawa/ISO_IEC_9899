#include <stdio.h>


void f(double x)
{
  if ( x == 3.14 )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(3.14);
  return 0;
}
