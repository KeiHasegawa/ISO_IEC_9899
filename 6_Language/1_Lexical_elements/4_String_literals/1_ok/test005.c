/*
 * Check if wide string literal is recognized.
 * Note : this file codeing system is EUC.
 */
#include <stdio.h>
#include <stddef.h>

void test00(void)
{
  printf("`test01' called\n");
  printf("��ǭ\n");
}

void test01(void)
{
  printf("`test01' called\n");
  wchar_t a[] = L"��ǭ";
  for ( int i = 0 ; i < sizeof a/sizeof a[0]; ++i )
    printf("a[%d] = 0x%x\n", i, (int)a[i]);
}

void test02(void)
{
  printf("`test02' called\n");
  for ( int i = 0 ; i < sizeof L"��ǭ"/sizeof L"��ǭ"[0]; ++i )
    printf("L\"��ǭ\"[%d] = 0x%x\n", i, (int)(L"��ǭ"[i]));
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}
