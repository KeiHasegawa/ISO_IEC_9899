/*
 * Check if parameter scope enum declaration at inline function works well.
 */
#include <stdio.h>

inline int x(enum { apple, grape, orange } fruit)
{
  switch (fruit) {
  case apple:
    return 100;
  case grape:
    return 200;
  case orange:
    return 300;
  default:
    return 400;
  }
}

int main()
{
  for ( int i = 0 ; i != 4 ; ++i )
    printf("x(%d) returns %d\n", i, x(i));
  return 0;
}
