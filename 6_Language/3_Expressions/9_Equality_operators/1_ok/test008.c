/*
 * Check equality operator works well in
 *
 *   - if expression statement
 *   - if expression statement else statement
 *   - while expression statement
 *   - do statement while expression
 *   - for ( ... ; expression ; ... ) statement
 *   - 1st expression in conditional-expression
 *   - otherwise
 */
#include <stdio.h>

void test000(char* x[5], short int y)
{
  printf("`test000' called\n");
  if ( **x == y )
    printf("**x == y\n");
}

void test001(char x, char** y)
{
  printf("`test001' called\n");
  if ( x != **y )
    printf("x != **y\n");
  else
    printf("x == **y\n");
}

void test002(char* x, char* y)
{
  printf("`test002' called\n");
  while ( *x == *y ){
    printf("'%c'\n", *x);
    ++x;
    --y;
  }
}

void test003(short int* x, short int** y)
{
  printf("`test003' called\n");
  do
    printf("*x = %d, **y = %d\n", ++*x, --**y);
  while ( *x != **y );
}

void test004(char* x, char* y)
{
  printf("`test004' called\n");
  for ( ; x != y ; ++x, --y )
    printf("'%c', '%c'\n", *x, *y);
}

void test005(char* x, char* y)
{
  printf("`test005' called\n");
  x == y ? printf("x == y\n") : printf("x != y\n");
}

void test006(char* x, char* y)
{
  printf("`test006' called\n");
  printf("x == y = %d\n", x == y);
}

int main(void)
{
  {
    char xx = 3;
    char* x = &xx;
    test000(&x,3);
    test000(&x,4);
  }
  {
    char yy = 4;
    char* y = &yy;
    test001(3,&y);
    test001(4,&y);
  }
  {
    char s[] = "abcdba";
    test002(&s[0],&s[5]);
  }
  {
    short int x = 1;
    short int yy = 7;
    short int* y = &yy;
    test003(&x,&y);
  }
  {
    char s[] = "abcdefghijklm";
    test004(&s[0],&s[12]);
  }
  {
    test005((char*)1,(char*)2);
    test005((char*)2,(char*)2);
  }
  {
    test006((char*)1,(char*)2);
    test006((char*)2,(char*)2);
  }
  return 0;
}
