#include <stdio.h>

enum E { a, b, c };

extern enum E e0, e1, e2, e3;

int main(void)
{
  printf("e0 = %d\n", e0);
  printf("e1 = %d\n", e1);
  printf("e2 = %d\n", e2);
  printf("e3 = %d\n", e3);
  return 0;
}
