#include <stdio.h>

int main(void)
{
#ifdef _MSC_VER
  int (*pf)(const char* const fmt, ...);
#else // _MSC_VER
  int (*pf)(const char* fmt, ...);
#endif // _MSC_VER
  pf = &printf;
  (*pf)("hello world\n");
  return 0;
}
