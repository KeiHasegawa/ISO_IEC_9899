#include <stdio.h>

float f(int a, double b, char c, unsigned short int d, long int e)
{
  return a + b + c + d + e;
}

int main(void)
{
  printf("%f\n",f(1,2,3,4,5));
  return 0;
}
