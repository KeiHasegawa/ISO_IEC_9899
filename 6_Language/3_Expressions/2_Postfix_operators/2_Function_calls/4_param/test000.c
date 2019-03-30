#include <stdio.h>

char x = 'a';
char y = 'b';
char z = 'c';

void f(char x)
{
  printf("x = '%c'\n",x);
}

int main()
{
  f(x);
  f(y);
  f(z);
  return 0;
}
