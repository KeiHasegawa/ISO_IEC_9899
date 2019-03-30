#include <stdio.h>

void f(int x)
{
  printf("x = %d\n",x);
}

int main()
{
  f(1);
  f(-1);
  f(-2);
  return 0;
}
