/*
 * Check if comma operator works well for incomplete type
 */
#include <stdio.h>

extern union U u1;

extern union U u2;

union U {
  char c[1024];
  int i;
};

union U u3 = { "foo" };

extern int x;

int main(void)
{
  union U x = (u1, u2);
  printf("x.c = %s\n", x.c);
  x = (u2, u3);
  printf("x.c = %s\n", x.c);
  x = (u3, u1);
  printf("x.c = %s\n", x.c);
  return 0;
}

union U u1 = { "bar" };

union U u2 = { "baz" };
