#include <stdio.h>

struct S { int a; };

typedef struct S T;

int main(void)
{
  struct T* f(void);
  int (*pa)[3] = (int (*)[3])f();
  for ( int i = 0 ; i < 3; ++i )
    printf(" %d", (*pa)[i]);
  printf("\n");
  return 0;
}
