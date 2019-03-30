/*
 * Check if structure declarations with storage-class
 * are recognized.
 */

#include <stdio.h>

struct S {
  int a;
};

typedef struct S t;
extern struct S e;
static struct S s;
inline struct S i(void){ return (struct S){1}; }

int main(void)
{
  t tt;
  printf("tt.a = %d\n", tt.a = 2);
  printf("e.a = %d\n", e.a = 3);
  printf("s.a = %d\n", s.a = 4);
  printf("i().a = %d\n", i().a);
  register struct S r;
  printf("r.a = %d\n", r.a = 5);
  auto struct S a;
  printf("a.a = %d\n", a.a = 6);
  return 0;
}

struct S e;
