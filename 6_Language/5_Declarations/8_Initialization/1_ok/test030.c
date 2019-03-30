/*
 * Check if copy transfer works well.
 */
#include <stdio.h>

void f(int x, int y)
{
  int a = x;
  int b = a;
  if ( y ){
    ++a;
    --b;
  }
  else {
    --a;
    ++b;
  }
  printf("a = %d, b = %d\n", a, b);
}

int main(void)
{
  f(3,1);
  f(3,0);
  return 0;
}
