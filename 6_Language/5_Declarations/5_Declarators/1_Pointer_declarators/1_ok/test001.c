/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

extern const int a;
extern int b;

void test000(void)
{
  printf("`test000' called\n");
  const int *ptr_to_constant = &a;
  int *const constant_ptr = &b;
  printf("%d\n", *ptr_to_constant);
  printf("%d\n", *constant_ptr);
  ++(*constant_ptr);
  printf("%d\n", *ptr_to_constant);
  printf("%d\n", *constant_ptr);
}

const int a = 1;
int b = 2;

void test001(void)
{
  printf("`test001' called\n");
  typedef int *int_ptr;
  const int_ptr constant_ptr = &b;
  printf("%d\n", *constant_ptr);
  ++(*constant_ptr);
  printf("%d\n", *constant_ptr);
}

int main(void)
{
  test000();
  test001();
  return 0;
}
