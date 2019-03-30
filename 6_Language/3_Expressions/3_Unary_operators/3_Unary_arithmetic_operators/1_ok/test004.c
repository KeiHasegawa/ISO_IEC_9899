/*
 * Check operator ! works well in
 *
 *   - if expression statement
 *   - if expression statement else statement
 *   - while expression statement
 *   - do statement while expression
 *   - for ( ... ; expression ; ... ) statement
 *   - 1st expression of conditional-expression
 *   - otherwise
 */
#include <stdio.h>

void test000(double d)
{
  printf("`test000' called\n");
  if ( !d )
    printf("d is zero\n");
}

void test001(int* p)
{
  printf("`test001' called\n");
  if ( !*p )
    printf("*p is zero\n");
  else
    printf("*p is not zero\n");
}

extern void update(int*);

void test002(int n)
{
  printf("`test002' called\n");
  while ( !n )
    update(&n);
}

void test003(int n)
{
  printf("`test003' called\n");
  do
    update(&n);
  while ( !n );
}

void test004(char* s)
{
  printf("`test004' called\n");
  for ( ; !*s ; --s )
    ;
  printf("*s = '%c'\n", *s); 
}

void test005(char* s)
{
  printf("`test005' called\n");
  !*s ? printf("s points to zero\n") : printf("s points to non-zero\n");
}

void test006(long long int x)
{
  printf("`test006' called\n");
  printf("!x = %d\n", !x);
}

int counter;

int main(void)
{
  {
    test000(0.0);
    test000(1.0);
    test000(2.0);
  }
  {
    int n = 0;
    test001(&n);
    ++n;
    test001(&n);
  }
  {
    counter = 3;
    test002(0);
    test002(5);
  }
  {
    counter = 2;
    test003(0);
    test003(6);
  }
  {
    char s[10] = "abc";
    test004(&s[0]);
    test004(&s[9]);
  }
  {
    char c = '\0';
    test005(&c);
    ++c;
    test005(&c);
  }
  {
    test006(1LL);
    test006(0LL);
  }
  return 0;
}

void update(int* p)
{
  printf("`update' called\n");
  if ( !--counter )
    ++*p;
}
