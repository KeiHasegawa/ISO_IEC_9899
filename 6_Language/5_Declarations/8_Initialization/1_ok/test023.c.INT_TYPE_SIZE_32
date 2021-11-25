/*
 * Check if member designators are recognized, where
 * type of initialized variable is union.
 */
#include <stdio.h>

union { int a; float b; } u = { .b = 1.0 };

union { int a; float b; } v = { .a = 2 };

int main(void)
{
  union { int a; float b; } s = { .b = 2.0 };
  union { int a; float b; } t = { .a = 3 };

  printf("u.a = 0x%x\n", u.a);
  printf("v.a = %d\n", v.a);
  printf("s.a = 0x%x\n", s.a);
  printf("t.a = %d\n", t.a);
  return 0;
}
