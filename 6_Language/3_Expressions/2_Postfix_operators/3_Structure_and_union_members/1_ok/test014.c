#include <stdio.h>

struct A {
  int x;
};

struct B {
  int y;
  struct A a;
};

struct C {
  struct B b;
  char gap[20];
  struct A a;
};

void g(struct B*);

void f(struct C src)
{
  struct B dst, dst2;
  dst = src.b;
  dst.a = src.a;
  dst2 = dst;
  g(&dst2);
}

int main()
{
  struct C c = { { 123, { 456 } }, "abcd", { 789 } };
  f(c);
  return 0;
}

void g(struct B* p)
{
  printf("p->y = %d, p->a.x = %d\n", p->y, p->a.x);
}

