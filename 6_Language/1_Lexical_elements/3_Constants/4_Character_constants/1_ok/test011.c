#include <wchar.h>
#include <stdio.h>

int main()
{
  wchar_t wc = L'$BG\(B';
  printf("%x\n", wc);
  return 0;
}

