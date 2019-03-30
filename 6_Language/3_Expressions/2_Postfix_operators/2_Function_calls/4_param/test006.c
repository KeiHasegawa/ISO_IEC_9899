#include <stdio.h>

short int x = 1234;
short int y = -1;
short int z = -2;

void f(short int x)
{
  printf("x = %d\n",x);
}

int main()
{
  f(x);
  f(y);
  f(z);
  return 0;
}
