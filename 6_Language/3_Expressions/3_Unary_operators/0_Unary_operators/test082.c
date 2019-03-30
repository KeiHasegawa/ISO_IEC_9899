#include <stdio.h>

struct T {
  char a;
  short int b;
  int c;
};

struct T* f(void);

int main(void)
{
  struct T t;
  t = *f();
  printf("t.a = '%c', t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  return 0;
}

struct T* f(void)
{
  static struct T t = { 'x', 12, 3456 };
  return &t;
}
