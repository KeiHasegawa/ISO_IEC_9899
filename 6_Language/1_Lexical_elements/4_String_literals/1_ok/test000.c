/*
 * Check if string literal is recognized.
 */
#include <stdio.h>
#ifndef __cplusplus
#include <stddef.h>
#endif // __cplusplus

/*
 * string-literal:
 *   "s-char-sequenceopt"
 *   L"s-char-sequenceopt"
 */
void test00(void)
{
  printf("`test00 called\n");

  printf("%s\n", "");
  printf("%s\n", "Programming Language C");

  wchar_t x[] = L"";
  for ( int i = 0 ; i < sizeof x/sizeof x[0] - 1 ; ++i )
    printf(" '%c'", (int)x[i]);
  printf("\n");
  wchar_t y[] = L"Programming Language C";
  for ( int i = 0 ; i < sizeof y/sizeof y[0] - 1 ; ++i )
    printf(" '%c'", (int)y[i]);
  printf("\n");
}

/*
 * s-char-sequence:
 *   s-char
 *   s-char-sequence s-char
 */
void test01(void)
{
  printf("`test01 called\n");

  printf("%s\n", "a");
  printf("%s\n", "abc");
  printf("%s\n", "abcdef");
}

/*
 * s-char:
 *   any member of the source character set except
 *   the double-quote ", backslash \, or new-line character
 *   ...
 *   ...
 */
void test02(void)
{
  printf("`test02 called\n");
  printf("%s\n", "A");
  printf("%s\n", "B");
  printf("%s\n", "C");
  printf("%s\n", "D");
  printf("%s\n", "E");
  printf("%s\n", "F");
  printf("%s\n", "G");
  printf("%s\n", "H");
  printf("%s\n", "I");
  printf("%s\n", "J");
  printf("%s\n", "K");
  printf("%s\n", "L");
  printf("%s\n", "M");
  printf("%s\n", "N");
  printf("%s\n", "O");
  printf("%s\n", "P");
  printf("%s\n", "Q");
  printf("%s\n", "R");
  printf("%s\n", "S");
  printf("%s\n", "T");
  printf("%s\n", "U");
  printf("%s\n", "V");
  printf("%s\n", "W");
  printf("%s\n", "X");
  printf("%s\n", "Y");
  printf("%s\n", "Z");
  printf("%s\n", "a");
  printf("%s\n", "b");
  printf("%s\n", "c");
  printf("%s\n", "d");
  printf("%s\n", "e");
  printf("%s\n", "f");
  printf("%s\n", "g");
  printf("%s\n", "h");
  printf("%s\n", "i");
  printf("%s\n", "j");
  printf("%s\n", "k");
  printf("%s\n", "l");
  printf("%s\n", "m");
  printf("%s\n", "n");
  printf("%s\n", "o");
  printf("%s\n", "p");
  printf("%s\n", "q");
  printf("%s\n", "r");
  printf("%s\n", "s");
  printf("%s\n", "t");
  printf("%s\n", "u");
  printf("%s\n", "v");
  printf("%s\n", "w");
  printf("%s\n", "x");
  printf("%s\n", "y");
  printf("%s\n", "z");
  printf("%s\n", "0");
  printf("%s\n", "1");
  printf("%s\n", "2");
  printf("%s\n", "3");
  printf("%s\n", "4");
  printf("%s\n", "5");
  printf("%s\n", "6");
  printf("%s\n", "7");
  printf("%s\n", "8");
  printf("%s\n", "9");
  printf("%s\n", "!");
  printf("%s\n", "#");
  printf("%s\n", "%");
  printf("%s\n", "&");
  printf("%s\n", "'");
  printf("%s\n", "(");
  printf("%s\n", ")");
  printf("%s\n", "*");
  printf("%s\n", "+");
  printf("%s\n", ",");
  printf("%s\n", "-");
  printf("%s\n", ".");
  printf("%s\n", "/");
  printf("%s\n", ":");
  printf("%s\n", ";");
  printf("%s\n", "<");
  printf("%s\n", "=");
  printf("%s\n", ">");
  printf("%s\n", "?");
  printf("%s\n", "[");
  printf("%s\n", "]");
  printf("%s\n", "^");
  printf("%s\n", "_");
  printf("%s\n", "{");
  printf("%s\n", "|");
  printf("%s\n", "}");
  printf("%s\n", "~");
}

/*
 * s-char:
 *   ...
 *   escape-sequence
 *   ...
 */
void test03(void)
{
  printf("`test03 called\n");
  printf("%s\n", "\'");
  printf("%s\n", "\"");
  printf("%s\n", "\?");
  printf("%s\n", "\\");
  printf("%s\n", "\a");
  printf("%s\n", "\b");
  printf("%s\n", "\f");
  printf("%s\n", "\n");
  printf("%s\n", "\r");
  printf("%s\n", "\t");
  printf("%s\n", "\v");
  printf("%s\n", "\141");
  printf("%s\n", "b\143");
  printf("%s\n", "\x64");
  printf("%s\n", "e\x66");
}

/*
 * s-char:
 *   ...
 *   ...
 *   universal-character-name
 */
void test04(void)
{
  printf("`test04 called\n");
  printf("\"%s\"\n", "\u0061");
  printf("\"%s\"\n", "\U00000062");
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
