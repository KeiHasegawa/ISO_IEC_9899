#include <stdio.h>


void f(float x)
{
  if ( x != 3.14F )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(2.17);
  return 0;
}
