#include <stdio.h>


void f(int x)
{
  if ( x < 10 )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(5);
  return 0;
}
