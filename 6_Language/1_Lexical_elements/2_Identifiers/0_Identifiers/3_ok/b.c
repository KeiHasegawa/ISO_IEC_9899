#include <stdio.h>

static int a = 2;

void g(void)
{
  printf("g called\n");
  printf("a = %d\n", a);
}
