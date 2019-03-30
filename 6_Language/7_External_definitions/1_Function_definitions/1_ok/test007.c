/*
 * If a compiler has an ability not to generate function code which is
 * declared as `static' and not referenced, this test is meaningful.
 */
#include <stdio.h>

static int f2(int);

static int f0(int n)
{
  return f2(n + 3);
}

static int f1(int n)
{
  return f0(n + 20);
}

static int f2(int n)
{
  return f1(n * 3);
}

int main(void)
{
  printf("This program should be linked correctly even though\n");
  printf("f0 is referenced or not. Compiler can chose not to generate\n");
  printf("f0, f1, f2 code.\n");
  return 0;
}
