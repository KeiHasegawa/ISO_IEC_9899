#include <stdio.h>

extern int a;
static int a;

void f(void)
{
  a = 5678;
  printf("a = %d\n", a);
}
