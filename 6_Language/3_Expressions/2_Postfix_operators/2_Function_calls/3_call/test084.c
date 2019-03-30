#include <stdio.h>


float r = -3.125;

double f(void)
{
  return r;
}

int main(void)
{
  printf("return value : %f\n",f());
  return 0;
}
