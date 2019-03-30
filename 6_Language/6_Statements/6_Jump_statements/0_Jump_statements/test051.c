#include <stdio.h>


void f(void)
{
  if ( 11 >= 10 )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
