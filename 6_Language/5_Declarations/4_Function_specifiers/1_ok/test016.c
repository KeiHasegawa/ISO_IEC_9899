/*
 * Use the result of calling inline function in various expressions
 */
#include <stdio.h>

inline int il0(int n)
{
  if ( n )
    return 5;
  else
    return 2;
}

void test000(int* a, int b, int c)
{
  printf("`test000' called\n");
  int array[] = { 0, -1, -2, -3, -4, -5 };
  printf("%d\n", array[il0(b+c)]);
  printf("%d\n", (a + b)[il0(c)]);
}

int fa0(int a, int b){ printf("`fa0' called with %d, %d\n", a, b); return -5; }
int fa1(int a, int b){ printf("`fa1' called with %d, %d\n", a, b); return 10; }
int fa2(int a, int b){ printf("`fa2' called with %d, %d\n", a, b); return 77; }
int fa3(int a, int b){ printf("`fa3' called with %d, %d\n", a, b); return -1; }
int fa4(int a, int b){ printf("`fa4' called with %d, %d\n", a, b); return 33; }

int (*fa[])(int,int) = { fa0, fa1, fa2, fa3, fa4 };

void test001(int a, int b, int c)
{
  printf("`test001' called\n");
  printf("%d\n", fa0(a,il0(b)));
  printf("%d\n", fa[a](b,il0(c)));
}

struct S {
  int n;
  const char* s;
};

inline struct S il1(int n)
{
  if ( n ){
    struct S a = { 1, "a" };
    return a;
  }
  else {
    struct S b = { 2, "b" };
    return b;
  }
}

void test002(int a, int b)
{
  printf("`test002' called\n");
  printf("%d, \"%s\"\n", il1(a).n, il1(b).s);
}

struct S il2_a = { 1, "a" };
struct S il2_b = { 2, "b" };

inline struct S* il2(int n)
{
  if ( n )
    return &il2_a;
  else
    return &il2_b;
}

void test003(int a, int b)
{
  printf("`test003' called\n");
  printf("%d, \"%s\"\n", il2(a)->n, il2(b)->s);
}

void test004(int a, int b)
{
  printf("`test004' called\n");
  struct local {
    int a;
    int b;
  };
  struct local loc = (struct local){il0(a), il0(b)};
  printf("%d, %d\n", loc.a, loc.b);
}

int il3_a = 10;
int il3_b = 11;

inline int* il3(int n)
{
  if ( n )
    return &il3_a;
  else
    return &il3_b;
}

void test005(int a)
{
  printf("`test005' called\n");
  printf("%d\n", *il3(a));
}

void test006(int a)
{
  printf("`test006' called\n");
  printf("%d\n", +il0(a));
}

void test007(int a)
{
  printf("`test007' called\n");
  printf("%d\n", -il0(a));
}

void test008(int a)
{
  printf("`test008' called\n");
  printf("%d\n", ~il0(a));
}

void test009(int a)
{
  printf("`test009' called\n");
  printf("%d\n", !il0(a));
}

void test010(int a)
{
  printf("`test010' called\n");
  printf("%d\n", (int)(sizeof il0(a)));
}

void test011(int a)
{
  printf("`test011' called\n");
  printf("%f\n", (double)il0(a));
}

void test012(int a, int b, int c)
{
  printf("`test012' called\n");
  printf("%d\n", (a + b) * il0(c));
}

void test013(int a, int b, int c)
{
  printf("`test013' called\n");
  printf("%d\n", (a + b) / il0(c));
}

void test014(int a, int b, int c)
{
  printf("`test014' called\n");
  printf("%d\n", (a + b) % il0(c));
}

void test015(int a, int b, int c)
{
  printf("`test015' called\n");
  printf("%d\n", a * b + il0(c));
}

void test016(int a, int b, int c)
{
  printf("`test016' called\n");
  printf("%d\n", a * b - il0(c));
}

void test017(int a, int b, int c)
{
  printf("`test017' called\n");
  printf("0x%x\n", a * b << il0(c));
}

void test018(int a, int b, int c)
{
  printf("`test018' called\n");
  printf("%d\n", a * b >> il0(c));
}

void test019(int a, int b, int c)
{
  printf("`test019' called\n");
  printf("%d\n", a * b < il0(c));
}

void test020(int a, int b, int c)
{
  printf("`test020' called\n");
  printf("%d\n", a * b > il0(c));
}

void test021(int a, int b, int c)
{
  printf("`test021' called\n");
  printf("%d\n", a * b <= il0(c));
}

void test022(int a, int b, int c)
{
  printf("`test022' called\n");
  printf("%d\n", a * b >= il0(c));
}

void test023(int a, int b, int c)
{
  printf("`test023' called\n");
  printf("%d\n", a * b == il0(c));
}

void test024(int a, int b, int c)
{
  printf("`test024' called\n");
  printf("%d\n", a * b != il0(c));
}

void test025(int a, int b, int c)
{
  printf("`test025' called\n");
  printf("%d\n", a * b & il0(c));
}

void test026(int a, int b, int c)
{
  printf("`test026' called\n");
  printf("%d\n", a * b ^ il0(c));
}

void test027(int a, int b, int c)
{
  printf("`test027' called\n");
  printf("%d\n", a * b | il0(c));
}

void test028(int a, int b, int c)
{
  printf("`test028' called\n");
  printf("%d\n", a * b && il0(c));
}

void test029(int a, int b, int c)
{
  printf("`test029' called\n");
  printf("%d\n", a * b || il0(c));
}

void test030(int a, int b, int c)
{
  printf("`test030' called\n");
  printf("%d\n", il0(a) ? il0(b) : il0(c));
}

void test031(int* a, int b, int c)
{
  printf("`test031' called\n");
  printf("%d\n", a[b] = il0(c));
}

void test032(int* a, int b, int c)
{
  printf("`test032' called\n");
  printf("%d\n", a[b] *= il0(c));
}

void test033(int* a, int b, int c)
{
  printf("`test033' called\n");
  printf("%d\n", a[b] /= il0(c));
}

void test034(int* a, int b, int c)
{
  printf("`test034' called\n");
  printf("%d\n", a[b] %= il0(c));
}

void test035(int* a, int b, int c)
{
  printf("`test035' called\n");
  printf("%d\n", a[b] += il0(c));
}

void test036(int* a, int b, int c)
{
  printf("`test036' called\n");
  printf("%d\n", a[b] -= il0(c));
}

void test037(int* a, int b, int c)
{
  printf("`test037' called\n");
  printf("%d\n", a[b] <<= il0(c));
}

void test038(int* a, int b, int c)
{
  printf("`test038' called\n");
  printf("%d\n", a[b] >>= il0(c));
}

void test039(int* a, int b, int c)
{
  printf("`test039' called\n");
  printf("%d\n", a[b] &= il0(c));
}

void test040(int* a, int b, int c)
{
  printf("`test040' called\n");
  printf("%d\n", a[b] ^= il0(c));
}

void test041(int* a, int b, int c)
{
  printf("`test041' called\n");
  printf("%d\n", a[b] |= il0(c));
}

void test042(int a, int b)
{
  printf("`test042' called\n");
  printf("%d\n", (il0(a),il0(b)));
}

int main(void)
{
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test000(&a[0],1,0);
    test000(&a[0],-1,1);
  }
  {
    test001(2,3,0);
    test001(3,4,5);
  }
  {
    test002(1,0);
    test002(0,1);
  }
  {
    test003(1,1);
    test003(0,0);
  }
  {
    test004(1,0);
    test004(0,1);
  }
  {
    test005(-1);
    test005(0);
  }
  {
    test006(2);
    test006(0);
  }
  {
    test007(0);
    test007(2);
  }
  {
    test008(-1);
    test008(-1);
  }
  {
    test009(0);
    test009(1);
  }
  {
    test010(0);
    test010(1);
  }
  {
    test011(0);
    test011(1);
  }
  {
    test012(1,2,0);
    test012(3,4,-2);
  }
  {
    test013(3,7,0);
    test013(3,7,-2);
  }
  {
    test014(3,4,0);
    test014(3,4,-2);
  }
  {
    test015(3,4,0);
    test015(3,4,-2);
  }
  {
    test016(3,4,0);
    test016(3,4,-2);
  }
  {
    test017(3,2,0);
    test017(3,2,-2);
  }
  {
    test018(4,6,0);
    test018(8,8,-2);
  }
  {
    test019(1,2,0);
    test019(1,2,1);
  }
  {
    test020(1,2,0);
    test020(1,2,1);
  }
  {
    test021(1,2,0);
    test021(1,2,1);
  }
  {
    test022(1,2,0);
    test022(1,2,1);
  }
  {
    test023(1,2,0);
    test023(1,2,1);
  }
  {
    test024(1,2,0);
    test024(1,2,1);
  }
  {
    test025(2,3,0);
    test025(3,2,1);
  }
  {
    test026(2,3,0);
    test026(3,2,1);
  }
  {
    test027(2,3,0);
    test027(3,2,1);
  }
  {
    test028(0,1,1);
    test028(2,3,0);
  }
  {
    test029(0,1,1);
    test029(2,3,0);
  }
  {
    test030(0,1,2);
    test030(1,0,2);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test031(&a[0],3,0);
    test031(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test032(&a[0],3,0);
    test032(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test033(&a[0],3,0);
    test033(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test034(&a[0],3,0);
    test034(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test035(&a[0],3,0);
    test035(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test036(&a[0],3,0);
    test036(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test037(&a[0],3,0);
    test037(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test038(&a[0],3,0);
    test038(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test039(&a[0],3,0);
    test039(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test040(&a[0],3,0);
    test040(&a[0],2,1);
  }
  {
    int a[5] = { 0, 1, 2, 3, 4 };
    test041(&a[0],3,0);
    test041(&a[0],2,1);
  }
  {
    test042(0,1);
    test042(2,0);
  }
  return 0;
}
