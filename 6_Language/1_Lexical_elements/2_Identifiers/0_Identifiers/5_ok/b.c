#include <stdio.h>

static int a = 2;

void f(void)
{
  printf("f called\n");
  printf("a = %d\n", a);
}
