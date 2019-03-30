/*
 * example of Types
 */
#include <stdio.h>

float a = 1.0;
float* b = &a;  /* pointer to float */
float * const c = &a; /* const pointer to float */
const float* d = &a; /* pointer to const float */
struct tag (*array[5])(float);  /* array of pointer to function returning
                                   struct tag, which takes float parameter,
                                   whose dimension is 5. */

int main(void)
{
  printf("a = %f\n", a);
  printf("*b = %f\n", *b);
  printf("*c = %f\n", *c);
  printf("*d = %f\n", *d);
  printf("sizeof array/sizeof array[0] = %d\n",
         (int)(sizeof array/sizeof array[0]));
  float a = 2.0;
  b = &a;  /* ok */
  d = &a;  /* ok */
  printf("*b = %f\n", *b);
  printf("*d = %f\n", *d);
  return 0;
}
