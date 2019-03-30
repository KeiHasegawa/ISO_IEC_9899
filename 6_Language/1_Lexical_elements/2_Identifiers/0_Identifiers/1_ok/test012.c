/*
 * Check if typedef-name, tag-name are
 * recognized
 */

#include <stdio.h>

typedef int A;

typedef int T;
struct T {
  int a;
};

enum E { X, Y, Z };

struct X {
  int x;
};

int main(void)
{
  A A;
  printf("A = %d\n", A = 1);
  struct T t;
  printf("t.a = %d\n", t.a = 2);
  struct T {
    int b;
  };
  struct T c;
  printf("c.b = %d\n", c.b = 3);
  struct X x;
  printf("x.x = %d\n", x.x = 4);
  printf("X = %d, Y = %d, Z = %d\n", X, Y, Z);
  return 0;
}
