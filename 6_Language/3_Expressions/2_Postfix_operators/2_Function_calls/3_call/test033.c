#include <stdio.h>

int f(float a, double b){ return a + b; }

int main(void)
{
  printf("%d\n",f(3.14,2.17));
  return 0;
}
