/*
 * Check error if undeclared variable use in selection statement expression.
 */
void f(void)
{
  if ( a )
    ;

  if ( b )
    ;
  else
    ;

  switch ( c )
    ;
}
