#include <stdio.h>

void f(char x)
{
  printf("x = '%c'\n",x);
}

int main()
{
  f('a');
  f('b');
  f('c');
  return 0;
}
