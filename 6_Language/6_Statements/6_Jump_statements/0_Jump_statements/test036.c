#include <stdio.h>


int a = 3;

void f(int b)
{
  if ( a != b )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  f(2);
  return 0;
}
