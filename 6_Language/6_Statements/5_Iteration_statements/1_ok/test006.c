/*
 * Check if nested do-while statement works well.
 */
#include <stdio.h>

void f(int a, int b, int c, int N)
{
  do {
    do {
      do {
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	++c;
	if (c == 9)
	  break;
      } while (c < N);
      ++b;
      if (b == 10)
	break;
    } while (b < N);
    ++a;
    if (a == 5)
      break;
  } while (a < N);
}

int main()
{
  f(3, 5, 7, 9);
  return 0;
}

