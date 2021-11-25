/*
 * Check if operator . or -> works well for incomplete type.
 */
#include <stdio.h>
#include <string.h>

extern union U u;
extern struct S s;

void f(union U*);
void g(struct S);

struct S {
  double d;
  char c[1024];
};

void init(void);

int main(void)
{
  init();
  f(&u);
  g(s);
  return 0;
}

union U {
  int i;
  float f;
};

void init(void)
{
  s.d = 1.5;
  strcpy(&s.c[0], "hello world");
  u.f = 1.0F;
}

void f(union U* pu)
{
  printf("`f' called\n");
  printf("pu->i = 0x%08x\n", pu->i);
  printf("pu->f = %f\n", pu->f);
}

void g(struct S a)
{
  printf("`g' called\n");
  printf("a.d = %f\n", a.d);
  printf("a.c = %s\n", a.c);
}

union U u;
struct S s;
