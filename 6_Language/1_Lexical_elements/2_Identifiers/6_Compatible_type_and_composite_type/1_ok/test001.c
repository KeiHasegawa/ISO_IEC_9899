/*
 * This test is not for compatible or composite type.
 * Simple version of test000.c
 */
#include <stdio.h>

void f(int (*)(char*));

int g(char*);

int main(void)
{
  f(&g);
  return 0;
}

void f(int (*pf)(char* a))
{
  char c[] = "composite test string";
  printf("(*pf)(&c[0]) = %d\n", (*pf)(&c[0]));
}

int g(char* a)
{
  return printf("`g' called with \"%s\"\n", a);
}
