#include <stdio.h>

static char* f(void);

extern char* g(void);

void other(void)
{
  printf("%s\n", f());
  printf("%s\n", g());
}

char* f(void)
{
  return "howdy";
}

static char* g(void)
{
  return "google";
}
