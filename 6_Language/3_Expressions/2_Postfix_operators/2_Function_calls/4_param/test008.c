#include <stdio.h>

void f(short int x)
{
  printf("x = %d\n",x);
}

int main()
{
  f(1234);
  f(-1);
  f(-2);
  return 0;
}
