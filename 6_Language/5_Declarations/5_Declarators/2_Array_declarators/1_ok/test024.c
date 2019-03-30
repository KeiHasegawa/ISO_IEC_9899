/*
 * Check if array declarator works well, where which dimension expression
 * is constant but reference symbol table.
 */
#include <stdio.h>

struct S {
  int a;
  char c[256];
};

struct S s;

void fill_test(int* p, int n)
{
  for ( int i = 0 ; i != n ; ++i )
    *p = i;
}

void fill_test2(double* p, int n)
{
  for ( int i = 0 ; i != n ; ++i )
    *p = i;
}

void f()
{
  int a[sizeof(struct S)];
  printf("sizeof a = %d\n", (int)sizeof a);
  double b[sizeof s.c];
  printf("sizeof b = %d\n", (int)sizeof b);

  fill_test(&a[0], sizeof a/sizeof a[0]);
  fill_test2(&b[0], sizeof b/sizeof b[0]);

  typedef struct S T;
  int c[sizeof(T)];
  printf("sizeof c = %d\n", (int)sizeof c);
  fill_test(&c[0], sizeof c/sizeof c[0]);
}

void g(int n)
{
  int d[n + n * n];
  printf("n = %d\n", n);
  printf("sizeof d = %d\n", (int)sizeof d);
  fill_test(&d[0], sizeof d/sizeof d[0]);
}

int main()
{
  f();
  g(5);
  return 0;
}
