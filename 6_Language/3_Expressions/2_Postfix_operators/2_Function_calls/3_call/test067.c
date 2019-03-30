#include <stdio.h>


float x = 123.4;

void f(char a)
{
  printf("a = %d\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
