/*
 * Check if sizeof operator for variable length array type
 * is recognized.
 */
#include <stdio.h>

void test00(int n)
{
  char a[n+3];
  printf("sizeof a = %d\n", sizeof a);
}

void test01(int n)
{
  char a[3][n];
  printf("sizeof a = %d\n", sizeof a);
}

int main()
{
  test00(10);
  test01(10);
  return 0;
}
