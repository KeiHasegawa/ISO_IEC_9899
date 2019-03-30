#include <stdio.h>


void f(void)
{
  if ( 3.0 < 3.14 )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
