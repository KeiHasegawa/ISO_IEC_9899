#include <stdio.h>

void f(short int x)
{
  printf("x = %d\n",x);
}

int main()
{
  short int x = 1234;
  short int y = -1;
  short int z = -2;

  f(x);
  f(y);
  f(z);
  return 0;
}
