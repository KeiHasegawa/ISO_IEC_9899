#include <stdio.h>


int x = 10;

void f(void)
{
  if ( x <= 10 )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
