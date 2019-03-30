/*
 * Check ISO sample error is caught.
 */
typedef int F(void); /* type F is ``function of no arguments returning int'' */
F f, g; /* f and g both have type compatible with F */
F f { /* ... */ } /* WRONG: syntax/constraint error */
F g() { /* ... */ } /* WRONG: declares that g returns a function */
int f(void) { /* ... */ } /* RIGHT: f has type compatible with F */

F *e(void) { /* ... */ } /* e returns a pointer to a function */
F *((e2))(void) { /* ... */ } /* same: parentheses irrelevant */
int (*fp)(void); /* fp points to a function that has type F */
F *Fp; /* Fp points to a function that has type F */
