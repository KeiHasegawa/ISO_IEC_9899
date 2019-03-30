#include <stdio.h>


void f(double x, int y)
{
  if ( x != y )
    printf("error\n");
  else
    printf("ok\n");
}

int main(void)
{
  f(2,2);
  return 0;
}
