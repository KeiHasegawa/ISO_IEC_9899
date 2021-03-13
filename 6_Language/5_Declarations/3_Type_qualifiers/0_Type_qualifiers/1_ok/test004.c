#include <stdio.h>

#ifdef __cplusplus
void f(const char* const cpc)
#else
void f(char* const cpc)
#endif
{
f:
  printf("`f' called with \"%s\"\n", cpc);
}

int main()
{
  f("hello");
  return 0;
}
