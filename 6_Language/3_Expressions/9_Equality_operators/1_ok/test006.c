/*
 * Check equality operators work well in sub expression
 */
#include <stdio.h>

struct S;
extern struct S s[];
struct S* ps = (struct S*)&s;

struct S {
  int a;
  char b[5];
};

struct S s[] = {
  { -1, "abcd" },
  {  2, "efgh" },
  { -3, "ijkl" },
};

void test00(void)
{
  printf("`test00' called\n");
  if ( s[1].a == s[0].b[2] - 'a' )
    printf("s[1].a == s[0].b[2] - 'a'\n");
  else
    printf("s[1].a != s[0].b[2] - 'a'\n");
}

void test01(int i, int j)
{
  printf("`test01' called\n");
  if ( ps[i].b != (void*)s[j].b )
    printf("(*ps)[i].b != (void*)s[j].b\n");
  else
    printf("(*ps)[i].b == (void*)s[j].b\n");
}

int main(void)
{
  test00();
  test01(1,2);
  return 0;
}
