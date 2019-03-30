/*
 * If a external function declaration is conflict to
 * a internal scope function declaration, the external function declaration
 * is error.
 */
#include <stdio.h>

void f(void)
{
  int g(void);  /* internal scope function declaration */
  printf("g() = %d\n", g());
}

static int g(void)  /* external function declaration (definition) */
{
  return 5;
}

int main(void)
{
  f();
  return 0;
}
