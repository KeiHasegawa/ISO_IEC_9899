/*
 * Check if binary operator `+' or `-' works well outside function.
 */
#include <stdio.h>

char test00 = 'a' + 3;
char test01 = 'x' - 3.0;

unsigned short int test02 = 12 + 34.0F;
signed short int test03 = 56.0L - 24U;

int test04 = (char)7 + 8;
int test05 = 7 - (long long int)8;

unsigned long long int test06 = (short int)5 + (signed char)6;
unsigned long long int test07 = 20.0L + 30LL;

double test08 = 1LL - 2L;
double test09 = 1L - 2LL;

long double array[3];
long double* test10 = &array[0] + 2;
long double* test11 = &array[3] - 1;
unsigned int test12 = &array[3] - &array[0];

int main(void)
{
  printf("test00 = '%c'\n", test00);
  printf("test01 = '%c'\n", test01);
  printf("test02 = %d\n", test02);
  printf("test03 = %d\n", test03);
  printf("test04 = %d\n", test04);
  printf("test05 = %d\n", test05);
  printf("test06 = %lld\n", test06);
  printf("test07 = %lld\n", test07);
  printf("test08 = %f\n", test08);
  printf("test09 = %f\n", test09);
  if ( test10 == test11 )
    printf("ok\n");
  else
    printf("error\n");
  printf("test12 = %d\n", test12);
  return 0;
}
