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
  const char* p = "hogehoge";       /* ok */
#ifdef __cplusplus
  const
#endif
  char (*pa)[] = &"hogehoge";  /* ok */
}
