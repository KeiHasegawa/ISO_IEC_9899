#include <stdio.h>

struct A {
  int x;
};

struct B {
  int y;
  struct A a;
};

struct C {
  struct A a;
  struct B b;
};

void g(struct B*);

void f(struct C c)
{
  struct B b = c.b;
  b.a = c.a;
  g(&b);
}

int main()
{
  struct C c = { { 123 }, { 456, { 789 } } };
  f(c);
  return 0;
}

void g(struct B* p)
{
  printf("p->y = %d, p->a.x = %d\n", p->y, p->a.x);
}
