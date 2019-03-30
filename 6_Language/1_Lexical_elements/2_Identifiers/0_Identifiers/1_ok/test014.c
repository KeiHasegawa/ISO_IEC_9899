/*
 * Check if declarations are recognized.
 * Each variable with the same name is
 * in different scope.
 */
#include <stdio.h>

int a = 1;

void f(void)
{
  printf("a = %d\n", a);
  int a = 2;
  printf("a = %d\n", a);
  {
    int a = 3;
    printf("a = %d\n", a);
    {
      int a = 4;
      printf("a = %d\n", a);
    }
    printf("a = %d\n", a);
  }
  printf("a = %d\n", a);
  {
    int a = 5;
    printf("a = %d\n", a);
  }
  printf("a = %d\n", a);
}

int main(void)
{
  f();
  return 0;
}
