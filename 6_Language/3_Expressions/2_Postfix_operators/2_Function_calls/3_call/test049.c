#include <stdio.h>

void f(char c)
{
  printf("c = '%c'\n",c);
}

void g(char c)
{
  f(c);
}

int main(void)
{
  g('x');
  return 0;
}
