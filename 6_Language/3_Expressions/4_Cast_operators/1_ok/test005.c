/*
 * Check cast to pointer to variable length array works well.
 */
#include <stdio.h>

void test000(int n)
{
  typedef int A[n];
  A* pa = (A*)123;
  printf("pa = %d\n", (int)pa);
}

int main(void)
{
  test000(6);
  return 0;
}
