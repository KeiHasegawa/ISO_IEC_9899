/*
 * Sample of restrict. Compiler may just igonore it.
 */
#include <stdio.h>

void f(int n, int* restrict p, int* restrict q)
{
  while ( n-- )
    *p++ = *q++;
}

void test000(void)
{
  int * restrict p1;
  int * restrict q1;
  int a[3];
  p1 = &a[0];
  int b[] = { -1, -2, -3 };
  q1 = &b[0];
  // p1 = q1; // undefined behavior
  f(3,p1,q1);
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", a[i]);
  printf("\n");
  {
    for ( int i = 0 ; i < 3 ; ++i )
      a[i] = i;
    int * restrict p2 = p1; // ok
    int * restrict q2 = q1; // ok
    // p1 = q2; // undefined behavior
    // p2 = q2; // undefined behavior
    f(3,q2,p2);
    for ( int i = 0 ; i < 3 ; ++i )
      printf(" %d", b[i]);
    printf("\n");
  }
}

int main(void)
{
  test000();
  return 0;
}
