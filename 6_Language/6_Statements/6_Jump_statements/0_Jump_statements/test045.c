#include <stdio.h>


double b = 0.1;

void f(double a)
{
  if ( a < b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(-1);
  return 0;
}
