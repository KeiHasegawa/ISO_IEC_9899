/*
 * An external definition is an external declaration that is also a definition
 * of a function or an object. If an identifier declared with external linkage
 * is used in an expression (other than as part of the operand of a sizeof
 * operator), somewhere in the entire program there shall be exactly one
 * external definition for the identifier; otherwise, there shall be no more
 * than one.
 */
#include <stdio.h>

extern int a;

int main(void)
{
  return a;
}

int a = 1;
