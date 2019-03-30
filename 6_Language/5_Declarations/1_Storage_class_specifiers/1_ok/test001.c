/*
 * Check if `extern' is recognized.
 */
#include <stdio.h>

int main(void)
{
  extern int i;
  printf("i = %d\n", i);
  return 0;
}

int i;
