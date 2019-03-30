#include <stdio.h>

void f(int y)
{
  int x;
  x = y - 123;
  printf("%d - %d = %d\n",y,123,x);
}

int main(void)
{
  f(3);
  return 0;
}
