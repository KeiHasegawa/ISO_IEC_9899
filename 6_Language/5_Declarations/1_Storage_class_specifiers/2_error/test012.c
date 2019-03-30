/*
 * Check if undeclared symbol, which is not declared as a type, cause
 * sytax error.
 */

typedef A B;  // A is not declared

int a;

B b; // B is not typedef-name

void f()
{
  typedef C D; // C is not declared.

  int c;

  D d;  // D is not typedef-name
}

