#include <stdio.h>

static int a;
extern int a;

void f(void)
{
  a = 5678;
  printf("a = %d\n", a);
}
