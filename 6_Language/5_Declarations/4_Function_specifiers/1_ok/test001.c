/*
 * Check if inline function definition follows extern funtion declaratin
 * is recognized.
 */
#include <stdio.h>

extern void f(void);

inline void f(void)
{
  printf("hello\n");
}

int main(void)
{
  f();
  return 0;
}
