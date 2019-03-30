/*
 * Check if initialization is error, if
 * initialized type is char and initializer is array of char
 * initialized type is wchar_t and initializer is array of wchar_t
 */
#include <stdio.h>
#include <stddef.h>

char a[10];

char b[] = a;  /* error */

wchar_t x[10];

wchar_t y[] = x;  /* error */
