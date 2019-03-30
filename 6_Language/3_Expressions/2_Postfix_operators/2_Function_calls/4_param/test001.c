#include <stdio.h>

void f(char x)
{
  printf("x = '%c'\n",x);
}

int main()
{
  char x = 'a';
  char y = 'b';
  char z = 'c';

  f(x);
  f(y);
  f(z);
  return 0;
}
