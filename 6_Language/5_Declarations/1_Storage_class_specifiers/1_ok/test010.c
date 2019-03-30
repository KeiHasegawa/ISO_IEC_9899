/*
 * Check if block scope `extern' declaration is recognized.
 */
#include <stdio.h>

int a = 1;

int main(void)
{
  extern int a, b[];
  printf("a = %d\n", a);
  printf("b = { %d, %d, %d }\n", b[0], b[1], b[2]);
  return 0;
}

int b[] = { 2, 3, 4 };
