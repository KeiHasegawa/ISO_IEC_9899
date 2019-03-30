#include <stdio.h>


void f(int a, int b)
{
  if ( a == b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(3,3);
  return 0;
}
