#include <stdio.h>

struct T {
  char a;
  short b;
  int c;
  long long d;
  float e;
  double f;
  char g[10];
};

struct T x = { 'a', 1234, 5678, -3,   2.5, -3.25, "hasegawa" };
struct T y = { 'b', 5678, 1234, 8765, -3.25, 2.5, "kei" };
struct T z = { 'c', 9876, 3333, -1234, -1.25, -0.5, "compiler" };

struct T f(char a, short b, int c, long long d, float e, double f)
{
  struct T t = { a, b, c, d, e, f, "engineer" };
  return t;
}

void print(struct T t)
{
  printf("'%c' %d %d %lld %f %f %s\n",
	 t.a, t.b, t.c, t.d, t.e, t.f, t.g);
}

int main()
{
  print(x);
  print(y);
  print(z);
  y = f('d',4321,7777,-9876,7.5,1.5);
  print(x);
  print(y);
  print(z);
  return 0;
}
