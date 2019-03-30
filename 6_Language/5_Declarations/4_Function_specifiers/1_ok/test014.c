/*
 * An inline definition (see below) of a function with external linkage shall
 * not contain a definition of an object with static storage duration that can
 * be modified, and shall not contain a reference to an identifier with
 * internal linkage.
 *
 * In this example, inline function has a internal likage.
 */
#include <stdio.h>

static inline void f(void)
{
  printf("`f' called\n");
}

static inline void g(void)  /* g has internal linkage */
{
  f();  /* Reference to internal linkage is OK. */
}

int main(void)
{
  g();
  return 0;
}
