#include <stdio.h>

inline void f(void)
{
  printf("`f' called\n");
}

extern void f(void);

void g(void)
{
  f();
}
