/*
 * The array-subscript [] and memberaccess . and -> operators, the address &
 * and indirection * unary operators, and pointer casts may be used in the
 * creation of an address constant, but the value of an object shall not be
 * accessed by use of these operators.
 */
#include <stdio.h>

int ia[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int* test_000 = &ia[3];

struct S {
  int a;
  char b[10];
};

struct S sa[] = {
  { 0, "abc" },
  { 1, "def" },
  { 2, "ghi" },
  { 3, "jkl" },
  { 4, "mno" },
};

char* test_001 = &sa[2].b[0];

int* test_002 = &(&sa[1])->a;

int* test_003 = &*(ia+5);

int* test_004 = (int*)&ia;

int main(void)
{
  printf("%d\n", *test_000);
  printf("\"%s\"\n", test_001);
  printf("%d\n", *test_002);
  printf("%d\n", *test_003);
  printf("%d\n", *test_004);
  return 0;
}
