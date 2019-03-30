#include <stdio.h>

static int a = 1;

void f(void)
{
  printf("f called\n");
  printf("a = %d\n", a);
}
