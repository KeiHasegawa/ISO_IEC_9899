/*
 * There shall be no more than one external definition for each identifier
 * declared with internal linkage in a translation unit. Moreover, if an
 * identifier declared with internal linkage is used in an expression (other
 * than as a part of the operand of a sizeof operator), there shall be exactly
 * one external definition for the identifier in the translation unit.
 */
static int a;  /* `a' has internal linkage. tentative definition. */

static int a;  /* ok. tentative definition. */

static void b(void);

extern void d(void (*pf)(void));

void c(void)
{
  d(&b);
}

/* error. no external definition for `b' */
