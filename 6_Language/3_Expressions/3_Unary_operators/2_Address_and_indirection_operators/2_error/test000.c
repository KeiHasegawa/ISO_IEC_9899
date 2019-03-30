/*
 * Check if the operand of the unary & operator shall be either a function
 * designator, the result of a [] or unary * operator, or an lvalue that
 * designates an object that is not a bit-field and is not declared with
 * the register storage-class specifier.
 *
 * Check if the operand of the unary * operator shall have pointer type.
*/

/* primary-expression */
void test00(void)
{
  &1;
  &1.5;
  &'c';
  register int a;
  &a;
  *1;
  *1.5;
  *'c';
  int b;
  *b;
}

/* postfix-expression */
void test01(void)
{
  &test00();
  int a;
  &a++;
  int b;
  &b--;
  *test00();
  int c;
  *(c++);
  int d;
  *(d--);
}

/* unary-expression */
void test02(void)
{
  int a; &++a;
  int b; &--b;
  int c; &(&c);
  int d; &+d;
  int e; &-e;
  int f; &~f;
  int g; *+g;
  int h; *-h;
  int i; *~i;
}

/* cast-expression */
void test03(void)
{
  int a;
  &(long long int)a;
  int b;
  *(unsigned long long int)b;
}

/* multiplicative-expression */
void test04(int a, int b)
{
  &(a*b);
  *(a/b);
}

/* additive-expression */
void test05(int a, int b)
{
  &(a+b);
  *(a-b);
}

/* shift-expression */
void test06(int a, int b)
{
  &(a>>b);
  *(a<<b);
}

/* relational-expression */
void test07(int a, int b)
{
  &(a<b);
  *(a>b);
}

/* equality-expression */
void test08(int a, int b)
{
  &(a==b);
  *(a!=b);
}

/* and-expression */
void test09(int a, int b)
{
  &(a&b);
  *(a&b);
}

/* exclusive-OR-expression */
void test10(int a, int b)
{
  &(a^b);
  *(a^b);
}

/* Logical-OR-expression */
void test11(int a, int b)
{
  &(a || b);
  *(a || b);
}

/* Logical-AND-expression */
void test12(int a, int b)
{
  &(a && b);
  *(a && b);
}

/* conditional-expression */
void test13(int a, int b, int c)
{
  &(a ? b : c);
  *(a ? b : c);
}

/* assignment-expression */
void test14(int a, int b)
{
  &(a = b);
  *(a += b);
}

/* comma-expression */
void test15(int a, int b)
{
  &(a, b);
  *(a, b);
}
