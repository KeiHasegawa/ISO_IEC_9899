#include <stdio.h>

struct S;
extern struct S s;

void f(struct S*);

int main(void)
{
  f(&s);
  int* p = (int*)&s;
  printf("*p = %d\n", *p);
  return 0;
}
