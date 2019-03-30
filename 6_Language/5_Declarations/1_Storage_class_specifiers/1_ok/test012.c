/*
 * Check if typedef declaration is recognized,
 * whose type is `void'.
 */
#include <stdio.h>

typedef void OIDV;

int main(void)
{
  (OIDV)printf("hello\n");
  return 0;
}
