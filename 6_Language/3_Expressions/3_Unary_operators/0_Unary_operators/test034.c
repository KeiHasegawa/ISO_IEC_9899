#include <stdio.h>

void f(int y)
{
  float x;
  x = y;
  printf("x = %f\n",x);
}

int main(void)
{
  f(5);
  return 0;
}
