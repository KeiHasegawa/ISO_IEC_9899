/*
 * Check if expressions whose type array of `T' are recognized.
 */
#include <stdio.h>

/* expr () , where expr has array of `T' */
void test00(void)
{
  int a[10];
  a();
  "string"();
  L"wide string"();
}

/* expr . identifier , where expr has array of `T' */
void test01(void)
{
  int a[10];
  a . member;
  "string" . member;
  L"wide string" . member;
}

/* expr -> identifier , where expr has array of `T' */
void test02(void)
{
  int a[10];
  a -> member;
  "string" -> member;
  L"wide string" -> member;
}

/* expr ++ , where expr has array of `T' */
void test03(void)
{
  int a[10];
  a ++;
  "string" ++;
  L"wide string" ++;
}

/* expr -- , where expr has array of `T' */
void test04(void)
{
  int a[10];
  a --;
  "string" --;
  L"wide string" --;
}

/* ++ expr , where expr has array of `T' */
void test05(void)
{
  int a[10];
  ++ a;
  ++ "string";
  ++ L"wide string";
}

/* -- expr , where expr has array of `T' */
void test06(void)
{
  int a[10];
  -- a;
  -- "string";
  -- L"wide string";
}

/* + expr , where expr has array of `T' */
void test07(void)
{
  int a[10];
  + a;
  + "string";
  + L"wide string";
}

/* - expr , where expr has array of `T' */
void test08(void)
{
  int a[10];
  - a;
  - "string";
  - L"wide string";
}

/* ~ expr , where expr has array of `T' */
void test09(void)
{
  int a[10];
  ~ a;
  ~ "string";
  ~ L"wide string";
}

/* expr * exprA or exprB * expr, where expr has array of `T' */
void test10(void)
{
  int a[10];
  a * 2;
  "string" * 3;
  4 * L"wide string";
}

/* expr / exprA or exprB / expr, where expr has array of `T' */
void test11(void)
{
  int a[10];
  a / 2;
  "string" / 3;
  4 / L"wide string";
}

/* expr % exprA or exprB % expr, where expr has array of `T' */
void test12(void)
{
  int a[10];
  a % 2;
  "string" % 3;
  4 % L"wide string";
}

/* integer - expr, where expr has array of `T' */
void test13(void)
{
  int a[10];
  2 - a;
  a[2] - "string";
  a[a[a[4]]] - L"wide string";
}

/* expr << integer or integer << expr, where expr has array of `T' */
void test14(void)
{
  int a[10];
  a << 2;
  a[2] << "string";
  L"wide string" << a[a[a[4]]];
}

/* expr >> integer or integer >> expr, where expr has array of `T' */
void test15(void)
{
  int a[10];
  a >> 2;
  a[2] >> "string";
  a[a[a[4]]] >> L"wide string";
}

/* expr & integer or integer & expr, where expr has array of `T' */
void test16(void)
{
  int a[10];
  a & 2;
  a[2] & "string";
  L"wide string" & a[a[a[4]]];
}

/* expr ^ integer or integer ^ expr, where expr has array of `T' */
void test17(void)
{
  int a[10];
  a ^ 2;
  a[2] ^ "string";
  a[a[a[4]]] ^ L"wide string";
}

/* expr | integer or integer | expr, where expr has array of `T' */
void test18(void)
{
  int a[10];
  a | 2;
  a[2] | "string";
  a[a[a[4]]] | L"wide string";
}

/* expr_1 ? expr_2 : expr_3, where expr_i has array of `T' */
void test19(void)
{
  int a[10];
  double b[10];
  a ? "manager" : L"engineer";
  "program" ? a : b;
}

/* expr = exprA, where expr has array of `T' */
void test20(void)
{
  int a[10];
  a = (int [10]){1,2,3};
  a += 1;
  a -= (int*)2;
  "program" = "C";
  L"program" = L"C";
}
