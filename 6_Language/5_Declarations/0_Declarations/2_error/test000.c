/*
 * A declaration shall declare at least a declarator (excluding the parameters
 * of a function or the members of a structure or union), a tag, or the
 * members of an enumeration.
 */

int;  /* error */

double;  /* error */

struct T;  /* ok */

static char;  /* error */

extern int;  /* error */

typedef char* Pc;

Pc;  /* error */

