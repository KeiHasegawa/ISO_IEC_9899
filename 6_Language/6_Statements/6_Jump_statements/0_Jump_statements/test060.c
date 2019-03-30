#include <stdio.h>


double x;

void f(void)
{
  if ( x != 3.14 )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
