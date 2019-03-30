#include <stdio.h>

struct T {
  long long int a;
  float b;
  double c;
};

struct T* f(void);

struct T x = { 1, 2, 3 };

int main(void)
{
  struct T y = { 4, 5, 6 };
  printf("x.a = %lld, x.b = %f, x.c = %f\n", x.a, x.b, x.c);
  *f() = y;
  printf("x.a = %lld, x.b = %f, x.c = %f\n", x.a, x.b, x.c);
  return 0;
}

struct T* f(void)
{
  return &x;
}
