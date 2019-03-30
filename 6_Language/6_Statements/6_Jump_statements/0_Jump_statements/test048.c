#include <stdio.h>


int y = 10;

void f(void)
{
  if ( 3 != y )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
