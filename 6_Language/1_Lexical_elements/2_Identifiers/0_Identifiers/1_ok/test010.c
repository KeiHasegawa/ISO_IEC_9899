/*
 * Check if parameter declarations with typedefed
 * are recognized.
 */

#include <stdio.h>

typedef int A;
void f(A*);
int g(A), n;

int main(void)
{
  f(&n);
  g(n);
  return 0;
}

void f(A* A)
{
  printf("f called\n");
  *A = 1;
}

int g(A A)
{
  printf("g called with %d\n", A);
}
