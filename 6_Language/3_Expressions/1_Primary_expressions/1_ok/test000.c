/*
 * Check if primary-expression is recognized.
 *
 * primary-expression:
 *  identifier
 *  constant
 *  string-literal
 *  ( expression )
 *
 */
#include <stdio.h>

enum E { x, y, z };

int main(void)
{
  int a = 1;
  double b;
  printf("a = %d\n", a);
  printf("b = %f\n", b = z);
  printf("%s\n", "Programming Language C");
  printf("%c\n", 'd');
  printf("(a + b) = %f\n", (a + b));
  return 0;
}
