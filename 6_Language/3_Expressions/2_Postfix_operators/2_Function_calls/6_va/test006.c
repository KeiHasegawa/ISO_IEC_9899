#include <stdio.h>
#include <stdarg.h>

void f(int, ...);

int main()
{
  f(0,1.0L,2LL,"3","4",5.0,6,7,8,9.0,
    "10",11.0,12,13LL,14.0L,"15","16",17.0,18.0L,19,
    20,21U,22L,23UL,24LL,25ULL,"26",27.0,28.0L,"29",
    30,31U,32L,33UL,34LL,35ULL,"36",37.0,38.0L,"39",
    40,41U,42L,43UL,44LL,45ULL,"46",47.0,48.0L,"49",
    50,51U,52L,53UL,54LL,55ULL,"56",57.0,58.0L,"59",
    60,61U,62L,63UL,64LL,65ULL,"66",67.0,68.0L,"69",
    70,71U,72L,73UL,74LL,75ULL,"76",77.0,78.0L,"79");
  return 0;
}

void f(int a00, ...)
{
  va_list ap;
  va_start(ap,a00);
  long double    a01 = va_arg(ap,long double);
  long long int  a02 = va_arg(ap,long long int);
  char*          a03 = va_arg(ap,char*);
  const char*    a04 = va_arg(ap,const char*);
  double         a05 = va_arg(ap,double);
  int            a06 = va_arg(ap,int);
  int            a07 = va_arg(ap,int);
  int            a08 = va_arg(ap,int);
  double         a09 = va_arg(ap,double);
  char*          a10 = va_arg(ap,char*);
  double         a11 = va_arg(ap,double);
  int            a12 = va_arg(ap,int);
  long long int  a13 = va_arg(ap,long long int);
  long double    a14 = va_arg(ap,long double);
  char*          a15 = va_arg(ap,char*);
  char*          a16 = va_arg(ap,char*);
  double         a17 = va_arg(ap,double);
  long double    a18 = va_arg(ap,long double);
  int            a19 = va_arg(ap,int);

  int                    a20 = va_arg(ap,int);
  unsigned int           a21 = va_arg(ap,unsigned int);
  long int               a22 = va_arg(ap,long int);
  unsigned long int      a23 = va_arg(ap,unsigned long int);
  long long int          a24 = va_arg(ap,long long int);
  unsigned long long int a25 = va_arg(ap,unsigned long long int);
  char*                  a26 = va_arg(ap,char*);
  double                 a27 = va_arg(ap,double);
  long double            a28 = va_arg(ap,long double);
  const char*            a29 = va_arg(ap,const char*);

  int                    a30 = va_arg(ap,int);
  unsigned int           a31 = va_arg(ap,unsigned int);
  long int               a32 = va_arg(ap,long int);
  unsigned long int      a33 = va_arg(ap,unsigned long int);
  long long int          a34 = va_arg(ap,long long int);
  unsigned long long int a35 = va_arg(ap,unsigned long long int);
  char*                  a36 = va_arg(ap,char*);
  double                 a37 = va_arg(ap,double);
  long double            a38 = va_arg(ap,long double);
  const char*            a39 = va_arg(ap,const char*);

  int                    a40 = va_arg(ap,int);
  unsigned int           a41 = va_arg(ap,unsigned int);
  long int               a42 = va_arg(ap,long int);
  unsigned long int      a43 = va_arg(ap,unsigned long int);
  long long int          a44 = va_arg(ap,long long int);
  unsigned long long int a45 = va_arg(ap,unsigned long long int);
  char*                  a46 = va_arg(ap,char*);
  double                 a47 = va_arg(ap,double);
  long double            a48 = va_arg(ap,long double);
  const char*            a49 = va_arg(ap,const char*);

  int                    a50 = va_arg(ap,int);
  unsigned int           a51 = va_arg(ap,unsigned int);
  long int               a52 = va_arg(ap,long int);
  unsigned long int      a53 = va_arg(ap,unsigned long int);
  long long int          a54 = va_arg(ap,long long int);
  unsigned long long int a55 = va_arg(ap,unsigned long long int);
  char*                  a56 = va_arg(ap,char*);
  double                 a57 = va_arg(ap,double);
  long double            a58 = va_arg(ap,long double);
  const char*            a59 = va_arg(ap,const char*);

  int                    a60 = va_arg(ap,int);
  unsigned int           a61 = va_arg(ap,unsigned int);
  long int               a62 = va_arg(ap,long int);
  unsigned long int      a63 = va_arg(ap,unsigned long int);
  long long int          a64 = va_arg(ap,long long int);
  unsigned long long int a65 = va_arg(ap,unsigned long long int);
  char*                  a66 = va_arg(ap,char*);
  double                 a67 = va_arg(ap,double);
  long double            a68 = va_arg(ap,long double);
  const char*            a69 = va_arg(ap,const char*);

  int                    a70 = va_arg(ap,int);
  unsigned int           a71 = va_arg(ap,unsigned int);
  long int               a72 = va_arg(ap,long int);
  unsigned long int      a73 = va_arg(ap,unsigned long int);
  long long int          a74 = va_arg(ap,long long int);
  unsigned long long int a75 = va_arg(ap,unsigned long long int);
  char*                  a76 = va_arg(ap,char*);
  double                 a77 = va_arg(ap,double);
  long double            a78 = va_arg(ap,long double);
  const char*            a79 = va_arg(ap,const char*);

  printf("a00 = %d\n", a00);
  printf("a01 = %Lf\n", a01);
  printf("a02 = %lld\n", a02);
  printf("a03 = %s\n", a03);
  printf("a04 = %s\n", a04);
  printf("a05 = %f\n", a05);
  printf("a06 = %d\n", a06);
  printf("a07 = %d\n", a07);
  printf("a08 = %d\n", a08);
  printf("a09 = %f\n", a09);
  printf("a10 = %s\n", a10);
  printf("a11 = %f\n", a11);
  printf("a12 = %d\n", a12);
  printf("a13 = %lld\n", a13);
  printf("a14 = %Lf\n", a14);
  printf("a15 = %s\n", a15);
  printf("a16 = %s\n", a16);
  printf("a17 = %f\n", a17);
  printf("a18 = %Lf\n", a18);
  printf("a19 = %d\n", a19);

  printf("a20 = %d\n", a20);
  printf("a21 = %d\n", a21);
  printf("a22 = %ld\n", a22);
  printf("a23 = %ld\n", a23);
  printf("a24 = %lld\n", a24);
  printf("a25 = %lld\n", a25);
  printf("a26 = %s\n", a26);
  printf("a27 = %f\n", a27);
  printf("a28 = %Lf\n", a28);
  printf("a29 = %s\n", a29);

  printf("a30 = %d\n", a30);
  printf("a31 = %d\n", a31);
  printf("a32 = %ld\n", a32);
  printf("a33 = %ld\n", a33);
  printf("a34 = %lld\n", a34);
  printf("a35 = %lld\n", a35);
  printf("a36 = %s\n", a36);
  printf("a37 = %f\n", a37);
  printf("a38 = %Lf\n", a38);
  printf("a39 = %s\n", a39);

  printf("a40 = %d\n", a40);
  printf("a41 = %d\n", a41);
  printf("a42 = %ld\n", a42);
  printf("a43 = %ld\n", a43);
  printf("a44 = %lld\n", a44);
  printf("a45 = %lld\n", a45);
  printf("a46 = %s\n", a46);
  printf("a47 = %f\n", a47);
  printf("a48 = %Lf\n", a48);
  printf("a49 = %s\n", a49);

  printf("a50 = %d\n", a50);
  printf("a51 = %d\n", a51);
  printf("a52 = %ld\n", a52);
  printf("a53 = %ld\n", a53);
  printf("a54 = %lld\n", a54);
  printf("a55 = %lld\n", a55);
  printf("a56 = %s\n", a56);
  printf("a57 = %f\n", a57);
  printf("a58 = %Lf\n", a58);
  printf("a59 = %s\n", a59);

  printf("a60 = %d\n", a60);
  printf("a61 = %d\n", a61);
  printf("a62 = %ld\n", a62);
  printf("a63 = %ld\n", a63);
  printf("a64 = %lld\n", a64);
  printf("a65 = %lld\n", a65);
  printf("a66 = %s\n", a66);
  printf("a67 = %f\n", a67);
  printf("a68 = %Lf\n", a68);
  printf("a69 = %s\n", a69);

  printf("a70 = %d\n", a70);
  printf("a71 = %d\n", a71);
  printf("a72 = %ld\n", a72);
  printf("a73 = %ld\n", a73);
  printf("a74 = %lld\n", a74);
  printf("a75 = %lld\n", a75);
  printf("a76 = %s\n", a76);
  printf("a77 = %f\n", a77);
  printf("a78 = %Lf\n", a78);
  printf("a79 = %s\n", a79);

  va_end(ap);
}
