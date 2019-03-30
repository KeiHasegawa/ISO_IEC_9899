#include <stdio.h>


float a = 0.5;

void f(float b)
{
  if ( a > b )
    printf("error\n");
  else
    printf("ok\n");
}

int main(void)
{
  f(0.5);
  return 0;
}
