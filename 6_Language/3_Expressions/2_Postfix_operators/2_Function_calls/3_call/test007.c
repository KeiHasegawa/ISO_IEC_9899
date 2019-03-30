#include <stdio.h>
#ifdef __func__
#undef __func__
#endif

void fgh(void)
{
  printf("%s\n",__func__);
}

int main(void)
{
  fgh();
  return 0;
}
