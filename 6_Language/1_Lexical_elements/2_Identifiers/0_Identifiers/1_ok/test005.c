/*
 * Check if typedef declarations are recognized.
 */
#include <stdio.h>

typedef int A;
A a;

int main(void)
{
  A A;
  printf("A = %d\n", A = 1);
  printf("a = %d\n", a = 2);
  return 0;
}
