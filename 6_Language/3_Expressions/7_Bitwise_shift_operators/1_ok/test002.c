/*
 * Check shift operator works well outside function.
 */
#include <stdio.h>

int test_000 = 12 << 3;
int test_001 = 12 >> 3;

int test_002 = -12 << 1;
int test_003 = -12 >> 1;

int test_004 = -12 << 3LL;
int test_005 = -12 >> 3ULL;

long long int test_006 = -12LL << 1;
long long int test_007 = -12LL >> 1;

unsigned long long int test_008 = ~0ULL >> 1;
unsigned long long int test_009 = ~0ULL << 1;

void test00(void)
{
  printf("test_000 = %d\n", test_000);
  printf("test_001 = %d\n", test_001);
  printf("test_002 = %d\n", test_002);
  printf("test_003 = %d\n", test_003);
  printf("test_004 = %d\n", test_004);
  printf("test_005 = %d\n", test_005);
  printf("test_006 = %lld\n", test_006);
  printf("test_007 = %lld\n", test_007);
  printf("test_008 = 0x%llx\n", test_008);
  printf("test_009 = 0x%llx\n", test_009);
}

int main(void)
{
  test00();
  return 0;
}

