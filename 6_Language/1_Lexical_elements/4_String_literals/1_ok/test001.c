/*
 * Check if wide string literal is recognized.
 * Note : this file codeing system is Shift-JIS.
 */
#include <stdio.h>
#include <stddef.h>

void test00(void)
{
  printf("`test00' called\n");
  printf("Œ¢”L\n");
}

void test01(void)
{
  printf("`test01' called\n");
  wchar_t a[] = L"Œ¢”L";
  for ( int i = 0 ; i < sizeof a/sizeof a[0]; ++i )
    printf("a[%d] = 0x%x\n", i, (int)a[i]);
}

void test02(void)
{
  printf("`test02' called\n");
  for ( int i = 0 ; i < sizeof L"Œ¢”L"/sizeof L"Œ¢”L"[0]; ++i )
    printf("L\"Œ¢”L\"[%d] = 0x%x\n", i, (int)(L"Œ¢”L"[i]));
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}
