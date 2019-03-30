/*
 * Check if calling inline function works well.
 * Some calls are pre-defined inline functions and others are post-defined
 * inline functions.
 */
#include <stdio.h>

inline int f(int a, int b, int c)
{
  if (a)
    return (b+c)/a;
  return b-c;
}

inline void g1(int, int);

inline int g2(int, int);

int h(int i, int j, int k)
{
  g1(j,k);
  return f(i,j,k) - g2(k,i);
}

inline void g1(int d, int e)
{
  if (!e)
    return;
  if (d)
    printf("e = %d\n", e);
}

inline int g2(int x, int y)
{
  if (x)
    return x+y;
  return y * y;
}

int main()
{
  int s, t, u;

  s = 4; t = 30; u = 15;
  printf("h(%d, %d, %d) returns %d\n", s, t, u, h(s, t, u));

  s = 0; t = 30; u = 15;
  printf("h(%d, %d, %d) returns %d\n", s, t, u, h(s, t, u));

  s = 4; t = 30; u = 0;
  printf("h(%d, %d, %d) returns %d\n", s, t, u, h(s, t, u));

  s = 4; t = 0; u = 15;
  printf("h(%d, %d, %d) returns %d\n", s, t, u, h(s, t, u));

  return 0;
}
