/*
 * 1 If the declaration of an identifier for an object has file scope and an
 *   initializer, the declaration is an external definition for the identifier.
 *
 * 2 A declaration of an identifier for an object that has file scope without
 *   an initializer, and without a storage-class specifier or with the
 *   storage-class specifier static, constitutes a tentative definition. If a
 *   translation unit contains one or more tentative definitions for an
 *   identifier, and the translation unit contains no external definition for
 *   that identifier, then the behavior is exactly as if the translation unit
 *   contains a file scope declaration of that identifier, with the composite
 *   type as of the end of the translation unit, with an initializer equal
 *   to 0.
 *
 * 3 If the declaration of an identifier for an object is a tentative
 *   definition and has internal linkage, the declared type shall not be an
 *   incomplete type.
 */
#include <stdio.h>

int test_000 = 1; /* external definition */

int test_001; /* tentative definition */

static int tset_001; /* tentative definition */

int main(void)
{
  printf("test_000 = %d\n", test_000);
  printf("test_001 = %d\n", test_001);
  return 0;
}
