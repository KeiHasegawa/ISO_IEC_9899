/*
 * A internal scope `static' function declaration is error.
 */
#include <stdio.h>

void f(void)
{
  static int g(void);  /* internal scope function declaration */
  printf("g() = %d\n", g());
}

static int g(void)
{
  return 5;
}

int main(void)
{
  f();
  return 0;
}
