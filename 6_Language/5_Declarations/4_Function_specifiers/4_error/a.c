#include <stdio.h>

inline void f(void)
{
  printf("`f' called\n");
}

extern void f(void);
extern void g(void);

int main(void)
{
  f();
  g();
  return 0;
}
