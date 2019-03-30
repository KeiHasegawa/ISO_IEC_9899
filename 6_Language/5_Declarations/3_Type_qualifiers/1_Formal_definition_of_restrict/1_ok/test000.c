/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

int * restrict a;
int * restrict b;
extern int c[];
/*
 * assert that if an object is referenced using the value of one of a, b,
 * or c, then it is never referenced using the value of either of the other
 * two.
 */

void test000(void)
{
  printf("`test000' called\n");
  printf("%d\n", *a);
  *a = 10;
  printf("%d\n", *a);
  printf("%d\n", *b);
  *b = 11;
  printf("%d\n", *b);
  for ( int i = 0 ; i < 10 ; ++i )
    printf(" %d", c[i]);
  printf("\n");
  for ( int i = 0 ; i < 10 ; ++i )
    printf(" %d", c[i] += c[i]);
  printf("\n");
  printf("%d\n", *a);
  printf("%d\n", *b);
}

int main(void)
{
  int aa = 1;
  a = &aa;
  int bb = 2;
  b = &bb;
  test000();
  return 0;
}

int c[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
