#include <stdio.h>

void f(char a)
{
  printf("a = %d\n",a);
}

void g(int a)
{
  f(a);
}

int main(void)
{
  g(-1);
  return 0;
}
