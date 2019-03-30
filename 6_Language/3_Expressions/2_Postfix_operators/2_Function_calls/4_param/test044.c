#include <stdio.h>

extern int array[20];

void f(int a00,
       int a01,
       int a02,
       int a03,
       int a04,
       int a05,
       int a06,
       int a07,
       int a08,
       int a09,
       int a10,
       int a11,
       int a12,
       int a13,
       int a14,
       int a15,
       int a16,
       int a17,
       int a18,
       int a19);

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

void f(int a00,
       int a01,
       int a02,
       int a03,
       int a04,
       int a05,
       int a06,
       int a07,
       int a08,
       int a09,
       int a10,
       int a11,
       int a12,
       int a13,
       int a14,
       int a15,
       int a16,
       int a17,
       int a18,
       int a19)
{
#ifndef _MSC_VER
  printf("\
a00 = %d, a01 = %d, a02 = %d, a03 = %d, a04 = %d,\n\
a05 = %d, a06 = %d, a07 = %d, a08 = %d, a09 = %d,\n\
a10 = %d, a11 = %d, a12 = %d, a13 = %d, a14 = %d,\n\
a15 = %d, a16 = %d, a17 = %d, a18 = %d, a19 = %d\n",
#else // _MSC_VER
  printf("a00 = %d, a01 = %d, a02 = %d, a03 = %d, a04 = %d,\na05 = %d, a06 = %d, a07 = %d, a08 = %d, a09 = %d,\na10 = %d, a11 = %d, a12 = %d, a13 = %d, a14 = %d,\na15 = %d, a16 = %d, a17 = %d, a18 = %d, a19 = %d\n",
#endif // _MSC_VER
a00,      a01,      a02,      a03,      a04,
a05,      a06,      a07,      a08,      a09,
a10,      a11,      a12,      a13,      a14,
a15,      a16,      a17,      a18,      a19);
}

int array[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
		  10,11,12,13,14,15,16,17,18,19 };
