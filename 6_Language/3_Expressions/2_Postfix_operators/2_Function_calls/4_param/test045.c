#include <stdio.h>

extern double array[20];

void f(double a00,
       double a01,
       double a02,
       double a03,
       double a04,
       double a05,
       double a06,
       double a07,
       double a08,
       double a09,
       double a10,
       double a11,
       double a12,
       double a13,
       double a14,
       double a15,
       double a16,
       double a17,
       double a18,
       double a19);

int main()
{
  f(array[0],
    array[1],
    array[2],
    array[3],
    array[4],
    array[5],
    array[6],
    array[7],
    array[8],
    array[9],
    array[10],
    array[11],
    array[12],
    array[13],
    array[14],
    array[15],
    array[16],
    array[17],
    array[18],
    array[19]);
  return 0;
}

void f(double a00,
       double a01,
       double a02,
       double a03,
       double a04,
       double a05,
       double a06,
       double a07,
       double a08,
       double a09,
       double a10,
       double a11,
       double a12,
       double a13,
       double a14,
       double a15,
       double a16,
       double a17,
       double a18,
       double a19)
{
#ifndef _MSC_VER
  printf("\
a00 = %f, a01 = %f, a02 = %f, a03 = %f, a04 = %f,\n\
a05 = %f, a06 = %f, a07 = %f, a08 = %f, a09 = %f,\n\
a10 = %f, a11 = %f, a12 = %f, a13 = %f, a14 = %f,\n\
a15 = %f, a16 = %f, a17 = %f, a18 = %f, a19 = %f\n",
#else  // _MSC_VER
  printf("a00 = %f, a01 = %f, a02 = %f, a03 = %f, a04 = %f,\na05 = %f, a06 = %f, a07 = %f, a08 = %f, a09 = %f,\na10 = %f, a11 = %f, a12 = %f, a13 = %f, a14 = %f,\na15 = %f, a16 = %f, a17 = %f, a18 = %f, a19 = %f\n",
#endif  // _MSC_VER
a00,      a01,      a02,      a03,      a04,
a05,      a06,      a07,      a08,      a09,
a10,      a11,      a12,      a13,      a14,
a15,      a16,      a17,      a18,      a19);
}

double array[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
		     10,11,12,13,14,15,16,17,18,19 };
