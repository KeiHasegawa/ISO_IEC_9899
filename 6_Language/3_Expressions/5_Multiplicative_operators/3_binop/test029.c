#include <stdio.h>

void f(double y, unsigned char z)
{
  printf("%d - %d = %d\n",(int)y,z,(int)y-z);
}

int main(void)
{
  f(-1,255);
  return 0;
}
