/*
 * Check logical OR operator works well outside funciton.
 */
#include <stdio.h>

int test_000 = '\0' || (void*)0;
int test_001 = '\0' || (void*)1;
int test_002 = '\1' || (void*)0;
int test_003 = '\1' || (void*)1;

int test_004 = 0.0F || 0;
int test_005 = 0.0F || -7;
int test_006 = 0.1F || 0;
int test_007 = 0.1F || -7;

int test_008 = 0LL || 0.0L;
int test_009 = 0LL || -0.5L;
int test_010 = 1LL || 0.0L;
int test_011 = 1LL || -0.5L;

int test_012 = 1LL || test_011;

int main(void)
{
  printf("test_000 = %d\n", test_000);
  printf("test_001 = %d\n", test_001);
  printf("test_002 = %d\n", test_002);
  printf("test_003 = %d\n", test_003);
  printf("test_004 = %d\n", test_004);
  printf("test_005 = %d\n", test_005);
  printf("test_006 = %d\n", test_006);
  printf("test_007 = %d\n", test_007);
  printf("test_008 = %d\n", test_008);
  printf("test_009 = %d\n", test_009);
  printf("test_010 = %d\n", test_010);
  printf("test_011 = %d\n", test_011);
  printf("test_012 = %d\n", test_012);
  return 0;
}
