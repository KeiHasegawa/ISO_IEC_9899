/*
 * Check assignment operators work outside function.
 */
#include <stdio.h>

char test_000 = sizeof(test_000 |= test_000);
signed char test_001 = sizeof(test_001 ^= test_001);
unsigned char test_002 = sizeof(test_002 &= test_002);
short int test_003 = sizeof(test_003 <<= test_003);
unsigned short int test_004 = sizeof(test_004 >>= test_004);

int test_005 = sizeof(test_005 = test_005);
long int test_006 = sizeof(test_006 -= test_006);
long long int test_007 = sizeof(test_007 %= test_007);

float test_008 = sizeof(test_008 += test_008);
double test_009 = sizeof(test_009 /= test_009);
long double test_010 = sizeof(test_010 *= test_010);

int main(void)
{
  printf("test_000 = %d\n", test_000);
  printf("test_001 = %d\n", test_001);
  printf("test_002 = %d\n", test_002);
  printf("test_003 = %d\n", test_003);
  printf("test_004 = %d\n", test_004);
  printf("test_005 = %d\n", test_005);
  printf("test_006 = %ld\n", test_006);
  printf("test_007 = %lld\n", test_007);
  printf("test_008 = %f\n", test_008);
  printf("test_009 = %f\n", test_009);
  printf("test_010 = %Lf\n", test_010);
  return 0;
}
