/*
 * Check if bit field declaration is recognized,
 * where, bit is specified sizeof of function call.
 */

#include <stdio.h>

extern char f(void);
extern short g(void);
extern int h(void);

struct T {
  unsigned int a : sizeof f();
  unsigned int b : sizeof g();
  unsigned int c : sizeof h();
};

int main(void)
{
  struct T t;
  t.a = 0, t.b = 0, t.c = 0;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 1, t.b = 1, t.c = 1;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 0, t.b = 2, t.c = 2;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 1, t.b = 3, t.c = 3;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 0, t.b = 0, t.c = 4;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 1, t.b = 1, t.c = 5;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 0, t.b = 2, t.c = 6;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 1, t.b = 3, t.c = 7;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 0, t.b = 0, t.c = 8;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 1, t.b = 1, t.c = 9;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 0, t.b = 2, t.c = 10;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 1, t.b = 3, t.c = 11;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 0, t.b = 0, t.c = 12;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 1, t.b = 1, t.c = 13;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 0, t.b = 2, t.c = 14;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  t.a = 1, t.b = 3, t.c = 15;
  printf("t.a = %d, t.b = %d, t.c = %d\n", t.a, t.b, t.c);
  return 0;
}
