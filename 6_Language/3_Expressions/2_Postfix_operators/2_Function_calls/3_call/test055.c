#include <stdio.h>

void f(unsigned char a)
{
  printf("a = %d\n",a);
}

void g(long int a)
{
  f(a);
}

int main(void)
{
  g(-1);
  return 0;
}
