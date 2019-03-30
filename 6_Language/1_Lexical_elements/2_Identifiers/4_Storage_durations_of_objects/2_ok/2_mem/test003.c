#include <stdio.h>

int a;

void f(void)
{
  extern int a;
  a = 1234;
}

int main(void)
{
  printf("a = %d\n",a);
  f();
  printf("a = %d\n",a);
  return 0;
}

