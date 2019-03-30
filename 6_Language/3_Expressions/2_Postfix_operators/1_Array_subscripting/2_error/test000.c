/*
 * Check if rvalue of array subscripting is not initializer constant.
 * Check if `sizeof' of array subscripting is initializer constant.
 * Check if pointer to incomplete type subscripted is error.
 * Check if non-integer type of index is error.
 */

#include <stdio.h>

int a[10];

int x = a[3];  /* error. a[3] is not constant. */

int y = sizeof a[3];  /* ok. */

int main(void)
{
  struct T *p;
  p[3];  /* error. `p' is pointer to struct T, */
	 /*   where, struct T is not object type. */
  int *q;
  double d;
  q[d];  /* error. q is pointer to int, and */
	 /* d is double. d is not integer. */

  q[(void*)3];  /* error. (void*)3 is not integer. */
  return 0;
}
