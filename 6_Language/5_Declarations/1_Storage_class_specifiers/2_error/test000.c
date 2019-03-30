/*
 * Check if qualified typedef-name is recognized.
 */
typedef int A[2][3];

const A a = { { 1, 2, 3 }, { 4, 5, 6 } };

void f(int i, int j)
{
  a[i][j] = 0;  /* error */
}


