/*
 * Use the result of not operator in various expressions.
 */
#include <stdio.h>

void test000(int* a, int b, int c)
{
  printf("`test000' called\n");
  int array[] = { 0, -1, -2, -3, -4, -5 };
  printf("%d\n", array[!c]);
  printf("%d\n", (a + b)[!c]);
}

void f(int a, int b)
{
  printf("`f' called with %d, %d\n", a, b);
}

int fa0(int a, int b){ printf("`fa0' called with %d, %d\n", a, b); return -5; }
int fa1(int a, int b){ printf("`fa1' called with %d, %d\n", a, b); return 10; }
int fa2(int a, int b){ printf("`fa2' called with %d, %d\n", a, b); return 77; }
int fa3(int a, int b){ printf("`fa3' called with %d, %d\n", a, b); return -1; }
int fa4(int a, int b){ printf("`fa4' called with %d, %d\n", a, b); return 33; }

int (*fa[])(int,int) = { fa0, fa1, fa2, fa3, fa4 };

void test001(int a, int b)
{
  printf("`test001' called\n");
  printf("%d\n", fa[a](!a,!b));
  f(!a, !b);
}

void test002(int a)
{
  printf("`test002' called\n");
  printf("%d\n", +(!a));
}

void test003(int a)
{
  printf("`test003' called\n");
  printf("%d\n", -(!a));
}

void test004(int a)
{
  printf("`test004' called\n");
  printf("%d\n", ~(!a));
}

void test005(int a)
{
  printf("`test005' called\n");
  printf("%d\n", !(!a));
}

void test006(int a)
{
  printf("`test006' called\n");
  printf("%d\n", (int)(sizeof !a));
}

void test007(int a)
{
  printf("`test007' called\n");
  printf("%f\n", (double)(!a));
}

void test008(int a, int b, int c)
{
  printf("`test008' called\n");
  printf("%d\n", (a + b) * (!c));
}

void test009(int a, int b, int c)
{
  printf("`test009' called\n");
  printf("%d\n", (a + b) / (!c));
}

void test010(int a, int b, int c)
{
  printf("`test010' called\n");
  printf("%d\n", (a + b) % (!c));
}

void test011(int a, int b, int c)
{
  printf("`test011' called\n");
  printf("%d\n", (a * b) + (!c));
}

void test012(int a, int b, int c)
{
  printf("`test012' called\n");
  printf("%d\n", (a * b) - (!c));
}

void test013(int a, int b, int c)
{
  printf("`test013' called\n");
  printf("%d\n", (a * b) << (!c));
}

void test014(int a, int b, int c)
{
  printf("`test014' called\n");
  printf("%d\n", (a * b) >> (!c));
}

void test015(int a, int b, int c)
{
  printf("`test015' called\n");
  printf("%d\n", (a * b) < (!c));
}

void test016(int a, int b, int c)
{
  printf("`test016' called\n");
  printf("%d\n", (a * b) > (!c));
}

void test017(int a, int b, int c)
{
  printf("`test017' called\n");
  printf("%d\n", (a * b) <= (!c));
}

void test018(int a, int b, int c)
{
  printf("`test018' called\n");
  printf("%d\n", (a * b) >= (!c));
}

void test019(int a, int b, int c)
{
  printf("`test019' called\n");
  printf("%d\n", (a * b) == (!c));
}

void test020(int a, int b, int c)
{
  printf("`test020' called\n");
  printf("%d\n", (a * b) != (!c));
}

void test021(int a, int b, int c)
{
  printf("`test021' called\n");
  printf("%d\n", (a * b) & (!c));
}

void test022(int a, int b, int c)
{
  printf("`test022' called\n");
  printf("%d\n", (a * b) ^ (!c));
}

void test023(int a, int b, int c)
{
  printf("`test023' called\n");
  printf("%d\n", (a * b) | (!c));
}

void test024(int a, int b, int c)
{
  printf("`test024' called\n");
  printf("%d\n", (a * b) && (!c));
}

void test025(int a, int b, int c)
{
  printf("`test025' called\n");
  printf("%d\n", (a * b) || (!c));
}

void test026(int a, int b, int c)
{
  printf("`test026' called\n");
  printf("%d\n", !a ? !b : !c);
}

void test027(int* a, int b, int c)
{
  printf("`test027' called\n");
  printf("%d\n", a[b] = !c);
}

void test028(int* a, int b, int c)
{
  printf("`test028' called\n");
  printf("%d\n", a[b] *= !c);
}

void test029(int* a, int b, int c)
{
  printf("`test029' called\n");
  printf("%d\n", a[b] /= !c);
}

void test030(int* a, int b, int c)
{
  printf("`test030' called\n");
  printf("%d\n", a[b] %= !c);
}

void test031(int* a, int b, int c)
{
  printf("`test031' called\n");
  printf("%d\n", a[b] += !c);
}

void test032(int* a, int b, int c)
{
  printf("`test032' called\n");
  printf("%d\n", a[b] -= !c);
}

void test033(int* a, int b, int c)
{
  printf("`test033' called\n");
  printf("%d\n", a[b] <<= !c);
}

void test034(int* a, int b, int c)
{
  printf("`test034' called\n");
  printf("%d\n", a[b] >>= !c);
}

void test035(int* a, int b, int c)
{
  printf("`test035' called\n");
  printf("%d\n", a[b] &= !c);
}

void test036(int* a, int b, int c)
{
  printf("`test036' called\n");
  printf("%d\n", a[b] ^= !c);
}

void test037(int* a, int b, int c)
{
  printf("`test037' called\n");
  printf("%d\n", a[b] |= !c);
}

void test038(int a, int b)
{
  printf("`test038' called\n");
  printf("%d\n", (!a,!b));
}

int main(void)
{
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test000(&a[0],2,0);
    test000(&a[0],2,1);
  }
  {
    test001(1,0);
    test001(0,1);
  }
  {
    test002(0);
    test002(1);
  }
  {
    test003(0);
    test003(1);
  }
  {
    test004(0);
    test004(1);
  }
  {
    test005(0);
    test005(1);
  }
  {
    test006(0);
    test006(1);
  }
  {
    test007(0);
    test007(1);
  }
  {
    test008(2,3,0);
    test008(2,3,1);
  }
  {
    test009(2,3,0);
  }
  {
    test010(2,3,0);
  }
  {
    test011(2,3,0);
    test011(2,3,1);
  }
  {
    test012(2,3,0);
    test012(2,3,1);
  }
  {
    test013(2,3,0);
    test013(2,3,1);
  }
  {
    test014(2,3,0);
    test014(2,3,1);
  }
  {
    test015(2,3,0);
    test015(2,3,1);
  }
  {
    test016(2,3,0);
    test016(2,3,1);
  }
  {
    test017(2,3,0);
    test017(2,3,1);
  }
  {
    test018(2,3,0);
    test018(2,3,1);
  }
  {
    test019(2,3,0);
    test019(2,3,1);
  }
  {
    test020(2,3,0);
    test020(2,3,1);
  }
  {
    test021(2,3,0);
    test021(2,3,1);
  }
  {
    test022(2,3,0);
    test022(2,3,1);
  }
  {
    test023(2,3,0);
    test023(2,3,1);
  }
  {
    test024(2,3,0);
    test024(2,3,1);
  }
  {
    test025(2,3,0);
    test025(2,3,1);
    test025(0,3,1);
  }
  {
    test026(0,0,0);
    test026(1,0,1);
    test026(0,1,0);
    test026(1,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test027(&a[0],2,0);
    test027(&a[0],2,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test028(&a[0],2,0);
    test028(&a[0],2,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test029(&a[0],2,0);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test030(&a[0],2,0);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test031(&a[0],2,0);
    test031(&a[0],2,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test032(&a[0],2,0);
    test032(&a[0],2,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test033(&a[0],2,0);
    test033(&a[0],2,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test034(&a[0],2,0);
    test034(&a[0],2,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test035(&a[0],2,0);
    test035(&a[0],2,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test036(&a[0],2,0);
    test036(&a[0],2,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test037(&a[0],2,0);
    test037(&a[0],2,1);
  }
  {
    test038(0,1);
    test038(1,0);
  }
  return 0;
}
