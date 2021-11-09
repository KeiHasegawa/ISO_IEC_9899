/*
 * check if keywords are recognized.
 *
 * keyword: one of
 *   auto break case char
 *   complex const continue default
 *   do double else enum
 *   extern float for goto
 *   if imaginary inline int
 *   long register restrict return
 *   short signed sizeof static
 *   struct switch typedef union
 *   unsigned void volatile while
 */
#include <stdio.h>

inline void f(void)
{
  printf("f called\n");
}

struct S {
  int a;
  float b;
};

union U {
  int a;
  float b;
};

int main(void)
{
  auto int a;
  printf("a = %d\n", a = 1);
  switch ( a ){
  case 1:
    printf("ok\n");
    break;
  default:
    printf("error\n");
    break;
  }
  char c = 'c';
  printf("c = '%c'\n", c);
  const double d = 1.5;
  printf("d = %f\n", d);
  for ( int i = 0 ; i < 2 ; ++i ){
    if ( i == 0 )
      continue;
    else
      printf("i = %d\n", i);
  }
  do {
    printf("++a = %d\n", ++a);
  } while ( a == 3 );
  while ( a )
    printf("--a = %d\n", --a);
  enum E { u, v, w };
  printf("w = %d\n", w);
  extern float ef;
  printf("ef = %f\n", ef);
  goto label;
  printf("error\n");
 label:
  f();
  long l = 10;
  printf("l = %ld\n", l);
  register short r = 5;
  printf("r = %d\n", r);
  long* restrict res = &l;
  printf("*res = %ld\n", *res);
  printf("sizeof(signed char) = %d\n", (int)sizeof(signed char)); 
  static union U uni;
  uni.b = 1.0;
  printf("uni.a = 0x%x\n", uni.a);
  typedef struct S T;
  T t = { 1, 2.0 };
  printf("t.a = %d\n", t.a);
  printf("t.b = %f\n", t.b);
  unsigned int ui = -1;
  if ( ui > 0 )
    printf("ok\n");
  else
    printf("error\n");
  extern volatile int vi;
  printf("vi = %d\n", vi);
  return 0;
}

volatile int vi = 11;

float ef = 0.75;
