#include <stdio.h>
#include <stdarg.h>

void f(int, ...);

int main()
{
  f(0,1.0L,2LL,"3","4",5.0,6,7,8,9.0,
    "10",11.0,12,13LL,14.0L,"15","16",17.0,18.0L,19);
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

#ifndef _MSC_VER
  printf("\
a00 = %d, a01 = %Lf, a02 = %lld, a03 = %s,   a04 = %s,\n\
a05 = %f, a06 = %d,  a07 = %d,   a08 = %d,   a09 = %f,\n\
a10 = %s, a11 = %f,  a12 = %d,   a13 = %lld, a14 = %Lf,\n\
a15 = %s, a16 = %s,  a17 = %f,   a18 = %Lf,  a19 = %d\n",
#else // _MSC_VER
  printf("a00 = %d, a01 = %Lf, a02 = %lld, a03 = %s,   a04 = %s,\na05 = %f, a06 = %d,  a07 = %d,   a08 = %d,   a09 = %f,\na10 = %s, a11 = %f,  a12 = %d,   a13 = %lld, a14 = %Lf,\na15 = %s, a16 = %s,  a17 = %f,   a18 = %Lf,  a19 = %d\n",
#endif // _MSC_VER
a00,      a01,       a02,        a03,        a04,
a05,      a06,       a07,        a08,        a09,
a10,      a11,       a12,        a13,        a14,
a15,      a16,       a17,        a18,        a19);
  va_end(ap);
}
