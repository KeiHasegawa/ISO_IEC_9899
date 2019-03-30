/*
 * Check if __func__ is recognized.
 */
#include <stdio.h>
#ifdef __func__
#undef __func__
#endif

int hogehoge(void)
{
  printf("%s\n", __func__);
  printf("'%c'\n", (*&__func__)[2]);
  const char (*pa)[] = &__func__;
  return 0;
}

int main(void)
{
  return hogehoge();
}

void f(void)
{
  char* p = "hogehoge";       /* ok */
  char (*pa)[] = &"hogehoge";  /* ok */
}
