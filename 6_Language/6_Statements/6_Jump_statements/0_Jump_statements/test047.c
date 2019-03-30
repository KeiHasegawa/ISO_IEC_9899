#include <stdio.h>


void f(int y)
{
  if ( 3 == y )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(3);
  return 0;
}
