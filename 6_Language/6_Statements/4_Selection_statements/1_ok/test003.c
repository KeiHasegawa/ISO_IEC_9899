/*
 * Check if ISO samle works well.
 */
#include <stdio.h>

void f(int expr)
{
  switch (expr)
  {
    int i = 4;
    f(i);
  case 0:
    i = 17;
    /* falls through into default code */
  default:
    printf("%d\n", i);
  }
}

int main(void)
{
  f(0);
  return 0;
}
