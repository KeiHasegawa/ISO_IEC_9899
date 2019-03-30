/*
 * Use the result of logical AND operator in various expressions.
 */
#include <stdio.h>

void test000(int* a, int b, int c, int d)
{
  printf("`test000' called\n");
  int array[] = { 0, -1, -2, -3, -4, -5 };
  printf("%d\n", array[c || d]);
  printf("%d\n", (a + b)[c || d]);
}

void f(int a)
{
  printf("`f' called with %d\n", a);
}

int fa0(int a){ printf("`fa0' called with %d\n", a); return -5; }
int fa1(int a){ printf("`fa1' called with %d\n", a); return 10; }
int fa2(int a){ printf("`fa2' called with %d\n", a); return 77; }
int fa3(int a){ printf("`fa3' called with %d\n", a); return -1; }
int fa4(int a){ printf("`fa4' called with %d\n", a); return 33; }

int (*fa[])(int) = { fa0, fa1, fa2, fa3, fa4 };

void test001(int a, int b)
{
  printf("`test001' called\n");
  f(a || b);
  fa[a](a || b);
}

void test002(int a, int b)
{
  printf("`test002' called\n");
  printf("%d\n", +(a || b));
}

void test003(int a, int b)
{
  printf("`test003' called\n");
  printf("%d\n", -(a || b));
}

void test004(int a, int b)
{
  printf("`test004' called\n");
  printf("%d\n", ~(a || b));
}

void test005(int a, int b)
{
  printf("`test005' called\n");
  printf("%d\n", !(a || b));
}

void test006(int a, int b)
{
  printf("`test006' called\n");
  printf("%d\n", sizeof a || b);
}

void test007(int a, int b)
{
  printf("`test007' called\n");
  printf("%f\n", (double)(a || b));
}

void test008(int a, int b, int c, int d)
{
  printf("`test008' called\n");
  printf("%d\n", (a + b) * (c || d));
}

void test009(int a, int b, int c, int d)
{
  printf("`test009' called\n");
  printf("%d\n", (a + b) / (c || d));
}

void test010(int a, int b, int c, int d)
{
  printf("`test010' called\n");
  printf("%d\n", (a + b) % (c || d));
}

void test011(int a, int b, int c, int d)
{
  printf("`test011' called\n");
  printf("%d\n", (a * b) + (c || d));
}

void test012(int a, int b, int c, int d)
{
  printf("`test012' called\n");
  printf("%d\n", (a * b) - (c || d));
}

void test013(int a, int b, int c, int d)
{
  printf("`test013' called\n");
  printf("%d\n", (a * b) << (c || d));
}

void test014(int a, int b, int c, int d)
{
  printf("`test014' called\n");
  printf("%d\n", (a * b) >> (c || d));
}

void test015(int a, int b, int c, int d)
{
  printf("`test015' called\n");
  printf("%d\n", (a * b) < (c || d));
}

void test016(int a, int b, int c, int d)
{
  printf("`test016' called\n");
  printf("%d\n", (a * b) > (c || d));
}

void test017(int a, int b, int c, int d)
{
  printf("`test017' called\n");
  printf("%d\n", (a * b) <= (c || d));
}

void test018(int a, int b, int c, int d)
{
  printf("`test018' called\n");
  printf("%d\n", (a * b) >= (c || d));
}

void test019(int a, int b, int c, int d)
{
  printf("`test019' called\n");
  printf("%d\n", (a * b) == (c || d));
}

void test020(int a, int b, int c, int d)
{
  printf("`test020' called\n");
  printf("%d\n", (a * b) != (c || d));
}

void test021(int a, int b, int c, int d)
{
  printf("`test021' called\n");
  printf("%d\n", (a * b) & (c || d));
}

void test022(int a, int b, int c, int d)
{
  printf("`test022' called\n");
  printf("%d\n", (a * b) ^ (c || d));
}

void test023(int a, int b, int c, int d)
{
  printf("`test023' called\n");
  printf("%d\n", (a * b) | (c || d));
}

void test024(int a, int b, int c, int d)
{
  printf("`test024' called\n");
  printf("%d\n", (a * b) && (c || d));
}

void test025(int a, int b, int c, int d)
{
  printf("`test025' called\n");
  printf("%d\n", (a * b) || (c || d));
}

void test026(int a, int b, int c, int d, int e, int f)
{
  printf("`test026' called\n");
  printf("%d\n", a || b ? c || d : e || f);
}

void test027(int* a, int b, int c, int d)
{
  printf("`test027' called\n");
  printf("%d\n", a[b] = (c || d));
}

void test028(int* a, int b, int c, int d)
{
  printf("`test028' called\n");
  printf("%d\n", a[b] *= (c || d));
}

void test029(int* a, int b, int c, int d)
{
  printf("`test029' called\n");
  printf("%d\n", a[b] /= (c || d));
}

void test030(int* a, int b, int c, int d)
{
  printf("`test030' called\n");
  printf("%d\n", a[b] %= (c || d));
}

void test031(int* a, int b, int c, int d)
{
  printf("`test031' called\n");
  printf("%d\n", a[b] += (c|| d));
}

void test032(int* a, int b, int c, int d)
{
  printf("`test032' called\n");
  printf("%d\n", a[b] -= (c || d));
}

void test033(int* a, int b, int c, int d)
{
  printf("`test033' called\n");
  printf("%d\n", a[b] <<= (c || d));
}

void test034(int* a, int b, int c, int d)
{
  printf("`test034' called\n");
  printf("%d\n", a[b] >>= (c || d));
}

void test035(int* a, int b, int c, int d)
{
  printf("`test035' called\n");
  printf("%d\n", a[b] &= (c || d));
}

void test036(int* a, int b, int c, int d)
{
  printf("`test036' called\n");
  printf("%d\n", a[b] ^= (c || d));
}

void test037(int* a, int b, int c, int d)
{
  printf("`test037' called\n");
  printf("%d\n", a[b] |= (c || d));
}

void test038(int a, int b, int c, int d)
{
  printf("`test038' called\n");
  printf("%d\n", (a || b, c || d));
}

int main(void)
{
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test000(&a[0],2,0,0);
    test000(&a[0],2,0,1);
    test000(&a[0],2,1,0);
    test000(&a[0],2,1,1);
  }
  {
    test001(0,0);
    test001(0,1);
    test001(1,0);
    test001(1,1);
  }
  {
    test002(0,0);
    test002(0,1);
    test002(1,0);
    test002(1,1);
  }
  {
    test003(0,0);
    test003(0,1);
    test003(1,0);
    test003(1,1);
  }
  {
    test004(0,0);
    test004(0,1);
    test004(1,0);
    test004(1,1);
  }
  {
    test005(0,0);
    test005(0,1);
    test005(1,0);
    test005(1,1);
  }
  {
    test006(0,0);
    test006(0,1);
    test006(1,0);
    test006(1,1);
  }
  {
    test007(0,0);
    test007(0,1);
    test007(1,0);
    test007(1,1);
  }
  {
    test008(2,3,0,0);
    test008(2,3,0,1);
    test008(2,3,1,0);
    test008(2,3,1,1);
  }
  {
    test009(2,3,1,1);
  }
  {
    test010(2,3,1,1);
  }
  {
    test011(2,3,0,0);
    test011(2,3,0,1);
    test011(2,3,1,0);
    test011(2,3,1,1);
  }
  {
    test012(2,3,0,0);
    test012(2,3,0,1);
    test012(2,3,1,0);
    test012(2,3,1,1);
  }
  {
    test013(2,3,0,0);
    test013(2,3,0,1);
    test013(2,3,1,0);
    test013(2,3,1,1);
  }
  {
    test014(2,3,0,0);
    test014(2,3,0,1);
    test014(2,3,1,0);
    test014(2,3,1,1);
  }
  {
    test015(2,3,0,0);
    test015(2,3,0,1);
    test015(2,3,1,0);
    test015(2,3,1,1);
  }
  {
    test016(2,3,0,0);
    test016(2,3,0,1);
    test016(2,3,1,0);
    test016(2,3,1,1);
  }
  {
    test017(2,3,0,0);
    test017(2,3,0,1);
    test017(2,3,1,0);
    test017(2,3,1,1);
  }
  {
    test018(2,3,0,0);
    test018(2,3,0,1);
    test018(2,3,1,0);
    test018(2,3,1,1);
  }
  {
    test019(2,3,0,0);
    test019(2,3,0,1);
    test019(2,3,1,0);
    test019(2,3,1,1);
  }
  {
    test020(2,3,0,0);
    test020(2,3,0,1);
    test020(2,3,1,0);
    test020(2,3,1,1);
  }
  {
    test021(2,3,0,0);
    test021(2,3,0,1);
    test021(2,3,1,0);
    test021(2,3,1,1);
  }
  {
    test022(2,3,0,0);
    test022(2,3,0,1);
    test022(2,3,1,0);
    test022(2,3,1,1);
  }
  {
    test023(2,3,0,0);
    test023(2,3,0,1);
    test023(2,3,1,0);
    test023(2,3,1,1);
  }
  {
    test024(2,3,0,0);
    test024(2,3,0,1);
    test024(2,3,1,0);
    test024(2,3,1,1);
  }
  {
    test025(2,3,0,0);
    test025(2,3,0,1);
    test025(0,3,1,0);
    test025(0,3,1,1);
  }
  {
    int i[6];
    for ( i[0] = 0 ; i[0] < 2 ; ++i[0] ){
      for ( i[1] = 0 ; i[1] < 2 ; ++i[1] ){
	for ( i[2] = 0 ; i[2] < 2 ; ++i[2] ){
	  for ( i[3] = 0 ; i[3] < 2 ; ++i[3] ){
	    for ( i[4] = 0 ; i[4] < 2 ; ++i[4] ){
	      for ( i[5] = 0 ; i[5] < 2 ; ++i[5] ){
		test026(i[0],i[1],i[2],i[3],i[4],i[5]);
	      }
	    }
	  }
	}
      }
    }
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test027(&a[0],2,0,0);
    test027(&a[0],2,0,1);
    test027(&a[0],2,1,0);
    test027(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test028(&a[0],2,0,0);
    test028(&a[0],2,0,1);
    test028(&a[0],2,1,0);
    test028(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test029(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test030(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test031(&a[0],2,0,0);
    test031(&a[0],2,0,1);
    test031(&a[0],2,1,0);
    test031(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test032(&a[0],2,0,0);
    test032(&a[0],2,0,1);
    test032(&a[0],2,1,0);
    test032(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test033(&a[0],2,0,0);
    test033(&a[0],2,0,1);
    test033(&a[0],2,1,0);
    test033(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test034(&a[0],2,0,0);
    test034(&a[0],2,0,1);
    test034(&a[0],2,1,0);
    test034(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test035(&a[0],2,0,0);
    test035(&a[0],2,0,1);
    test035(&a[0],2,1,0);
    test035(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test036(&a[0],2,0,0);
    test036(&a[0],2,0,1);
    test036(&a[0],2,1,0);
    test036(&a[0],2,1,1);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test037(&a[0],2,0,0);
    test037(&a[0],2,0,1);
    test037(&a[0],2,1,0);
    test037(&a[0],2,1,1);
  }
  {
    int i[4];
    for ( i[0] = 0 ; i[0] < 2 ; ++i[0] ){
      for ( i[1] = 0 ; i[1] < 2 ; ++i[1] ){
	for ( i[2] = 0 ; i[2] < 2 ; ++i[2] ){
	  for ( i[3] = 0 ; i[3] < 2 ; ++i[3] ){
	    test038(i[0],i[1],i[2],i[3]);
	  }
	}
      }
    }
  }
  return 0;
}
