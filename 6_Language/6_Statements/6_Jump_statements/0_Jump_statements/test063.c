#include <stdio.h>


int f(unsigned int a, int b)
{
  return a > b;
}

int main(void)
{
  if ( 0xffffffff > 1 )
    printf("ok\n");
  else
    printf("error\n");

  if ( f(0xffffffff,1) )
    printf("ok\n");
  else
    printf("error\n");

  return 0;
}
