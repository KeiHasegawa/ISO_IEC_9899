/*
 * Check comma operator works well outside function.
 */
#include <stdio.h>

char test_000 = ('a', 'b');
int test_001 = ((void*)2, 3);
int* test_002 = (4, &test_001);

struct S { int a; };
struct S s = { 5 };
struct S* test_003 = (s,&s);

int main(void)
{
  printf("test_000 = '%c'\n", test_000);
  printf("test_001 = %d\n", test_001);
  printf("*test_002 = %d\n", *test_002);
  printf("test_003->a = %d\n", test_003->a);
  return 0;
}
