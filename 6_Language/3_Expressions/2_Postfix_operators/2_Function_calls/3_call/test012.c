#include <stdio.h>

void f(char c)
{
  char* p;
  printf("%c\n",c);
  p = &c;
  *p = 'b';
  printf("%c\n",c);
}

int main(void)
{
  f('a');
  return 0;
}
