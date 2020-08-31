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
  printf("$B8$G-(B\n");
}

void test01(void)
{
  printf("`test01' called\n");
  wchar_t a[] = L"$B8$G-(B";
  for ( int i = 0 ; i < sizeof a/sizeof a[0]; ++i )
    printf("a[%d] = 0x%x\n", i, (int)a[i]);
}

void test02(void)
{
  printf("`test02' called\n");
  for ( int i = 0 ; i < sizeof L"$B8$G-(B"/sizeof L"$B8$G-(B"[0]; ++i )
    printf("L\"$B8$G-(B\"[%d] = 0x%x\n", i, (int)(L"$B8$G-(B"[i]));
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}
