/*
 * Check address and indirection operator works well in constantant-expression.
 */
#include <stdio.h>

struct S { int a; char* b; };
struct S s[10];

void f(int n)
{
  printf("`f' called with %d\n", n);
  struct S ss[3];
  switch ( n ){
  case &s[10] - &s[0]:
    printf("&s[10] - &s[0]:\n");
    break;
  case &*s - &s[10]:
    printf("&*s - &s[10]:\n");
    break;
  case &ss[0] - &ss[3]:
    printf("&ss[0] - &ss[3]:\n");
    break;
  case &*ss - &ss[0]:
    printf("&*ss - &ss[0]:\n");
    break;
  case sizeof *ss[2].b / sizeof *s[5].b:
    printf("sizeof *ss[2].b / sizeof *s[5].b:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}


int main(void)
{
  f(10);
  f(-10);
  f(-3);
  f(0);
  f(1);
  return 0;
}
