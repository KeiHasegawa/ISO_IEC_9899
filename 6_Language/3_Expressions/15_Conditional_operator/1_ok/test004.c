/*
 * One of the following shall hold for the second and third operands:
 * - ...
 * - both operands are pointers to qualified or unqualified versions of
 *   compatible types;
 * - one operand is a pointer and the other is a null pointer constant; or
 * - one operand is a pointer to an object or incomplete type and the other
 *   is a pointer to a qualified or unqualified version of void.
 *
 * If both the second and third operands are pointers or one is a null pointer
 * constant and the other is a pointer, the result type is a pointer to a type
 * qualified with all the type qualifiers of the types pointed-to by both
 * operands. Furthermore, if both operands are pointers to compatible types or
 * differently qualified versions of a compatible type, the result has the
 * composite type; if one operand is a null pointer constant, the result has
 * the type of the other operand; otherwise, one operand is a pointer to void
 * or a qualified version of void, in which case the other operand is converted
 * to type pointer to void, and the result has that type.
 */
#include <stdio.h>

int x;

void test000(volatile int* y, const int* z)
{
  printf("`test000' called\n");
  const volatile int* r = x ? y : z;
  printf("%d\n", *r);
}

struct S {
  int a;
};

void test001(struct S* y)
{
  printf("`test001' called\n");
  const struct S* r = x ? y : 0;
  if ( r )
    printf("%d\n", r->a);
  else
    printf("%d\n", (int)r);
}

void test002(volatile struct S* y, const void* z)
{
  printf("`test002' called\n");
  const volatile struct S* r = x ? y : z;
  printf("%d\n", r->a);
}

int main(void)
{
  {
    x = 0;
    volatile int y = 1;
    const int z = 2;
    test000(&y,&z);
    x = 1;
    test000(&y,&z);
  }
  {
    x = 0;
    struct S y = { 1 };
    test001(&y);
    x = 1;
    test001(&y);
  }
  {
    x = 0;
    struct S y = { 1 };
    struct S z = { 2 };
    test002(&y,&z);
    x = 1;
    test002(&y,&z);
  }
  return 0;
}

