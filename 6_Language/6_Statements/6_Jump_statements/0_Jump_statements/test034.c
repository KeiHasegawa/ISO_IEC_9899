#include <stdio.h>


void f(double x, long int y, float z)
{
  if ( x > y + z )
    printf("error\n");
  else
    printf("ok\n");
}

int main(void)
{
  f(1.5,-0.5,2);
  return 0;
}
