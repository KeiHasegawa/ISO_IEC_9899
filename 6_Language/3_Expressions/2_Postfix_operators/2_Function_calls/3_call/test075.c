#include <stdio.h>


float f(double a)
{
  return a;
}

int main(void)
{
  printf("return value : %f\n",f(0.128));
  return 0;
}
