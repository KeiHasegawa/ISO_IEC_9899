/*
 * Check error if compound literal's type name is neither object type
 * nor array of unknown size.
 */
void test00(void)
{
  (void (void)){ test00 };
}

void test01(void)
{
  struct S;
  (struct S){ 1 };
  union U;
  (union U){ 2 };
  enum E;
  (enum E){ 3 };
}

void test02(void)
{
  (void){ 1 };
}
