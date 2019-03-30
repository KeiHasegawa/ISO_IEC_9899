#include <stdio.h>


float x = 1.2f;

void f(void)
{
  if ( x < 3.14F )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
