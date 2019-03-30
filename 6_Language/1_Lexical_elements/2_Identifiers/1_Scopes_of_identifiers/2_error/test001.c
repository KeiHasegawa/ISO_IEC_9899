/*
 * Check file scope declarations are recognized.
 */
int a;  /* `a' has file scope. tentative definition. */

struct S {
  int a;  /* `a' has block scope */
};  /* `struct S' has file scope */

void f(void)  /* `f' has file scope */
{
}

int a;  /* ok. not redeclaration. tentative definition. */

struct S { int a; };  /* error. redeclaration */ 

enum E { f };  /* error. `E::f' has file scope. redeclaration. */
