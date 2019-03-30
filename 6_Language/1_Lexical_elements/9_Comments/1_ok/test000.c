/*
 * Check if comments are recognized.
 */
#include <stdio.h>

void test00(void)
{
  /* comment of test00 */
  printf("`test00' called\n");
  printf("\"%s\"\n", "/* comment in string literal */");
}

void test01(void)
{
  // comment of test01
  printf("`test01' called\n");
  printf("\"%s\"\n", "// comment in string literal");
}

void i(void){ printf("`i' called\n"); }
void j(void){ printf("`j' called\n"); }
void l(void){ printf("`l' called\n"); }

void test02(int g, int h, int n, int p)
{
  printf("\"%s\"\n", "a//b"); // four-character string literal
  // */ // comment, not syntax error
  int f = g/**//h; // equivalent to f = g / h;
  printf("f = %d\n", f);
  //\
  i(); // part of a two-line comment
  /\
/ j(); // part of a two-line comment
  /*//*/ l(); // equivalent to l();
  int m = n//**/o
    + p; // equivalent to m = n + p;
  printf("m = %d\n", m);
}

int main(void)
{
  test00();
  test01();
  test02(10,2,3,4);
  return 0;
}
