#include <stdio.h>

void f(char* const cpc)
{
f:
  printf("`f' called with \"%s\"\n", cpc);
}

int main()
{
  f("hello");
  return 0;
}
