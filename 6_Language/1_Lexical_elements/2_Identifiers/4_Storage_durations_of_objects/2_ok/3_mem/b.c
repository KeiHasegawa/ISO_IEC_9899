#include <stdio.h>
#ifdef __func__
#undef __func__
#endif

static int val = 0x9abc;

void g(void)
{
  printf("%s\n",__func__);
  printf("val = 0x%x\n",val);
  val = 0xdef0;
  printf("val = 0x%x\n",val);
}
