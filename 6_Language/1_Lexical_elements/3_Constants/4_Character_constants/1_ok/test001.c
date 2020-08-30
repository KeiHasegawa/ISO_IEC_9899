/*
 * Check if wide character constant is recognized.
 * Note : this file codeing system is Shift-JIS.
 */
#include <stdio.h>
#ifndef __cplusplus
#include <stddef.h>
#endif // __cplusplus

wchar_t a = L'��';

int main(void)
{
  wchar_t b = L'�L';
  printf("a = 0x%x, b = 0x%x\n", (int)a, (int)b);
  return 0;
}
