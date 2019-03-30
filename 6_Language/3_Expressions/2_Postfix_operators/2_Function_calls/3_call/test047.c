#include <stdio.h>

float f(int a, double b){ return a * b; }

int main(void)
{
  printf("return value : %f\n",f(123.456,2));
  return 0;
}
