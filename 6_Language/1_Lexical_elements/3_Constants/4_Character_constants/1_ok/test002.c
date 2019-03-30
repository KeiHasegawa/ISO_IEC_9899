/*
 * Check if wide character constant is recognized.
 * Note : this file codeing system is EUC.
 */
#include <stdio.h>
#include <stddef.h>

wchar_t a = L'¸¤';

int main(void)
{
  wchar_t b = L'Ç­';
  printf("a = 0x%x, b = 0x%x\n", (int)a, (int)b);
  return 0;
}

