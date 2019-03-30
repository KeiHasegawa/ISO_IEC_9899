/*
 * Check if declarations are recognized.
 * `int' is implicitly assumed.
 */
#include <stdio.h>

typedef t;
extern e;
static s;
inline i(void){ return 1; }

int main(void)
{
  t tt;
  printf("tt = %d\n", tt = 2);
  printf("e = %d\n", e = 3);
  printf("s = %d\n", s = 4);
  printf("i() return %d\n", i());
  register r;
  printf("r = %d\n", r = 5);
  auto a;
  printf("a = %d\n", a = 6);
  return 0;
}

int e;
