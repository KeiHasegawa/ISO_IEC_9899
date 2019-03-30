/*
 * If a compiler has an ability not to generate function code which is
 * declared as `static' and not referenced, this test is meaningful.
 */
#include <stdio.h>

static int f0(int n)
{
  printf("f0 called\n"); 
  if ( n > 10 )
    return n - 5;
  return n;
}

static int f1(int n)
{
  printf("f1 called\n"); 
  return f0(n + 20);
}

static int f2(int n)
{
  printf("f2 called\n");
  return f1(n * 3);
}

int main(void)
{
  printf("f2(4) = %d\n", f2(4));
  return 0;
}
