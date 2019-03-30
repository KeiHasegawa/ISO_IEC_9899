#include <stdio.h>


void f(float x, double y, unsigned short int z)
{
  if ( x < y + z )
    printf("error\n");
  else
    printf("ok\n");
}

int main(void)
{
  f(1.5,-0.5,2);
  return 0;
}
