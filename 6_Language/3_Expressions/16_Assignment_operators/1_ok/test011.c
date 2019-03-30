/*
 * Check if assignment operator works well for incomplete type
 */
#include <stdio.h>
#include <string.h>

extern struct S s;

struct S {
  char c[1024];
  double d;
};

void init(void);

void f(struct S*);

int main(void)
{
  init();
  struct S ss;
  ss = s;
  printf("ss.d = %f\n", ss.d);
  printf("ss.c = %s\n", ss.c);
  f(&ss);
  s = ss;
  printf("s.d = %f\n", s.d);
  printf("s.c = %s\n", s.c);
  return 0;
}

void init(void)
{
  strcpy(s.c, "howdy");
  s.d = 1.25;
}

void f(struct S* ps)
{
  ps->d = 0.625;
  strcpy(ps->c, "hello");
}

struct S s;
