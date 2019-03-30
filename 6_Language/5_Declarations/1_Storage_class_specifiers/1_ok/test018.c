/*
 * Check if function declaraiont is recognized,
 * whose parameter is typedefed struct.
 */
#include <stdio.h>

typedef struct {
  int a;
  int b;
} S;

void f(S*);

int main(void)
{
  S s;
  f(&s);
  printf("s.a = %d, s.b = %d\n", s.a, s.b);
  return 0;
}

void f(S* p)
{
  p->a = 1234;
  p->b = 5678;
}
