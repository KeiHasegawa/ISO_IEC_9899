/*
 * Check if typedef struct declaration is recognized.
 */
#include <stdio.h>

typedef struct x *y;

typedef struct x {
  int a;
} z;

y f(y, char*);

int main(void)
{
  z zz;
  char c;
  z* p = f(&zz,&c);
  printf("p->a = %d\n", p->a);
  printf("c = '%c'\n", c);
  return 0;
}

y f(y y, char* p)
{
  y->a = 1;
  *p = 'c';
  return y;
}
