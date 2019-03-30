/*
 * Check if static variables are allocated correctly.
 */
#include <stdio.h>

static int a = 1;

void test0(void)
{
  printf("`test0' is called\n");
  printf("%d:a = %d\n", __LINE__,a);
  {
    static int a = 2;
    printf("%d:a = %d\n", __LINE__,a);
    {
      static int a = 3;
      printf("%d:a = %d\n", __LINE__,a);
    }
    printf("%d:a = %d\n", __LINE__,a);
  }
  printf("%d:a = %d\n", __LINE__,a);
}

void test1(void)
{
  printf("`test1' is called\n");
  printf("%d:a = %d\n", __LINE__,a);
  {
    static int a = 12;
    printf("%d:a = %d\n", __LINE__,a);
    {
      static int a = 13;
      printf("%d:a = %d\n", __LINE__,a);
    }
    printf("%d:a = %d\n", __LINE__,a);
  }
  printf("%d:a = %d\n", __LINE__,a);
}

int main(void)
{
  test0();
  test1();
  return 0;
}
