/*
 * Check if conditional operator works well outside function.
 */
#include <stdio.h>

int* test_000 = '\0' ? 0 : (int*)1;

const void* test_001 = 1.0L ? (void*)2 : (const void*)3;

struct S;

double test_002 = (struct S*)1 ? 4 : 5;

int* test_003 = 1 ? 0 : (int*)&test_002;

double test_004 = 0.0L ? test_002 : 1;

int main(void)
{
  printf("test_000 = %d\n", (int)test_000);
  printf("test_001 = %d\n", (int)test_001);
  printf("test_002 = %f\n", test_002);
  printf("test_003 = %d\n", (int)test_003);
  printf("test_004 = %f\n", test_004);
  return 0;
}
