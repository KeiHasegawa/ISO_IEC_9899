/*
 * Function declaration using typedef-name is recognized.
 */
#include <stdio.h>

typedef int array_t[5];

void f(array_t x);  /* declared as void f(int*) */

typedef int func_t(int);

void g(func_t y);  /* declare as void g(int (*)(int)) */


int h(int a)
{
  printf("`h' called with %d\n", a);
  return a * 6;
}

int main()
{
  array_t a = { 1, 2, 3 };
  f(a);
  g(h);
  return 0;
}

void f(array_t a)
{
  for (int i = 0 ; i != sizeof(array_t)/sizeof a[0] ; ++i)
    printf("a[%d] = %d\n", i, a[i]);
}

void g(func_t f)
{
  printf("f(%d) = %d \n", 3, f(3));
}
