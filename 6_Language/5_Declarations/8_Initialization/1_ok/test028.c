/*
 * Check static storage duration initialization in block scope works well.
 */
#include <stdio.h>

void test000(void)
{
  printf("`test000' called\n");
  static char a[10];
  static char* b = a;
  if ( *b )
    printf("\"%s\"\n", b);
  else {
    a[0] = 'p';
    a[1] = 'r';
    a[2] = 'o';
    a[3] = 'g';
    a[4] = 'r';
    a[5] = 'a';
    a[6] = 'm';
  }
}

int main(void)
{
  test000();
  test000();
  return 0;
}
