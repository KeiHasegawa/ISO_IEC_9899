#include <stdio.h>

union U {
  float x;
  int   y;
};

extern union U array[40];

void f(float a00,
       int   a01,
       int   a02,
       float a03,
       int   a04,
       float a05,
       float a06,
       int   a07,
       int   a08,
       float a09,
       float a10,
       int   a11,
       int   a12,
       float a13,
       int   a14,
       float a15,
       float a16,
       int   a17,
       int   a18,
       float a19,
       float a20,
       int   a21,
       int   a22,
       float a23,
       int   a24,
       float a25,
       float a26,
       int   a27,
       int   a28,
       float a29,
       float a30,
       int   a31,
       int   a32,
       float a33,
       int   a34,
       float a35,
       float a36,
       int   a37,
       int   a38,
       float a39);

int main()
{
  f(array[0].x,array[1].y,array[2].y,array[3].x,array[4].y,
    array[5].x,array[6].x,array[7].y,array[8].y,array[9].x,
    array[10].x,array[11].y,array[12].y,array[13].x,array[14].y,
    array[15].x,array[16].x,array[17].y,array[18].y,array[19].x,
    array[20].x,array[21].y,array[22].y,array[23].x,array[24].y,
    array[25].x,array[26].x,array[27].y,array[28].y,array[29].x,
    array[30].x,array[31].y,array[32].y,array[33].x,array[34].y,
    array[35].x,array[36].x,array[37].y,array[38].y,array[39].x);
  return 0;
}

void f(float a00,
       int   a01,
       int   a02,
       float a03,
       int   a04,
       float a05,
       float a06,
       int   a07,
       int   a08,
       float a09,
       float a10,
       int   a11,
       int   a12,
       float a13,
       int   a14,
       float a15,
       float a16,
       int   a17,
       int   a18,
       float a19,
       float a20,
       int   a21,
       int   a22,
       float a23,
       int   a24,
       float a25,
       float a26,
       int   a27,
       int   a28,
       float a29,
       float a30,
       int   a31,
       int   a32,
       float a33,
       int   a34,
       float a35,
       float a36,
       int   a37,
       int   a38,
       float a39)
{
#ifndef _MSC_VER
  printf("\
a00 = %f, a01 = 0x%08x, a02 = 0x%08x, a03 = %f, a04 = 0x%08x\n,\
a05 = %f, a06 = %f, a07 = 0x%08x, a08 = 0x%08x, a09 = %f,\n\
a10 = %f, a11 = 0x%08x, a12 = 0x%08x, a13 = %f, a14 = 0x%08x\n,\
a15 = %f, a16 = %f, a17 = 0x%08x, a18 = 0x%08x, a19 = %f,\n\
a20 = %f, a21 = 0x%08x, a22 = 0x%08x, a23 = %f, a24 = 0x%08x\n,\
a25 = %f, a26 = %f, a27 = 0x%08x, a28 = 0x%08x, a29 = %f,\n\
a30 = %f, a31 = 0x%08x, a32 = 0x%08x, a33 = %f, a34 = 0x%08x\n,\
a35 = %f, a36 = %f, a37 = 0x%08x, a38 = 0x%08x, a39 = %f\n",
#else // _MSC_VER
  printf("a00 = %f, a01 = 0x%08x, a02 = 0x%08x, a03 = %f, a04 = 0x%08x\n,a05 = %f, a06 = %f, a07 = 0x%08x, a08 = 0x%08x, a09 = %f,\na10 = %f, a11 = 0x%08x, a12 = 0x%08x, a13 = %f, a14 = 0x%08x\n,a15 = %f, a16 = %f, a17 = 0x%08x, a18 = 0x%08x, a19 = %f,\na20 = %f, a21 = 0x%08x, a22 = 0x%08x, a23 = %f, a24 = 0x%08x\n,a25 = %f, a26 = %f, a27 = 0x%08x, a28 = 0x%08x, a29 = %f,\na30 = %f, a31 = 0x%08x, a32 = 0x%08x, a33 = %f, a34 = 0x%08x\n,a35 = %f, a36 = %f, a37 = 0x%08x, a38 = 0x%08x, a39 = %f\n",
#endif // _MSC_VER
a00,      a01,          a02,          a03,      a04,
a05,      a06,          a07,          a08,      a09,
a10,      a11,          a12,          a13,      a14,
a15,      a16,          a17,          a18,      a19,
a20,      a21,          a22,          a23,      a24,
a25,      a26,          a27,          a28,      a29,
a30,      a31,          a32,          a33,      a34,
a35,      a36,          a37,          a38,      a39);
}

union U array[40] = {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  32,
  33,
  34,
  35,
  36,
  37,
  38,
  39,
};       
