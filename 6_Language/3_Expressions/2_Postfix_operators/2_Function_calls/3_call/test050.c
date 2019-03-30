#include <stdio.h>

void f(int n)
{
  printf("n = %d\n",n);
}

void g(unsigned char uc)
{
  f(uc);
}

int main(void)
{
  g(-1);
  return 0;
}
