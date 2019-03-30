#include <stdio.h>

void f(char a)
{
  printf("a = %d\n",a);
}

void g(unsigned int a)
{
  f(a);
}

int main(void)
{
  g(255);
  return 0;
}
