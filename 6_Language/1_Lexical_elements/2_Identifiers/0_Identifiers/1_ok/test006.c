/*
 * Check if tag name doesn't conflict to variable name.
 */
#include <stdio.h>

struct s {
  int a;
};

struct {
  int b;
} s;

int main(void)
{
  printf("s.b = %d\n", s.b = 1);
  struct s ss;
  printf("ss.a = %d\n", ss.a = 2);
  return 0;
}
