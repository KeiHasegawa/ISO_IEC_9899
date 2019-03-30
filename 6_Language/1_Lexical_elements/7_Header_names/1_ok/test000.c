/*
 * Check if header-name is recognized.
 */

/*
 * header-name:
 *   <h-char-sequence>
 *   "q-char-sequence"
 */
#include <stdio.h>
#include "test000.h"
void test00(void)
{
#ifdef _MSC_VER
  int (*pf)(const char* const, ...) = printf; /* `printf' declared in `stdio.h' */
#else // _MSC_VER
  int (*pf)(const char* __restrict, ...) = printf; /* `printf' declared in `stdio.h' */  
#endif // _MSC_VER
  (*pf)("`test00' called\n");
  printf("a = %d\n", a); /* `a' declared in `test000.h' */ 
}

int a = 1;

/*
 * h-char-sequence:
 *   h-char
 *   h-char-sequence h-char
 */
#include <b>
#include <cd>
void test01(void)
{
  printf("`test01' called\n");
  printf("b = %d\n", b); /* `b' declared in file `b' */ 
  printf("cd = %d\n", cd); /* `cd' declared in file `cd' */ 
}

int b = 2;
int cd = 3;

/*
 * h-char:
 *   any member of the source character set except
 *   the new-line character and >
 */
#include <#>
#include <!>
void test02(void)
{
  printf("`test02' called\n");
  printf("e = %d\n", e); /* `e' declared in file `#' */ 
  printf("f = %d\n", f); /* `cd' declared in file `!' */ 
}

int e = 4;
int f = 5;

/*
 * q-char-sequence:
 *   q-char
 *   q-char-sequence q-char
 */
#include "b"
#include "cd"
void test03(void)
{
  printf("`test03' called\n");
  printf("b = %d\n", b); /* `b' declared in `b' */ 
  printf("cd = %d\n", cd); /* `cd' declared in `cd' */ 
}

/*
 * q-char:
 *   any member of the source character set except
 *   the new-line character and "
 */
#include "#"
#include "!"
void test04(void)
{
  printf("`test02' called\n");
  printf("e = %d\n", e); /* `e' declared in file `#' */ 
  printf("f = %d\n", f); /* `cd' declared in file `!' */ 
}

int main(void)
{
  test00();
  test01();
  test02();
  test03();
  test04();
  return 0;
}
