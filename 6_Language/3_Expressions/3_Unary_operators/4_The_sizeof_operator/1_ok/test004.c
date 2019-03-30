/*
 * Check sizeof operator works well in
 *
 *   - if expression statement
 *   - if expression statement else statement
 *   - while expression statement
 *   - do statement while expression
 *   - for ( ... ; expression ; ... ) statement
 *   - 1st expression of conditional-expression
 *   - otherwise
 */
#include <stdio.h>

void test000(void)
{
  printf("`test000' called\n");
  if ( sizeof(char) )
    printf("ok\n");
}

void test001(char *s)
{
  printf("`test001' called\n");
  if ( sizeof *s )
    printf("ok\n");
  else {
    extern void undefined(void);
    undefined();
    /*
     * Implimentation may generate function call code.
     * But this test requires implementation not to generate
     * such code.
     */
  }
}

void test002(char c)
{
  printf("`test002' called\n");
  while ( sizeof c ){
    if ( !--c )
      break;
    printf("c = %d\n", c);
  }
}

void test003(char c)
{
  printf("`test003' called\n");
  do {
    if ( !--c )
      break;
    printf("c = %d\n", c);
  }
  while ( sizeof c );
}

void test004(void)
{
  printf("`test004' called\n");
  for ( int i = 0 ; sizeof(char) ; ++i ){
    if ( i == 5 )
      break;
    printf("i = %d\n", i);
  }
}

void test005(short int n)
{
  printf("`test005' called\n");
  extern int undefined5(void);
  /*
   * For `undefined5',
   * Implimentation may generate function call code.
   * But this test requires implementation not to generate
   * such code.
   */
  sizeof n ? printf("ok\n") : undefined5();
  sizeof(short int) ? printf("ok\n") : undefined5();
}

void test006(char c)
{
  printf("`test006' called\n");
  printf("sizeof(char) = %d\n", (int)sizeof(char));
  printf("sizeof c = %d\n", (int)(sizeof c));
}

int main(void)
{
  test000();
  test001(0);
  test002(3);
  test003(5);
  test004();
  test005(7);
  test006(7);
  return 0;
}
