/*
 * Check if conditional operator works well in constant expression.
 */
#include <stdio.h>

struct S {
  char a[20];
};

void f(int n)
{
  printf("`f' called with %d\n", n);
  extern struct S s1, s2;
  switch ( n ){
  case sizeof(n ? s1 : s2):
    printf("case sizeof(n ? s1 : s2):\n");
    break;
  case (int)((void*)1 ? (void*)2 : (int*) 3):
    printf("case (int)((void*)1 ? (void*)2 : (int*) 3):\n");
    break;
  case sizeof(1.0L ? '\0' : '\n'):
    printf("case sizeof(1.0L ? '\\0' : '\\n'):\n");
    break;
  case 0.0L ? '\0' : '\n':
    printf("case 0.0L ? '\\0' : '\\n':\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f(2);
  f(sizeof(struct S));
  f(sizeof(int));
  f('\n');
  return 0;
}
