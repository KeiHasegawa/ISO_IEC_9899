/*
 * A continue statement shall appear only in or as a loop body.
 */
void f(int a)
{
  continue;

  if ( a )
    continue;

  switch ( a ){
  case 0:
    continue;
  }

  {
    continue;
  }
}
