/* primary-expression used outside function. */
int a;

int b = a; /* error */

/* primary-expression used in case label. */
void f(int n)
{
  switch ( n ){
  case n:
    break;
  case "hello":
    break;
  case 1.0:
    break;
  }
}
