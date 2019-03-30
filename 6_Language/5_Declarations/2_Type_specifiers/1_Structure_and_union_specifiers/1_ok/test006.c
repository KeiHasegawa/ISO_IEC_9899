/*
 * Check the difference of structure and union.
 *
 * ... a structure is a type consisting of a sequence of members,
 * whose storage is allocated in an ordered sequence, and a union is a type
 * consisting of a sequence of members whose storage overlap.
 */
#include <stdio.h>

union U;

struct S {
  int a;
  double b;
  char c[10];
  struct S* d;
  union U* e;
};

union U {
  int a;
  double b;
  char c[10];
  struct S* d;
  union U* e;
};

void test001(union U*);

void test000(struct S* p)
{
  printf("`test000' called\n");
  printf(" %d", p->a);
  printf(" %f", p->b);
  printf(" %s", p->c);
  if ( p->d )
    test000(p->d);
  if ( p->e )
    test001(p->e);
}

int a, b, c, d, e;

void test001(union U* p)
{
  printf("`test001' called\n");
  if ( a )
    printf(" %d", p->a);
  if ( b )
    printf(" %f", p->b);
  if ( c )
    printf(" %s", p->c);
  if ( d )
    if ( p->d )
      test000(p->d);
  if ( e )
    if ( p->e )
      test001(p->e);
}

int main(void)
{
  struct S s = { 1, 2, "struct", 0, 0 };
  test000(&s);
  printf("\n");
  union U u;
  u.a = 1;
  a = 1;
  test001(&u);
  printf("\n");
  u.b = 2;
  a = 0, b = 1;
  test001(&u);
  printf("\n");
  u.c[0] = 'u';
  u.c[1] = 'n';
  u.c[2] = 'i';
  u.c[3] = 'o';
  u.c[4] = 'n';
  u.c[5] = '\0';
  b = 0, c = 1;
  test001(&u);
  printf("\n");
  return 0;
}
