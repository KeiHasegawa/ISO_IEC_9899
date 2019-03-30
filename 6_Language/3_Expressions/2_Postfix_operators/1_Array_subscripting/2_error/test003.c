/*
 * Check if undeclared variable used as array or index of
 * array subscripting is error.
 */
#include <stdio.h>

int a[10];
extern int i;

int main(void)
{
  printf("a[%d] = %d\n", i, a[i]);  /* ok */
  printf("x[%d] = %d\n", i, x[i]);  /* error. x undeclared. */
  printf("a[%d] = %d\n", i, a[y]);  /* error. y undeclared. */
  return u[v];  /* error. u and v are undeclared. */
}
