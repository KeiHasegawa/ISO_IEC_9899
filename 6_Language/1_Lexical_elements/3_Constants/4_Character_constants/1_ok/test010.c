#include <wchar.h>
#include <stdio.h>

int main()
{
  wchar_t wc = L'$BE\(B';
  printf("%x\n", wc);
  return 0;
}

