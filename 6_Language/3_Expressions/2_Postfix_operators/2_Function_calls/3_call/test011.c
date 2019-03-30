#include <stdio.h>

void f(char c0, char c1, char c2, char c3)
{
  printf("%c %c %c %c\n",c0,c1,c2,c3);
}

int main(void)
{
  f('h','a','s','e');
  return 0;
}
