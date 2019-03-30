/*
 * Check if struct declaration ommited tag-name
 * is recognized.
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
  struct s s;
  printf("s.a = %d\n", s.a = 2);
  return 0;
}
