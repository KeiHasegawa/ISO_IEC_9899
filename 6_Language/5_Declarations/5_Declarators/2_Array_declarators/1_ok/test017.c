/*
 * Check if inline function definition which takes pointer to VLA works well.
 */
#include <stdio.h>

inline void f(int n, int (*p)[n+2])
{
  for (int i = 0 ; i != n + 2 ; ++i)
    printf("%d\n", (*p)[i]);
}

int main()
{
  int a[] = { -1, -3, 0, 2, 10, 1, 5 } ;
  f(5, &a);
  return 0;
}
