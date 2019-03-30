#include <stdio.h>

void f(short int y, unsigned char z)
{
  printf("%d * %d = %d\n",y,z,y*z);
}

int main(void)
{
  f(-1,255);
  return 0;
}
