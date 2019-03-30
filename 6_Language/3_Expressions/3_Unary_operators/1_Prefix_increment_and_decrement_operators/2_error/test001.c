/*
 * Check if prefix increment or decrement is invalid if operand
 * type is not pointer to object.
 */

void test00(void (*pf)(void))
{
  ++pf;
  --pf;
}

void test01(struct S* ps)
{
  ++ps;
  --ps;
}

void test02(union U* pu)
{
  ++pu;
  --pu;
}
     
void test03(enum E* pe)
{
  ++pe;
  --pe;
}

void test04(int (*pa)[])
{
  ++pa;
  --pa;
}

void test05(void* p)
{
  ++p;
  --p;
}
