/*
 * Check if address of string-literal is recognized.
 */
#include <stdio.h>

int main(void)
{
  char (*p)[] = &"Bjarne Stroustrup";
  char (*q)[25] = &"Programming Language C++";
  printf("%s %s\n", *p, *q);
  return 0;
}
