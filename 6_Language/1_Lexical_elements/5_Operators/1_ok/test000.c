/*
 * Check if operator is recognized.
 *
 * operator: one of
 * [ ] ( ) . ->
 * ++ -- & * + - ~ ! sizeof
 * / % << >> < > <= >= == != ^ | && ||
 * ? :
 * = *= /= %= += -= <<= >>= &= ^= |=
 * , # ## <: :> %: %:%:
 */
#include <stdio.h>

double d[] = { 1, 2, 3 };

/* operator [] */
void test00(double* pd, int i)
{
  printf("`test00' called\n");
  printf("%f\n", pd[i]);
}

void f(int n)
{
  printf("f called with %d\n", n);
}

/* operator ( ) */
void test01(void (*pf)(int), int i)
{
  printf("`test01' called\n");
  (*pf)(i);
}

struct S {
  int a;
};

struct S s = { 4 };

/* operator . */
void test02(struct S s)
{
  printf("`test02' called\n");
  printf("%d\n", s.a);
}

struct S s2 = { 5 };

/* operator -> */
void test03(struct S* s)
{
  printf("`test03' called\n");
  printf("%d\n", s->a);
}

/* operator ++ */
void test04(int n)
{
  printf("`test04' called\n");
  printf("%d\n", ++n);
  printf("%d\n", n++);
  printf("%d\n", n);
}

/* operator -- */
void test05(int n)
{
  printf("`test05' called\n");
  printf("%d\n", --n);
  printf("%d\n", n--);
  printf("%d\n", n);
}

void g(int* p)
{
  printf("*p = %d\n", *p);
}

/* operator & */
void test06(int a, int b)
{
  printf("`test06' called\n");
  g(&a);
  printf("%d & %d = %d\n", a, b, a & b);
}

/* operator * */
void test07(int* p, int n)
{
  printf("`test07' called\n");
  f(*p*n);
}

/* operator + */
void test08(int a, int b)
{
  printf("`test08' called\n");
  f(+a+b);
}

/* operator - */
void test09(int a, int b)
{
  printf("`test08' called\n");
  f(-a-b);
}

/* operator ~ */
void test10(int a)
{
  printf("`test09' called\n");
  f(~a);
}

/* operator sizeof */
void test11(void)
{
  printf("`test10' called\n");
  printf("sizeof s = %d\n", (int)(sizeof s));
  printf("sizeof(struct S) = %d\n", (int)sizeof(struct S));
}

/* operator / */
void test12(int a, int b)
{
  printf("`test12' called\n");
  printf("%d / %d = %d\n", a, b, a/b);
}

/* operator % */
void test13(int a, int b)
{
  printf("`test13' called\n");
  printf("%d %% %d = %d\n", a, b, a%b);
}

/* operator << */
void test14(int a, int b)
{
  printf("`test14' called\n");
  printf("%d << %d = %d\n", a, b, a << b);
}

/* operator << */
void test15(int a, int b)
{
  printf("`test15' called\n");
  printf("%d >> %d = %d\n", a, b, a >> b);
}

/* operator < */
void test16(int a, int b)
{
  printf("`test16' called\n");
  if ( a < b )
    printf("%d is less than %d\n", a, b);
  else
    printf("%d is not less than %d\n", a, b);
}

/* operator > */
void test17(int a, int b)
{
  printf("`test17' called\n");
  if ( a > b )
    printf("%d is greater than %d\n", a, b);
  else
    printf("%d is not greater thatn %d\n", a, b);
}

/* operator <= */
void test18(int a, int b)
{
  printf("`test18' called\n");
  if ( a <= b )
    printf("%d is less than or equal to %d\n", a, b);
  else
    printf("%d is neither less than nor equal to %d\n", a, b);
}

/* operator >= */
void test19(int a, int b)
{
  printf("`test19' called\n");
  if ( a >= b )
    printf("%d is greater than or equal to %d\n", a, b);
  else
    printf("%d is neither greater than nor equal to %d\n", a, b);
}

/* operator == */
void test20(int a, int b)
{
  printf("`test20' called\n");
  if ( a == b )
    printf("%d is equal to %d\n", a, b);
  else
    printf("%d is not equal to %d\n", a, b);
}

/* operator != */
void test21(int a, int b)
{
  printf("`test21' called\n");
  if ( a != b )
    printf("%d is not equal to %d\n", a, b);
  else
    printf("%d is equal to %d\n", a, b);
}

/* operator ^ */
void test22(int a, int b)
{
  printf("`test21' called\n");
  printf("%d ^ %d = %d\n", a, b, a^b);
}

/* operator | */
void test23(int a, int b)
{
  printf("`test21' called\n");
  printf("%d | %d = %d\n", a, b, a|b);
}

/* operator && */
void test24(int a, int b)
{
  printf("`test24' called\n");
  if ( a && b )
    printf("%d && %d\n", a, b);
  else
    printf("!(%d && %d)\n", a, b);
}

/* operator || */
void test25(int a, int b)
{
  printf("`test25' called\n");
  if ( a || b )
    printf("%d || %d\n", a, b);
  else
    printf("!(%d || %d)\n", a, b);
}

/* operator ? : */
void test26(int a, int b, int c)
{
  printf("`test26' called\n");
  printf("%d ? %d : %d = %d\n", a, b, c, a ? b : c);
}

/* operator = *= /= %= += -= <<= >>= &= ^= |= */
void test27(int a, int b, int c, int d, int e, int f,
	    int g, int h, int i, int j, int k)
{
  printf("`test27' called\n");
  printf("a = %d\n", a   = 2);
  printf("b = %d\n", b  *= 2);
  printf("c = %d\n", c  /= 2);
  printf("d = %d\n", d  %= 2);
  printf("e = %d\n", e  += 2);
  printf("f = %d\n", f  -= 2);
  printf("g = %d\n", g <<= 2);
  printf("h = %d\n", h >>= 2);
  printf("i = %d\n", i  &= 2);
  printf("j = %d\n", j  ^= 2);
  printf("k = %d\n", k  |= 2);
}

/* operator , */
void test28(int a, int b)
{
  printf("(%d,%d) = %d\n", a, b, (a,b));
}

/* operator # */
void test29(void)
{
#if 1
  printf("`test029' called\n");
#else
#error
#endif
}

/* operator ## */
void test30(void)
{
  printf("`test30' called\n");
#define cat(x,y) x##y
  printf("cat(1,2) = %d\n", cat(1,2));
}

/* operator <: :> */
void test31(double* pd, int i)
{
  printf("`test31' called\n");
  printf("%f\n", pd<:i:>);
}

/* operator %: */
void test32(void)
{
%:if 1
  printf("`test032' called\n");
%:else
%:error
%:endif
}

/* operator %:%: */
void test33(void)
{
  printf("`test33' called\n");
%:define cat(x,y) x%:%:y
  printf("cat(1,2) = %d\n", cat(1,2));
}

int main(void)
{
  test00(&d[0],2);
  test01(&f, 3);
  test02(s);
  test03(&s2);
  test04(6);
  test05(7);
  test06(8,9);
  test07(&s.a,10);
  test08(11,12);
  test09(13,14);
  test10(15);
  test11();
  test12(10,3);
  test13(10,3);
  test14(10,1);
  test15(10,1);
  test16(-3,3);
  test17(5,3);
  test18(1,3);
  test19(4,3);
  test20(4,4);
  test21(4,5);
  test22(10,12);
  test23(10,12);
  test24(1,2);
  test25(0,0);
  test26(0,1,2);
  test27(0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13);
  test28(3,4);
  test29();
  test30();
  test31(&d[0],2);
  test32();
  test33();
  return 0;
}
