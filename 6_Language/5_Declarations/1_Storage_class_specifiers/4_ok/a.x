#include <stdio.h>

static int a;
extern int a;

void f(void);

int main(void)
{
  a = 1234;
  printf("a = %d\n", a);
  f();
  printf("a = %d\n", a);
  return 0;
}
