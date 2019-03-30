/*
 * Check if lvalues of constant are error.
 */
enum E { a, b, c };

int* x = &a;       /* error */

int* y = &0;       /* error */

double* z = &0.5;  /* error */

void f(void)
{
  &a;          /* error */
  &1;          /* error */
  &1.5;        /* error */
  2 = 3;       /* error */
  2.5 = -0.5;  /* error */
  a = b;       /* error */
}
