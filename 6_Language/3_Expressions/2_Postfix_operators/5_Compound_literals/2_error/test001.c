/*
 * Check if no initializer shall attempt to provide a value for an object
 * not contained within the entire unnamed object specified by the
 * compound literal.
 */

/* int */
void test00(void)
{
  (int){ 1, 2 };
}

/* array */
void test01(void)
{
  (int [3]){ 1, 2, 3, 4 };
}

/* struct */
void test02(void)
{
  struct S { int a; };
  (struct S){ 1, 2 };
}

/* union */
void test03(void)
{
  union U { int a; float b; };
  (union U){ 1, 2.0 };
}
