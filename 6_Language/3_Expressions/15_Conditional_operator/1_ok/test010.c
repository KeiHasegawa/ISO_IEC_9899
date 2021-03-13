/*
 * Use the result of conditional operator in various expression.
 */
#include <stdio.h>

void test000(int* a, int b, int c, int d, int e)
{
  printf("`test000' called\n");
  int array[] = { 0, -1, -2, -3, -4, -5 };
  printf("%d\n", array[c ? d : e]);
  printf("%d\n", (a + b)[c ? d : e]);
}

int f(int a, int b)
{
  printf("`f' called with %d, %d\n", a, b);
  return a - b;
}

int fa0(int a, int b){ printf("`fa0' called with %d, %d\n", a, b); return -5; }
int fa1(int a, int b){ printf("`fa1' called with %d, %d\n", a, b); return 10; }
int fa2(int a, int b){ printf("`fa2' called with %d, %d\n", a, b); return 77; }
int fa3(int a, int b){ printf("`fa3' called with %d, %d\n", a, b); return -1; }
int fa4(int a, int b){ printf("`fa4' called with %d, %d\n", a, b); return 33; }

int (*fa[])(int,int) = { fa0, fa1, fa2, fa3, fa4 };

void test001(int a, int b, int c, int d, int e)
{
  printf("`test001' called\n");
  printf("%d\n", f(a + b, c ? d : e));
  printf("%d\n", fa[a](a + b, c ? d : e));
}

struct S {
  int a;
  const char* b;
};

void test002(int a, struct S b, struct S c)
{
  printf("`test002' called\n");
  printf("%d, \"%s\"\n", (a ? b : c).a, (a ? b : c).b);
}

void test003(int a, struct S* b, struct S* c)
{
  printf("`test003' called\n");
  printf("%d, \"%s\"\n", (a ? b : c)->a, (a ? b : c)->b);
}

void test004(int* a)
{
  printf("`test004' called\n");
  struct local {
    int a;
    int b;
  };
  struct local loc = (struct local){
    a[0] ? a[1] : a[2],
    a[3] ? a[4] : a[5]
  };
  printf("%d, %d\n", loc.a, loc.b);
}

void test005(int a, int* b, int* c)
{
  printf("`test005' called\n");
  printf("%d\n", *(a ? b : c));
}

void test006(int a, int b, int c)
{
  printf("`test006' called\n");
  printf("%d\n", +(a ? b : c));
}

void test007(int a, int b, int c)
{
  printf("`test007' called\n");
  printf("%d\n", -(a ? b : c));
}

void test008(int a, int b, int c)
{
  printf("`test008' called\n");
  printf("%d\n", ~(a ? b : c));
}

void test009(int a, int b, int c)
{
  printf("`test009' called\n");
  printf("%d\n", !(a ? b : c));
}

void test010(int a, int b, int c)
{
  printf("`test010' called\n");
  printf("%d\n", (int)(sizeof (a ? b : c)));
}

void test011(int a, int b, int c)
{
  printf("`test011' called\n");
  printf("%f\n", (double)(a ? b : c));
}

void test012(int a, int b, int c, int d, int e)
{
  printf("`test012' called\n");
  printf("%d\n", (a + b) * (c ? d : e));
}

void test013(int a, int b, int c, int d, int e)
{
  printf("`test013' called\n");
  printf("%d\n", (a + b) / (c ? d : e));
}

void test014(int a, int b, int c, int d, int e)
{
  printf("`test014' called\n");
  printf("%d\n", (a + b) % (c ? d : e));
}

void test015(int a, int b, int c, int d, int e)
{
  printf("`test015' called\n");
  printf("%d\n", (a * b) + (c ? d : e));
}

void test016(int a, int b, int c, int d, int e)
{
  printf("`test016' called\n");
  printf("%d\n", (a * b) - (c ? d : e));
}

void test017(int a, int b, int c, int d, int e)
{
  printf("`test017' called\n");
  printf("%d\n", (a * b) << (c ? d : e));
}

void test018(int a, int b, int c, int d, int e)
{
  printf("`test018' called\n");
  printf("%d\n", (a * b) >> (c ? d : e));
}

void test019(int a, int b, int c, int d, int e)
{
  printf("`test019' called\n");
  printf("%d\n", (a * b) < (c ? d : e));
}

void test020(int a, int b, int c, int d, int e)
{
  printf("`test020' called\n");
  printf("%d\n", (a * b) > (c ? d : e));
}

void test021(int a, int b, int c, int d, int e)
{
  printf("`test021' called\n");
  printf("%d\n", (a * b) <= (c ? d : e));
}

void test022(int a, int b, int c, int d, int e)
{
  printf("`test022' called\n");
  printf("%d\n", (a * b) >= (c ? d : e));
}

void test023(int a, int b, int c, int d, int e)
{
  printf("`test023' called\n");
  printf("%d\n", (a * b) == (c ? d : e));
}

void test024(int a, int b, int c, int d, int e)
{
  printf("`test024' called\n");
  printf("%d\n", (a * b) != (c ? d : e));
}

void test025(int a, int b, int c, int d, int e)
{
  printf("`test025' called\n");
  printf("%d\n", (a * b) & (c ? d : e));
}

void test026(int a, int b, int c, int d, int e)
{
  printf("`test026' called\n");
  printf("%d\n", (a * b) ^ (c ? d : e));
}

void test027(int a, int b, int c, int d, int e)
{
  printf("`test027' called\n");
  printf("%d\n", (a * b) | (c ? d : e));
}

void test028(int a, int b, int c, int d, int e)
{
  printf("`test028' called\n");
  printf("%d\n", a * b && (c ? d : e));
}

void test029(int a, int b, int c, int d, int e)
{
  printf("`test029' called\n");
  printf("%d\n", a * b || (c ? d : e));
}

void test030(int* a)
{
  printf("`test030' called\n");
  printf("%d\n",
	 (a[0] ? a[1] : a[2]) ? (a[3] ? a[4] : a[5]) : (a[6] ? a[7] : a[8]));
}

void test031(int* a, int b, int c, int d, int e)
{
  printf("`test031' called\n");
  printf("%d\n", a[b] = (c ? d : e));
}

void test032(int* a, int b, int c, int d, int e)
{
  printf("`test032' called\n");
  printf("%d\n", a[b] *= (c ? d : e));
}

void test033(int* a, int b, int c, int d, int e)
{
  printf("`test033' called\n");
  printf("%d\n", a[b] /= (c ? d : e));
}

void test034(int* a, int b, int c, int d, int e)
{
  printf("`test034' called\n");
  printf("%d\n", a[b] %= (c ? d : e));
}

void test035(int* a, int b, int c, int d, int e)
{
  printf("`test035' called\n");
  printf("%d\n", a[b] += (c ? d : e));
}

void test036(int* a, int b, int c, int d, int e)
{
  printf("`test036' called\n");
  printf("%d\n", a[b] -= (c ? d : e));
}

void test037(int* a, int b, int c, int d, int e)
{
  printf("`test037' called\n");
  printf("%d\n", a[b] <<= (c ? d : e));
}

void test038(int* a, int b, int c, int d, int e)
{
  printf("`test038' called\n");
  printf("%d\n", a[b] >>= (c ? d : e));
}

void test039(int* a, int b, int c, int d, int e)
{
  printf("`test039' called\n");
  printf("%d\n", a[b] &= (c ? d : e));
}

void test040(int* a, int b, int c, int d, int e)
{
  printf("`test040' called\n");
  printf("%d\n", a[b] ^= (c ? d : e));
}

void test041(int* a, int b, int c, int d, int e)
{
  printf("`test041' called\n");
  printf("%d\n", a[b] |= (c ? d : e));
}

void test042(int* a)
{
  printf("`test042' called\n");
  printf("%d\n", (a[0] ? a[1] : a[2], a[3] ? a[4] : a[5]));
}

int main(void)
{
  {
    int a[] = { 0, 1, 2, 3, 4, 5 };
    test000(&a[0],2,0,1,2);
    test000(&a[0],2,1,1,2);
  }
  {
    test001(1,2,0,1,2);
    test001(1,2,1,1,2);
  }
  {
    struct S b = { 10, "bbb" };
    struct S c = { -5, "ccc" };
    test002(0,b,c);
    test002(1,b,c);
  }
  {
    struct S b = { 7, "BBBB" };
    struct S c = { -4, "CCCC" };
    test003(0,&b,&c);
    test003(1,&b,&c);
  }
  {
    int a[] = { 0, 1, 2, 3, 4, 5 };
    test004(&a[0]);
  }
  {
    int a = 0;
    int b = 1;
    int c = 2;
    test005(a,&b,&c);
    ++a;
    test005(a,&b,&c);
  }
  {
    test006(0,1,2);
    test006(1,1,2);
  }
  {
    test007(0,1,2);
    test007(1,1,2);
  }
  {
    test008(0,1,2);
    test008(1,1,2);
  }
  {
    test009(0,0,1);
    test009(1,0,1);
  }
  {
    test010(0,1,2);
    test010(1,3,4);
  }
  {
    test011(0,1,2);
    test011(1,3,4);
  }
  {
    test012(2,3,0,1,2);
    test012(2,3,1,1,2);
  }
  {
    test013(2,3,0,1,2);
    test013(2,3,1,1,2);
  }
  {
    test014(2,3,0,1,2);
    test014(2,3,1,1,2);
  }
  {
    test015(2,3,0,1,2);
    test015(2,3,1,1,2);
  }
  {
    test016(2,3,0,1,2);
    test016(2,3,1,1,2);
  }
  {
    test017(2,3,0,1,2);
    test017(2,3,1,1,2);
  }
  {
    test018(2,3,0,1,2);
    test018(2,3,1,1,2);
  }
  {
    test019(2,3,0,5,6);
    test019(2,3,1,5,6);
  }
  {
    test020(2,3,0,5,6);
    test020(2,3,1,5,6);
  }
  {
    test021(2,3,0,5,6);
    test021(2,3,1,5,6);
  }
  {
    test022(2,3,0,5,6);
    test022(2,3,1,5,6);
  }
  {
    test023(2,3,0,5,6);
    test023(2,3,1,5,6);
  }
  {
    test024(2,3,0,5,6);
    test024(2,3,1,5,6);
  }
  {
    test025(3,4,0,5,6);
    test025(3,4,1,5,6);
  }
  {
    test026(3,4,0,5,6);
    test026(3,4,1,5,6);
  }
  {
    test027(3,4,0,5,6);
    test027(3,4,1,5,6);
  }
  {
    test028(0,1,0,0,1);
    test028(1,1,0,0,1);
    test028(1,1,0,1,1);
  }
  {
    test029(0,0,0,0,1);
    test029(0,0,0,1,0);
  }
  {
    for ( int i = 0 ; i < 2 ; ++i ){
      for ( int j = 0 ; j < 2 ; ++j ){
	for ( int k = 0 ; k < 2 ; ++k ){
	  for ( int l = 0 ; l < 2 ; ++l ){
	    for ( int m = 0 ; m < 2 ; ++m ){
	      int a[] = { i, j, k, l, 4, 5, m, 7, 8 };
	      test030(&a[0]);
	    }
	  }
	}
      }
    }
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test031(&a[0],2,0,4,5);
    test031(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test032(&a[0],2,0,4,5);
    test032(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test033(&a[0],2,0,4,5);
    test033(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test034(&a[0],2,0,4,5);
    test034(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test035(&a[0],2,0,4,5);
    test035(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test036(&a[0],2,0,4,5);
    test036(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test037(&a[0],2,0,4,5);
    test037(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test038(&a[0],2,0,4,5);
    test038(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test039(&a[0],2,0,4,5);
    test039(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test040(&a[0],2,0,4,5);
    test040(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4 };
    test041(&a[0],2,0,4,5);
    test041(&a[0],2,1,4,5);
  }
  {
    int a[] = { 0, 1, 2, 3, 4, 5, 6 };
    test042(&a[0]);
    int b[] = { 1, 2, 3, 4, 5, 6, 7 };
    test042(&b[0]);
  }
  return 0;
}
