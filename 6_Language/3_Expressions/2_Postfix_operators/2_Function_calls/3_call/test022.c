#include <stdio.h>
#ifdef __func__
#undef __func__
#endif

int main(void)
{
  extern void f(void);
  f();
  return 0;
}

void f(void)
{
  printf("%s is called.\n",__func__);
}
