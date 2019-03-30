#include <stdio.h>


int a = 4;
int b = 3;

void f(void)
{
  if ( a > b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f();
  return 0;
}
