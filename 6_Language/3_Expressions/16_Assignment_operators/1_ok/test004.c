/*
 * Check compound assignment operators work well for operands whose types
 * are pointer to object type.
 */
#include <stdio.h>

void test000(const volatile int* x, int y)
{
  printf("`test000' called\n");
  printf("%d, %d\n", (int)x, y);
  x += y;
  printf("%d, %d\n", (int)x, y);
  x -= y;
  printf("%d, %d\n", (int)x, y);
}

void test001(char (*x)[10], int y)
{
  printf("`test001' called\n");
  printf("%d, %d\n", (int)x, y);
  x += y;
  printf("%d, %d\n", (int)x, y);
  x -= y;
  printf("%d, %d\n", (int)x, y);
}

struct S {
  char a[16];
};

void test002(struct S* x, int y)
{
  printf("`test002' called\n");
  printf("%d, %d\n", (int)x, y);
  x += y;
  printf("%d, %d\n", (int)x, y);
  x -= y;
  printf("%d, %d\n", (int)x, y);
}

struct T;
extern struct T* test003_x;

struct T {
  char a[32];
};

void test003(int test003_y)
{
  printf("`test003' called\n");
  printf("%d, %d\n", (int)test003_x, test003_y);
  test003_x += test003_y;
  printf("%d, %d\n", (int)test003_x, test003_y);
  test003_x -= test003_y;
  printf("%d, %d\n", (int)test003_x, test003_y);
}

int main(void)
{
  test000((int*)4,4);
  test001((char (*)[10])10,4);
  test002((struct S*)16,4);
  test003(4);
  return 0;
}

struct T* test003_x = (struct T*)32;
