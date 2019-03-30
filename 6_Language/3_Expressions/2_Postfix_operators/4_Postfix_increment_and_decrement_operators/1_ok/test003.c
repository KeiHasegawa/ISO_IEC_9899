/*
 * Check if postfix increment or decrement operator is recognized.
 */
#include <stdio.h>

int a = 3;
int b = sizeof a++;
int c = sizeof a--;

void test00(void)
{
  printf("`test00' called\n");
  printf("a = %d, b = %d, c = %d\n", a, b, c);
}

void test01(int n)
{
  printf("`test01' called\n");
  printf("n = %d\n", n);
  switch ( n ){
  case sizeof n++:
    printf("case sizeof n++:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
  printf("n = %d\n", n);
  switch ( n ){
  case sizeof n--:
    printf("case sizeof n--:\n");
    break;
  default:
    printf("default:\n");
    break;
  }
  printf("n = %d\n", n);
}

void test02(int n)
{
  printf("`test02' called\n");
  int a[sizeof n++];
  printf("sizeof a = %d\n", (int)(sizeof a));
}

int main(void)
{
  test00();
  test01(sizeof(int));
  test02(sizeof(long long int));
  return 0;
}
