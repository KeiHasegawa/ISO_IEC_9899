/*
 * Check if block scope declarations are recognized.
 */
#include <stdio.h>

const char* pc = "`pc' has file scope";

typedef int a;  /* `a' has file scope */

short int X = 3;  /* `X' has file scope */

union {
  int n;  /* `n' has block scope */
  float f;  /* `f' has block scope */
} S = { .f = 1.0 };

enum E { x, y, z };

int f(char* pc)  /* `pc' has block scope */
{
  printf("pc = \"%s\"\n", pc);
  int a = 1;  /* `a' has block scope. hidden `::a' */
  printf("a = %d\n", a);
  typedef float X;  /* `X' has block scope */
  struct S {
    X m;  /* `m' has block scope */
  };  /* `struct S' has block scope. `::S' is hidden. */
  struct S E = { 5 };  /* `E' has block scope. `::E' is hidden. */
  printf("E.m = %f\n", E.m);
  return z;
}

int main(void)
{
  printf("pc = \"%s\"\n", pc);
  char s[] = "Scopes of identifiers";
  a a = f(s);  /* first `a' refers `::a', and second `a' has block scope */
  printf("a = %d\n", a);
  printf("X = %d\n", X);
  printf("S.n = 0x%08x\n", S.n);
  return 0;
}
