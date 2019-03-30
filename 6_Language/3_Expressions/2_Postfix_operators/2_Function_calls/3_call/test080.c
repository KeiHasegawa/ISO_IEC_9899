#include <stdio.h>


float r = 123.456;

unsigned short int f(void)
{
  return r;
}

int main(void)
{
  printf("return value : %d\n",f());
  return 0;
}
