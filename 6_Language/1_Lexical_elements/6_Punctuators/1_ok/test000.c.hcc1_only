/*
 * Check if punctuators are recognized.
 *
 * punctuator: one of
 * [ ] ( ) { } * , : = ; ... #
 * <: :> <% %> %:
 */
#include <stdio.h>
#include <stdarg.h>

/* punctuator [ ] */
void test00(void)
{
  printf("`test00' called\n");
  int a[10] = { [3] = 3, 4, 5 };
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    printf(" %d", a[i]);
  printf("\n");
}

void f(void)
{
  printf("`f' called\n");
}

/* punctuator ( ) */
void test01(void)
{
  printf("`test01' called\n");
  void f(void);
  f();
  void (*pf)(void) = f;
  (*pf)();
}

/* punctuator { } */
void test02(void)
{
  printf("`test02' called\n");
  {
    int a[] = { 1, 2, 3 };
    printf("a[2] = %d\n", a[2]);
  }
  struct S {
    int a;
  } s = { 1 };
  printf("s.a = %d\n", s.a);
  struct S ss = (struct S){2};
  printf("ss.a = %d\n", ss.a);
}

int array[] = { 1, 2, 3 };

/* punctuator * */
void test03(int a[*], int n)
{
  printf("`test03' called\n");
  for ( int* p = &a[0] ; p != &a[n] ; ++p )
    printf(" %d", *p);
  printf("\n");

  int m;
  int* pp = &m;
  *pp = 3;
  printf("m = %d\n", m);
  printf("m ** pp = %d\n", m ** pp);
}

/* punctuator , */
void test04(void)
{
  printf("`test04' called\n");
  int a, b = 1, c = 2, d = 3;
  a = b ? (a,c) : (a,d);
  printf("a = %d\n", a);
}

/* punctuator : */
void test05(void)
{
  printf("`test05' called\n");
  struct S {
    unsigned int a : 1;
    unsigned int b : 2;
    unsigned int c : 3;
  } s = { 1, 3, 5 };
  printf("s.a = %d, s.b = %d, s.c = %d\n",
	 s.a, s.b, s.c);
  int n = s.a == s.b ? s.c : s.a;
  printf("n = %d\n", n);
}

/* punctuator = */
void test06(void)
{
  printf("`test06' called\n");
  int a = 1;
  printf("a = %d\n", a);
  a = 3;
  printf("a = %d\n", a);
}

/* punctuator ; */
void test07(void)
{
  printf("`test07' called\n");
  int a;
  &a;
  printf("a = %d\n", a = 2);
}

/* punctuator ... */
void g(int n, ...)
{
  va_list ap;
  va_start(ap,n);
  switch ( n ){
  case 0:
    printf("%llx\n", va_arg(ap,long long int));
    break;
  case 1:
    printf("%f\n", va_arg(ap,double));
    break;
  case 2:
    printf("%Lf\n", va_arg(ap,long double));
    break;
  default:
    printf("%d\n", va_arg(ap,int));
    break;
  }
  va_end(ap);
}

void test08(void)
{
  printf("`test08' called\n");
  g(0,1LL);
  g(1,2.0);
  g(2,3.0L);
  g(3,4);
}

/* punctuator # */
void test09(void)
{
#if 1
  printf("`test09' called\n");
#else
#error
#endif
}

/* punctuator <: :> */
void test10(void)
{
  printf("`test10' called\n");
  int a<:10:> = { <:3:> = 3, 4, 5 };
  for ( int i = 0 ; i < sizeof a/sizeof a<:0:> ; ++i )
    printf(" %d", a<:i:>);
  printf("\n");
}

/* punctuator <% %> */
void test11(void)
<%
  printf("`test11' called\n");
  <%
    int a[] = <% 1, 2, 3 %>;
    printf("a[2] = %d\n", a[2]);
  %>
  struct S <%
    int a;
  %> s = <% 1 %>;
  printf("s.a = %d\n", s.a);
  struct S ss = (struct S)<%2%>;
  printf("ss.a = %d\n", ss.a);
%>

/* punctuator %: */
void test12(void)
{
%:if 1
  printf("`test12' called\n");
%:else
%:error
%:endif
}

int main(void)
{
  test00();
  test01();
  test02();
  test03(&array[0],sizeof array/sizeof array[0]);
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  test10();
  test11();
  test12();
  return 0;
}
