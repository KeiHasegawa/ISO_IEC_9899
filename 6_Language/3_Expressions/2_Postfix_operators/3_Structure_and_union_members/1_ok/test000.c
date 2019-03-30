/*
 * Check if structure or union member references are recognized.
 */
#include <stdio.h>
#include <string.h>

struct S {
  int a;
  char b[5];
};

union U {
  int a;
  float b;
};

void f(struct S*);

void g(union U*);

int main(void)
{
  struct S s;
  printf("s.a = %d\n", s.a = 1);
  strcpy(&s.b[0],"unix");
  printf("s.b = \"%s\"\n", s.b);
  union U u;
  u.b = 1.0;
  printf("u.a = 0x%x\n", u.a);
  f(&s);
  g(&u);
  return 0;
}

void f(struct S* ps)
{
  printf("f called\n");
  printf("ps->a = %d\n", ps->a);
  printf("ps->b = \"%s\"\n", &ps->b[0]);
}

void g(union U* pu)
{
  printf("g called\n");
  printf("pu->a = 0x%x\n", pu->a);
}

double h(void)
{
  return ((struct S*)0)->a + ((union U*)1)->b;
}
