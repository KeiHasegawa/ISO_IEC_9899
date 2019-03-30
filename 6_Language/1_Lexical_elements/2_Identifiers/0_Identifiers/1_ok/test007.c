/*
 * Check if block-scope structure declaration
 * is recognized
 */

#include <stdio.h>

int i;

int main(void)
{
  struct T {
    int a;
  } t;
  printf("t.a = %d\n", t.a = 2);
  {
  }
  i = 3;
  printf("i = %d\n", i);
  return 0;
}
