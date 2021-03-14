/*
 * Check if address of string-literal is recognized.
 */
#include <stdio.h>

int main(void)
{
#ifdef __cplusplus
  const
#endif
  char (*p)[] = &"Bjarne Stroustrup";
#ifdef __cplusplus
  const
#endif
  char (*q)[25] = &"Programming Language C++";
  printf("%s %s\n", *p, *q);
  return 0;
}
