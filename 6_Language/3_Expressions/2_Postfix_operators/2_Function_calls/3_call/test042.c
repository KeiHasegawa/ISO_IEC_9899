#include <stdio.h>
#ifdef __func__
#undef __func__
#endif

void f(void)
{
  printf("%s is called\n",__func__);
  printf("ok\n");
  return;
}


int main(void)
{
  f();
  return 0;
}
