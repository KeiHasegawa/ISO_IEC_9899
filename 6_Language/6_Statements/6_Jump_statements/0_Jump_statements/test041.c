#include <stdio.h>


float b = 0.5;

void f(float a)
{
  if ( a <= b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(0.5);
  return 0;
}
