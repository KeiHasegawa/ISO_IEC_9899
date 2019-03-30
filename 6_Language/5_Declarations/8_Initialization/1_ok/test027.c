/*
 * Check array of pointer to char can be initialized.
 */
#include <stdio.h>

char* test000[] = { "abc", "def", "efg" };

static char* test001[] = { "hij", "klm" };

void f(void)
{
  printf("`f' called\n");
  static char* test002[] = { "opq", "rst", "uvw", "xyz" };
  char* test003[] = { "ABC", "DEF" };

  for ( int i = 0 ; i < sizeof test000/sizeof test000[0] ; ++i )
    printf(" \"%s\"", test000[i]);
  printf("\n");

  for ( int i = 0 ; i < sizeof test001/sizeof test001[0] ; ++i )
    printf(" \"%s\"", test001[i]);
  printf("\n");

  for ( int i = 0 ; i < sizeof test002/sizeof test002[0] ; ++i )
    printf(" \"%s\"", test002[i]);
  printf("\n");

  for ( int i = 0 ; i < sizeof test003/sizeof test003[0] ; ++i )
    printf(" \"%s\"", test003[i]);
  printf("\n");
}

int main(void)
{
  f();
  return 0;
}
