/*
 * Check if type-name is recognized in several context
 */
#include <stdio.h>

int array[][3] = {
  { 0, 1, 2 },
  { 3, 4, 5 },
  { 6, 7, 8 },
};

int f(void)
{
  printf("`f' called\n");
  return -3;
}

int g0(unsigned int, ...);
int g1(unsigned int, ...);
int g2(unsigned int, ...);

/* compound-literal */
void test000(void)
{
  printf("`test000' called\n");
  int a = (int){1};
  printf("%d\n", a);
  int* b = (int*){&(int){2}};
  printf("%d\n", *b);
  int** c = (int* [3]){&a,b,&(int){3}};
  printf("%d %d %d\n", *c[0], *c[1], *c[2]);
  int (*d)[3] = (int (*)[3]){array};
  printf("%d %d %d\n", (*d)[0], (*d)[1], (*d)[2]);
  int (*pf)(void) = (int (*)(void)){ f };
  pf();
  typedef int (*T)(unsigned int, ...);
  const T* g = (int (*const [])(unsigned int, ...)){ g0, g1, g2 };
  // int (*const G[])(unsigned int, ...);
  // G is array of const pointer to function returning int.
  // So, generated type is
  // pointer to const pointer to function returning int
  g[0](0);
  g[1](1);
  g[2](2);
}

/* sizeof operator */
void test001(void)
{
  printf("`test001' called\n");
  printf("sizeof(int) = %d\n", (int)sizeof(int));
  printf("sizeof(int*) = %d\n", (int)sizeof(int*));
  printf("sizeof(int*[3]) = %d\n", (int)sizeof(int*[3]));
  printf("sizeof(int(*)[3]) = %d\n", (int)sizeof(int(*)[3]));
  printf("sizeof(int(*)(void)) = %d\n", (int)sizeof(int(*)(void)));
}

/* cast operator */
void test002(void)
{
  printf("`test002' called\n");
  printf("%d\n", (int)1.0L);
  printf("0x%x\n", *(int*)&(float){1.0F});
  int (*p)[3] = (int (*)[3])&array;
  printf("%d, %d, %d\n", (*p)[0],(*p)[1],(*p)[2]);
  int (*pf)(void) = (int (*)(void))f;
  pf();
}

int* g();

/* parameter declaration */
void test003(void)
{
  printf("`test003' called\n");
  void f0(int);
  int n = 5;
  f0(n);
  void f1(int*);
  f1(&n);
  void f2(int* [3]);
  int* a[] = { &n, &array[1][1], &array[2][2]};
  f2(a);
  void f3(int (*)[3]);
  f3(&array[1]);
  void f4(int* ());
  f4(g);
  void f5(int (*)(void));
  f5(&f);
  void f6(int (*const [])(unsigned int, ...));
  typedef int (*T)(unsigned int, ...);
  const T* g = (int (*const [])(unsigned int, ...)){ g0, g1, g2 };
  f6(g);
}

int main(void)
{
  test000();
  test001();
  test002();
  test003();
  return 0;
}

int* g()
{
  printf("`g' called\n");
  return &array[0][2];
}

int g0(unsigned int a, ...)
{
  printf("`g0' called\n");
  if ( a )
    printf("%d\n", a);
  else
    printf("a is zero\n");
}

int g1(unsigned int a, ...)
{
  printf("`g1' called\n");
  if ( a )
    printf("%d\n", a + 1);
  else
    printf("a is zero\n");
}

int g2(unsigned int a, ...)
{
  printf("`g2' called\n");
  if ( a )
    printf("%d\n", a + 2);
  else
    printf("a is zero\n");
}

void f0(int n)
{
  printf("`f0' called\n");
  printf("n = %d\n", n);
}

void f1(int* p)
{
  printf("`f1' called\n");
  printf("%d\n", ++*p);
}

void f2(int* pp[3])
{
  printf("`f2' called\n");
  printf("%d, %d, %d\n", *pp[0], *pp[1], *pp[2]);
}

void f3(int (*pa)[3])
{
  printf("`f3' called\n");
  printf("%d, %d, %d\n", (*pa)[0], (*pa)[1], (*pa)[2]);
}

void f4(int* pf())
{
  printf("`f4' called\n");
  int* p = pf();
  printf("*p = %d\n", *p);
}

void f5(int (*pf)(void))
{
  printf("`f5' called\n"); 
  int n = pf();
  printf("n = %d\n", n);
}

void f6(int (*const a[])(unsigned int, ...))
{
  printf("`f6' called\n"); 
  a[0](1);
  a[1](0);
  a[2](0);
}
