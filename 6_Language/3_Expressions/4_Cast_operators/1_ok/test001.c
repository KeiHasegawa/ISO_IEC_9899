/*
 * Check cast operator works well outside function.
 */
#include <stdio.h>

char test_000 = (long double)'c';
int*  test_001 = (int*)&test_000;
short int test_002[] = {
  (long double)10,
  (unsigned int)9,
  (long long int)8,
  (char)7,
  (long int)(int*)6
};
long double* test_003 = (long double*)&test_002[0];

void test00(void)
{
  printf("`test00' called\n");
  printf("'%c'\n", test_000);
  if ( &test_000 == (char*)test_001 )
    printf("ok\n");
  else
    printf("error\n");
  for ( int i = 0 ; i < sizeof test_002/sizeof *test_002 ; ++i )
    printf(" %d", test_002[i]);
  printf("\n");
  for ( int i = 0 ; i < sizeof test_002/sizeof *test_002 ; ++i )
    printf(" %d", ((short int*)test_003)[i]);
  printf("\n");
}

int main(void)
{
  test00();
  return 0;
}

