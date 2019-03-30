/*
 * Check if nested while statement works well.
 */
#include <stdio.h>

void f(int a, int b, int c)
{
  while (a) {
    while (b) {
      while (c) {
	printf("a = %d b = %d c = %d\n", a, b, c);
	--c;
	if (c == 3)
	  break;
      }
      printf("a = %d b = %d\n", a, b);
      --b;
      if (b == 2)
	break;
    }
    printf("a = %d\n", a);
    --a;
    if (a == 1)
      break;
  }
}

int main()
{
  f(2,4,6);
  return 0;
}

