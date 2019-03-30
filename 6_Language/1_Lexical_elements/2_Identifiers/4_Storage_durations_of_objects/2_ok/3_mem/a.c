#include <stdio.h>
#ifdef __func__
#undef __func__
#endif

static int val = 1234;

void f(void)
{
  printf("%s\n",__func__);
  printf("val = %d\n",val);
  val = 5678;
  printf("val = %d\n",val);
}

int main(void)
{
  void g(void);

  f();
  g();
  return 0;
}
