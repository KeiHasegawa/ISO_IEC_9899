#include <stdio.h>

int a = 1234;

int main(void)
{
  extern void f(void), g(void);
  f();
  g();
  return 0;
}

void g(void)
{
  printf("a = %d\n", a);
  a = 3397;
  printf("a = %d\n", a);
}
#include <stdio.h>

void f(void)
{
  extern int a;
  printf("a = %d\n",a);
  a = 5678;
  printf("a = %d\n",a);
}
