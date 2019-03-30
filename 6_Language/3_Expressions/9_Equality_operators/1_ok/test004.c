/*
 * Check relational operator works well outside function.
 */
#include <stdio.h>

int test_000 = (char)3 == (double)2;
int test_001 = (int)3 != (float)2;
int test_002 = (long double)3 == (unsigned int)2;
int test_003 = (unsigned short int)3 != (long int)2;

int test_004 = (char)3 == (double)3;
int test_005 = (int)3 != (float)3;
int test_006 = (long double)3 == (unsigned int)3;
int test_007 = (unsigned short int)3 != (long int)3;

int test_008 = (char)3 == (double)4;
int test_009 = (int)3 != (float)4;
int test_010 = (long double)3 == (unsigned int)4;
int test_011 = (unsigned short int)3 != (long int)4;

int array[10];

int test_012 = &array[1] == &array[0];
int test_013 = &array[1] != &array[0];

int test_014 = &array[1] == &array[1];
int test_015 = &array[1] != &array[1];

int test_016 = &array[1] == &array[2];
int test_017 = &array[1] != &array[2];

int test_018 = &array[1] == (void*)&array[0];
int test_019 = (void*)&array[1] != &array[0];

int test_020 = (void*)&array[1] == &array[1];
int test_021 = &array[1] != (void*)&array[1];

int test_022 = &array[1] == &array[1];
int test_023 = &array[1] != &array[1];

int test_024 = (int*)1 == (int*)0;
int test_025 = (int*)1 != (int*)0;
int test_026 = (int*)1 == (int*)1;
int test_027 = (int*)1 != (int*)1;
int test_028 = (int*)1 == (int*)2;
int test_029 = (int*)1 != (int*)2;

int test_030 = (int*)1 == (void*)0;
int test_031 = (int*)1 != (void*)0;
int test_032 = (int*)1 == (void*)1;
int test_033 = (int*)1 != (void*)1;

int test_034 = (int*)0 == 0;
int test_035 = (int*)0 != 0;
int test_036 = 0 == (int*)1;
int test_037 = 0 != (int*)1;

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
  printf("test_013 = %d\n", test_013);
  printf("test_014 = %d\n", test_014);
  printf("test_015 = %d\n", test_015);
  printf("test_016 = %d\n", test_016);
  printf("test_017 = %d\n", test_017);
  printf("test_018 = %d\n", test_018);
  printf("test_019 = %d\n", test_019);
  printf("test_020 = %d\n", test_020);
  printf("test_021 = %d\n", test_021);
  printf("test_022 = %d\n", test_022);
  printf("test_023 = %d\n", test_023);
  printf("test_024 = %d\n", test_024);
  printf("test_025 = %d\n", test_025);
  printf("test_026 = %d\n", test_026);
  printf("test_027 = %d\n", test_027);
  printf("test_028 = %d\n", test_028);
  printf("test_029 = %d\n", test_029);
  printf("test_030 = %d\n", test_030);
  printf("test_031 = %d\n", test_031);
  printf("test_032 = %d\n", test_032);
  printf("test_033 = %d\n", test_033);
  printf("test_034 = %d\n", test_034);
  printf("test_035 = %d\n", test_035);
  printf("test_036 = %d\n", test_036);
  printf("test_037 = %d\n", test_037);
  return 0;
}
