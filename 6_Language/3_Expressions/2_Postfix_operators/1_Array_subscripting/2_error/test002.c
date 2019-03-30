/*
 * Check if not-modifiable type of left expression of assignment operator
 * is error.
 */
#include <stdio.h>

extern const struct T* p;
struct T {
  int a;
  int b;
};

int main(void)
{
  for ( int i = 0 ; i < 3 ; ++i )
    p[i].a = p[i].b = i;  /* type of p[i].a, p[i].b is not modifiable */
  return 0;
}

struct T a[3] = { {1, 2}, {3, 4}, {5, 6} };
const struct T* p = &a[0];
