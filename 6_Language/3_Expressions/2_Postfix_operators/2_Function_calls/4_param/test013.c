#include <stdio.h>

void f(int x)
{
  printf("x = %d\n",x);
}

int main()
{
  int x = 1;
  int y = -1;
  int z = -2;

  f(x);
  f(y);
  f(z);
  return 0;
}
