#include <stdio.h>

inline int g(int);

inline int f(int a)
{
  return g(a + 3);
}

inline int g(int a)
{
  return a * 5;
}

int main()
{
  printf("f(10) = %d\n", f(10));
  return 0;
}
