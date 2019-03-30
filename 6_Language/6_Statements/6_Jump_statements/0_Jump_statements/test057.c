#include <stdio.h>


void f(double y)
{
  if ( 12.34 >= y )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(1.234);
  return 0;
}
