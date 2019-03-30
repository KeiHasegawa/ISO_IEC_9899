/*
 * Check if operator address of incomplete type object works well
 */
#include <stdio.h>
#include <string.h>

extern struct S s;

void f(struct S*);

void init(void);

int main(void)
{
  init();
  f(&s);
  return 0;
}

struct S {
  int a;
  char c[1024];
};

void f(struct S* ps)
{
  printf("ps->a = %d\n", ps->a);
  printf("ps->c = %s\n", ps->c);
}

void init(void)
{
  s.a = sizeof(struct S);
  strcpy(&s.c[0], "init called here");
}

struct S s;
