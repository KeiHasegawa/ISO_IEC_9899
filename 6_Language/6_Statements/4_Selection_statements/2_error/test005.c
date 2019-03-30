/*
 * There may be at most one default label in a switch statement.
 */
void test000(int a)
{
  switch ( a ){
  default:
    ;
  default:
    ;
  }
}
