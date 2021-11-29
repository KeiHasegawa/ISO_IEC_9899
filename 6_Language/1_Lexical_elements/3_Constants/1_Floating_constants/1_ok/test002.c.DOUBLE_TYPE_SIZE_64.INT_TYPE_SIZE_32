/*
 * Check if floating-constats are recognized,
 * whose types are `double' and which are in various range.
 *
 * Note : We assumed that compiler uses
 * IEEE 754 floating constant format.
 *
 * Let type of `x' be `double' and bit representation of `x'
 * (b_0 ... b_{63}).
 *
 * If `x' is normalized,
 *
 * x = (-1)^{b_0} 2^{e-1023}(1+\sum_{i=12}^{63}b_i/2^{i-11})
 * where, e = \sum_{i=1}^{11} 2^{11-i} b_i and e must be neither
 * 0 nor 2047.
 *
 * If `x' is denormalized,
 *
 * x = (-1)^{b_0} 2^{-1023} \sum_{i=12}^{63}(b_i/2^{i-12})
 */
#include <stdio.h>

void swap(int* pa, int* pb)
{
  int tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}

/*
 * Check if b_0 is recognized.
 */
void test00(void)
{
  printf("*** `test00' called\n");
  int i = 1;
  union {
    double d;
    int i[2];
  } u;

  /* zero */
  u.d = +0.0;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("+0.0 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = -u.d;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("-0.0 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);

  /* normalized */
  u.d = +1.0;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("+1.0 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = -1.0;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("-1.0 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);

  /* not normalized */
  u.d = +0x1p-1023;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("+0x1p-1023 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = -0x1p-1023;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("-0x1p-1023 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);

  /* inf */
  u.d = +1.0/0.0;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("+inf : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = -1.0/0.0;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("-inf : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
}

/*
 * Check if b_1 ... b_{11} is recognized.
 */
void test01(void)
{
  printf("*** `test01' called\n");
  int i = 1;
  union {
    double d;
    int i[2];
  } u;

  u.d = 0x1p-1022;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1022 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1021;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1021 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1019;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1019 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1015;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1015 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1007;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1007 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-991;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-991  : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-959;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-959  : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-895;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-895  : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-767;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-767  : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-511;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-511  : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p+1;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p+1    : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
}

/*
 * Check if b_{12} ... b_{63} is recognized.
 */
void test02(void)
{
  printf("*** `test02' called\n");

  int i = 1;
  union {
    double d;
    int i[2];
  } u;

  u.d = 0x1p-1074;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1074 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1073;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1073 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1072;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1072 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1071;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1071 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1070;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1070 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1069;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1069 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1068;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1068 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1067;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1067 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1066;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1066 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1065;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1065 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1064;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1064 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1063;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1063 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1062;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1062 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1061;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1061 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1060;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1060 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1059;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1059 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1058;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1058 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1057;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1057 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1056;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1056 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1055;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1055 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1054;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1054 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1053;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1053 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1052;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1052 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1051;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1051 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1050;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1050 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1049;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1049 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1048;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1048 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1047;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1047 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1046;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1046 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1045;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1045 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1044;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1044 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1043;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1043 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1042;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1042 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1041;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1041 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1040;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1040 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1039;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1039 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1038;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1038 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1037;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1037 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1036;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1036 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1035;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1035 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1034;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1034 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1033;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1033 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1032;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1032 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1031;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1031 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1030;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1030 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1029;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1029 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1028;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1028 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1027;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1027 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1026;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1026 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1025;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1025 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1024;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1024 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
  u.d = 0x1p-1023;
  if ( *(char*)&i )
    swap(&u.i[0],&u.i[1]);
  printf("0x1p-1023 : 0x%08x 0x%08x\n", u.i[0], u.i[1]);
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}

