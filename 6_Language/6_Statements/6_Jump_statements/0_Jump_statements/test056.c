#include <stdio.h>


void f(void)
{
  if ( 3.14F <= 3.14f )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
