#include <stdio.h>

struct S;

struct S {
  int m;
  struct S* next;
};

struct T {
  int m;
  struct S* s;
};

void g(struct S* ps)
{
  printf("ps->m = %d\n", ps->m);
  if ( ps->next )
    g(ps->next);
}

void f(struct T* pt)
{
  printf("pt->m = %d\n", pt->m);
  g(pt->s);
}

int main(void)
{
  struct S z = { 5, 0 };
  struct S y = { 4, &z };
  struct S x = { 3, &y };
  struct T a = { 2, &x };
  f(&a);
  return 0;
}
