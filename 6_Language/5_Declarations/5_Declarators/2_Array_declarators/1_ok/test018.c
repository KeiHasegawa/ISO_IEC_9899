/*
 * Check if inline function declaration which takes pointer to VLA works well.
 * (file scope, direct declarator)
 */
#include <stdio.h>

inline int f(int n, int (*p)[n+2]);

void g(int n)
{
  printf("g called\n");  
  int a[n+2];
  for (int i = 0 ; i != sizeof a/sizeof a[0] ; ++i)
    a[i] = (n << 2) + i;
  int m = f(n, &a);
  printf("m = %d\n", m);
}

int main()
{
  g(3);
  return 0;
}

inline int f(int n, int (*p)[n+2])
{
  printf("f called\n");
  int s = 0;
  for (int i = 0 ; i != n+2 ; ++i)
    s += (*p)[i];
  return s;
}
