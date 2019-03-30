/*
 * Check if block scope union declaration at inline function works well.
 */
#include <stdio.h>

inline void f(int (*)(int));

inline int g(int n)
{
  printf("g called\n");
  union {
    float f;    
    int i;
  } u = { n };
  printf("n = %d u.f = %f u.i = %x\n", n, u.f, u.i);
  return u.i;
}

int main()
{
  f(&g);
  return 0;
}

inline void f(int (*pf)(int))
{
  printf("f called\n");
  union U {
    int i;
    float f;
  } u = { pf(5) };
  printf("u.i = %x u.f = %f\n", u.i, u.f);
}
