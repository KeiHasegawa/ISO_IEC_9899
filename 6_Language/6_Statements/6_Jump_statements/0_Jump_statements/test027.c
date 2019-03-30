#include <stdio.h>

void f(char x, double y)
{
  if ( x == y )
    printf("error\n");
  else
    printf("ok\n");
}

int main(void)
{
  f(1,2);
  return 0;
}
