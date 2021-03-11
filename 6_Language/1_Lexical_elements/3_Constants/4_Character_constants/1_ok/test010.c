#include <wchar.h>
#include <stdio.h>

int main()
{
  wchar_t wc = L'怒';
  printf("%x\n", (int)wc);
  return 0;
}

