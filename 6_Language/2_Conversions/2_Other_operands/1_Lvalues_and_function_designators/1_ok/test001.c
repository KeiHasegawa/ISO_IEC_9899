/*
 * Check if expressions whose type array of `T' are recognized.
 */
#include <stdio.h>
#include <stddef.h>

/* expr [ index ] or index [ expr ], where expr has array of `T' */
void test00(void)
{
  printf("`test00' called\n");
  int a[10];
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    printf(" %d", i[a] = i);
  printf("\n");
  for ( int i = 0 ; i < sizeof "program"/sizeof "program"[0] - 1 ; ++i )
    printf("%c", "program"[i]);
  printf("\n");
  for ( int i = 0 ; i < sizeof L"program"/sizeof L"program"[0] - 1 ; ++i )
    printf("%c", (int)(i[L"program"]));
  printf("\n");
}

/* & expr, where expr has array of `T' */
void test01(void)
{
  printf("`test01' called\n");
  int a[10];
  int (*pa)[10] = &a;
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    printf(" %d", (*pa)[i] = i);
  printf("\n");
  char (*ps)[] = &"program";
  for ( int i = 0 ; i < sizeof "program"/sizeof "program"[0] - 1 ; ++i )
    printf("%c", (*ps)[i]);
  printf("\n");
  wchar_t (*pw)[] = &L"program";
  for ( int i = 0 ; i < sizeof L"program"/sizeof L"program"[0] - 1 ; ++i )
    printf("%c", (int)((*pw)[i]));
  printf("\n");
}

/* *expr, where expr has array of `T' */
void test02(void)
{
  printf("`test02' called\n");
  int a[] = { 1, 2, 3 };
  printf("*a = %d\n", *a);
  printf("*\"program\" = %c\n", *"program");
  printf("*L\"program\" = %c\n", (int)(*L"program"));
}

/* !expr, where expr has array of `T' */
void test03(void)
{
  printf("`test03' called\n");
  int a[10];
  if ( !a )
    printf("`a' is located at zero.\n");
  else
    printf("`a' is located at non-zero.\n");

  if ( !"program" )
    printf("\"program\" is located at zero.\n");
  else
    printf("\"program\" is located at non-zero.\n");

  if ( !L"program" )
    printf("L\"program\" is located at zero.\n");
  else
    printf("L\"program\" is located at non-zero.\n");
}

/* sizeof expr, where expr has array of `T' */
void test04(void)
{
  printf("`test04' called\n");
  int a[10];
  printf("sizeof a = %d\n", (int)(sizeof a));
  printf("sizeof \"program\" = %d\n", (int)(sizeof "program"));
  printf("sizeof L\"program\" = %d\n", (int)(sizeof L"program"));
}

/* (type_name) expr, where expr has array of `T' */
void test05(void)
{
  printf("`test05' called\n");
  int a[10];
  double* pd = (double*)a;
  printf("%f\n", *pd = 1.0);
  int* pi = (int *)"program";
  for ( char* pc = (char*)pi ; *pc ; ++pc )
    printf("%c", *pc);
  printf("\n");
  unsigned int* pu = (unsigned int*)L"program";
  for ( wchar_t* pc = (wchar_t*)pu ; *pc ; ++pc )
    printf("%c", (int)(*pc));
  printf("\n");
}

/* expr + integer or integer + expr, where expr has array of `T' */
void test06(void)
{
  printf("`test06' called\n");
  int a[10];
  printf("*(a+5) = %d\n", *(a+5) = 2);
  printf("*(a[5] + \"program\") = %c\n", *(a[5] + "program"));
  printf("*(L\"program\" + a[5]) = %c\n", (int)(*(L"program" + a[5])));
}

/* expr - integer, where expr has array of `T' */
void test07(void)
{
  printf("`test07' called\n");
  int a[10];
  printf("*(a-3+5) = %d\n", *(a-3+5) = 2);
  printf("*(\"program\" - a[2] + 5) = %c\n", *("program" - a[2] + 5));
  printf("*(L\"program\" - a[2] + 5) = %c\n", (int)(*(L"program" - a[2] + 5)));
}

/* expr - pointer, where expr has array of `T' */
void test08(void)
{
  printf("`test08' called\n");
  int a[10];
  printf("a - &a[3] = %ld\n", a - &a[3]);
  volatile int b = "program" - "C";
  volatile int c = L"C" - L"program";
}

/* expr < pointer, where expr has array of `T' */
void test09(void)
{
  printf("`test09' called\n");
  int a[10];
  if ( a < &a[3] )
    printf("ok\n");
  else
    printf("error\n");
  volatile int b = "program" < "C";
  volatile int c = L"C" < L"program";
}

/* expr > pointer, where expr has array of `T' */
void test10(void)
{
  printf("`test10' called\n");
  int a[10];
  if ( a > &a[3] )
    printf("error\n");
  else
    printf("ok\n");
  volatile int b = "program" > "C";
  volatile int c = L"C" > L"program";
}

/* expr <= pointer, where expr has array of `T' */
void test11(void)
{
  printf("`test11' called\n");
  int a[10];
  if ( a <= &a[3] )
    printf("ok\n");
  else
    printf("error\n");
  volatile int b = "program" <= "C";
  volatile int c = L"C" <= L"program";
}

/* expr >= pointer, where expr has array of `T' */
void test12(void)
{
  printf("`test12' called\n");
  int a[10];
  if ( a >= &a[3] )
    printf("error\n");
  else
    printf("ok\n");
  volatile int b = "program" >= "C";
  volatile int c = L"C" >= L"program";
}

/* expr == pointer, where expr has array of `T' */
void test13(void)
{
  printf("`test13' called\n");
  int a[10];
  if ( a == &a[3] )
    printf("error\n");
  else
    printf("ok\n");
  if ( "program" == "C" )
    printf("error\n");
  else
    printf("ok\n");
  if ( L"program" == L"C" )
    printf("error\n");
  else
    printf("ok\n");
}

/* expr != pointer, where expr has array of `T' */
void test14(void)
{
  printf("`test14' called\n");
  int a[10];
  if ( a != &a[3] )
    printf("ok\n");
  else
    printf("error\n");
  if ( "program" != "C" )
    printf("ok\n");
  else
    printf("error\n");
  if ( L"program" != L"C" )
    printf("ok\n");
  else
    printf("error\n");
}

/* expr && exprA or exprB || expr, where expr has array of `T' */
void test15(void)
{
  printf("`test15' called\n");
  int a[10];
  if ( a && 1 )
    printf("`a' is located in non-zero\n");
  else
    printf("`a' is located in zero\n");
  volatile int b = "program" && L"C";
}

/* expr || exprA or exprB || expr, where expr has array of `T' */
void test16(void)
{
  printf("`test16' called\n");
  int a[10];
  if ( a || &a[3] )
    printf("ok\n");
  else
    printf("error\n");
  if ( "program" || L"C" )
    printf("ok\n");
  else
    printf("error\n");
}

/* expr_1 ? expr_2 : expr_3, where expr_i has array of `T' */
void test17(void)
{
  printf("`test17' called\n");
  int a[10], b[10];
  printf("%s\n", a ? "manager" : "engineer");
  int* p = L"program" ? a : b;
  printf("*p = %d\n", *p = 2);
}

int main(void)
{
  test00();
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  test10();
  test11();
  test12();
  test13();
  test14();
  test15();
  test16();
  test17();
  return 0;
}
