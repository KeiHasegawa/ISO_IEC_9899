#include <stdio.h>

int c;

extern c;  // Same with extern int c;

int main()
{
  printf("c = %d\n", c = 456);
  return 0;
}

