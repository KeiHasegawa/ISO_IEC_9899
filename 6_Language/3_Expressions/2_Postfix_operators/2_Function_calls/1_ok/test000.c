/*
 * o Check if function returning `void' calling is available.
 * o Check if function returning struct calling is available.
 */
#include <stdio.h>

void f(int);

struct T g(double);

struct T {
  int a;
  int b;
};

int main(void)
{
  f(3);
  struct T t = g(1.5);
  printf("t.a = %d, t.b = %d\n", t.a, t.b);
  return 0;
}

void f(int n)
{
  printf("f(int) called with %d\n", n);
}

struct T g(double d)
{
  printf("g(double) called with %f\n", d);
  return (struct T){1,2};
}

void h(void)
{
  ((void (*)(void))1)();
}
