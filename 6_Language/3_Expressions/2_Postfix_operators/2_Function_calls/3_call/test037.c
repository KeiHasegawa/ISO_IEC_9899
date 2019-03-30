#include <stdio.h>

float f(int a, double b)
{
  return a + b;
}

int main(void)
{
  printf("%f\n",f(1,2));
  return 0;
}
