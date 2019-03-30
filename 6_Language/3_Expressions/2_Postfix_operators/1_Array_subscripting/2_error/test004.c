/*
 * o Check if bit field declaration is error,
 *   where bit specified array subscripting.
 *
 * o Check if case label specified array subscripting
 *   is error.
 */
int x[10];

struct T {
  int a : x[0];
};

void f(int n)
{
  switch ( n ){
  case x[1]:
    break;
  }
}
