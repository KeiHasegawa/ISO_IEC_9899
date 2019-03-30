#include <stdio.h>

struct S;
extern struct S s;

void f(struct S*);

int main(void)
{
  f(&s);
  int* p = (int*)&s;
  printf("*p = %d\n", *p);
  return 0;
}
#include <stdio.h>

struct S {
  int a;
};

struct S s;

void f(struct S* p)
{
  p->a = 1234;
}
