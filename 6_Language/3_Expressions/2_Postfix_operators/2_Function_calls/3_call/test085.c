#include <stdio.h>


void f(char x)
{
  printf("x = '%c'\n",x);
}

int main(void)
{
  f('x');
  return 0;
}
