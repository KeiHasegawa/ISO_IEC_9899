#include <wchar.h>
#include <stdio.h>

int main()
{
  wchar_t wc = L'”\';
  printf("%x\n", (int)wc);
  return 0;
}
