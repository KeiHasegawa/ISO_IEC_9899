/*
 * Check if pointer to imcomplete struct type is recognized.
 */
#include <stdio.h>

extern const struct T* p;
struct T {
  int a;
  int b;
};

int main(void)
{
  for ( int i = 0 ; i < 3 ; ++i ){
    printf("p[%d].a = %d\n", i, p[i].a);
    printf("p[%d].b = %d\n", i, p[i].b);
  }
  return 0;
}

struct T a[3] = { {1, 2}, {3, 4}, {5, 6} };
const struct T* p = &a[0];
