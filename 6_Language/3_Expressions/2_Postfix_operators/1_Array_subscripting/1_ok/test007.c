/*
 * Check if bit field member declaration is recognized.
 */
#include <stdio.h>

int x[10];

struct T {
  unsigned int a : &x[1]-&x[0];
  unsigned int b : &x[3]-&x[2];
  unsigned int c : &x[5]-&x[4];
};

extern void f(void);

int main(void)
{
  struct T t = { 0, 1, 0 };
  if ( t.a )
    printf("error\n");
  else
    printf("ok\n");
  if ( t.b )
    printf("ok\n");
  else
    printf("error\n");
  if ( t.c )
    printf("error\n");
  else
    printf("ok\n");
  t.a = 1;
  t.b = 0;
  t.c = 1;
  if ( t.a )
    printf("ok\n");
  else
    printf("error\n");
  if ( t.b )
    printf("error\n");
  else
    printf("ok\n");
  if ( t.c )
    printf("ok\n");
  else
    printf("error\n");
  f();
  return 0;
}

void f(void)
{
  int y[10];
  struct S {
    unsigned int a : &y[1] - &y[0];
    unsigned int b : &y[3] - &y[2];
    unsigned int c : &y[5] - &y[4];
  };
  struct S s = { 1, 0, 1 };
  if ( s.a )
    printf("ok\n");
  else
    printf("error\n");
  if ( s.b )
    printf("error\n");
  else
    printf("ok\n");
  if ( s.c )
    printf("ok\n");
  else
    printf("error\n");
  s.a = 0;
  s.b = 1;
  s.c = 0;
  if ( s.a )
    printf("error\n");
  else
    printf("ok\n");
  if ( s.b )
    printf("ok\n");
  else
    printf("error\n");
  if ( s.c )
    printf("error\n");
  else
    printf("ok\n");
}
