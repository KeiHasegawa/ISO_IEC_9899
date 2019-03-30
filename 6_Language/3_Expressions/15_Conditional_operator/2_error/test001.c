/*
 * One of the following shall hold for the second and third operands:
 * - both operands have arithmetic type;
 * - both operands have compatible structure or union types;
 * - both operands have void type;
 * - both operands are pointers to qualified or unqualified versions of
 *   compatible types;
 * - one operand is a pointer and the other is a null pointer constant; or
 * - one operand is a pointer to an object or incomplete type and the other
 *   is a pointer to a qualified or unqualified version of void.
 */
extern int x;

void test000(int y, char* z)
{
  x ? y : z;
}

struct S { int a; };

void test001(struct S y, int z)
{
  x ? y : z;
}

struct SS { int a; };

void test002(struct S y, struct SS z)
{
  x ? y : z;
}

void test003(struct S y)
{
  struct S {
    int a;
  };
  struct S z;
  x ? y : z;
}

void test004(int y, int z)
{
  x ? y : (void)z;
}

void test005(char* y, int* z)
{
  x ? y : z;
}

void test006(char* y)
{
  x ? y : 0.0;
}

void test007(void* y, int z)
{
  x ? y : z;
}

struct SSS;
extern struct SSS a, b;

void test008(int n)
{
  n ? a : b;
}
