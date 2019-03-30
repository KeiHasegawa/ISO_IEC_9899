#include <stdio.h>


float y;

void f(void)
{
  if ( 11.1f > y )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
