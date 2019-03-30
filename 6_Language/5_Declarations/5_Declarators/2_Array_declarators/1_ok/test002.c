/*
 * Check not error if object type is pointer to array of incomplete type.
 */
#include <stdio.h>

void test000(void)
{
  printf("`test000' called\n");
  struct S (*pa)[10];
  struct S (*qa)[];
  struct S { int a; };
  struct S s[][10] = {
    {
      { 0 }, { 1 }, { 2 }, { 3 }, { 4 },
      { 5 }, { 6 }, { 7 }, { 8 }, { 9 }
    },
    {
      { 10 }, { 11 }, { 12 }, { 13 }, { 14 },
      { 15 }, { 16 }, { 17 }, { 18 }, { 19 }
    }
  };
  pa = &s[0];
  qa = s;
  ++pa;
  for ( int i = 0 ; i < sizeof *pa/sizeof (*pa)[0]; ++i )
    printf(" %d", (*pa)[i].a);
  printf("\n");
  for ( int i = 0 ; i < sizeof s[0]/sizeof s[0][0]; ++i )
    printf(" %d", (*qa)[i].a);
  printf("\n");
}


void test001(int n)
{
  printf("`test001' called\n");
  struct S (*pa)[n];
  struct S { int a; };
  struct S s[][10] = {
    {
      { 0 }, { 1 }, { 2 }, { 3 }, { 4 },
      { 5 }, { 6 }, { 7 }, { 8 }, { 9 }
    },
    {
      { 10 }, { 11 }, { 12 }, { 13 }, { 14 },
      { 15 }, { 16 }, { 17 }, { 18 }, { 19 }
    }
  };
  pa = &s[0];
  ++pa;
  for ( int i = 0 ; i < sizeof s[0]/sizeof s[0][0]; ++i )
    printf(" %d", (*pa)[i].a);
  printf("\n");
}

int main(void)
{
  test000();
  test001(10);
  return 0;
}
