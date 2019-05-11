#include <stdio.h>

typedef struct { int a; }* ps, S;

extern S x;
ps y = &x;

int main()
{
  if (&x == y)
    printf("ok\n");
  else
    printf("error\n");
  x.a = 1234;
  printf("y->a = %d\n", y->a);
  return 0;
}

S x;
