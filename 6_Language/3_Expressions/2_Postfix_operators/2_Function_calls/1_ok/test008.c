/*
 * Check if arguments of function call are function call.
 */
#include <stdio.h>

struct T {
  int a;
  char b[4];
};

extern void f(int*, struct T);

extern int* u(double);
extern float v(char);
extern int w(void);

extern struct T x(volatile int*);
extern int* y(int);
extern signed char z(void);

int main(void)
{
  f(u(v(w())),x(y(z())));
  return 0;
}

void f(int* p, struct T t)
{
  printf("*p = %d\n", *p);
  printf("t.a = %d\n", t.a);
  printf("t.b = \"%s\"\n", t.b);
}

int* u(double d)
{
  static int s = 7;
  return d == -0.25 ? &s : 0;
}

float v(char c)
{
  return c == 'c' ? -0.25 : 1.0;
}

int w(void)
{
  return 'c';
}

struct T x(volatile int* p)
{
  struct T a = {
    2,
    "C++"
  };
  struct T b = {
    3,
    "C"
  };
  return *p == -2 ? a : b;
}

int* y(int n)
{
  extern int yy;
  return n == -2 ? &yy : 0;
}

int yy = -2;

signed char z(void)
{
  return yy;
}
