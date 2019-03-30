/*
 * Check if refering to address of static or inline function which is
 * not defined is error.
 */
static int f(int);

inline int g(int);

void h(int (*pf)(int), int a);

void hh()
{
  h(&f, 5);
  h(&g, 10);
}

/* f and g are not defined. */
