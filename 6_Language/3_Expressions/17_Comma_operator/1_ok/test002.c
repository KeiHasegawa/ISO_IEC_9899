/*
 * Check comma operator works well in constant-expression.
 */
#include <stdio.h>

struct S { int a; };
struct S s;

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case ('a', 'b'):
    printf("case ('a', 'b'):\n");
    break;
  case ((void*)2, 3):
    printf("case ((void*)2, 3):\n");
    break;
  case (int)(4, (void*)5):
    printf("case (int)(4, (void*)5):\n");
    break;
  case (int)(s,(struct S*)0):
    printf("case (int)(s,(struct S)0):\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f('b');
  f(3);
  f(5);
  f(0);
  return 0;
}
