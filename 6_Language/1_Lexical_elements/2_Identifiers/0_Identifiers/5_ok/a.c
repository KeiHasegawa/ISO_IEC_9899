#include <stdio.h>

extern int a;

int main(void)
{
  printf("a = %d\n", a);
  extern void f(void);
  f();
  return 0;
}
