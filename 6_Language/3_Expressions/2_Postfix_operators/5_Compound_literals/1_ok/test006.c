#include <stdio.h>

struct S {
  int a;
  int b;
  int c;
};

struct S f(int x)
{
  return x ? (struct S){1, 2, 3} : (struct S){4, 5, 6};
}

int main()
{
  struct S x = f(0);
  printf("%d %d %d\n", x.a, x.b, x.c);
  x = f(1);
  printf("%d %d %d\n", x.a, x.b, x.c);
  return 0;
}
