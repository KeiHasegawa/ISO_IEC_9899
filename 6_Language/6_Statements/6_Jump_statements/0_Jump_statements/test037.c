#include <stdio.h>


int b = 3;

void f(int a)
{
  if ( a < b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(2);
  return 0;
}
