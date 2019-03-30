/*
 * Check if parameter scope struct declaration at inline function works well.
 */
#include <stdio.h>
#include <stdlib.h>

inline void f(struct S { int n; char s[1]; }* ps)
{
  char* p = ps->s;
  while (ps->n--)
    *p++ = 'z' - ps->n;
  *p = '\0';
}

int main()
{
  struct local {
    int n;
    char s[1];
  };

  int m = 20;
  struct local* p = malloc(sizeof(struct local) + m);
  p->n = m;
  f((void*)p);
  printf("%s\n", p->s);
  return 0;
}
