/*
 * No two of the case constant expressions in the same switch statement shall
 * have the same value after conversion.
 */
void test000(int a)
{
  switch ( a ){
  case 0:
    ;
  case 0LL:
    ;
  case 1:
    ;
  case (int)1.0L:
    ;
  }
}
