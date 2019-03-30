#include <stdio.h>

void f(int y)
{
  int* x;
  x = &y;
  printf("*x = %d\n",*x);
}

int main(void)
{
  f(5);
  return 0;
}
