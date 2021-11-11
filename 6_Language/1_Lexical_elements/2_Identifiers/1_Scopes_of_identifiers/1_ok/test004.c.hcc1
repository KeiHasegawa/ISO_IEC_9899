/*
 * Check if same scope declarations are recognized.
 */
#include <stdio.h>

extern int a;
int a = 123;

struct S;
struct S {
  int a;
};
struct S S = { -1 };

int main(void)
{
  printf("a = %d\n", a);
  extern int b;
  printf("b = %d\n", b);
  int b = 456;
  printf("b = %d\n", b);
  {
    struct S {
      int a;
    };
    struct S;
    struct S S = { -2 };
    printf("S.a = %d\n", S.a);
  }
  printf("S.a = %d\n", S.a);
  return 0;
}

int b = 789;
