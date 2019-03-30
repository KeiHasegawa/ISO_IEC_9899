#include <stdio.h>

void f(float y)
{
  char x;
  x = y;
  printf("x = %d\n",x);
}

int main(void)
{
  f(123.456);
  return 0;
}
