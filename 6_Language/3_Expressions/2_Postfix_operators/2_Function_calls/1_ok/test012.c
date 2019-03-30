/*
 * Caller doesn't use return value.
 */
#include <stdio.h>

struct T {
  char c[256];
};

struct T f(void);

int main(void)
{
  f();
  return 0;
}

struct T f(void)
{
  printf("`f' called\n");
  struct T t = {
    "Brian Kernighan\n" "Dennis M. Ritchie\n" "Bjarne Stroustrup\n"
  };
  printf("%s", t.c);
  return t;
}
