/*
 * Check bitwise and operator works well in sub expression.
 */
#include <stdio.h>

struct S;
extern struct S s;
struct S* ps = &s;

struct T {
  char* p;
};

struct S {
  struct T t;
} s;

void f(int i, int j)
{
  printf("`f' called\n");
  printf("%d\n", (*ps).t.p[i+j] & (*ps).t.p[12]);
}

int main(void)
{
  char array[] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
  };
  s.t.p = &array[0];
  f(3,7);
  return 0;
}
