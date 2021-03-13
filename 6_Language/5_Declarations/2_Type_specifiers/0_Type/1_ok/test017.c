/*
 * Check if type in type-specifier is typedef-name
 */
#include <stdio.h>

typedef struct S {
  int a;
  const char* b;
} S;

void test000(S s)
{
  printf("`test000' called\n");
  printf("%d, %s\n", s.a, s.b);
}

int main(void)
{
  test000((S){2, "C"});
  return 0;
}
