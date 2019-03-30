/*
 * Check if binary operator '+' works well, where one operand is pointer
 * to object type and another is arithmetic type.
 */
#include <stdio.h>

/* arithmetic type is `char' */
void test000(char* a, char b)
{
  printf("`test000' called\n");
  printf("%c\n", *(a + b));
}

/* arithmetic type is `char' */
void test001(char a, char* b)
{
  printf("`test001' called\n");
  printf("%c\n", *(a + b));
}

struct S {
  int a;
  char b[5];
};

/* arithmetic type is `signed char' */
void test010(struct S* a, signed char b)
{
  printf("`test010' called\n");
  printf("%d\n", (a + b)->a);
  printf("%c\n", (a + b)->b[2]);
}

/* arithmetic type is `signed char' */
void test011(signed char a, struct S* b)
{
  printf("`test011' called\n");
  printf("%d\n", (a + b)->a);
  printf("%c\n", (a + b)->b[0]);
}

/* arithmetic type is `unsigned char' */
void test020(int (*a)[3], unsigned char b)
{
  printf("`test020' called\n");
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", (*(a + b))[i]);
  printf("\n");
}

/* arithmetic type is `unsigned char' */
void test021(unsigned char a, int (*b)[3])
{
  printf("`test021' called\n");
  for ( int i = 0 ; i < 3 ; ++i )
    printf(" %d", (*(a + b))[i]);
  printf("\n");
}

/* arithmetic type is `short int' */
void test030(int** a, short int b)
{
  printf("`test030' called\n");
  printf("%d\n", **(a + b));
}

/* arithmetic type is `short int' */
void test031(short int a, int** b)
{
  printf("`test031' called\n");
  printf("%d\n", **(a + b));
}

/* arithmetic type is `unsigned short int' */
void test040(int n, double a[n][n], unsigned short int b, int i)
{
  printf("`test040' called\n");
  printf("%f\n", (*(a + b))[i]);
}

/* arithmetic type is `unsigned short int' */
void test041(int n, unsigned short int a, double b[n][n], int i)
{
  printf("`test041' called\n");
  printf("%f\n", (*(a + b))[i]);
}

/* arithmetic type is `int' */
void test050(long double* a, int b)
{
  printf("`test050' called\n");
  printf("%Lf\n", *(a + b));
}

/* arithmetic type is `int' */
void test051(int a, long double* b)
{
  printf("`test051' called\n");
  printf("%Lf\n", *(a + b));
}

/* arithmetic type is `unsigned int' */
void test060(void (*(*a)[3])(void), unsigned int b, int i)
{
  printf("test060' called\n");
  (*(a + b))[i]();
}

/* arithmetic type is `unsigned int' */
void test061(unsigned int a, void (*(*b)[3])(void), int i)
{
  printf("test061' called\n");
  (*(a + b))[i]();
}

/* arithmetic type is `long int' */
void test070(long long int* a, long int b)
{
  printf("`test070' called\n");
  printf("%lld\n", *(a + b));
}

/* arithmetic type is `long int' */
void test071(long int a, long long int* b)
{
  printf("`test071' called\n");
  printf("%lld\n", *(a + b));
}

/* arithmetic type is `unsigned long int' */
void test080(unsigned long long int* a, unsigned long int b)
{
  printf("`test080' called\n");
  printf("%lld\n", *(a + b));
}

/* arithmetic type is `unsigned long int' */
void test081(unsigned long int a, unsigned long long int* b)
{
  printf("`test081' called\n");
  printf("%lld\n", *(a + b));
}

/* arithmetic type is `long long int' */
void test090(char* a, long long int b)
{
  printf("`test090' called\n");
  printf("%c\n", *(a + b));
}

/* arithmetic type is `long long int' */
void test091(long long int a, char* b)
{
  printf("`test091' called\n");
  printf("%c\n", *(a + b));
}

union U {
  int a;
  float b;
};

/* arithmetic type is `unsigned long long int' */
void test100(union U* a, unsigned long long int b)
{
  printf("`test100' called\n");
  printf("0x%08x %f\n", (a + b)->a, (a + b)->b);
}

/* arithmetic type is `unsigned long long int' */
void test101(unsigned long long int a, union U* b)
{
  printf("`test101' called\n");
  printf("0x%08x %f\n", (a + b)->a, (a + b)->b);
}

int main(void)
{
  {
    test000("hello world", 3);
    test001(3, "hello world");
  }
  {
    struct S array[] = {
      { 0, "abcd" },
      { 1, "efgh" },
      { 2, "ijkl" },
      { 3, "mnop" },
    };
    test010(&array[0],3);
    test011(2,&array[0]);
  }
  {
    int array[][3] = {
      { 1, 2, 3 },
      { 4, 5, 6 },
      { 7, 8, 9 }
    };
    test020(&array[0],1);
    test021(2,&array[0]);
  }
  {
    int* array[] = {
      &(int){0},
      &(int){1},
      &(int){2},
      &(int){3},
      &(int){4},
    };
    test030(&array[0],2);
    test031(4,&array[0]);
  }
  {
    double array[][4] = {
       1, 2, 3, 4,
       5, 6, 7, 8,
       9,10,11,12,
      13,14,15,16
    };
    test040(4,array,1,2);
    test041(4,3,array,0);
  }
  {
    long double array[] = {
      1, 2, 3
    };
    test050(&array[0],0);
    test051(1,&array[0]);
  }
  {
    typedef void F(void);
    F f0, f1, f2, f3, f4, f5; 
    void (*array[][3])(void) = {
      { f0, f1, f2 },
      { f3, f4, f5 },
    };
    test060(&array[0],0,1);
    test061(1,&array[0],1);
  }
  {
    long long int array[] = {
      -1, -2, -3,
    };
    test070(&array[0],2);
    test071(1,&array[0]);
  }
  {
    unsigned long long int array[] = {
      1, 2, 3,
    };
    test080(&array[0],2);
    test081(1,&array[0]);
  }
  {
    test090("programming",2);
    test091(4,"language");
  }
  {
    union U array[] = {
      { .b = 1 },
      { .b = 2 },
      { .b = 3 },
    };
    test100(&array[0],2);
    test101(1,&array[0]);
  }
  return 0;
}

void f0(void){ printf("`f0' called\n"); }
void f1(void){ printf("`f1' called\n"); }
void f2(void){ printf("`f2' called\n"); }
void f3(void){ printf("`f3' called\n"); }
void f4(void){ printf("`f4' called\n"); }
void f5(void){ printf("`f5' called\n"); }
