#include <stdio.h>


double a = 0.1;

void f(double b)
{
  if ( a != b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(0.2);
  return 0;
}
