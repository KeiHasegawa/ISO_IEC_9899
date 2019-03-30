/*
 * Check if expressions whose type function returning `T' are recognized.
 */
#include <stdio.h>

/* expr [ index ] or index [ expr ], where expr has function returning `T' */
void test00(int i)
{
  test00[3];
  i[test00];
}

/* expr . identifier , where expr has function returning `T' */
void test01(void)
{
  test01 . member;
}

/* expr -> identifier , where expr has function returning `T' */
void test02(void)
{
  test02 -> member; 
}

/* expr ++ , where expr has function returning `T' */
void test03(void)
{
  test03++;
}

/* expr -- , where expr has function returning `T' */
void test04(void)
{
  test04--;
}

/* ++ expr , where expr has function returning `T' */
void test05(void)
{
  ++ test05;
}

/* -- expr , where expr has function returning `T' */
void test06(void)
{
  -- test06;
}

/* + expr , where expr has function returning `T' */
void test07(void)
{
  + test07;
}

/* - expr , where expr has function returning `T' */
void test08(void)
{
  - test08;
}

/* ~ expr , where expr has function returning `T' */
void test09(void)
{
  ~ test09;
}

/* sizeof expr, where expr has function returning `T' */
void test10(void)
{
  sizeof test10;
}

/* expr * exprA or exprB * expr, where expr has function returning `T' */
void test11(int i)
{
  test11 * 3;
  i * test11;
}

/* expr / exprA or exprB / expr, where expr has function returning `T' */
void test12(int i)
{
  test12 / 3;
  i / test12;
}

/* expr % exprA or exprB % expr, where expr has function returning `T' */
void test13(int i)
{
  test13 % 3;
  i % test13;
}

/* expr + integer or integer + expr, where expr has function returning `T' */
void test14(int i)
{
  test14 + i;
  i + test14;
}

/* expr - integer or integer - expr, where expr has function returning `T' */
void test15(void)
{
  test15 - 3;
  3 - test15;
}

/* expr - pointer, where expr has function returning `T' */
void test16(void)
{
  test16 - test16;
  test16 - test15;
}

/* expr << integer or integer << expr, where expr has function returning `T' */
void test17(int i)
{
  test17 << i;
  i << test17;
}

/* expr >> integer or integer >> expr, where expr has function returning `T' */
void test18(void)
{
  test18 >> 3;
  3 >> test18;
}

/* expr & integer or integer & expr, where expr has function returning `T' */
void test19(void)
{
  test19 & 3;
  3 & test19;
}


/* expr ^ integer or integer ^ expr, where expr has function returning `T' */
void test20(int i)
{
  test20 ^ i;
  i ^ test20;
}

/* expr | integer or integer | expr, where expr has function returning `T' */
void test21(int i)
{
  test21 | i;
  3 | test21;
}

/* expr_1 ? expr_2 : expr_3, where expr_i has function returning `T' */
void test22(void)
{
  extern int f(void);
  extern void g(int);
  test22 ? f : g;
}

/* expr = exprA, where expr has function returning `T' */
void test23(void)
{
  test23 = test22;
  test23 = 0;
}
