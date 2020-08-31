/*
 * Check if wide string literal is recognized.
 * Note : this file codeing system is JIS.
 */
#include <stdio.h>
#ifndef __cplusplus
#include <stddef.h>
#endif // __cplusplus

void test00(void)
{
  printf("`test00' called\n");
  printf("犬猫\n");
}

void test01(void)
{
  printf("`test01' called\n");
  wchar_t a[] = L"犬猫";
  for ( int i = 0 ; i < sizeof a/sizeof a[0]; ++i )
    printf("a[%d] = 0x%x\n", i, (int)a[i]);
}

void test02(void)
{
  printf("`test02' called\n");
  for ( int i = 0 ; i < sizeof L"犬猫"/sizeof L"犬猫"[0]; ++i )
    printf("L\"犬猫\"[%d] = 0x%x\n", i, (int)(L"犬猫"[i]));
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}
