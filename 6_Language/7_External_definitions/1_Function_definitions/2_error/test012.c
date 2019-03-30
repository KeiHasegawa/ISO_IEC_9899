/*
 * Test if sytax errors are detected.
 */

extern f
{
}

int a;
int b;

struct S {
  int (*pf)(int, size_t);  // `size_t' is not declared.
};

int c;
