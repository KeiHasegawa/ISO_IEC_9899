/*
 * Check cast to pointer to structure works well. The structure is declared
 * or defined in block scope.
 */
#include <stdio.h>

void test000(void)
{
  struct S* ps = (struct S*)1;
  union U* pu = (union U*)2;
  enum E* pe = (enum E*)3;
  if ( sizeof(void*) == sizeof(int) )
    printf("ps = %d, pu = %d, pe = %d\n", (int)ps, (int)pu, (int)pe);
  else if ( sizeof(void*) == sizeof(long long int) )
    printf("ps = %lld, pu = %lld, pe = %lld\n", (long long)ps, (long long)pu, (long long)pe);
  else
    printf("unexpected target\n");
}

void test001(void)
{
  struct S {
    int a;
  };
  struct S* ps = (struct S*)1;
  union U {
    int a;
  };
  union U* pu = (union U*)2;
  enum E { a };
  enum E* pe = (enum E*)3;
  if ( sizeof(void*) == sizeof(int) )
    printf("ps = %d, pu = %d, pe = %d\n", (int)ps, (int)pu, (int)pe);
  else if ( sizeof(void*) == sizeof(long long int) )
    printf("ps = %lld, pu = %lld, pe = %lld\n", (long long)ps, (long long)pu, (long long)pe);
  else
    printf("unexpected target\n");
}

int main(void)
{
  test000();
  test001();
  return 0;
}
