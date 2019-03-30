/*
 * Floating literal used outside function.
 * Especially, for floating literal x and y, check if x @ y
 * works well, where x or y is `long double'
 */
#include <stdio.h>

/* x + y */
int    test00 =         1.0L + (char)2;
float  test01 = (short int)1 + 2.0L;
double test02 =         1.0L + 2.0L;

/* x - y */
char        test10 = 1.0L - 2;
int         test11 =   1L - 2.0L;
long double test12 = 1.0L - 2.0L;

/* x * y */
long int      test20 = 2.0L * (unsigned char)3;
short int     test21 =  2UL * 3.0L;
long long int test22 = 2.0L * 3.0L;

/* x / y */
signed char   test30 = (long double)10 / 5;
unsigned char test31 =             10L / (long double)5;
unsigned int  test32 =           10.0L / 5.0L;

/* x == y */
unsigned long int      test40 = 1.0L == (char)2;
unsigned long long int test41 = 2ULL == 2.0L;
float                  test42 = 1.0L == 2.0L;

/* x != y */
unsigned long int      test50 = 1.0L != (char)2;
unsigned long long int test51 = 2ULL != 2.0L;
float                  test52 = 1.0L != 2.0L;

/* x < y */
char          test60 = 1.0L < 2LL;
signed char   test61 = 3ULL < 3.0L;
unsigned char test62 = 4.0L < 3.0L;

/* x > y */
char          test70 = 1.0L > 2LL;
signed char   test71 = 3ULL > 3.0L;
unsigned char test72 = 4.0L > 3.0L;

/* x <= y */
char          test80 = 1.0L <= 2LL;
signed char   test81 = 3ULL <= 3.0L;
unsigned char test82 = 4.0L <= 3.0L;

/* x >= y */
char          test90 = 1.0L >= 2LL;
signed char   test91 = 3ULL >= 3.0L;
unsigned char test92 = 4.0L >= 3.0L;

int main(void)
{
  printf("test00 = %d\n",   test00);
  printf("test01 = %f\n",   test01);
  printf("test02 = %f\n",   test02);
  printf("test10 = %d\n",   test10);
  printf("test11 = %d\n",   test11);
  printf("test12 = %Lf\n",  test12);
  printf("test20 = %ld\n",   test20);
  printf("test21 = %d\n",   test21);
  printf("test22 = %lld\n", test22);
  printf("test30 = %d\n",   test30);
  printf("test31 = %d\n",   test31);
  printf("test32 = %u\n",   test32);
  printf("test40 = %lu\n",   test40);
  printf("test41 = %llu\n", test41);
  printf("test42 = %f\n",   test42);
  printf("test50 = %lu\n",  test50);
  printf("test51 = %llu\n", test51);
  printf("test52 = %f\n",   test52);
  printf("test60 = %d\n",   test60);
  printf("test61 = %d\n",   test61);
  printf("test62 = %d\n",   test62);
  printf("test70 = %d\n",   test70);
  printf("test71 = %d\n",   test71);
  printf("test72 = %d\n",   test72);
  printf("test80 = %d\n",   test80);
  printf("test81 = %d\n",   test81);
  printf("test82 = %d\n",   test82);
  printf("test90 = %d\n",   test90);
  printf("test91 = %d\n",   test91);
  printf("test92 = %d\n",   test92);
  return 0;
}
