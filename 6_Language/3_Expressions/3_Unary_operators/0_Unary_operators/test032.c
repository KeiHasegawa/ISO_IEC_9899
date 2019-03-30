#include <stdio.h>

void f(int* y)
{
  int x;
  x = *y;
  printf("x = %d\n",x);
}

int main(void)
{
  int a = 5;
  f(&a);
  return 0;
}
