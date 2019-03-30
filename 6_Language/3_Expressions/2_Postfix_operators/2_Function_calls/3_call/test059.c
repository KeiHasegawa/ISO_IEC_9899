#include <stdio.h>

char x = 'x';

void f(char a)
{
  printf("a = '%c'\n",a);
}

int main(void)
{
  f(x);
  return 0;
}
