#include <stdio.h>


float a = 0.5;
float b = 0.5;

void f(void)
{
  if ( a >= b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
