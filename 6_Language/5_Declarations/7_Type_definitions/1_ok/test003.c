/*
 * Check if ISO sample works well.
 *
 * type t1 and the type pointed to by tp1 are compatible. Type t1 is also
 * compatible with type struct s1, but not compatible with the types struct
 * s2, t2, the type pointed to by tp2, and int.
 */
#include <stdio.h>

typedef struct s1 { int x; } t1, *tp1;
typedef struct s2 { int x; } t2, *tp2;

void f(void)
{
  t1 a = { 1 };
  struct s1 b = { 2 };
  tp1 p;
  p = &a;
  printf("%d\n", p->x);
  p = &b;
  printf("%d\n", p->x);
}

int main(void)
{
  f();
  return 0;
}
