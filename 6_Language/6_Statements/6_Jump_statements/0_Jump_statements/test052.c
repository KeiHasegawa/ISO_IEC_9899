#include <stdio.h>


void f(float y)
{
  if ( 11.1f >= y )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(3.14);
  return 0;
}
