/*
 *  function declaration which just has identifier is error.
 */
#include <stdio.h>

int f(a); /* not function definition, but has identifier. */

int g(a); /* not function definition, but has identifier. */

int main()
{
  printf("f(3) = %d\n", f(3));
  printf("g(4) = %d\n", g(4));
  return 0;
}

int f(a)
     int a;
{
  printf("f called a = %d\n", a);
  return a + 5;
}

int g(a)
     int a;
{
  printf("g called a = %d\n", a);
  return a - 5;
}

