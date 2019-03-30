/*
 * Check if escape sequence \' and escape sequence \" are recoginzed,
 * which are an element of string literal.
 */
#include <stdio.h>

void f(void)
{
  printf("%s\n", "\'");
  printf("%s\n", "\"");
}

int main(void)
{
  f();
  return 0;
}
