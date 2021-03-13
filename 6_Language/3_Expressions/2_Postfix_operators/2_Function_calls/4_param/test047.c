#include <stdio.h>

void f(int a00,
       short int a01,
       double a02,
       unsigned char a03,
       long long int a04,
       float a05,
       char a06,
       unsigned short int a07,
       int* a08,
       unsigned int a09,
       long int a10,
       unsigned long int a11,
       unsigned long long int a12,
       long double a13,
       unsigned char a14,
       unsigned int a15,
       long int a16,
       int a17,
       double a18,
       char a19,
       long double a20,
       unsigned short int a21,
       unsigned long long int a22,
       const char* a23,
       short int a24,
       unsigned long int a25,
       long long int a26,
       float a27,
       char a28,
       unsigned char a29,
       short int a30,
       unsigned short int a31,
       int a32,
       unsigned int a33,
       long int a34,
       unsigned long int a35,
       long long int a36,
       unsigned long long int a37,
       float a38,
       double a39,
       long double a40,
       short int* a41,
       unsigned long long int a42,
       unsigned long int a43,
       char a44,
       unsigned short int a45,
       int a46,
       const char* a47,
       float a48,
       double a49,
       long int a50,
       unsigned int a51,
       long long int a52,
       unsigned char a53,
       short int a54,
       long double a55,
       double a56,
       char a57,
       long double a58,
       unsigned int a59,
       int a60,
       unsigned char a61,
       short int a62,
       unsigned short int a63,
       float a64,
       long int a65,
       unsigned long int a66,
       long int* a67,
       long long int a68,
       unsigned long long int a69,
       unsigned char a70,
       unsigned int a71,
       long int a72,
       double a73,
       long double a74,
       double* a75,
       unsigned short int a76,
       unsigned long int a77,
       long long int a78,
       unsigned long long int a79)
{
  printf("a00 = %d\n", a00);
  printf("a01 = %d\n", a01);
  printf("a02 = %f\n", a02);
  printf("a03 = '%c'\n", a03);
  printf("a04 = %lld\n", a04);
  printf("a05 = %f\n", a05);
  printf("a06 = '%c'\n", a06);
  printf("a07 = %d\n", a07);
  printf("*a08 = %d\n", *a08);
  printf("a09 = %d\n", a09);
  printf("a10 = %ld\n", a10);
  printf("a11 = %ld\n", a11);
  printf("a12 = %lld\n", a12);
  printf("a13 = %Lf\n", a13);
  printf("a14 = '%c'\n", a14);
  printf("a15 = %d\n", a15);
  printf("a16 = %ld\n", a16);
  printf("a17 = %d\n", a17);
  printf("a18 = %f\n", a18);
  printf("a19 = '%c'\n", a19);
  printf("a20 = %Lf\n", a20);
  printf("a21 = %d\n", a21);
  printf("a22 = %lld\n", a22);
  printf("a23 = %s\n", a23);
  printf("a24 = %d\n", a24);
  printf("a25 = %ld\n", a25);
  printf("a26 = %lld\n", a26);
  printf("a27 = %f\n", a27);
  printf("a28 = '%c'\n", a28);
  printf("a29 = '%c'\n", a29);
  printf("a30 = %d\n", a30);
  printf("a31 = %d\n", a31);
  printf("a32 = %d\n", a32);
  printf("a33 = %d\n", a33);
  printf("a34 = %ld\n", a34);
  printf("a35 = %ld\n", a35);
  printf("a36 = %lld\n", a36);
  printf("a37 = %lld\n", a37);
  printf("a38 = %f\n", a38);
  printf("a39 = %f\n", a39);
  printf("a40 = %Lf\n", a40);
  printf("*a41 = %d\n", *a41);
  printf("a42 = %lld\n", a42);
  printf("a43 = %ld\n", a43);
  printf("a44 = '%c'\n", a44);
  printf("a45 = %d\n", a45);
  printf("a46 = %d\n", a46);
  printf("a47 = %s\n", a47);
  printf("a48 = %f\n", a48);
  printf("a49 = %f\n", a49);
  printf("a50 = %ld\n", a50);
  printf("a51 = %d\n", a51);
  printf("a52 = %lld\n", a52);
  printf("a53 = '%c'\n", a53);
  printf("a54 = %d\n", a54);
  printf("a55 = %Lf\n", a55);
  printf("a56 = %f\n", a56);
  printf("a57 = '%c'\n", a57);
  printf("a58 = %Lf\n", a58);
  printf("a59 = %d\n", a59);
  printf("a60 = %d\n", a60);
  printf("a61 = '%c'\n", a61);
  printf("a62 = %d\n", a62);
  printf("a63 = %d\n", a63);
  printf("a64 = %f\n", a64);
  printf("a65 = %ld\n", a65);
  printf("a66 = %ld\n", a66);
  printf("*a67 = %ld\n", *a67);
  printf("a68 = %lld\n", a68);
  printf("a69 = %lld\n", a69);
  printf("a70 = '%c'\n", a70);
  printf("a71 = %d\n", a71);
  printf("a72 = %ld\n", a72);
  printf("a73 = %f\n", a73);
  printf("a74 = %Lf\n", a74);
  printf("*a75 = %f\n", *a75);
  printf("a76 = %d\n", a76);
  printf("a77 = %ld\n", a77);
  printf("a78 = %lld\n", a78);
  printf("a79 = %lld\n", a79);
}

int main(void)
{
  int t = 8;
  short int s = 41;
  long int r = 67;
  double u = 75;
  f(0,1,2.0,'3',4LL,5.0F,'6',7,&t,9,10,11,12ULL,13.0L,'x',15U,16L,17,
    18.0,'y',20.0L,21,22ULL,"23",24,25,26,27,'z','A',30,31,32,33,34,
    35,36,37,38,39,40,&s,42,43,'B',45,46,"47",48,49,50,51,52,'C',54,
    55,56,'D',58,59,60,'E',62,63,64,65,66,&r,68,69,'F',71,72,73,74,
    &u,76,77,78,79);
  return 0;
}
