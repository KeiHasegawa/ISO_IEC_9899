/*
 * One of the following shall hold:
 * - ...
 * - both operands are pointers to qualified or unqualified versions of
 *   compatible types, and the type pointed to by the left has all the
 *   qualifiers of the type pointed to by the right;
 * - one operand is a pointer to an object or incomplete type and the other
 *   is a pointer to a qualified or unqualified version of void, and the type
 *   pointed to by the left has all the qualifiers of the type pointed to by
 *   the right; or
 * - the left operand is a pointer and the right is a null pointer constant.
 */
#include <stdio.h>

void test000(const volatile int* x, int* y)
{
  printf("`test000' called\n");
  printf("%d, %d\n", (int)x, (int)y);
  x = y;
  printf("%d, %d\n", (int)x, (int)y);
}

struct S;

void test001(volatile const struct S* x, const struct S* y)
{
  printf("`test001' called\n");
  printf("%d, %d\n", (int)x, (int)y);
  x = y;
  printf("%d, %d\n", (int)x, (int)y);
}

extern const volatile struct S* test002_x;

struct S { int a; };

void test002(volatile const struct S* test002_y)
{
  printf("`test002' called\n");
  printf("%d, %d\n", test002_x->a, test002_y->a);
  test002_x = test002_y;
  printf("%d, %d\n", test002_x->a, test002_y->a);
}

void test003(volatile struct S* x, volatile void* y)
{
  printf("`test003' called\n");
  printf("%d, %d\n", (int)x, (int)y);
  x = y;
  printf("%d, %d\n", (int)x, (int)y);
}

void test004(const int* const * x)
{
  printf("`test004' called\n");
  printf("%d\n", (int)x);
  x = 0;
  printf("%d\n", (int)x);
}

int main(void)
{
  test000((const volatile int*)1,(int*)2);
  test001((volatile const struct S*)3,(const struct S*)4);
  struct S s = { 1 };
  test002_x = &s;
  test002(&(struct S){2});
  test003((volatile struct S*)5,(volatile void*)6);
  test004((const int* const *)7);
  return 0;
}

const volatile struct S* test002_x;
