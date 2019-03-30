/*
 * Check character constant, enumeration constant and casted floating point
 * constant can be used as integer constant expression.
 */
#include <stdio.h>

void test000(void)
{
  enum E { e0, e1, e2 };
  struct S {
    unsigned int a : '\n';
    unsigned int b : e2;
    unsigned int c : (int)3.5;
  };
  struct S s = { (1 << '\n') - 1, 3, 7 };
  printf("0x%x %d %d\n", s.a, s.b, s.c);
  ++s.a;
  ++s.b;
  ++s.c;
  printf("0x%x %d %d\n", s.a, s.b, s.c);
}

int main(void)
{
  test000();
  return 0;
}
