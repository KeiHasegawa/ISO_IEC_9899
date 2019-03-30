/*
 * Check if function declaration is recognized,
 * whose parameter is declared with typedef-name.
 */
#include <stdio.h>

typedef int A;
int f(A*, const A*);

int main(void)
{
  int a, b = 1;
  int c = f(&a,&b);
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  return 0;
}

int f(A* p, const A* q)
{
  *p = 3;
  return *p**q;
}
