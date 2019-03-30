/*
 * Check if expressions whose type function retuning `T' are recognized.
 */
#include <stdio.h>

void f(void){ printf("`f' called\n"); }

/* expr () , where expr has function returning `T' */
void test00(void)
{
  printf("`test00' called\n");
  f();
}

/* & expr, where expr has function returning `T' */
void test01(void)
{
  printf("`test01' called\n");
  void (*pf)(void) = &f;
  (*pf)();
}

/* *expr, where expr has function returning `T' */
void test02(void)
{
  printf("`test02' called\n");
  (*f)();
  (&*f)();
}

/* !expr, where expr has function returning `T' */
void test03(void)
{
  printf("`test03' called\n");
  if ( !f )
    printf("`f' is located at zero.\n");
  else
    printf("`f' is located at non-zero.\n");
}

/* (type_name) expr, where expr has function returning `T' */
void test04(void)
{
  printf("`test04' called\n");
  long long int lli = (long long int)f;
  void (*pf)(void) = (void (*)(void))lli;
  (*pf)();
}

/* expr == pointer, where expr has function returning `T' */
void test09(void)
{
  printf("`test09' called\n");
  if ( test09 == test09 )
    printf("ok\n");
  else
    printf("error\n");
}

/* expr != pointer, where expr has function returning `T' */
void test10(void)
{
  printf("`test10' called\n");
  if ( test09 != test10 )
    printf("ok\n");
  else
    printf("error\n");
}

/* expr && exprA or exprB || expr, where expr has function returning `T' */
void test11(void)
{
  printf("`test11' called\n");
  if ( test10 && test11 )
    printf("ok\n");
  else
    printf("error\n");
}

/* expr || exprA or exprB || expr, where expr has function returning `T' */
void test12(void)
{
  printf("`test12' called\n");
  if ( !test11 || !test12 )
    printf("error\n");
  else
    printf("ok\n");
}

/* expr_1 ? expr_2 : expr_3, where expr_i has function returning `T' */
void test13(void)
{
  printf("`test13' called\n");
  void (*pf)(void) = f ? f : test13;
  (*pf)();
}

int main(void)
{
  test00();
  test01();
  test02();
  test03();
  test04();
  test09();
  test10();
  test11();
  test12();
  test13();
  return 0;
}
