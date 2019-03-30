#include <stdio.h>

char r = -128;

float f(void)
{
  return r;
}

int main(void)
{
  printf("return value : %f\n",f());
  return 0;
}
