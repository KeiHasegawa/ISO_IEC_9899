#include <stdio.h>


void f(float a, float b)
{
  if ( a >= b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(0.5,0.5);
  return 0;
}
