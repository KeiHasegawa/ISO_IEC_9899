/*
 * Check error if redeclaration for same symbol. In this case, 
 * 2nd declaration has extra parenthsis.
 */

typedef int T;

T (T);  /* redeclaration of T */
