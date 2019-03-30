/*
 * Check if pointer, array declarations are recognized.
 */

#include <stdio.h>

int main(void)
{
  int (n);  /* declaration of `n' */
  n = 2;
  printf("n + 3 = %d\n", (n+3));
  int *p;
  p = &n;
  *p = 1;
  printf("*p = %d\n", *p);
  int a[sizeof(n) + sizeof *p], b;
  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    a[i] = i;
  printf("a[3] = %d\n", a[3]);
  printf("b = %d\n", b = 10);
  printf("(n, b) = %d\n", (n, b));
  return 0;
}
