/*
 * Check if adjacent string literal is concatenated.
 * Note : this file codeing system is JIS.
 */
#include <stdio.h>
#ifndef __cplusplus
#include <stddef.h>
#endif // __cplusplus

void test00(void)
{
  printf("`test00 called.\n");
  const char* p = "Brian Kernighan"
  " & Dennis" " Ritchie";
  printf("%s\n", p);
}

void test01(void)
{
  printf("`test01 called.\n");
  wchar_t x[] = L"犬"    " dog"
    "猫 " "cat";
  for ( int i = 0 ; i < sizeof x/sizeof x[0] ; ++i )
    printf(" 0x%x", (int)x[i]);
  printf("\n");
}

void test02(void)
{
  printf("`test02 called.\n");
  char x[] = "\x12" "3";
  printf("%x\n", x[0]);
  printf("%c\n", x[1]);
}

int main(void)
{
  test00();
  test01();
  test02();
  return 0;
}
