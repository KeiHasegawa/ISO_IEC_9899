/*
 * Check if `__func__' is recognized.
 */
/* If pre-processor converts __func__ to something for example `(void*)0',
 * you should try to comment out bellow
 */
#include <stdio.h>

#ifdef __func__
#undef __func__
#endif

void g(void);

static void f(void)
{
  g();
  printf("`%s' called\n", __func__);
}

int main(void)
{
  f();
  return 0;
}

void g(void)
{
  printf("`%s' called\n", __func__);
}
