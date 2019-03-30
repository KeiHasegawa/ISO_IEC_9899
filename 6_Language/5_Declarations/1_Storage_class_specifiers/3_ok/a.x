#include <stdio.h>

static char* f(void);

extern char* g(void);

void other(void);

int main(void)
{
  printf("%s\n", f());
  printf("%s\n", g());
  other();
  printf("%s\n", f());
  printf("%s\n", g());

  return 0;
}

char* f(void)
{
  return "hello";
}

static char* g(void)
{
  return "yahoo";
}
