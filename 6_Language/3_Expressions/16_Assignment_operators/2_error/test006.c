/*
 * Check if assignment check is valid, especially pointer assignment.
 */
void f(const int** p, int** q)
{
  p = q;  // Error. const int* is not compatible with int*
}

void g(const int* p, int* q)
{
  p = q;  // OK.
}

void h(int* p, const int* q)
{
  p = q;  // Error. discard qualifier.
}
