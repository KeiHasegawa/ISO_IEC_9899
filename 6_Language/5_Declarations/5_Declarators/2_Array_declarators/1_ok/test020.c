/*
 * Check if inline function declaration which takes pointer to VLA works well.
 * (block scope, direct declarator)
 */
#include <stdio.h>

void f(int n)
{
  printf("f called\n");
  inline void g(int n, int (*p)[(n+2) << n]);
  int a[(n+2) << n];
  g(n, &a);
  for (int i = 0; i != sizeof a/sizeof a[0]; ++i)
    printf("a[%d] = %d\n", i, a[i]);
}

int main()
{
  f(2);
  return 0;
}

inline void g(int n, int (*p)[(n+2) << n])
{
  printf("g called\n");
  n *= 10;
  printf("n = %d\n", n);
  int* begin = &(*p)[0];
  int m = sizeof *p/sizeof (*p)[0];
  printf("m = %d\n", m);
  int* end = &(*p)[m];
  for (; begin != end ; ++begin)
    *begin = end - begin;
}
