/*
 * Check if address of member reference is recognized.
 */
#include <stdio.h>

struct inner {
  int a;
  int b;
};

struct outer {
  struct inner i;
};

struct outer o;

int n = &o.i.a - &o.i.b;

void f(int n)
{
  switch ( n ){
  case &o.i.a - &o.i.b:
    printf("case : &o.i.a - &o.i.b\n");
    break;
  }
}

int main(void)
{
  printf("n = %d\n", n);
  f(n);
  return 0;
}
