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
struct T y = { 'c', 5678, 1234, 8765, -3.25, 2.5, "kei" };

void print(const struct T* t)
{
  printf("'%c' %d %d %lld %f %f %s\n",
	 t->a, t->b, t->c, t->d, t->e, t->f, t->g);
}

int main()
{
  print(&x);
  print(&y);
  x = y;
  print(&x);
  print(&y);
  return 0;
}
