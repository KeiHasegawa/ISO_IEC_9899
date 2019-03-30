/*
 * Check if array of wide character initialization are recognized.
 */
#include <stdio.h>
#include <stddef.h>

wchar_t a[] = L"こんにちは";

int main(void)
{
  wchar_t b[] = L"プログラミング言語 C";
  return 0;
}
