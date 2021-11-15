/*
 * Check if block scope struct declaration at inline function works well.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __GNUC__
static
#endif
inline void f(int n, char* s)
{
  struct S {
    int n;
    char s[1];
  };
  struct S* ps = malloc(sizeof(struct S) + n);
  ps->n = n;
  strncpy(ps->s, s, ps->n);
  ps->s[ps->n] = '\0';
  printf("%d %s\n", ps->n, ps->s);
}

int main()
{
  char a[] = "ABCDEFGHIJKLMN";
  f(strlen(a), a);
  return 0;
}
