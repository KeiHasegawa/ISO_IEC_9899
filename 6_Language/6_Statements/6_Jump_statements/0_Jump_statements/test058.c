#include <stdio.h>


double y;

void f(void)
{
  if ( 12.34 >= y )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
