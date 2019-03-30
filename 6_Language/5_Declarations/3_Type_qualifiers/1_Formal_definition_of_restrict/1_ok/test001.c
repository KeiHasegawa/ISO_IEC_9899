/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

void f(int n, int * restrict p, int * restrict q)
{
  while (n-- > 0)
    *p++ = *q++;
}

void g(void)
{
  extern int d[100];
  f(50, d + 50, d); // ok
  // f(50, d + 1, d); // undefined behavior
}

int d[100];

void test000(void)
{
  printf("`test000' called\n");
  for ( int i = 0 ; i < 50 ; ++i )
    d[i] = i;
  g();
  for ( int i = 0 ; i < 100 ; ++i )
    printf("%d\n", d[i]);
}

void h(int n, int * const restrict p, int * const q, int * const r)
{
  int i;
  for (i = 0; i < n; i++)
    p[i] = q[i] + r[i];
}

void test001(void)
{
  printf("`test001' called\n");
  typedef int A[3];
  A a, b = { 1, 2, 3 }, c = { 4, 5, 6 };
  h(3,a,b,c);
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", a[i]);
  printf("\n");
}

int main(void)
{
  test000();
  test001();
  return 0;
}
