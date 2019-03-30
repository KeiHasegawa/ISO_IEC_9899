#include <stdio.h>


void f(unsigned char x, double y, short int z)
{
  if ( x <= y + z )
    printf("error\n");
  else
    printf("ok\n");
}

int main(void)
{
  f(3,4,-2);
  return 0;
}
