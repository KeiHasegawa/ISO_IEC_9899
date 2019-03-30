/*
 * Check if relational operators work well in constant-expression.
 */
#include <stdio.h>

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
    long double x;
    unsigned int y;
  case sizeof(x < y):
    printf("case sizeof(x < y):\n");
    break;
  case (void*)0 > (void*)1:
    printf("case (void*)0 > (void*)1:\n");
    break;
  case (void*)0 < (void*)1:
    printf("case (void*)0 < (void*)1:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

void g(int n)
{
  printf("`g' called with %d\n", n);
  int a[10];
  switch ( n ){
  case sizeof(n > a[3]):
    printf("case sizeof(n > -n):\n");
    break;
  case &a[0] <= &a[3]:
    printf("case &a[0] <= &a[3]:\n");
    break;
  case &a[0] >= &a[3]:
    printf("case &a[0] >= &a[3]:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f(sizeof(int));
  f(0);
  f(1);
  g(sizeof(int));
  g(0);
  g(1);
  return 0;
}
