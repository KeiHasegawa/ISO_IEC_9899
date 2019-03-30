/*
 * Within a structure object, the non-bit-field members and the units in which
 * bit-fields reside have addresses that increase in the order in which they
 * are declared.
 */
#include <stdio.h>

struct S {
  int a;
  char* b;
  double c[5];
  struct S* d;
};

void test000(void)
{
  struct S s;
  if ( &s.a < (int*)&s.b )
    printf("ok\n");
  else
    printf("&s.a >= (int*)&s.b\n");
  if ( &s.b < (char**)&s.c )
    printf("ok\n");
  else
    printf("&s.b >= (char**)&s.c\n");
  if ( (struct S**)&s.c < &s.d )
    printf("ok\n");
  else
    printf("(struct S**)&s.c >= &s.d\n");
}

int main(void)
{
  test000();
  return 0;
}
