#include <stdio.h>

struct S {
  int a;
  int b;
  int c;
};

struct S y;

struct S f(struct S x, int ya, int xa)
{
  y.a = ya;
  x = y;
  x.a = xa;
  return x;
}

int main()
{
  struct S x = { 1, 2, 3 };
  y.a = 4;
  y.b = 5;
  y.c = 6;
  struct S z = f(x, 7, 8); 
  printf("x.a = %d x.b = %d x.c = %d\n", x.a, x.b, x.c);
  printf("y.a = %d y.b = %d y.c = %d\n", y.a, y.b, y.c);
  printf("z.a = %d z.b = %d z.c = %d\n", z.a, z.b, z.c);
  return 0;
}
