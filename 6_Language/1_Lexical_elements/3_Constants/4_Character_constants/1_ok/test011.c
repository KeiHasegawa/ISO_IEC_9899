#include <wchar.h>
#include <stdio.h>

int main()
{
  wchar_t wc = L'$BG\(B';
  printf("%x\n", (int)wc);
  return 0;
}

