#include <stdio.h>

unsigned char f(float a)
{
  return a;
}

int main(void)
{
  printf("return value : %d\n",f(128.5));
  return 0;
}
