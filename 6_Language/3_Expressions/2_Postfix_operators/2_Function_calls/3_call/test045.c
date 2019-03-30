#include <stdio.h>

int f(double a){ return a; }

int main(void)
{
  printf("return value : %d\n",f(123.456));
  return 0;
}
