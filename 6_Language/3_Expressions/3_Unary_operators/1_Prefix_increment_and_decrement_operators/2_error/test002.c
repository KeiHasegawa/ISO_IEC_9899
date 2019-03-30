/*
 * Check if prefix incremnet or decrement is not lvalue.
 */
void test00(void)
{
  int a;
  ++a = 1;
  int b;
  --b = 1;
}

void test01(void)
{
  int a;
  &++a;
  int b;
  &--b;
}

void test02(int* p, char* q)
{
  ++*p = 1;
  &--*q;
}
