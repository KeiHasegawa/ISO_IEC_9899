/*
 * Check if sizeof operator for incomplete type or incomplete type object
 * works well.
 */
#include <stdio.h>

extern struct S s;

struct S {
  char c[1024];
};

int main(void)
{
  printf("sizeof(struct S) = %d\n", (int)sizeof(struct S));
  printf("sizeof s = %d\n", (int)(sizeof s));
  return 0;
}
