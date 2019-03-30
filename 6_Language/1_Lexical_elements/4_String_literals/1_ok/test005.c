/*
 * Check if wide string literal is recognized.
 * Note : this file codeing system is EUC.
 */
#include <stdio.h>
#include <stddef.h>

void test00(void)
{
  printf("`test01' called\n");
  printf("¸¤Ç­\n");
}

void test01(void)
{
  printf("`test01' called\n");
  wchar_t a[] = L"¸¤Ç­";
  for ( int i = 0 ; i < sizeof a/sizeof a[0]; ++i )
    printf("a[%d] = 0x%x\n", i, (int)a[i]);
}

void test02(void)
{
  printf("`test02' called\n");
  for ( int i = 0 ; i < sizeof L"¸¤Ç­"/sizeof L"¸¤Ç­"[0]; ++i )
    printf("L\"¸¤Ç­\"[%d] = 0x%x\n", i, (int)(L"¸¤Ç­"[i]));
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}
