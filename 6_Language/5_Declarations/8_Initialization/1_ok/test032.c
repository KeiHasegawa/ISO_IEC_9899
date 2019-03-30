/*
 * Initialization of member whose type is const structure.
 */
#include <stdio.h>

struct S {
  int m;
};

struct T {
  const struct S s;
};

struct T t1 = { 1 };

struct T t2 = { { 2 } };

int main(void)
{
  printf("t1.s.m = %d\n", t1.s.m);
  printf("t2.s.m = %d\n", t2.s.m);
  return 0;
}

