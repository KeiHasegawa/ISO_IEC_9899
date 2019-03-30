/*
 * If a parameter is declared in pointer to function parameter scope,
 * and the pointer to function is declared in other function parameter scope,
 * reference the parameter is error.
 */
#include <stdio.h>

void f(int (*pf)(char* a))
{
  char s[] = "test string";
  printf("return value : %d\n", (*a)(&s[0]));
}

int g(char*);

int main(void)
{
  f(&g);
  return 0;
}

int g(char* p)
{
  return printf("\"%s\"\n", p);
}
