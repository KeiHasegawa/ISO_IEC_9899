/*
 * Check if array of wide character initialization are recognized.
 */
#include <stdio.h>
#include <stddef.h>

wchar_t a[] = L"����ɂ���";

int main(void)
{
  wchar_t b[] = L"�v���O���~���O���� C";
  return 0;
}
