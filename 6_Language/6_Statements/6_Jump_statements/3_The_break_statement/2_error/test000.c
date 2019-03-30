/*
 * A break statement shall appear only in or as a switch body or loop body.
 */
void f(int a)
{
  break;

  if ( a )
    break;
  
  {
    break;
  }
}
