/*
 * Check if an identifier declared as an enumeration constant has type `int'.
 */

#include <stdio.h>

enum E { a, b, c };

void test00(void)
{
  printf("a + 1 = %d\n", a + 1);
  int array[b];
  for ( int i = 0 ; i < sizeof array/sizeof array[0] ; ++i )
    printf("array[%d] = %d\n", i, array[i] = i);
  printf("sizeof c = %d\n", (int)(sizeof c));
}

int main(void)
{
  test00();
  return 0;
}
