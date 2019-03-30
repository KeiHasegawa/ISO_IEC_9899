/*
 * Check constant works well in
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
  if ( 'c' )
    printf("ok\n");
}

void test001(void)
{
  printf("`test001' called\n");
  if ( 1.0F )
    printf("ok\n");
  else {
    extern void undefined1(void);
    undefined1();
    /*
     * Implimentation may generate function call code.
     * But this test requires implementation not to generate
     * such code.
     */
  }

  if ( '\0' ){
    extern void undefined2(void);
    undefined2();
    /*
     * Implimentation may generate function call code.
     * But this test requires implementation not to generate
     * such code.
     */
  }
  else
    printf("ok\n");
}

void test002(void)
{
  printf("`test002' called\n");
  int i = 0;
  while ( 3 ){
    if ( ++i == 5 )
      break;
    printf("i = %d\n", i);
  }

  while ( 0 ){
    extern void undefined3(void);
    undefined3();
    /*
     * Implimentation may generate function call code.
     * But this test requires implementation not to generate
     * such code.
     */
  }
}

void test003(void)
{
  printf("`test003' called\n");
  int i = 5;
  do {
    if ( !--i )
      break;
    printf("i = %d\n", i);
  } while ( 'x' );
}

void test004(void)
{
  printf("`test004' called\n");
  for ( int i = 0 ; 2.0 ; ++i ){
    if ( i == 3 )
      break;
    printf("i = %d\n", i);
  }

  for ( ; '\0' ; ){
    extern void undefined4(void);
    undefined4();
    /*
     * Implimentation may generate function call code.
     * But this test requires implementation not to generate
     * such code.
     */
  }
}

void test005(void)
{
  printf("`test005' called\n");
  extern int undefined5(void);
  /*
   * For `undefined5',
   * Implimentation may generate function call code.
   * But this test requires implementation not to generate
   * such code.
   */

  'c' ? printf("ok\n") : undefined5();
  0 ? undefined5() : printf("ok\n");
  0.0 ? undefined5() : printf("ok\n");
}

void test006(void)
{
  printf("`test006' called\n");
  printf("'%c', %d, %f\n", 'c', 7, 2.5);
}

int main(void)
{
  test000();
  test001();
  test002();
  test003();
  test004();
  test005();
  test006();
  return 0;
}
